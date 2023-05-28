// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeMeshCollisionComponent.h"
#include "LandscapeProxy.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeMeshCollisionComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMeshCollisionComponent();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMeshCollisionComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	void ULandscapeMeshCollisionComponent::StaticRegisterNativesULandscapeMeshCollisionComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeMeshCollisionComponent);
	UClass* Z_Construct_UClass_ULandscapeMeshCollisionComponent_NoRegister()
	{
		return ULandscapeMeshCollisionComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "LandscapeMeshCollisionComponent.h" },
		{ "ModuleRelativePath", "Classes/LandscapeMeshCollisionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::NewProp_MeshGuid_MetaData[] = {
		{ "Comment", "/** Guid used to share PhysX heightfield objects in the editor */" },
		{ "ModuleRelativePath", "Classes/LandscapeMeshCollisionComponent.h" },
		{ "ToolTip", "Guid used to share PhysX heightfield objects in the editor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::NewProp_MeshGuid = { "MeshGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeMeshCollisionComponent, MeshGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::NewProp_MeshGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::NewProp_MeshGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::NewProp_MeshGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeMeshCollisionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::ClassParams = {
		&ULandscapeMeshCollisionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeMeshCollisionComponent()
	{
		if (!Z_Registration_Info_UClass_ULandscapeMeshCollisionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeMeshCollisionComponent.OuterSingleton, Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandscapeMeshCollisionComponent.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeMeshCollisionComponent>()
	{
		return ULandscapeMeshCollisionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeMeshCollisionComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeMeshCollisionComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeMeshCollisionComponent, ULandscapeMeshCollisionComponent::StaticClass, TEXT("ULandscapeMeshCollisionComponent"), &Z_Registration_Info_UClass_ULandscapeMeshCollisionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeMeshCollisionComponent), 2002192806U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_2634488205(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
