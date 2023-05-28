// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MrcProjectionBillboard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMrcProjectionBillboard() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialBillboardComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_AMrcProjectionActor();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_AMrcProjectionActor_NoRegister();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UMixedRealityCaptureBillboard();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UMixedRealityCaptureBillboard_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MixedRealityCaptureFramework();
// End Cross Module References
	void UMixedRealityCaptureBillboard::StaticRegisterNativesUMixedRealityCaptureBillboard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMixedRealityCaptureBillboard);
	UClass* Z_Construct_UClass_UMixedRealityCaptureBillboard_NoRegister()
	{
		return UMixedRealityCaptureBillboard::StaticClass();
	}
	struct Z_Construct_UClass_UMixedRealityCaptureBillboard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMixedRealityCaptureBillboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialBillboardComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MixedRealityCaptureFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMixedRealityCaptureBillboard_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Physics Collision Lighting Mesh PhysicsVolume Mobility VirtualTexture Trigger" },
		{ "IncludePath", "MrcProjectionBillboard.h" },
		{ "ModuleRelativePath", "Private/MrcProjectionBillboard.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMixedRealityCaptureBillboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMixedRealityCaptureBillboard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMixedRealityCaptureBillboard_Statics::ClassParams = {
		&UMixedRealityCaptureBillboard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A030A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMixedRealityCaptureBillboard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMixedRealityCaptureBillboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMixedRealityCaptureBillboard()
	{
		if (!Z_Registration_Info_UClass_UMixedRealityCaptureBillboard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMixedRealityCaptureBillboard.OuterSingleton, Z_Construct_UClass_UMixedRealityCaptureBillboard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMixedRealityCaptureBillboard.OuterSingleton;
	}
	template<> MIXEDREALITYCAPTUREFRAMEWORK_API UClass* StaticClass<UMixedRealityCaptureBillboard>()
	{
		return UMixedRealityCaptureBillboard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMixedRealityCaptureBillboard);
	UMixedRealityCaptureBillboard::~UMixedRealityCaptureBillboard() {}
	void AMrcProjectionActor::StaticRegisterNativesAMrcProjectionActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMrcProjectionActor);
	UClass* Z_Construct_UClass_AMrcProjectionActor_NoRegister()
	{
		return AMrcProjectionActor::StaticClass();
	}
	struct Z_Construct_UClass_AMrcProjectionActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProjectionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachTarget_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AttachTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMrcProjectionActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MixedRealityCaptureFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMrcProjectionActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* AMrcProjectionActor\n *****************************************************************************/" },
		{ "IncludePath", "MrcProjectionBillboard.h" },
		{ "ModuleRelativePath", "Private/MrcProjectionBillboard.h" },
		{ "ToolTip", "AMrcProjectionActor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMrcProjectionActor_Statics::NewProp_ProjectionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MrcProjectionBillboard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMrcProjectionActor_Statics::NewProp_ProjectionComponent = { "ProjectionComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMrcProjectionActor, ProjectionComponent), Z_Construct_UClass_UMixedRealityCaptureBillboard_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMrcProjectionActor_Statics::NewProp_ProjectionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMrcProjectionActor_Statics::NewProp_ProjectionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMrcProjectionActor_Statics::NewProp_AttachTarget_MetaData[] = {
		{ "ModuleRelativePath", "Private/MrcProjectionBillboard.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AMrcProjectionActor_Statics::NewProp_AttachTarget = { "AttachTarget", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMrcProjectionActor, AttachTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMrcProjectionActor_Statics::NewProp_AttachTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMrcProjectionActor_Statics::NewProp_AttachTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMrcProjectionActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMrcProjectionActor_Statics::NewProp_ProjectionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMrcProjectionActor_Statics::NewProp_AttachTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMrcProjectionActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMrcProjectionActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMrcProjectionActor_Statics::ClassParams = {
		&AMrcProjectionActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMrcProjectionActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMrcProjectionActor_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMrcProjectionActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMrcProjectionActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMrcProjectionActor()
	{
		if (!Z_Registration_Info_UClass_AMrcProjectionActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMrcProjectionActor.OuterSingleton, Z_Construct_UClass_AMrcProjectionActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMrcProjectionActor.OuterSingleton;
	}
	template<> MIXEDREALITYCAPTUREFRAMEWORK_API UClass* StaticClass<AMrcProjectionActor>()
	{
		return AMrcProjectionActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMrcProjectionActor);
	AMrcProjectionActor::~AMrcProjectionActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Private_MrcProjectionBillboard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Private_MrcProjectionBillboard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMixedRealityCaptureBillboard, UMixedRealityCaptureBillboard::StaticClass, TEXT("UMixedRealityCaptureBillboard"), &Z_Registration_Info_UClass_UMixedRealityCaptureBillboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMixedRealityCaptureBillboard), 1247420356U) },
		{ Z_Construct_UClass_AMrcProjectionActor, AMrcProjectionActor::StaticClass, TEXT("AMrcProjectionActor"), &Z_Registration_Info_UClass_AMrcProjectionActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMrcProjectionActor), 571792157U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Private_MrcProjectionBillboard_h_1135937350(TEXT("/Script/MixedRealityCaptureFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Private_MrcProjectionBillboard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Private_MrcProjectionBillboard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
