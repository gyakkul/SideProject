// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechanics/ConstructionPlaneMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructionPlaneMechanic() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ULocalSingleClickInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UConstructionPlaneMechanic();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void UConstructionPlaneMechanic::StaticRegisterNativesUConstructionPlaneMechanic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConstructionPlaneMechanic);
	UClass* Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister()
	{
		return UConstructionPlaneMechanic::StaticClass();
	}
	struct Z_Construct_UClass_UConstructionPlaneMechanic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneTransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlaneTransformGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneTransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlaneTransformProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickToSetPlaneBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClickToSetPlaneBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiddleClickToSetGizmoBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MiddleClickToSetGizmoBehavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConstructionPlaneMechanic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionPlaneMechanic_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UConstructionPlaneMechanic implements an interaction in which a 3D plane can be\n * positioned using the standard 3D Gizmo, or placed at hit-locations in the existing scene.\n * A grid in the plane can optionally be rendered.\n */" },
		{ "IncludePath", "Mechanics/ConstructionPlaneMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/ConstructionPlaneMechanic.h" },
		{ "ToolTip", "UConstructionPlaneMechanic implements an interaction in which a 3D plane can be\npositioned using the standard 3D Gizmo, or placed at hit-locations in the existing scene.\nA grid in the plane can optionally be rendered." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_PlaneTransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/ConstructionPlaneMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_PlaneTransformGizmo = { "PlaneTransformGizmo", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConstructionPlaneMechanic, PlaneTransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_PlaneTransformGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_PlaneTransformGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_PlaneTransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/ConstructionPlaneMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_PlaneTransformProxy = { "PlaneTransformProxy", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConstructionPlaneMechanic, PlaneTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_PlaneTransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_PlaneTransformProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_ClickToSetPlaneBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/ConstructionPlaneMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_ClickToSetPlaneBehavior = { "ClickToSetPlaneBehavior", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConstructionPlaneMechanic, ClickToSetPlaneBehavior), Z_Construct_UClass_USingleClickInputBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_ClickToSetPlaneBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_ClickToSetPlaneBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_MiddleClickToSetGizmoBehavior_MetaData[] = {
		{ "Comment", "/** This is the behavior and behavior target used for the Shift+click behavior that sets the gizmo's position in the world. */" },
		{ "ModuleRelativePath", "Public/Mechanics/ConstructionPlaneMechanic.h" },
		{ "ToolTip", "This is the behavior and behavior target used for the Shift+click behavior that sets the gizmo's position in the world." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_MiddleClickToSetGizmoBehavior = { "MiddleClickToSetGizmoBehavior", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConstructionPlaneMechanic, MiddleClickToSetGizmoBehavior), Z_Construct_UClass_ULocalSingleClickInputBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_MiddleClickToSetGizmoBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_MiddleClickToSetGizmoBehavior_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConstructionPlaneMechanic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_PlaneTransformGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_PlaneTransformProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_ClickToSetPlaneBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_MiddleClickToSetGizmoBehavior,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConstructionPlaneMechanic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConstructionPlaneMechanic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConstructionPlaneMechanic_Statics::ClassParams = {
		&UConstructionPlaneMechanic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConstructionPlaneMechanic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionPlaneMechanic_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UConstructionPlaneMechanic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionPlaneMechanic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConstructionPlaneMechanic()
	{
		if (!Z_Registration_Info_UClass_UConstructionPlaneMechanic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConstructionPlaneMechanic.OuterSingleton, Z_Construct_UClass_UConstructionPlaneMechanic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConstructionPlaneMechanic.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UConstructionPlaneMechanic>()
	{
		return UConstructionPlaneMechanic::StaticClass();
	}
	UConstructionPlaneMechanic::UConstructionPlaneMechanic() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConstructionPlaneMechanic);
	UConstructionPlaneMechanic::~UConstructionPlaneMechanic() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_ConstructionPlaneMechanic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_ConstructionPlaneMechanic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConstructionPlaneMechanic, UConstructionPlaneMechanic::StaticClass, TEXT("UConstructionPlaneMechanic"), &Z_Registration_Info_UClass_UConstructionPlaneMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConstructionPlaneMechanic), 3296260556U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_ConstructionPlaneMechanic_h_1783207958(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_ConstructionPlaneMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_ConstructionPlaneMechanic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
