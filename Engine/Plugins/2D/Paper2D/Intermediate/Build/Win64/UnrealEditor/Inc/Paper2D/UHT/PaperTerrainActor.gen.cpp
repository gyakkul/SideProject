// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperTerrainActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperTerrainActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_APaperTerrainActor();
	PAPER2D_API UClass* Z_Construct_UClass_APaperTerrainActor_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTerrainComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTerrainSplineComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References
	void APaperTerrainActor::StaticRegisterNativesAPaperTerrainActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APaperTerrainActor);
	UClass* Z_Construct_UClass_APaperTerrainActor_NoRegister()
	{
		return APaperTerrainActor::StaticClass();
	}
	struct Z_Construct_UClass_APaperTerrainActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DummyRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DummyRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SplineComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaperTerrainActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperTerrainActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An instance of a piece of 2D terrain in the level\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "PaperTerrainActor.h" },
		{ "ModuleRelativePath", "Classes/PaperTerrainActor.h" },
		{ "ToolTip", "An instance of a piece of 2D terrain in the level" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperTerrainActor_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PaperTerrainActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APaperTerrainActor_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APaperTerrainActor, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaperTerrainActor_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaperTerrainActor_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperTerrainActor_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PaperTerrainActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APaperTerrainActor_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APaperTerrainActor, SplineComponent), Z_Construct_UClass_UPaperTerrainSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaperTerrainActor_Statics::NewProp_SplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaperTerrainActor_Statics::NewProp_SplineComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperTerrainActor_Statics::NewProp_RenderComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Sprite,Rendering,Physics,Components|Sprite" },
		{ "ModuleRelativePath", "Classes/PaperTerrainActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APaperTerrainActor_Statics::NewProp_RenderComponent = { "RenderComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APaperTerrainActor, RenderComponent), Z_Construct_UClass_UPaperTerrainComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaperTerrainActor_Statics::NewProp_RenderComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaperTerrainActor_Statics::NewProp_RenderComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaperTerrainActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperTerrainActor_Statics::NewProp_DummyRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperTerrainActor_Statics::NewProp_SplineComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperTerrainActor_Statics::NewProp_RenderComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaperTerrainActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaperTerrainActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APaperTerrainActor_Statics::ClassParams = {
		&APaperTerrainActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APaperTerrainActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APaperTerrainActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaperTerrainActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaperTerrainActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaperTerrainActor()
	{
		if (!Z_Registration_Info_UClass_APaperTerrainActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APaperTerrainActor.OuterSingleton, Z_Construct_UClass_APaperTerrainActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APaperTerrainActor.OuterSingleton;
	}
	template<> PAPER2D_API UClass* StaticClass<APaperTerrainActor>()
	{
		return APaperTerrainActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaperTerrainActor);
	APaperTerrainActor::~APaperTerrainActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APaperTerrainActor, APaperTerrainActor::StaticClass, TEXT("APaperTerrainActor"), &Z_Registration_Info_UClass_APaperTerrainActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APaperTerrainActor), 678145966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_2669655931(TEXT("/Script/Paper2D"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
