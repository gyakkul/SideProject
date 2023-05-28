// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshPaintInteractions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshPaintInteractions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshPaintSelectionInterface();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshPaintSelectionInterface_NoRegister();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshPaintSelectionMechanic();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshPaintSelectionMechanic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshPaintingToolset();
// End Cross Module References
	void UMeshPaintSelectionInterface::StaticRegisterNativesUMeshPaintSelectionInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshPaintSelectionInterface);
	UClass* Z_Construct_UClass_UMeshPaintSelectionInterface_NoRegister()
	{
		return UMeshPaintSelectionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMeshPaintSelectionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshPaintSelectionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshPaintSelectionInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshPaintInteractions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshPaintSelectionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMeshPaintSelectionInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshPaintSelectionInterface_Statics::ClassParams = {
		&UMeshPaintSelectionInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshPaintSelectionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshPaintSelectionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshPaintSelectionInterface()
	{
		if (!Z_Registration_Info_UClass_UMeshPaintSelectionInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshPaintSelectionInterface.OuterSingleton, Z_Construct_UClass_UMeshPaintSelectionInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshPaintSelectionInterface.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UClass* StaticClass<UMeshPaintSelectionInterface>()
	{
		return UMeshPaintSelectionInterface::StaticClass();
	}
	UMeshPaintSelectionInterface::UMeshPaintSelectionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshPaintSelectionInterface);
	UMeshPaintSelectionInterface::~UMeshPaintSelectionInterface() {}
	void UMeshPaintSelectionMechanic::StaticRegisterNativesUMeshPaintSelectionMechanic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshPaintSelectionMechanic);
	UClass* Z_Construct_UClass_UMeshPaintSelectionMechanic_NoRegister()
	{
		return UMeshPaintSelectionMechanic::StaticClass();
	}
	struct Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedClickedComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedClickedComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedClickedComponents;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedClickedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedClickedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedClickedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshPaintInteractions.h" },
		{ "ModuleRelativePath", "Public/MeshPaintInteractions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::NewProp_CachedClickedComponents_Inner = { "CachedClickedComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::NewProp_CachedClickedComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeshPaintInteractions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::NewProp_CachedClickedComponents = { "CachedClickedComponents", nullptr, (EPropertyFlags)0x0024088000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshPaintSelectionMechanic, CachedClickedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::NewProp_CachedClickedComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::NewProp_CachedClickedComponents_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::NewProp_CachedClickedActors_Inner = { "CachedClickedActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::NewProp_CachedClickedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshPaintInteractions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::NewProp_CachedClickedActors = { "CachedClickedActors", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshPaintSelectionMechanic, CachedClickedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::NewProp_CachedClickedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::NewProp_CachedClickedActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::NewProp_CachedClickedComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::NewProp_CachedClickedComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::NewProp_CachedClickedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::NewProp_CachedClickedActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshPaintSelectionMechanic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::ClassParams = {
		&UMeshPaintSelectionMechanic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshPaintSelectionMechanic()
	{
		if (!Z_Registration_Info_UClass_UMeshPaintSelectionMechanic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshPaintSelectionMechanic.OuterSingleton, Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshPaintSelectionMechanic.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UClass* StaticClass<UMeshPaintSelectionMechanic>()
	{
		return UMeshPaintSelectionMechanic::StaticClass();
	}
	UMeshPaintSelectionMechanic::UMeshPaintSelectionMechanic() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshPaintSelectionMechanic);
	UMeshPaintSelectionMechanic::~UMeshPaintSelectionMechanic() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintInteractions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintInteractions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshPaintSelectionInterface, UMeshPaintSelectionInterface::StaticClass, TEXT("UMeshPaintSelectionInterface"), &Z_Registration_Info_UClass_UMeshPaintSelectionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshPaintSelectionInterface), 3916134435U) },
		{ Z_Construct_UClass_UMeshPaintSelectionMechanic, UMeshPaintSelectionMechanic::StaticClass, TEXT("UMeshPaintSelectionMechanic"), &Z_Registration_Info_UClass_UMeshPaintSelectionMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshPaintSelectionMechanic), 1851251384U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintInteractions_h_2649476038(TEXT("/Script/MeshPaintingToolset"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintInteractions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintInteractions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
