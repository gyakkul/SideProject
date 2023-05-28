// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LayoutScripts/DMXPixelMappingLayoutScript_GridLayout.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingLayoutScript_GridLayout() {}
// Cross Module References
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingLayoutScript();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_NoRegister();
	DMXRUNTIME_API UEnum* Z_Construct_UEnum_DMXRuntime_EDMXPixelMappingDistribution();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRuntime();
// End Cross Module References
	void UDMXPixelMappingLayoutScript_GridLayout::StaticRegisterNativesUDMXPixelMappingLayoutScript_GridLayout()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingLayoutScript_GridLayout);
	UClass* Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_NoRegister()
	{
		return UDMXPixelMappingLayoutScript_GridLayout::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Columns_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Columns;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rows_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Rows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Distribution_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distribution_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Distribution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXPixelMappingLayoutScript,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Layout Settings" },
		{ "Comment", "/** Arranges the components in a grid */" },
		{ "DisplayName", "Grid Layout" },
		{ "IncludePath", "LayoutScripts/DMXPixelMappingLayoutScript_GridLayout.h" },
		{ "ModuleRelativePath", "Private/LayoutScripts/DMXPixelMappingLayoutScript_GridLayout.h" },
		{ "ToolTip", "Arranges the components in a grid" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_Columns_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "Comment", "/** Num Columns of the grid */" },
		{ "ModuleRelativePath", "Private/LayoutScripts/DMXPixelMappingLayoutScript_GridLayout.h" },
		{ "ToolTip", "Num Columns of the grid" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingLayoutScript_GridLayout, Columns), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_Columns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_Columns_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_Rows_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "Comment", "/** Num Rows of the grid */" },
		{ "ModuleRelativePath", "Private/LayoutScripts/DMXPixelMappingLayoutScript_GridLayout.h" },
		{ "ToolTip", "Num Rows of the grid" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_Rows = { "Rows", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingLayoutScript_GridLayout, Rows), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_Rows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_Rows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Padding of the cells */" },
		{ "ModuleRelativePath", "Private/LayoutScripts/DMXPixelMappingLayoutScript_GridLayout.h" },
		{ "ToolTip", "Padding of the cells" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingLayoutScript_GridLayout, Padding), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_Padding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "Comment", "/** Horizontal text alignment */" },
		{ "DisplayName", "Horizontal Alignment" },
		{ "ModuleRelativePath", "Private/LayoutScripts/DMXPixelMappingLayoutScript_GridLayout.h" },
		{ "ToolTip", "Horizontal text alignment" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingLayoutScript_GridLayout, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "Comment", "/** Vertical text alignment */" },
		{ "DisplayName", "Vertical Alignment" },
		{ "ModuleRelativePath", "Private/LayoutScripts/DMXPixelMappingLayoutScript_GridLayout.h" },
		{ "ToolTip", "Vertical text alignment" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingLayoutScript_GridLayout, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_VerticalAlignment_MetaData)) }; // 1453904578
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_Distribution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_Distribution_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "Comment", "/** How cells are distributed, compared to their previous distribution */" },
		{ "ModuleRelativePath", "Private/LayoutScripts/DMXPixelMappingLayoutScript_GridLayout.h" },
		{ "ToolTip", "How cells are distributed, compared to their previous distribution" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_Distribution = { "Distribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingLayoutScript_GridLayout, Distribution), Z_Construct_UEnum_DMXRuntime_EDMXPixelMappingDistribution, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_Distribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_Distribution_MetaData)) }; // 1209359822
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_Columns,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_Rows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_Padding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_VerticalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_Distribution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::NewProp_Distribution,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingLayoutScript_GridLayout>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::ClassParams = {
		&UDMXPixelMappingLayoutScript_GridLayout::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingLayoutScript_GridLayout.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingLayoutScript_GridLayout.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingLayoutScript_GridLayout.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UClass* StaticClass<UDMXPixelMappingLayoutScript_GridLayout>()
	{
		return UDMXPixelMappingLayoutScript_GridLayout::StaticClass();
	}
	UDMXPixelMappingLayoutScript_GridLayout::UDMXPixelMappingLayoutScript_GridLayout(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingLayoutScript_GridLayout);
	UDMXPixelMappingLayoutScript_GridLayout::~UDMXPixelMappingLayoutScript_GridLayout() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_LayoutScripts_DMXPixelMappingLayoutScript_GridLayout_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_LayoutScripts_DMXPixelMappingLayoutScript_GridLayout_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingLayoutScript_GridLayout, UDMXPixelMappingLayoutScript_GridLayout::StaticClass, TEXT("UDMXPixelMappingLayoutScript_GridLayout"), &Z_Registration_Info_UClass_UDMXPixelMappingLayoutScript_GridLayout, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingLayoutScript_GridLayout), 1515830196U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_LayoutScripts_DMXPixelMappingLayoutScript_GridLayout_h_3712714311(TEXT("/Script/DMXPixelMappingRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_LayoutScripts_DMXPixelMappingLayoutScript_GridLayout_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_LayoutScripts_DMXPixelMappingLayoutScript_GridLayout_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
