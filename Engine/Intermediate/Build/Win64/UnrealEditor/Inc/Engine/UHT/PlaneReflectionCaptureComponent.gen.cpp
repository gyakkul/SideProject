// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/PlaneReflectionCaptureComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaneReflectionCaptureComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDrawSphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPlaneReflectionCaptureComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPlaneReflectionCaptureComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UPlaneReflectionCaptureComponent::StaticRegisterNativesUPlaneReflectionCaptureComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlaneReflectionCaptureComponent);
	UClass* Z_Construct_UClass_UPlaneReflectionCaptureComponent_NoRegister()
	{
		return UPlaneReflectionCaptureComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfluenceRadiusScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InfluenceRadiusScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewInfluenceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewInfluenceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewCaptureBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewCaptureBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReflectionCaptureComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// -> will be exported to EngineDecalClasses.h\n" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Activation Components|Activation Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/PlaneReflectionCaptureComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/PlaneReflectionCaptureComponent.h" },
		{ "ToolTip", "-> will be exported to EngineDecalClasses.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_InfluenceRadiusScale_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "Comment", "/** Radius of the area that can receive reflections from this capture. */" },
		{ "ModuleRelativePath", "Classes/Components/PlaneReflectionCaptureComponent.h" },
		{ "ToolTip", "Radius of the area that can receive reflections from this capture." },
		{ "UIMax", "16384.0" },
		{ "UIMin", "8.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_InfluenceRadiusScale = { "InfluenceRadiusScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlaneReflectionCaptureComponent, InfluenceRadiusScale), METADATA_PARAMS(Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_InfluenceRadiusScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_InfluenceRadiusScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceRadius_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/PlaneReflectionCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceRadius = { "PreviewInfluenceRadius", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlaneReflectionCaptureComponent, PreviewInfluenceRadius), Z_Construct_UClass_UDrawSphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/PlaneReflectionCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox = { "PreviewCaptureBox", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlaneReflectionCaptureComponent, PreviewCaptureBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_InfluenceRadiusScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaneReflectionCaptureComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::ClassParams = {
		&UPlaneReflectionCaptureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::PropPointers),
		0,
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlaneReflectionCaptureComponent()
	{
		if (!Z_Registration_Info_UClass_UPlaneReflectionCaptureComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlaneReflectionCaptureComponent.OuterSingleton, Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlaneReflectionCaptureComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPlaneReflectionCaptureComponent>()
	{
		return UPlaneReflectionCaptureComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaneReflectionCaptureComponent);
	UPlaneReflectionCaptureComponent::~UPlaneReflectionCaptureComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PlaneReflectionCaptureComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PlaneReflectionCaptureComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlaneReflectionCaptureComponent, UPlaneReflectionCaptureComponent::StaticClass, TEXT("UPlaneReflectionCaptureComponent"), &Z_Registration_Info_UClass_UPlaneReflectionCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlaneReflectionCaptureComponent), 4036297452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PlaneReflectionCaptureComponent_h_999688363(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PlaneReflectionCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PlaneReflectionCaptureComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
