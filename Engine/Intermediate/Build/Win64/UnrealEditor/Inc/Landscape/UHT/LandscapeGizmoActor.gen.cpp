// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeGizmoActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeGizmoActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeGizmoActor();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeGizmoActor_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	void ALandscapeGizmoActor::StaticRegisterNativesALandscapeGizmoActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALandscapeGizmoActor);
	UClass* Z_Construct_UClass_ALandscapeGizmoActor_NoRegister()
	{
		return ALandscapeGizmoActor::StaticClass();
	}
	struct Z_Construct_UClass_ALandscapeGizmoActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LengthZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarginZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MarginZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRelativeZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRelativeZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeScaleZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RelativeScaleZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLandscapeInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetLandscapeInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandscapeGizmoActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeGizmoActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActor, Width), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActor, Height), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_LengthZ_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_LengthZ = { "LengthZ", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActor, LengthZ), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_LengthZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_LengthZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_MarginZ_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_MarginZ = { "MarginZ", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActor, MarginZ), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_MarginZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_MarginZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_MinRelativeZ_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_MinRelativeZ = { "MinRelativeZ", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActor, MinRelativeZ), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_MinRelativeZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_MinRelativeZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_RelativeScaleZ_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_RelativeScaleZ = { "RelativeScaleZ", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActor, RelativeScaleZ), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_RelativeScaleZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_RelativeScaleZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_TargetLandscapeInfo_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_TargetLandscapeInfo = { "TargetLandscapeInfo", nullptr, (EPropertyFlags)0x0014000800002001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActor, TargetLandscapeInfo), Z_Construct_UClass_ULandscapeInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_TargetLandscapeInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_TargetLandscapeInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_SpriteComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscapeGizmoActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_LengthZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_MarginZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_MinRelativeZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_RelativeScaleZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_TargetLandscapeInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_SpriteComponent,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandscapeGizmoActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeGizmoActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeGizmoActor_Statics::ClassParams = {
		&ALandscapeGizmoActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ALandscapeGizmoActor_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActor_Statics::PropPointers), 0),
		0,
		0x008802A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandscapeGizmoActor()
	{
		if (!Z_Registration_Info_UClass_ALandscapeGizmoActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALandscapeGizmoActor.OuterSingleton, Z_Construct_UClass_ALandscapeGizmoActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALandscapeGizmoActor.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<ALandscapeGizmoActor>()
	{
		return ALandscapeGizmoActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeGizmoActor);
	ALandscapeGizmoActor::~ALandscapeGizmoActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALandscapeGizmoActor, ALandscapeGizmoActor::StaticClass, TEXT("ALandscapeGizmoActor"), &Z_Registration_Info_UClass_ALandscapeGizmoActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALandscapeGizmoActor), 2519277466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActor_h_3032731522(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
