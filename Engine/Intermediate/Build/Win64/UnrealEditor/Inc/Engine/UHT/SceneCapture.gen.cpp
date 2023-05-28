// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/SceneCapture.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCapture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ASceneCapture::StaticRegisterNativesASceneCapture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASceneCapture);
	UClass* Z_Construct_UClass_ASceneCapture_NoRegister()
	{
		return ASceneCapture::StaticClass();
	}
	struct Z_Construct_UClass_ASceneCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASceneCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneCapture_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Attachment Actor" },
		{ "IncludePath", "Engine/SceneCapture.h" },
		{ "ModuleRelativePath", "Classes/Engine/SceneCapture.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneCapture_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SceneCapture.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASceneCapture_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0044000020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASceneCapture, MeshComp_DEPRECATED), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASceneCapture_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASceneCapture_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneCapture_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SceneCapture.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASceneCapture_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASceneCapture, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASceneCapture_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASceneCapture_Statics::NewProp_SceneComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASceneCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneCapture_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneCapture_Statics::NewProp_SceneComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASceneCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASceneCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASceneCapture_Statics::ClassParams = {
		&ASceneCapture::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASceneCapture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASceneCapture_Statics::PropPointers),
		0,
		0x008800A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASceneCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASceneCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASceneCapture()
	{
		if (!Z_Registration_Info_UClass_ASceneCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASceneCapture.OuterSingleton, Z_Construct_UClass_ASceneCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASceneCapture.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ASceneCapture>()
	{
		return ASceneCapture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASceneCapture);
	ASceneCapture::~ASceneCapture() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ASceneCapture)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASceneCapture, ASceneCapture::StaticClass, TEXT("ASceneCapture"), &Z_Registration_Info_UClass_ASceneCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASceneCapture), 532096636U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_3518962544(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
