// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DMXPixelMappingRootComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingRootComponent() {}
// Cross Module References
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingBaseComponent();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingRendererComponent_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingRootComponent();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingRootComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRuntime();
// End Cross Module References
	void UDMXPixelMappingRootComponent::StaticRegisterNativesUDMXPixelMappingRootComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingRootComponent);
	UClass* Z_Construct_UClass_UDMXPixelMappingRootComponent_NoRegister()
	{
		return UDMXPixelMappingRootComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingRootComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedRendererComponentsByName_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CachedRendererComponentsByName_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedRendererComponentsByName_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CachedRendererComponentsByName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingRootComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXPixelMappingBaseComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingRootComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Root component in the components tree\n */" },
		{ "IncludePath", "Components/DMXPixelMappingRootComponent.h" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingRootComponent.h" },
		{ "ToolTip", "Root component in the components tree" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXPixelMappingRootComponent_Statics::NewProp_CachedRendererComponentsByName_ValueProp = { "CachedRendererComponentsByName", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UDMXPixelMappingRendererComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDMXPixelMappingRootComponent_Statics::NewProp_CachedRendererComponentsByName_Key_KeyProp = { "CachedRendererComponentsByName_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingRootComponent_Statics::NewProp_CachedRendererComponentsByName_MetaData[] = {
		{ "Comment", "/** Chached Renderer Component names and their actual object pointer. Useful to speed up access (see DMXPixelMappingSubsystem) */" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingRootComponent.h" },
		{ "ToolTip", "Chached Renderer Component names and their actual object pointer. Useful to speed up access (see DMXPixelMappingSubsystem)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDMXPixelMappingRootComponent_Statics::NewProp_CachedRendererComponentsByName = { "CachedRendererComponentsByName", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingRootComponent, CachedRendererComponentsByName), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingRootComponent_Statics::NewProp_CachedRendererComponentsByName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingRootComponent_Statics::NewProp_CachedRendererComponentsByName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMappingRootComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingRootComponent_Statics::NewProp_CachedRendererComponentsByName_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingRootComponent_Statics::NewProp_CachedRendererComponentsByName_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingRootComponent_Statics::NewProp_CachedRendererComponentsByName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingRootComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingRootComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingRootComponent_Statics::ClassParams = {
		&UDMXPixelMappingRootComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXPixelMappingRootComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingRootComponent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingRootComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingRootComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXPixelMappingRootComponent()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingRootComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingRootComponent.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingRootComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingRootComponent.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UClass* StaticClass<UDMXPixelMappingRootComponent>()
	{
		return UDMXPixelMappingRootComponent::StaticClass();
	}
	UDMXPixelMappingRootComponent::UDMXPixelMappingRootComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingRootComponent);
	UDMXPixelMappingRootComponent::~UDMXPixelMappingRootComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingRootComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingRootComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingRootComponent, UDMXPixelMappingRootComponent::StaticClass, TEXT("UDMXPixelMappingRootComponent"), &Z_Registration_Info_UClass_UDMXPixelMappingRootComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingRootComponent), 936779314U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingRootComponent_h_3028376423(TEXT("/Script/DMXPixelMappingRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingRootComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingRootComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
