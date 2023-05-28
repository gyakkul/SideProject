// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DMXPixelMappingFixtureGroupComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingFixtureGroupComponent() {}
// Cross Module References
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingLayoutScript_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingOutputComponent();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRuntime();
// End Cross Module References
	void UDMXPixelMappingFixtureGroupComponent::StaticRegisterNativesUDMXPixelMappingFixtureGroupComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingFixtureGroupComponent);
	UClass* Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_NoRegister()
	{
		return UDMXPixelMappingFixtureGroupComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DMXLibrary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutScript_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LayoutScript;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXPixelMappingOutputComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Container component for Fixture Items\n */" },
		{ "IncludePath", "Components/DMXPixelMappingFixtureGroupComponent.h" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingFixtureGroupComponent.h" },
		{ "ToolTip", "Container component for Fixture Items" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_Statics::NewProp_DMXLibrary_MetaData[] = {
		{ "Category", "Fixture List" },
		{ "Comment", "//~ End UDMXPixelMappingOutputComponent implementation\n" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingFixtureGroupComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_Statics::NewProp_DMXLibrary = { "DMXLibrary", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingFixtureGroupComponent, DMXLibrary), Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_Statics::NewProp_DMXLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_Statics::NewProp_DMXLibrary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_Statics::NewProp_LayoutScript_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/** Layout script for the children of this component (hidden in customizations and displayed in its own panel). */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingFixtureGroupComponent.h" },
		{ "ToolTip", "Layout script for the children of this component (hidden in customizations and displayed in its own panel)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_Statics::NewProp_LayoutScript = { "LayoutScript", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingFixtureGroupComponent, LayoutScript), Z_Construct_UClass_UDMXPixelMappingLayoutScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_Statics::NewProp_LayoutScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_Statics::NewProp_LayoutScript_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_Statics::NewProp_DMXLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_Statics::NewProp_LayoutScript,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingFixtureGroupComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_Statics::ClassParams = {
		&UDMXPixelMappingFixtureGroupComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingFixtureGroupComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingFixtureGroupComponent.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingFixtureGroupComponent.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UClass* StaticClass<UDMXPixelMappingFixtureGroupComponent>()
	{
		return UDMXPixelMappingFixtureGroupComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingFixtureGroupComponent);
	UDMXPixelMappingFixtureGroupComponent::~UDMXPixelMappingFixtureGroupComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingFixtureGroupComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingFixtureGroupComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent, UDMXPixelMappingFixtureGroupComponent::StaticClass, TEXT("UDMXPixelMappingFixtureGroupComponent"), &Z_Registration_Info_UClass_UDMXPixelMappingFixtureGroupComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingFixtureGroupComponent), 3180007841U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingFixtureGroupComponent_h_2594631810(TEXT("/Script/DMXPixelMappingRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingFixtureGroupComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingFixtureGroupComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
