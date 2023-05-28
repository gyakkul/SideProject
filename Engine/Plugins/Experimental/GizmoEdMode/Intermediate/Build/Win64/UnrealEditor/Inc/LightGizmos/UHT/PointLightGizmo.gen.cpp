// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PointLightGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointLightGizmo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APointLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScalableSphereGizmo_NoRegister();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_UPointLightGizmo();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_UPointLightGizmo_NoRegister();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_UPointLightGizmoBuilder();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_UPointLightGizmoBuilder_NoRegister();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_USubTransformProxy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LightGizmos();
// End Cross Module References
	void UPointLightGizmoBuilder::StaticRegisterNativesUPointLightGizmoBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPointLightGizmoBuilder);
	UClass* Z_Construct_UClass_UPointLightGizmoBuilder_NoRegister()
	{
		return UPointLightGizmoBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UPointLightGizmoBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointLightGizmoBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmoBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_LightGizmos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointLightGizmoBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PointLightGizmo.h" },
		{ "ModuleRelativePath", "Private/PointLightGizmo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointLightGizmoBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointLightGizmoBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointLightGizmoBuilder_Statics::ClassParams = {
		&UPointLightGizmoBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPointLightGizmoBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPointLightGizmoBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointLightGizmoBuilder()
	{
		if (!Z_Registration_Info_UClass_UPointLightGizmoBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointLightGizmoBuilder.OuterSingleton, Z_Construct_UClass_UPointLightGizmoBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPointLightGizmoBuilder.OuterSingleton;
	}
	template<> LIGHTGIZMOS_API UClass* StaticClass<UPointLightGizmoBuilder>()
	{
		return UPointLightGizmoBuilder::StaticClass();
	}
	UPointLightGizmoBuilder::UPointLightGizmoBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointLightGizmoBuilder);
	UPointLightGizmoBuilder::~UPointLightGizmoBuilder() {}
	void UPointLightGizmo::StaticRegisterNativesUPointLightGizmo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPointLightGizmo);
	UClass* Z_Construct_UClass_UPointLightGizmo_NoRegister()
	{
		return UPointLightGizmo::StaticClass();
	}
	struct Z_Construct_UClass_UPointLightGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttenuationGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LightActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformProxy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointLightGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmo,
		(UObject* (*)())Z_Construct_UPackage__Script_LightGizmos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointLightGizmo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UPointLightGizmo provides a gizmo to allow for editing point light properties in viewport\n * Currently supports changing the attenuation radius using a USacalableSphereGizmo\n *\n */" },
		{ "IncludePath", "PointLightGizmo.h" },
		{ "ModuleRelativePath", "Private/PointLightGizmo.h" },
		{ "ToolTip", "UPointLightGizmo provides a gizmo to allow for editing point light properties in viewport\nCurrently supports changing the attenuation radius using a USacalableSphereGizmo" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointLightGizmo_Statics::NewProp_AttenuationGizmo_MetaData[] = {
		{ "Comment", "/** The Gizmo that is used to scale the attenuation */" },
		{ "ModuleRelativePath", "Private/PointLightGizmo.h" },
		{ "ToolTip", "The Gizmo that is used to scale the attenuation" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPointLightGizmo_Statics::NewProp_AttenuationGizmo = { "AttenuationGizmo", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPointLightGizmo, AttenuationGizmo), Z_Construct_UClass_UScalableSphereGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPointLightGizmo_Statics::NewProp_AttenuationGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointLightGizmo_Statics::NewProp_AttenuationGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointLightGizmo_Statics::NewProp_LightActor_MetaData[] = {
		{ "Comment", "/** The target Point Light */" },
		{ "ModuleRelativePath", "Private/PointLightGizmo.h" },
		{ "ToolTip", "The target Point Light" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPointLightGizmo_Statics::NewProp_LightActor = { "LightActor", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPointLightGizmo, LightActor), Z_Construct_UClass_APointLight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPointLightGizmo_Statics::NewProp_LightActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointLightGizmo_Statics::NewProp_LightActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointLightGizmo_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Private/PointLightGizmo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPointLightGizmo_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPointLightGizmo, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPointLightGizmo_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointLightGizmo_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointLightGizmo_Statics::NewProp_TransformProxy_MetaData[] = {
		{ "Comment", "/** A transform proxy to represent the light actor in gizmos */" },
		{ "ModuleRelativePath", "Private/PointLightGizmo.h" },
		{ "ToolTip", "A transform proxy to represent the light actor in gizmos" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPointLightGizmo_Statics::NewProp_TransformProxy = { "TransformProxy", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPointLightGizmo, TransformProxy), Z_Construct_UClass_USubTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPointLightGizmo_Statics::NewProp_TransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointLightGizmo_Statics::NewProp_TransformProxy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPointLightGizmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointLightGizmo_Statics::NewProp_AttenuationGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointLightGizmo_Statics::NewProp_LightActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointLightGizmo_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointLightGizmo_Statics::NewProp_TransformProxy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointLightGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointLightGizmo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointLightGizmo_Statics::ClassParams = {
		&UPointLightGizmo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPointLightGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPointLightGizmo_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPointLightGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPointLightGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointLightGizmo()
	{
		if (!Z_Registration_Info_UClass_UPointLightGizmo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointLightGizmo.OuterSingleton, Z_Construct_UClass_UPointLightGizmo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPointLightGizmo.OuterSingleton;
	}
	template<> LIGHTGIZMOS_API UClass* StaticClass<UPointLightGizmo>()
	{
		return UPointLightGizmo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointLightGizmo);
	UPointLightGizmo::~UPointLightGizmo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_PointLightGizmo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_PointLightGizmo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPointLightGizmoBuilder, UPointLightGizmoBuilder::StaticClass, TEXT("UPointLightGizmoBuilder"), &Z_Registration_Info_UClass_UPointLightGizmoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointLightGizmoBuilder), 771550690U) },
		{ Z_Construct_UClass_UPointLightGizmo, UPointLightGizmo::StaticClass, TEXT("UPointLightGizmo"), &Z_Registration_Info_UClass_UPointLightGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointLightGizmo), 119896204U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_PointLightGizmo_h_3738077938(TEXT("/Script/LightGizmos"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_PointLightGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_PointLightGizmo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
