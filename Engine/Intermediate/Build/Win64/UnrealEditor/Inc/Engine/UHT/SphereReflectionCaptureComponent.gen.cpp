// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/SphereReflectionCaptureComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphereReflectionCaptureComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDrawSphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent();
	ENGINE_API UClass* Z_Construct_UClass_USphereReflectionCaptureComponent();
	ENGINE_API UClass* Z_Construct_UClass_USphereReflectionCaptureComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USphereReflectionCaptureComponent::StaticRegisterNativesUSphereReflectionCaptureComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USphereReflectionCaptureComponent);
	UClass* Z_Construct_UClass_USphereReflectionCaptureComponent_NoRegister()
	{
		return USphereReflectionCaptureComponent::StaticClass();
	}
	struct Z_Construct_UClass_USphereReflectionCaptureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfluenceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InfluenceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureDistanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CaptureDistanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewInfluenceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewInfluenceRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReflectionCaptureComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// -> will be exported to EngineDecalClasses.h\n" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Activation Components|Activation Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SphereReflectionCaptureComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/SphereReflectionCaptureComponent.h" },
		{ "ToolTip", "-> will be exported to EngineDecalClasses.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_InfluenceRadius_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "Comment", "/** Radius of the area that can receive reflections from this capture. */" },
		{ "ModuleRelativePath", "Classes/Components/SphereReflectionCaptureComponent.h" },
		{ "ToolTip", "Radius of the area that can receive reflections from this capture." },
		{ "UIMax", "16384.0" },
		{ "UIMin", "8.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_InfluenceRadius = { "InfluenceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USphereReflectionCaptureComponent, InfluenceRadius), METADATA_PARAMS(Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_InfluenceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_InfluenceRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_CaptureDistanceScale_MetaData[] = {
		{ "Comment", "/** Not needed anymore, not yet removed in case the artist setup values are needed in the future */" },
		{ "ModuleRelativePath", "Classes/Components/SphereReflectionCaptureComponent.h" },
		{ "ToolTip", "Not needed anymore, not yet removed in case the artist setup values are needed in the future" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_CaptureDistanceScale = { "CaptureDistanceScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USphereReflectionCaptureComponent, CaptureDistanceScale), METADATA_PARAMS(Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_CaptureDistanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_CaptureDistanceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceRadius_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SphereReflectionCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceRadius = { "PreviewInfluenceRadius", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USphereReflectionCaptureComponent, PreviewInfluenceRadius), Z_Construct_UClass_UDrawSphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_InfluenceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_CaptureDistanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USphereReflectionCaptureComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::ClassParams = {
		&USphereReflectionCaptureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::PropPointers),
		0,
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USphereReflectionCaptureComponent()
	{
		if (!Z_Registration_Info_UClass_USphereReflectionCaptureComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USphereReflectionCaptureComponent.OuterSingleton, Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USphereReflectionCaptureComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USphereReflectionCaptureComponent>()
	{
		return USphereReflectionCaptureComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USphereReflectionCaptureComponent);
	USphereReflectionCaptureComponent::~USphereReflectionCaptureComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SphereReflectionCaptureComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SphereReflectionCaptureComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USphereReflectionCaptureComponent, USphereReflectionCaptureComponent::StaticClass, TEXT("USphereReflectionCaptureComponent"), &Z_Registration_Info_UClass_USphereReflectionCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USphereReflectionCaptureComponent), 2541774423U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SphereReflectionCaptureComponent_h_646565428(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SphereReflectionCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SphereReflectionCaptureComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
