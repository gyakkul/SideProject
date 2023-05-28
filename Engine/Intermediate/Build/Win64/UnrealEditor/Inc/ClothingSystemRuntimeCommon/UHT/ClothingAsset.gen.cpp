// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingAsset.h"
#include "ClothConfig_Legacy.h"
#include "ClothLODData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingAsset() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothingAssetCommon();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothingAssetCommon_NoRegister();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothingAssetCustomData();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothingAssetCustomData_NoRegister();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothLODDataCommon_Legacy_NoRegister();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothConfig_Legacy();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothLODDataCommon();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothConfigBase_NoRegister();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
// End Cross Module References
	void UClothingAssetCustomData::StaticRegisterNativesUClothingAssetCustomData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothingAssetCustomData);
	UClass* Z_Construct_UClass_UClothingAssetCustomData_NoRegister()
	{
		return UClothingAssetCustomData::StaticClass();
	}
	struct Z_Construct_UClass_UClothingAssetCustomData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothingAssetCustomData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCustomData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClothingAsset.h" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothingAssetCustomData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingAssetCustomData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothingAssetCustomData_Statics::ClassParams = {
		&UClothingAssetCustomData::StaticClass,
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
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCustomData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCustomData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothingAssetCustomData()
	{
		if (!Z_Registration_Info_UClass_UClothingAssetCustomData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothingAssetCustomData.OuterSingleton, Z_Construct_UClass_UClothingAssetCustomData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothingAssetCustomData.OuterSingleton;
	}
	template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* StaticClass<UClothingAssetCustomData>()
	{
		return UClothingAssetCustomData::StaticClass();
	}
	UClothingAssetCustomData::UClothingAssetCustomData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingAssetCustomData);
	UClothingAssetCustomData::~UClothingAssetCustomData() {}
	void UClothingAssetCommon::StaticRegisterNativesUClothingAssetCommon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothingAssetCommon);
	UClass* Z_Construct_UClass_UClothingAssetCommon_NoRegister()
	{
		return UClothingAssetCommon::StaticClass();
	}
	struct Z_Construct_UClass_UClothingAssetCommon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysicsAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothConfigs_ValueProp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClothConfigs_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClothConfigs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothConfigs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ClothConfigs;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothSharedSimConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClothSharedSimConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothSimConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClothSimConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChaosClothSimConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChaosClothSimConfig;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClothLodData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothLodData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClothLodData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_LodData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LodData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodMap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodMap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LodMap;
		static const UECodeGen_Private::FNamePropertyParams NewProp_UsedBoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsedBoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UsedBoneNames;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UsedBoneIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsedBoneIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UsedBoneIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceBoneIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReferenceBoneIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClothConfig;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothingAssetCommon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothingAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implementation of non-solver specific, but common Engine related functionality.\n *\n * Solver specific implementations may wish to override this class to construct\n * their own default instances of child classes, such as \\c ClothSimConfig and \n * \\c CustomData, as well as override the \\c AddNewLod() factory to build their \n * own implementation of \\c UClothLODDataBase.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ClothingAsset.h" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implementation of non-solver specific, but common Engine related functionality.\n\nSolver specific implementations may wish to override this class to construct\ntheir own default instances of child classes, such as \\c ClothSimConfig and\n\\c CustomData, as well as override the \\c AddNewLod() factory to build their\nown implementation of \\c UClothLODDataBase." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_PhysicsAsset_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// The physics asset to extract collisions from when building a simulation.\n" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "The physics asset to extract collisions from when building a simulation." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothingAssetCommon, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_PhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_PhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs_ValueProp_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// Simulation specific cloth parameters. \n// Use GetClothConfig() to retrieve the correct parameters/config type for the desired cloth simulation system.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "Simulation specific cloth parameters.\nUse GetClothConfig() to retrieve the correct parameters/config type for the desired cloth simulation system." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs_ValueProp = { "ClothConfigs", nullptr, (EPropertyFlags)0x00060000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UClothConfigBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs_ValueProp_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs_Key_KeyProp = { "ClothConfigs_Key", nullptr, (EPropertyFlags)0x00020000000a0009, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// Simulation specific cloth parameters. \n// Use GetClothConfig() to retrieve the correct parameters/config type for the desired cloth simulation system.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "Simulation specific cloth parameters.\nUse GetClothConfig() to retrieve the correct parameters/config type for the desired cloth simulation system." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs = { "ClothConfigs", nullptr, (EPropertyFlags)0x001400800002005d, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothingAssetCommon, ClothConfigs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothSharedSimConfig_MetaData[] = {
		{ "Comment", "// Shared by all cloth instances in a skeletal mesh\n// Only supported with Chaos Cloth for now\n// This may not be editable on unused cloth assets\n" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "Shared by all cloth instances in a skeletal mesh\nOnly supported with Chaos Cloth for now\nThis may not be editable on unused cloth assets" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothSharedSimConfig = { "ClothSharedSimConfig", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothingAssetCommon, ClothSharedSimConfig_DEPRECATED), Z_Construct_UClass_UClothConfigBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothSharedSimConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothSharedSimConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothSimConfig_MetaData[] = {
		{ "Comment", "// Parameters for how the NVcloth behaves.\n// These will have no effect on Chaos cloth\n" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "Parameters for how the NVcloth behaves.\nThese will have no effect on Chaos cloth" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothSimConfig = { "ClothSimConfig", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothingAssetCommon, ClothSimConfig_DEPRECATED), Z_Construct_UClass_UClothConfigBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothSimConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothSimConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ChaosClothSimConfig_MetaData[] = {
		{ "Comment", "// Parameters for how Chaos cloth behaves \n// These will not affect NVcloth\n// For now, we have two configuration parameters so that we can switch between chaos and\n// non chaos at will without losing the original NVcloth data\n" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "Parameters for how Chaos cloth behaves\nThese will not affect NVcloth\nFor now, we have two configuration parameters so that we can switch between chaos and\nnon chaos at will without losing the original NVcloth data" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ChaosClothSimConfig = { "ChaosClothSimConfig", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothingAssetCommon, ChaosClothSimConfig_DEPRECATED), Z_Construct_UClass_UClothConfigBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ChaosClothSimConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ChaosClothSimConfig_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothLodData_Inner = { "ClothLodData", nullptr, (EPropertyFlags)0x0004000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClothLODDataCommon_Legacy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothLodData_MetaData[] = {
		{ "Comment", "// Deprecated. Use LodData instead\n" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "Deprecated. Use LodData instead" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothLodData = { "ClothLodData", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothingAssetCommon, ClothLodData_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothLodData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothLodData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodData_Inner = { "LodData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FClothLODDataCommon, METADATA_PARAMS(nullptr, 0) }; // 2797891056
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodData_MetaData[] = {
		{ "Comment", "// The actual asset data, listed by LOD.\n" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "The actual asset data, listed by LOD." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodData = { "LodData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothingAssetCommon, LodData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodData_MetaData)) }; // 2797891056
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodMap_Inner = { "LodMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodMap_MetaData[] = {
		{ "Comment", "// Tracks which clothing LOD each skel mesh LOD corresponds to (LodMap[SkelLod]=ClothingLod).\n" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "Tracks which clothing LOD each skel mesh LOD corresponds to (LodMap[SkelLod]=ClothingLod)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodMap = { "LodMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothingAssetCommon, LodMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodMap_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneNames_Inner = { "UsedBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneNames_MetaData[] = {
		{ "Comment", "// List of bones this asset uses inside its parent mesh.\n" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "List of bones this asset uses inside its parent mesh." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneNames = { "UsedBoneNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothingAssetCommon, UsedBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneNames_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneIndices_Inner = { "UsedBoneIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneIndices_MetaData[] = {
		{ "Comment", "// List of the indices for the bones in UsedBoneNames, used for remapping.\n" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "List of the indices for the bones in UsedBoneNames, used for remapping." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneIndices = { "UsedBoneIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothingAssetCommon, UsedBoneIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneIndices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ReferenceBoneIndex_MetaData[] = {
		{ "Comment", "// Bone to treat as the root of the simulation space.\n" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "Bone to treat as the root of the simulation space." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ReferenceBoneIndex = { "ReferenceBoneIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothingAssetCommon, ReferenceBoneIndex), METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ReferenceBoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ReferenceBoneIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_CustomData_MetaData[] = {
		{ "Comment", "// Custom data applied by the importer depending on where the asset was imported from.\n" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "Custom data applied by the importer depending on where the asset was imported from." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothingAssetCommon, CustomData), Z_Construct_UClass_UClothingAssetCustomData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_CustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_CustomData_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfig_MetaData[] = {
		{ "Comment", "/** \n\x09 * Deprecated property for transitioning the \\c FClothConfig struct to the \n\x09 * \\c UClothConfigBase array, in a new property called \\c ClothConfigs.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "Deprecated property for transitioning the \\c FClothConfig struct to the\n\\c UClothConfigBase array, in a new property called \\c ClothConfigs." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfig = { "ClothConfig", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothingAssetCommon, ClothConfig_DEPRECATED), Z_Construct_UScriptStruct_FClothConfig_Legacy, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfig_MetaData)) }; // 3117859857
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothingAssetCommon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_PhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothSharedSimConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothSimConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ChaosClothSimConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothLodData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothLodData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodMap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ReferenceBoneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_CustomData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfig,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothingAssetCommon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingAssetCommon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothingAssetCommon_Statics::ClassParams = {
		&UClothingAssetCommon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothingAssetCommon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothingAssetCommon()
	{
		if (!Z_Registration_Info_UClass_UClothingAssetCommon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothingAssetCommon.OuterSingleton, Z_Construct_UClass_UClothingAssetCommon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothingAssetCommon.OuterSingleton;
	}
	template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* StaticClass<UClothingAssetCommon>()
	{
		return UClothingAssetCommon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingAssetCommon);
	UClothingAssetCommon::~UClothingAssetCommon() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UClothingAssetCommon)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothingAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothingAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothingAssetCustomData, UClothingAssetCustomData::StaticClass, TEXT("UClothingAssetCustomData"), &Z_Registration_Info_UClass_UClothingAssetCustomData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothingAssetCustomData), 211143545U) },
		{ Z_Construct_UClass_UClothingAssetCommon, UClothingAssetCommon::StaticClass, TEXT("UClothingAssetCommon"), &Z_Registration_Info_UClass_UClothingAssetCommon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothingAssetCommon), 3575065371U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothingAsset_h_697622056(TEXT("/Script/ClothingSystemRuntimeCommon"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothingAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothingAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
