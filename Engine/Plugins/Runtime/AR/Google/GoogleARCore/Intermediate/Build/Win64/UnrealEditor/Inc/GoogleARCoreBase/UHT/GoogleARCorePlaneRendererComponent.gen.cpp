// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoogleARCorePlaneRendererComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleARCorePlaneRendererComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GoogleARCoreBase();
// End Cross Module References
	void UDEPRECATED_GoogleARCorePlaneRendererComponent::StaticRegisterNativesUDEPRECATED_GoogleARCorePlaneRendererComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_GoogleARCorePlaneRendererComponent);
	UClass* Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_NoRegister()
	{
		return UDEPRECATED_GoogleARCorePlaneRendererComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderPlane_MetaData[];
#endif
		static void NewProp_bRenderPlane_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderBoundaryPolygon_MetaData[];
#endif
		static void NewProp_bRenderBoundaryPolygon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderBoundaryPolygon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundaryPolygonColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundaryPolygonColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundaryPolygonThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundaryPolygonThickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "GoogleARCore" },
		{ "Comment", "/**\n * A helper component that renders all the ARCore planes in the current tracking session.\n * NOTE: This class is now deprecated, plane visualization is done through UARPlaneComponent.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GoogleARCorePlaneRendererComponent.h" },
		{ "ModuleRelativePath", "Public/GoogleARCorePlaneRendererComponent.h" },
		{ "ToolTip", "A helper component that renders all the ARCore planes in the current tracking session.\nNOTE: This class is now deprecated, plane visualization is done through UARPlaneComponent." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_bRenderPlane_MetaData[] = {
		{ "Category", "GoogleARCore|TrackablePlaneRenderer" },
		{ "Comment", "/** Render the plane quad when set to true. */" },
		{ "ModuleRelativePath", "Public/GoogleARCorePlaneRendererComponent.h" },
		{ "ToolTip", "Render the plane quad when set to true." },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_bRenderPlane_SetBit(void* Obj)
	{
		((UDEPRECATED_GoogleARCorePlaneRendererComponent*)Obj)->bRenderPlane = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_bRenderPlane = { "bRenderPlane", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_GoogleARCorePlaneRendererComponent), &Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_bRenderPlane_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_bRenderPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_bRenderPlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_bRenderBoundaryPolygon_MetaData[] = {
		{ "Category", "GoogleARCore|TrackablePlaneRenderer" },
		{ "Comment", "/** Render the plane boundary polygon lines when set to true. */" },
		{ "ModuleRelativePath", "Public/GoogleARCorePlaneRendererComponent.h" },
		{ "ToolTip", "Render the plane boundary polygon lines when set to true." },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_bRenderBoundaryPolygon_SetBit(void* Obj)
	{
		((UDEPRECATED_GoogleARCorePlaneRendererComponent*)Obj)->bRenderBoundaryPolygon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_bRenderBoundaryPolygon = { "bRenderBoundaryPolygon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_GoogleARCorePlaneRendererComponent), &Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_bRenderBoundaryPolygon_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_bRenderBoundaryPolygon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_bRenderBoundaryPolygon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_PlaneColor_MetaData[] = {
		{ "Category", "GoogleARCore|TrackablePlaneRenderer" },
		{ "Comment", "/** The color of the plane. */" },
		{ "ModuleRelativePath", "Public/GoogleARCorePlaneRendererComponent.h" },
		{ "ToolTip", "The color of the plane." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_PlaneColor = { "PlaneColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_GoogleARCorePlaneRendererComponent, PlaneColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_PlaneColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_PlaneColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_BoundaryPolygonColor_MetaData[] = {
		{ "Category", "GoogleARCore|TrackablePlaneRenderer" },
		{ "Comment", "/** The color of the boundary polygon. */" },
		{ "ModuleRelativePath", "Public/GoogleARCorePlaneRendererComponent.h" },
		{ "ToolTip", "The color of the boundary polygon." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_BoundaryPolygonColor = { "BoundaryPolygonColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_GoogleARCorePlaneRendererComponent, BoundaryPolygonColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_BoundaryPolygonColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_BoundaryPolygonColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_BoundaryPolygonThickness_MetaData[] = {
		{ "Category", "GoogleARCore|TrackablePlaneRenderer" },
		{ "Comment", "/** The line thickness for the plan boundary polygon. */" },
		{ "ModuleRelativePath", "Public/GoogleARCorePlaneRendererComponent.h" },
		{ "ToolTip", "The line thickness for the plan boundary polygon." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_BoundaryPolygonThickness = { "BoundaryPolygonThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_GoogleARCorePlaneRendererComponent, BoundaryPolygonThickness), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_BoundaryPolygonThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_BoundaryPolygonThickness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_bRenderPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_bRenderBoundaryPolygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_PlaneColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_BoundaryPolygonColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::NewProp_BoundaryPolygonThickness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_GoogleARCorePlaneRendererComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::ClassParams = {
		&UDEPRECATED_GoogleARCorePlaneRendererComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::PropPointers),
		0,
		0x02B002A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent.OuterSingleton, Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UClass* StaticClass<UDEPRECATED_GoogleARCorePlaneRendererComponent>()
	{
		return UDEPRECATED_GoogleARCorePlaneRendererComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_GoogleARCorePlaneRendererComponent);
	UDEPRECATED_GoogleARCorePlaneRendererComponent::~UDEPRECATED_GoogleARCorePlaneRendererComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCorePlaneRendererComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCorePlaneRendererComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent, UDEPRECATED_GoogleARCorePlaneRendererComponent::StaticClass, TEXT("UDEPRECATED_GoogleARCorePlaneRendererComponent"), &Z_Registration_Info_UClass_UDEPRECATED_GoogleARCorePlaneRendererComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_GoogleARCorePlaneRendererComponent), 3735965654U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCorePlaneRendererComponent_h_3209974763(TEXT("/Script/GoogleARCoreBase"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCorePlaneRendererComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCorePlaneRendererComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
