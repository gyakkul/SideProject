// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphRenderingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoneGraphRenderingComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_ZoneGraph();
	ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneGraphRenderingComponent();
	ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneGraphRenderingComponent_NoRegister();
// End Cross Module References
	void UZoneGraphRenderingComponent::StaticRegisterNativesUZoneGraphRenderingComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZoneGraphRenderingComponent);
	UClass* Z_Construct_UClass_UZoneGraphRenderingComponent_NoRegister()
	{
		return UZoneGraphRenderingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UZoneGraphRenderingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZoneGraphRenderingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphRenderingComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Mobility VirtualTexture Trigger" },
		{ "IncludePath", "ZoneGraphRenderingComponent.h" },
		{ "ModuleRelativePath", "Public/ZoneGraphRenderingComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZoneGraphRenderingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoneGraphRenderingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZoneGraphRenderingComponent_Statics::ClassParams = {
		&UZoneGraphRenderingComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UZoneGraphRenderingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphRenderingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZoneGraphRenderingComponent()
	{
		if (!Z_Registration_Info_UClass_UZoneGraphRenderingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZoneGraphRenderingComponent.OuterSingleton, Z_Construct_UClass_UZoneGraphRenderingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZoneGraphRenderingComponent.OuterSingleton;
	}
	template<> ZONEGRAPH_API UClass* StaticClass<UZoneGraphRenderingComponent>()
	{
		return UZoneGraphRenderingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZoneGraphRenderingComponent);
	UZoneGraphRenderingComponent::~UZoneGraphRenderingComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphRenderingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphRenderingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZoneGraphRenderingComponent, UZoneGraphRenderingComponent::StaticClass, TEXT("UZoneGraphRenderingComponent"), &Z_Registration_Info_UClass_UZoneGraphRenderingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZoneGraphRenderingComponent), 2761501101U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphRenderingComponent_h_2534714971(TEXT("/Script/ZoneGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphRenderingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphRenderingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
