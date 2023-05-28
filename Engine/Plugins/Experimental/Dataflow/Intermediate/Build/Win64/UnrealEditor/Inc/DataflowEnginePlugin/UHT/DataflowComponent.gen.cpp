// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/DataflowComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowComponent() {}
// Cross Module References
	DATAFLOWENGINEPLUGIN_API UClass* Z_Construct_UClass_UDataflowComponent();
	DATAFLOWENGINEPLUGIN_API UClass* Z_Construct_UClass_UDataflowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_DataflowEnginePlugin();
// End Cross Module References
	void UDataflowComponent::StaticRegisterNativesUDataflowComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowComponent);
	UClass* Z_Construct_UClass_UDataflowComponent_NoRegister()
	{
		return UDataflowComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDataflowComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataflowComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DataflowEnginePlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataflowComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n*\x09UDataflowComponent\n*/" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Dataflow/DataflowComponent.h" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowComponent.h" },
		{ "ToolTip", "UDataflowComponent" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataflowComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataflowComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowComponent_Statics::ClassParams = {
		&UDataflowComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDataflowComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataflowComponent()
	{
		if (!Z_Registration_Info_UClass_UDataflowComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowComponent.OuterSingleton, Z_Construct_UClass_UDataflowComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataflowComponent.OuterSingleton;
	}
	template<> DATAFLOWENGINEPLUGIN_API UClass* StaticClass<UDataflowComponent>()
	{
		return UDataflowComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowComponent);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataflowComponent, UDataflowComponent::StaticClass, TEXT("UDataflowComponent"), &Z_Registration_Info_UClass_UDataflowComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowComponent), 1438175743U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowComponent_h_4009980426(TEXT("/Script/DataflowEnginePlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
