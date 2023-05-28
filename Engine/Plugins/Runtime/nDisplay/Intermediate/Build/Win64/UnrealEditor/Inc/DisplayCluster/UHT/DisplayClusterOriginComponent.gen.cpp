// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DisplayClusterOriginComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterOriginComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterComponent_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterOriginComponent();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterOriginComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	void UDisplayClusterOriginComponent::StaticRegisterNativesUDisplayClusterOriginComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterOriginComponent);
	UClass* Z_Construct_UClass_UDisplayClusterOriginComponent_NoRegister()
	{
		return UDisplayClusterOriginComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterOriginComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGizmo_MetaData[];
#endif
		static void NewProp_bEnableGizmo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseGizmoScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseGizmoScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoScaleMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoScaleMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProxyMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProxyMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "DisplayCluster" },
		{ "Comment", "/**\n * nDisplay origin component (mostly for in-Editor visualization)\n */" },
		{ "DisplayName", "NDisplay Origin" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/DisplayClusterOriginComponent.h" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterOriginComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "nDisplay origin component (mostly for in-Editor visualization)" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_bEnableGizmo_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "/** Gizmo visibility */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterOriginComponent.h" },
		{ "ToolTip", "Gizmo visibility" },
	};
#endif
	void Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_bEnableGizmo_SetBit(void* Obj)
	{
		((UDisplayClusterOriginComponent*)Obj)->bEnableGizmo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_bEnableGizmo = { "bEnableGizmo", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDisplayClusterOriginComponent), &Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_bEnableGizmo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_bEnableGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_bEnableGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_BaseGizmoScale_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "/** Base gizmo scale */" },
		{ "EditCondition", "bEnableGizmo" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterOriginComponent.h" },
		{ "ToolTip", "Base gizmo scale" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_BaseGizmoScale = { "BaseGizmoScale", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterOriginComponent, BaseGizmoScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_BaseGizmoScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_BaseGizmoScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_GizmoScaleMultiplier_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Gizmo scale multiplier */" },
		{ "EditCondition", "bEnableGizmo" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterOriginComponent.h" },
		{ "ToolTip", "Gizmo scale multiplier" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_GizmoScaleMultiplier = { "GizmoScaleMultiplier", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterOriginComponent, GizmoScaleMultiplier), METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_GizmoScaleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_GizmoScaleMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_ProxyMesh_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "/** Proxy mesh to render */" },
		{ "EditCondition", "bEnableGizmo" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterOriginComponent.h" },
		{ "ToolTip", "Proxy mesh to render" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_ProxyMesh = { "ProxyMesh", nullptr, (EPropertyFlags)0x0024080800000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterOriginComponent, ProxyMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_ProxyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_ProxyMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_ProxyMeshComponent_MetaData[] = {
		{ "Comment", "/** Proxy mesh component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterOriginComponent.h" },
		{ "ToolTip", "Proxy mesh component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_ProxyMeshComponent = { "ProxyMeshComponent", nullptr, (EPropertyFlags)0x0024080800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterOriginComponent, ProxyMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_ProxyMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_ProxyMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_bEnableGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_BaseGizmoScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_GizmoScaleMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_ProxyMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::NewProp_ProxyMeshComponent,
	};
#endif // WITH_EDITORONLY_DATA
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDisplayClusterComponent_NoRegister, (int32)VTABLE_OFFSET(UDisplayClusterOriginComponent, IDisplayClusterComponent), false },  // 2444164134
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterOriginComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::ClassParams = {
		&UDisplayClusterOriginComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::PropPointers, nullptr),
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::PropPointers), 0),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterOriginComponent()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterOriginComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterOriginComponent.OuterSingleton, Z_Construct_UClass_UDisplayClusterOriginComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterOriginComponent.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterOriginComponent>()
	{
		return UDisplayClusterOriginComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterOriginComponent);
	UDisplayClusterOriginComponent::~UDisplayClusterOriginComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterOriginComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterOriginComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterOriginComponent, UDisplayClusterOriginComponent::StaticClass, TEXT("UDisplayClusterOriginComponent"), &Z_Registration_Info_UClass_UDisplayClusterOriginComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterOriginComponent), 503123397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterOriginComponent_h_2830855478(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterOriginComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterOriginComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
