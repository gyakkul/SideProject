// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechanics/LatticeControlPointsMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLatticeControlPointsMechanic() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_APreviewGeometryActor_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULatticeControlPointsMechanic();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULatticeControlPointsMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULineSetComponent_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPointSetComponent_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_URectangleMarqueeMechanic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void ULatticeControlPointsMechanic::StaticRegisterNativesULatticeControlPointsMechanic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULatticeControlPointsMechanic);
	UClass* Z_Construct_UClass_ULatticeControlPointsMechanic_NoRegister()
	{
		return ULatticeControlPointsMechanic::StaticClass();
	}
	struct Z_Construct_UClass_ULatticeControlPointsMechanic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGeometryActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewGeometryActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawnControlPoints_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DrawnControlPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawnLatticeEdges_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DrawnLatticeEdges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointTransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PointTransformProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointTransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PointTransformGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarqueeMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MarqueeMechanic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Mechanics/LatticeControlPointsMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/LatticeControlPointsMechanic.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_PreviewGeometryActor_MetaData[] = {
		{ "Comment", "/** Used for displaying points/segments */" },
		{ "ModuleRelativePath", "Public/Mechanics/LatticeControlPointsMechanic.h" },
		{ "ToolTip", "Used for displaying points/segments" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_PreviewGeometryActor = { "PreviewGeometryActor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULatticeControlPointsMechanic, PreviewGeometryActor), Z_Construct_UClass_APreviewGeometryActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_PreviewGeometryActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_PreviewGeometryActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_DrawnControlPoints_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mechanics/LatticeControlPointsMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_DrawnControlPoints = { "DrawnControlPoints", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULatticeControlPointsMechanic, DrawnControlPoints), Z_Construct_UClass_UPointSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_DrawnControlPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_DrawnControlPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_DrawnLatticeEdges_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mechanics/LatticeControlPointsMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_DrawnLatticeEdges = { "DrawnLatticeEdges", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULatticeControlPointsMechanic, DrawnLatticeEdges), Z_Construct_UClass_ULineSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_DrawnLatticeEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_DrawnLatticeEdges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_PointTransformProxy_MetaData[] = {
		{ "Comment", "// Support for gizmo. Since the points aren't individual components, we don't actually use UTransformProxy\n// for the transform forwarding- we just use it for the callbacks.\n" },
		{ "ModuleRelativePath", "Public/Mechanics/LatticeControlPointsMechanic.h" },
		{ "ToolTip", "Support for gizmo. Since the points aren't individual components, we don't actually use UTransformProxy\nfor the transform forwarding- we just use it for the callbacks." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_PointTransformProxy = { "PointTransformProxy", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULatticeControlPointsMechanic, PointTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_PointTransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_PointTransformProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_PointTransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/LatticeControlPointsMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_PointTransformGizmo = { "PointTransformGizmo", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULatticeControlPointsMechanic, PointTransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_PointTransformGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_PointTransformGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_MarqueeMechanic_MetaData[] = {
		{ "Comment", "// Support for selection\n" },
		{ "ModuleRelativePath", "Public/Mechanics/LatticeControlPointsMechanic.h" },
		{ "ToolTip", "Support for selection" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_MarqueeMechanic = { "MarqueeMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULatticeControlPointsMechanic, MarqueeMechanic), Z_Construct_UClass_URectangleMarqueeMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_MarqueeMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_MarqueeMechanic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_PreviewGeometryActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_DrawnControlPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_DrawnLatticeEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_PointTransformProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_PointTransformGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_MarqueeMechanic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULatticeControlPointsMechanic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::ClassParams = {
		&ULatticeControlPointsMechanic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULatticeControlPointsMechanic()
	{
		if (!Z_Registration_Info_UClass_ULatticeControlPointsMechanic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULatticeControlPointsMechanic.OuterSingleton, Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULatticeControlPointsMechanic.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<ULatticeControlPointsMechanic>()
	{
		return ULatticeControlPointsMechanic::StaticClass();
	}
	ULatticeControlPointsMechanic::ULatticeControlPointsMechanic() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULatticeControlPointsMechanic);
	ULatticeControlPointsMechanic::~ULatticeControlPointsMechanic() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_LatticeControlPointsMechanic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_LatticeControlPointsMechanic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULatticeControlPointsMechanic, ULatticeControlPointsMechanic::StaticClass, TEXT("ULatticeControlPointsMechanic"), &Z_Registration_Info_UClass_ULatticeControlPointsMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULatticeControlPointsMechanic), 2582338411U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_LatticeControlPointsMechanic_h_253153787(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_LatticeControlPointsMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_LatticeControlPointsMechanic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
