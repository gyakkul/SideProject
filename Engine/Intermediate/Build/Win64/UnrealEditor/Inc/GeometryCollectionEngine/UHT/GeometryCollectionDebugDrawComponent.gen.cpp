// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollection/GeometryCollectionDebugDrawComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionDebugDrawComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionDebugDrawActor_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionDebugDrawComponent();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References
	void UGeometryCollectionDebugDrawComponent::StaticRegisterNativesUGeometryCollectionDebugDrawComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCollectionDebugDrawComponent);
	UClass* Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_NoRegister()
	{
		return UGeometryCollectionDebugDrawComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionDebugDrawActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeometryCollectionDebugDrawActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionRenderLevelSetActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeometryCollectionRenderLevelSetActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Tags Activation Cooking AssetUserData Collision" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionDebugDrawComponent.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::NewProp_GeometryCollectionDebugDrawActor_MetaData[] = {
		{ "Comment", "/** Singleton actor, containing the debug draw properties. Automatically populated at play time unless explicitly set. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawComponent.h" },
		{ "ToolTip", "Singleton actor, containing the debug draw properties. Automatically populated at play time unless explicitly set." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::NewProp_GeometryCollectionDebugDrawActor = { "GeometryCollectionDebugDrawActor", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionDebugDrawComponent, GeometryCollectionDebugDrawActor_DEPRECATED), Z_Construct_UClass_AGeometryCollectionDebugDrawActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::NewProp_GeometryCollectionDebugDrawActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::NewProp_GeometryCollectionDebugDrawActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::NewProp_GeometryCollectionRenderLevelSetActor_MetaData[] = {
		{ "Category", "Debug Draw" },
		{ "Comment", "/** Level Set singleton actor, containing the Render properties. Automatically populated at play time unless explicitly set. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawComponent.h" },
		{ "ToolTip", "Level Set singleton actor, containing the Render properties. Automatically populated at play time unless explicitly set." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::NewProp_GeometryCollectionRenderLevelSetActor = { "GeometryCollectionRenderLevelSetActor", nullptr, (EPropertyFlags)0x0014040000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionDebugDrawComponent, GeometryCollectionRenderLevelSetActor), Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::NewProp_GeometryCollectionRenderLevelSetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::NewProp_GeometryCollectionRenderLevelSetActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::NewProp_GeometryCollectionDebugDrawActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::NewProp_GeometryCollectionRenderLevelSetActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCollectionDebugDrawComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::ClassParams = {
		&UGeometryCollectionDebugDrawComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCollectionDebugDrawComponent()
	{
		if (!Z_Registration_Info_UClass_UGeometryCollectionDebugDrawComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCollectionDebugDrawComponent.OuterSingleton, Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryCollectionDebugDrawComponent.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UGeometryCollectionDebugDrawComponent>()
	{
		return UGeometryCollectionDebugDrawComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCollectionDebugDrawComponent);
	UGeometryCollectionDebugDrawComponent::~UGeometryCollectionDebugDrawComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCollectionDebugDrawComponent, UGeometryCollectionDebugDrawComponent::StaticClass, TEXT("UGeometryCollectionDebugDrawComponent"), &Z_Registration_Info_UClass_UGeometryCollectionDebugDrawComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCollectionDebugDrawComponent), 3035165776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawComponent_h_3194462438(TEXT("/Script/GeometryCollectionEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
