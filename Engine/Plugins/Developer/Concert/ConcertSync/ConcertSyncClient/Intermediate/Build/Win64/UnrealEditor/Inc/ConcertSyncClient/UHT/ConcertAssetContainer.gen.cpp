// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ConcertAssetContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertAssetContainer() {}
// Cross Module References
	CONCERTSYNCCLIENT_API UClass* Z_Construct_UClass_UConcertAssetContainer();
	CONCERTSYNCCLIENT_API UClass* Z_Construct_UClass_UConcertAssetContainer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ConcertSyncClient();
// End Cross Module References
	void UConcertAssetContainer::StaticRegisterNativesUConcertAssetContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConcertAssetContainer);
	UClass* Z_Construct_UClass_UConcertAssetContainer_NoRegister()
	{
		return UConcertAssetContainer::StaticClass();
	}
	struct Z_Construct_UClass_UConcertAssetContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenericDesktopMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GenericDesktopMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenericHMDMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GenericHMDMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VivePreControllerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VivePreControllerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusControllerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OculusControllerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenericControllerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GenericControllerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserPointerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LaserPointerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserPointerEndMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LaserPointerEndMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserPointerStartMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LaserPointerStartMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresenceMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PresenceMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HeadMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserCoreMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LaserCoreMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LaserMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresenceFadeMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PresenceFadeMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConcertAssetContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncClient,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertAssetContainer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Asset container for VREditor.\n */" },
		{ "IncludePath", "ConcertAssetContainer.h" },
		{ "ModuleRelativePath", "Private/ConcertAssetContainer.h" },
		{ "ToolTip", "Asset container for VREditor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_GenericDesktopMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "//\n// Meshes\n//\n" },
		{ "ModuleRelativePath", "Private/ConcertAssetContainer.h" },
		{ "ToolTip", "Meshes" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_GenericDesktopMesh = { "GenericDesktopMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertAssetContainer, GenericDesktopMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_GenericDesktopMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_GenericDesktopMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_GenericHMDMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Private/ConcertAssetContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_GenericHMDMesh = { "GenericHMDMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertAssetContainer, GenericHMDMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_GenericHMDMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_GenericHMDMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_VivePreControllerMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Private/ConcertAssetContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_VivePreControllerMesh = { "VivePreControllerMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertAssetContainer, VivePreControllerMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_VivePreControllerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_VivePreControllerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_OculusControllerMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Private/ConcertAssetContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_OculusControllerMesh = { "OculusControllerMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertAssetContainer, OculusControllerMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_OculusControllerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_OculusControllerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_GenericControllerMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Private/ConcertAssetContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_GenericControllerMesh = { "GenericControllerMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertAssetContainer, GenericControllerMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_GenericControllerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_GenericControllerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserPointerMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Private/ConcertAssetContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserPointerMesh = { "LaserPointerMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertAssetContainer, LaserPointerMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserPointerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserPointerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserPointerEndMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Private/ConcertAssetContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserPointerEndMesh = { "LaserPointerEndMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertAssetContainer, LaserPointerEndMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserPointerEndMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserPointerEndMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserPointerStartMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Private/ConcertAssetContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserPointerStartMesh = { "LaserPointerStartMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertAssetContainer, LaserPointerStartMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserPointerStartMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserPointerStartMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_PresenceMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "//\n// Materials\n//\n" },
		{ "ModuleRelativePath", "Private/ConcertAssetContainer.h" },
		{ "ToolTip", "Materials" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_PresenceMaterial = { "PresenceMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertAssetContainer, PresenceMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_PresenceMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_PresenceMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_TextMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Private/ConcertAssetContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_TextMaterial = { "TextMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertAssetContainer, TextMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_TextMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_TextMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_HeadMaterial_MetaData[] = {
		{ "Category", "Desktop" },
		{ "ModuleRelativePath", "Private/ConcertAssetContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_HeadMaterial = { "HeadMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertAssetContainer, HeadMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_HeadMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_HeadMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserCoreMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Private/ConcertAssetContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserCoreMaterial = { "LaserCoreMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertAssetContainer, LaserCoreMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserCoreMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserCoreMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Private/ConcertAssetContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserMaterial = { "LaserMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertAssetContainer, LaserMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_PresenceFadeMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Private/ConcertAssetContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_PresenceFadeMaterial = { "PresenceFadeMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertAssetContainer, PresenceFadeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_PresenceFadeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_PresenceFadeMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConcertAssetContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_GenericDesktopMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_GenericHMDMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_VivePreControllerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_OculusControllerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_GenericControllerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserPointerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserPointerEndMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserPointerStartMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_PresenceMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_TextMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_HeadMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserCoreMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_LaserMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertAssetContainer_Statics::NewProp_PresenceFadeMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConcertAssetContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConcertAssetContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConcertAssetContainer_Statics::ClassParams = {
		&UConcertAssetContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConcertAssetContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConcertAssetContainer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConcertAssetContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertAssetContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConcertAssetContainer()
	{
		if (!Z_Registration_Info_UClass_UConcertAssetContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConcertAssetContainer.OuterSingleton, Z_Construct_UClass_UConcertAssetContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConcertAssetContainer.OuterSingleton;
	}
	template<> CONCERTSYNCCLIENT_API UClass* StaticClass<UConcertAssetContainer>()
	{
		return UConcertAssetContainer::StaticClass();
	}
	UConcertAssetContainer::UConcertAssetContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConcertAssetContainer);
	UConcertAssetContainer::~UConcertAssetContainer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Private_ConcertAssetContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Private_ConcertAssetContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConcertAssetContainer, UConcertAssetContainer::StaticClass, TEXT("UConcertAssetContainer"), &Z_Registration_Info_UClass_UConcertAssetContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConcertAssetContainer), 1557807934U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Private_ConcertAssetContainer_h_1645221415(TEXT("/Script/ConcertSyncClient"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Private_ConcertAssetContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Private_ConcertAssetContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
