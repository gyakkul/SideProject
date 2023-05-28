// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralFoliageComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFoliageComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_AVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageComponent();
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageComponent_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References
	void UProceduralFoliageComponent::StaticRegisterNativesUProceduralFoliageComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProceduralFoliageComponent);
	UClass* Z_Construct_UClass_UProceduralFoliageComponent_NoRegister()
	{
		return UProceduralFoliageComponent::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralFoliageComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageSpawner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FoliageSpawner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileOverlap_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileOverlap;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowLandscape_MetaData[];
#endif
		static void NewProp_bAllowLandscape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowLandscape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowBSP_MetaData[];
#endif
		static void NewProp_bAllowBSP_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowBSP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowStaticMesh_MetaData[];
#endif
		static void NewProp_bAllowStaticMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowTranslucent_MetaData[];
#endif
		static void NewProp_bAllowTranslucent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowTranslucent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowFoliage_MetaData[];
#endif
		static void NewProp_bAllowFoliage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowFoliage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugTiles_MetaData[];
#endif
		static void NewProp_bShowDebugTiles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugTiles;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawningVolume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpawningVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProceduralGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralFoliageComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ProceduralFoliageComponent.h" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_FoliageSpawner_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "Comment", "/** The procedural foliage spawner used to generate foliage instances within this volume. */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "The procedural foliage spawner used to generate foliage instances within this volume." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_FoliageSpawner = { "FoliageSpawner", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProceduralFoliageComponent, FoliageSpawner), Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_FoliageSpawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_FoliageSpawner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_TileOverlap_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "Comment", "/** The amount of overlap between simulation tiles (in cm). */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "The amount of overlap between simulation tiles (in cm)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_TileOverlap = { "TileOverlap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProceduralFoliageComponent, TileOverlap), METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_TileOverlap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_TileOverlap_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowLandscape_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "Comment", "/** Whether to place foliage on landscape */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "Whether to place foliage on landscape" },
	};
#endif
	void Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowLandscape_SetBit(void* Obj)
	{
		((UProceduralFoliageComponent*)Obj)->bAllowLandscape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowLandscape = { "bAllowLandscape", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProceduralFoliageComponent), &Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowLandscape_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowLandscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowLandscape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowBSP_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "Comment", "/** Whether to place foliage on BSP */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "Whether to place foliage on BSP" },
	};
#endif
	void Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowBSP_SetBit(void* Obj)
	{
		((UProceduralFoliageComponent*)Obj)->bAllowBSP = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowBSP = { "bAllowBSP", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProceduralFoliageComponent), &Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowBSP_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowBSP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowBSP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowStaticMesh_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "Comment", "/** Whether to place foliage on StaticMesh */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "Whether to place foliage on StaticMesh" },
	};
#endif
	void Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowStaticMesh_SetBit(void* Obj)
	{
		((UProceduralFoliageComponent*)Obj)->bAllowStaticMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowStaticMesh = { "bAllowStaticMesh", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProceduralFoliageComponent), &Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowStaticMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowStaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowTranslucent_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "Comment", "/** Whether to place foliage on translucent geometry */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "Whether to place foliage on translucent geometry" },
	};
#endif
	void Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowTranslucent_SetBit(void* Obj)
	{
		((UProceduralFoliageComponent*)Obj)->bAllowTranslucent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowTranslucent = { "bAllowTranslucent", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProceduralFoliageComponent), &Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowTranslucent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowTranslucent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowTranslucent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowFoliage_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "Comment", "/** Whether to place foliage on other blocking foliage geometry */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "Whether to place foliage on other blocking foliage geometry" },
	};
#endif
	void Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowFoliage_SetBit(void* Obj)
	{
		((UProceduralFoliageComponent*)Obj)->bAllowFoliage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowFoliage = { "bAllowFoliage", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProceduralFoliageComponent), &Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowFoliage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowFoliage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowFoliage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bShowDebugTiles_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "Comment", "/** Whether to visualize the tiles used for the foliage spawner simulation */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "Whether to visualize the tiles used for the foliage spawner simulation" },
	};
#endif
	void Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bShowDebugTiles_SetBit(void* Obj)
	{
		((UProceduralFoliageComponent*)Obj)->bShowDebugTiles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bShowDebugTiles = { "bShowDebugTiles", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProceduralFoliageComponent), &Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bShowDebugTiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bShowDebugTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bShowDebugTiles_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_SpawningVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_SpawningVolume = { "SpawningVolume", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProceduralFoliageComponent, SpawningVolume), Z_Construct_UClass_AVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_SpawningVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_SpawningVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_ProceduralGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_ProceduralGuid = { "ProceduralGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProceduralFoliageComponent, ProceduralGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_ProceduralGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_ProceduralGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProceduralFoliageComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_FoliageSpawner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_TileOverlap,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowLandscape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowBSP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowTranslucent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowFoliage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bShowDebugTiles,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_SpawningVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_ProceduralGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralFoliageComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralFoliageComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::ClassParams = {
		&UProceduralFoliageComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProceduralFoliageComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProceduralFoliageComponent()
	{
		if (!Z_Registration_Info_UClass_UProceduralFoliageComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProceduralFoliageComponent.OuterSingleton, Z_Construct_UClass_UProceduralFoliageComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProceduralFoliageComponent.OuterSingleton;
	}
	template<> FOLIAGE_API UClass* StaticClass<UProceduralFoliageComponent>()
	{
		return UProceduralFoliageComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralFoliageComponent);
	UProceduralFoliageComponent::~UProceduralFoliageComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProceduralFoliageComponent, UProceduralFoliageComponent::StaticClass, TEXT("UProceduralFoliageComponent"), &Z_Registration_Info_UClass_UProceduralFoliageComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProceduralFoliageComponent), 2587145169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_3133259156(TEXT("/Script/Foliage"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
