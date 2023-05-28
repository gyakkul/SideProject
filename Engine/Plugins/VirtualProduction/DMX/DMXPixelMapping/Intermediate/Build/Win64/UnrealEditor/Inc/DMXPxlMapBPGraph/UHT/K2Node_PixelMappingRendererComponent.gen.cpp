// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_PixelMappingRendererComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_PixelMappingRendererComponent() {}
// Cross Module References
	DMXPIXELMAPPINGBLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_PixelMappingBaseComponent();
	DMXPIXELMAPPINGBLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_PixelMappingRendererComponent();
	DMXPIXELMAPPINGBLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_PixelMappingRendererComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingBlueprintGraph();
// End Cross Module References
	void UK2Node_PixelMappingRendererComponent::StaticRegisterNativesUK2Node_PixelMappingRendererComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_PixelMappingRendererComponent);
	UClass* Z_Construct_UClass_UK2Node_PixelMappingRendererComponent_NoRegister()
	{
		return UK2Node_PixelMappingRendererComponent::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_PixelMappingRendererComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_PixelMappingRendererComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_PixelMappingBaseComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingBlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_PixelMappingRendererComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Node for getting Renderer Component from PixelMapping object and Renderer FName\n */" },
		{ "IncludePath", "K2Node_PixelMappingRendererComponent.h" },
		{ "ModuleRelativePath", "Public/K2Node_PixelMappingRendererComponent.h" },
		{ "ToolTip", "Node for getting Renderer Component from PixelMapping object and Renderer FName" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_PixelMappingRendererComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_PixelMappingRendererComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_PixelMappingRendererComponent_Statics::ClassParams = {
		&UK2Node_PixelMappingRendererComponent::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_PixelMappingRendererComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_PixelMappingRendererComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_PixelMappingRendererComponent()
	{
		if (!Z_Registration_Info_UClass_UK2Node_PixelMappingRendererComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_PixelMappingRendererComponent.OuterSingleton, Z_Construct_UClass_UK2Node_PixelMappingRendererComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_PixelMappingRendererComponent.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGBLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_PixelMappingRendererComponent>()
	{
		return UK2Node_PixelMappingRendererComponent::StaticClass();
	}
	UK2Node_PixelMappingRendererComponent::UK2Node_PixelMappingRendererComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_PixelMappingRendererComponent);
	UK2Node_PixelMappingRendererComponent::~UK2Node_PixelMappingRendererComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingBlueprintGraph_Public_K2Node_PixelMappingRendererComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingBlueprintGraph_Public_K2Node_PixelMappingRendererComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_PixelMappingRendererComponent, UK2Node_PixelMappingRendererComponent::StaticClass, TEXT("UK2Node_PixelMappingRendererComponent"), &Z_Registration_Info_UClass_UK2Node_PixelMappingRendererComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_PixelMappingRendererComponent), 4154894335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingBlueprintGraph_Public_K2Node_PixelMappingRendererComponent_h_692029994(TEXT("/Script/DMXPixelMappingBlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingBlueprintGraph_Public_K2Node_PixelMappingRendererComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingBlueprintGraph_Public_K2Node_PixelMappingRendererComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
