// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollection/GeometryCollectionRenderLevelSetActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionRenderLevelSetActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVolumeTexture_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References
	void AGeometryCollectionRenderLevelSetActor::StaticRegisterNativesAGeometryCollectionRenderLevelSetActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeometryCollectionRenderLevelSetActor);
	UClass* Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_NoRegister()
	{
		return AGeometryCollectionRenderLevelSetActor::StaticClass();
	}
	struct Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetVolumeTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetVolumeTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayMarchMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RayMarchMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Isovalue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Isovalue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderVolumeBoundingBox_MetaData[];
#endif
		static void NewProp_RenderVolumeBoundingBox_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderVolumeBoundingBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\x09""AGeometryCollectionRenderLevelSetActor\n*    An actor representing the collection of data necessary to \n*    render volumes.  This references a ray marching material, which\n*    is used internally by a post process component blendable.  This\n*    is a workflow that can be improved with a deeper implementation\n*    in the future if we decide to.  Note that behavior with multiple\n*    render level set actors isn't currently supported very well,\n*    but could be improved in the future\n*/" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ToolTip", "AGeometryCollectionRenderLevelSetActor\nAn actor representing the collection of data necessary to\nrender volumes.  This references a ray marching material, which\nis used internally by a post process component blendable.  This\nis a workflow that can be improved with a deeper implementation\nin the future if we decide to.  Note that behavior with multiple\nrender level set actors isn't currently supported very well,\nbut could be improved in the future" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_TargetVolumeTexture_MetaData[] = {
		{ "Category", "Volume" },
		{ "Comment", "// Volume texture to fill\x09\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ToolTip", "Volume texture to fill" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_TargetVolumeTexture = { "TargetVolumeTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionRenderLevelSetActor, TargetVolumeTexture), Z_Construct_UClass_UVolumeTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_TargetVolumeTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_TargetVolumeTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RayMarchMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Material that performs ray marching.  Note this must have certain parameters in order\n// to work correctly\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ToolTip", "Material that performs ray marching.  Note this must have certain parameters in order\nto work correctly" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RayMarchMaterial = { "RayMarchMaterial", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionRenderLevelSetActor, RayMarchMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RayMarchMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RayMarchMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_SurfaceTolerance_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Surface tolerance used for rendering.  When surface reconstruction is noisy,\n// try tweaking this value\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ToolTip", "Surface tolerance used for rendering.  When surface reconstruction is noisy,\ntry tweaking this value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_SurfaceTolerance = { "SurfaceTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionRenderLevelSetActor, SurfaceTolerance), METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_SurfaceTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_SurfaceTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Isovalue_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Isovalue of the level set to use for surface reconstruction.  Generally you want\n// this to be zero, but it can be useful for exploring the distance values to make\n// this negative to see the interior structure of the levelset \n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ToolTip", "Isovalue of the level set to use for surface reconstruction.  Generally you want\nthis to be zero, but it can be useful for exploring the distance values to make\nthis negative to see the interior structure of the levelset" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Isovalue = { "Isovalue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionRenderLevelSetActor, Isovalue), METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Isovalue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Isovalue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Enabled_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Enable or disable rendering\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ToolTip", "Enable or disable rendering" },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((AGeometryCollectionRenderLevelSetActor*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionRenderLevelSetActor), &Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Enabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RenderVolumeBoundingBox_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Enable or disable rendering\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ToolTip", "Enable or disable rendering" },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RenderVolumeBoundingBox_SetBit(void* Obj)
	{
		((AGeometryCollectionRenderLevelSetActor*)Obj)->RenderVolumeBoundingBox = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RenderVolumeBoundingBox = { "RenderVolumeBoundingBox", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionRenderLevelSetActor), &Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RenderVolumeBoundingBox_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RenderVolumeBoundingBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RenderVolumeBoundingBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_TargetVolumeTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RayMarchMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_SurfaceTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Isovalue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Enabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RenderVolumeBoundingBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryCollectionRenderLevelSetActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::ClassParams = {
		&AGeometryCollectionRenderLevelSetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor()
	{
		if (!Z_Registration_Info_UClass_AGeometryCollectionRenderLevelSetActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeometryCollectionRenderLevelSetActor.OuterSingleton, Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeometryCollectionRenderLevelSetActor.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<AGeometryCollectionRenderLevelSetActor>()
	{
		return AGeometryCollectionRenderLevelSetActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryCollectionRenderLevelSetActor);
	AGeometryCollectionRenderLevelSetActor::~AGeometryCollectionRenderLevelSetActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionRenderLevelSetActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionRenderLevelSetActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor, AGeometryCollectionRenderLevelSetActor::StaticClass, TEXT("AGeometryCollectionRenderLevelSetActor"), &Z_Registration_Info_UClass_AGeometryCollectionRenderLevelSetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeometryCollectionRenderLevelSetActor), 3595546093U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionRenderLevelSetActor_h_719502277(TEXT("/Script/GeometryCollectionEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionRenderLevelSetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionRenderLevelSetActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
