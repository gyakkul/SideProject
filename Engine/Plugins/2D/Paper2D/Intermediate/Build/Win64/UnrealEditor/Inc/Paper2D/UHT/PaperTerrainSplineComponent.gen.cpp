// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperTerrainSplineComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperTerrainSplineComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTerrainSplineComponent();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTerrainSplineComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References
	void UPaperTerrainSplineComponent::StaticRegisterNativesUPaperTerrainSplineComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperTerrainSplineComponent);
	UClass* Z_Construct_UClass_UPaperTerrainSplineComponent_NoRegister()
	{
		return UPaperTerrainSplineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPaperTerrainSplineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperTerrainSplineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTerrainSplineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//@TODO: Document\n" },
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "PaperTerrainSplineComponent.h" },
		{ "ModuleRelativePath", "Classes/PaperTerrainSplineComponent.h" },
		{ "ToolTip", "@TODO: Document" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperTerrainSplineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperTerrainSplineComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperTerrainSplineComponent_Statics::ClassParams = {
		&UPaperTerrainSplineComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPaperTerrainSplineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainSplineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperTerrainSplineComponent()
	{
		if (!Z_Registration_Info_UClass_UPaperTerrainSplineComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperTerrainSplineComponent.OuterSingleton, Z_Construct_UClass_UPaperTerrainSplineComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperTerrainSplineComponent.OuterSingleton;
	}
	template<> PAPER2D_API UClass* StaticClass<UPaperTerrainSplineComponent>()
	{
		return UPaperTerrainSplineComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperTerrainSplineComponent);
	UPaperTerrainSplineComponent::~UPaperTerrainSplineComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainSplineComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainSplineComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperTerrainSplineComponent, UPaperTerrainSplineComponent::StaticClass, TEXT("UPaperTerrainSplineComponent"), &Z_Registration_Info_UClass_UPaperTerrainSplineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperTerrainSplineComponent), 3558206082U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainSplineComponent_h_847059000(TEXT("/Script/Paper2D"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainSplineComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainSplineComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
