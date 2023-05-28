// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/BoxReflectionCaptureComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxReflectionCaptureComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxReflectionCaptureComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBoxReflectionCaptureComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UBoxReflectionCaptureComponent::StaticRegisterNativesUBoxReflectionCaptureComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoxReflectionCaptureComponent);
	UClass* Z_Construct_UClass_UBoxReflectionCaptureComponent_NoRegister()
	{
		return UBoxReflectionCaptureComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxTransitionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoxTransitionDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewInfluenceBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewInfluenceBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewCaptureBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewCaptureBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReflectionCaptureComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// -> will be exported to EngineDecalClasses.h\n" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Activation Components|Activation Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/BoxReflectionCaptureComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/BoxReflectionCaptureComponent.h" },
		{ "ToolTip", "-> will be exported to EngineDecalClasses.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_BoxTransitionDistance_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "Comment", "/** Adjust capture transition distance */" },
		{ "ModuleRelativePath", "Classes/Components/BoxReflectionCaptureComponent.h" },
		{ "ToolTip", "Adjust capture transition distance" },
		{ "UIMax", "1000" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_BoxTransitionDistance = { "BoxTransitionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBoxReflectionCaptureComponent, BoxTransitionDistance), METADATA_PARAMS(Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_BoxTransitionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_BoxTransitionDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/BoxReflectionCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceBox = { "PreviewInfluenceBox", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBoxReflectionCaptureComponent, PreviewInfluenceBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/BoxReflectionCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox = { "PreviewCaptureBox", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBoxReflectionCaptureComponent, PreviewCaptureBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_BoxTransitionDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoxReflectionCaptureComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::ClassParams = {
		&UBoxReflectionCaptureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::PropPointers),
		0,
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoxReflectionCaptureComponent()
	{
		if (!Z_Registration_Info_UClass_UBoxReflectionCaptureComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoxReflectionCaptureComponent.OuterSingleton, Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBoxReflectionCaptureComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UBoxReflectionCaptureComponent>()
	{
		return UBoxReflectionCaptureComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoxReflectionCaptureComponent);
	UBoxReflectionCaptureComponent::~UBoxReflectionCaptureComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BoxReflectionCaptureComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BoxReflectionCaptureComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBoxReflectionCaptureComponent, UBoxReflectionCaptureComponent::StaticClass, TEXT("UBoxReflectionCaptureComponent"), &Z_Registration_Info_UClass_UBoxReflectionCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoxReflectionCaptureComponent), 3274273189U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BoxReflectionCaptureComponent_h_631622524(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BoxReflectionCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BoxReflectionCaptureComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
