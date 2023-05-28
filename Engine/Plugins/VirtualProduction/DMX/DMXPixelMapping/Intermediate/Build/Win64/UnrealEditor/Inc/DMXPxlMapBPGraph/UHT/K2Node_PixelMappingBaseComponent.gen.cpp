// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_PixelMappingBaseComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_PixelMappingBaseComponent() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	DMXPIXELMAPPINGBLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_PixelMappingBaseComponent();
	DMXPIXELMAPPINGBLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_PixelMappingBaseComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingBlueprintGraph();
// End Cross Module References
	void UK2Node_PixelMappingBaseComponent::StaticRegisterNativesUK2Node_PixelMappingBaseComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_PixelMappingBaseComponent);
	UClass* Z_Construct_UClass_UK2Node_PixelMappingBaseComponent_NoRegister()
	{
		return UK2Node_PixelMappingBaseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_PixelMappingBaseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_PixelMappingBaseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingBlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_PixelMappingBaseComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Pixel Mapping node. Never use directly\n */" },
		{ "IncludePath", "K2Node_PixelMappingBaseComponent.h" },
		{ "ModuleRelativePath", "Public/K2Node_PixelMappingBaseComponent.h" },
		{ "ToolTip", "Base Pixel Mapping node. Never use directly" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_PixelMappingBaseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_PixelMappingBaseComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_PixelMappingBaseComponent_Statics::ClassParams = {
		&UK2Node_PixelMappingBaseComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_PixelMappingBaseComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_PixelMappingBaseComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_PixelMappingBaseComponent()
	{
		if (!Z_Registration_Info_UClass_UK2Node_PixelMappingBaseComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_PixelMappingBaseComponent.OuterSingleton, Z_Construct_UClass_UK2Node_PixelMappingBaseComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_PixelMappingBaseComponent.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGBLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_PixelMappingBaseComponent>()
	{
		return UK2Node_PixelMappingBaseComponent::StaticClass();
	}
	UK2Node_PixelMappingBaseComponent::UK2Node_PixelMappingBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_PixelMappingBaseComponent);
	UK2Node_PixelMappingBaseComponent::~UK2Node_PixelMappingBaseComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingBlueprintGraph_Public_K2Node_PixelMappingBaseComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingBlueprintGraph_Public_K2Node_PixelMappingBaseComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_PixelMappingBaseComponent, UK2Node_PixelMappingBaseComponent::StaticClass, TEXT("UK2Node_PixelMappingBaseComponent"), &Z_Registration_Info_UClass_UK2Node_PixelMappingBaseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_PixelMappingBaseComponent), 263340583U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingBlueprintGraph_Public_K2Node_PixelMappingBaseComponent_h_3357249650(TEXT("/Script/DMXPixelMappingBlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingBlueprintGraph_Public_K2Node_PixelMappingBaseComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingBlueprintGraph_Public_K2Node_PixelMappingBaseComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
