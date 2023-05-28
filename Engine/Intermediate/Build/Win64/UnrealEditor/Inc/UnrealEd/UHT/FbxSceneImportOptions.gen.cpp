// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/FbxSceneImportOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxSceneImportOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportOptions();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportOptions_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFBXSceneOptionsCreateHierarchyType();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFBXSceneOptionsCreateHierarchyType;
	static UEnum* EFBXSceneOptionsCreateHierarchyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFBXSceneOptionsCreateHierarchyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFBXSceneOptionsCreateHierarchyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFBXSceneOptionsCreateHierarchyType, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFBXSceneOptionsCreateHierarchyType"));
		}
		return Z_Registration_Info_UEnum_EFBXSceneOptionsCreateHierarchyType.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFBXSceneOptionsCreateHierarchyType>()
	{
		return EFBXSceneOptionsCreateHierarchyType_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EFBXSceneOptionsCreateHierarchyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EFBXSceneOptionsCreateHierarchyType_Statics::Enumerators[] = {
		{ "EFBXSceneOptionsCreateHierarchyType::FBXSOCHT_CreateLevelActors", (int64)EFBXSceneOptionsCreateHierarchyType::FBXSOCHT_CreateLevelActors },
		{ "EFBXSceneOptionsCreateHierarchyType::FBXSOCHT_CreateActorComponents", (int64)EFBXSceneOptionsCreateHierarchyType::FBXSOCHT_CreateActorComponents },
		{ "EFBXSceneOptionsCreateHierarchyType::FBXSOCHT_CreateBlueprint", (int64)EFBXSceneOptionsCreateHierarchyType::FBXSOCHT_CreateBlueprint },
		{ "EFBXSceneOptionsCreateHierarchyType::FBXSOCHT_MAX", (int64)EFBXSceneOptionsCreateHierarchyType::FBXSOCHT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EFBXSceneOptionsCreateHierarchyType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FBXSOCHT_CreateActorComponents.DisplayName", "Create one Actor with Components" },
		{ "FBXSOCHT_CreateActorComponents.Name", "EFBXSceneOptionsCreateHierarchyType::FBXSOCHT_CreateActorComponents" },
		{ "FBXSOCHT_CreateActorComponents.ToolTip", "Create one actor and a component for every node in the fbx hierarchy. No reimport of the hierarchy." },
		{ "FBXSOCHT_CreateBlueprint.DisplayName", "Create one Blueprint asset" },
		{ "FBXSOCHT_CreateBlueprint.Name", "EFBXSceneOptionsCreateHierarchyType::FBXSOCHT_CreateBlueprint" },
		{ "FBXSOCHT_CreateBlueprint.ToolTip", "Create one blueprint and a component for every node in the fbx hierarchy. Hierarchy can be reimport." },
		{ "FBXSOCHT_CreateLevelActors.DisplayName", "Create Level Actors" },
		{ "FBXSOCHT_CreateLevelActors.Name", "EFBXSceneOptionsCreateHierarchyType::FBXSOCHT_CreateLevelActors" },
		{ "FBXSOCHT_CreateLevelActors.ToolTip", "Create an actor for every node in the fbx hierarchy. No reimport of the hierarchy." },
		{ "FBXSOCHT_MAX.Name", "EFBXSceneOptionsCreateHierarchyType::FBXSOCHT_MAX" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EFBXSceneOptionsCreateHierarchyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EFBXSceneOptionsCreateHierarchyType",
		"EFBXSceneOptionsCreateHierarchyType",
		Z_Construct_UEnum_UnrealEd_EFBXSceneOptionsCreateHierarchyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFBXSceneOptionsCreateHierarchyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EFBXSceneOptionsCreateHierarchyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFBXSceneOptionsCreateHierarchyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EFBXSceneOptionsCreateHierarchyType()
	{
		if (!Z_Registration_Info_UEnum_EFBXSceneOptionsCreateHierarchyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFBXSceneOptionsCreateHierarchyType.InnerSingleton, Z_Construct_UEnum_UnrealEd_EFBXSceneOptionsCreateHierarchyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFBXSceneOptionsCreateHierarchyType.InnerSingleton;
	}
	void UFbxSceneImportOptions::StaticRegisterNativesUFbxSceneImportOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFbxSceneImportOptions);
	UClass* Z_Construct_UClass_UFbxSceneImportOptions_NoRegister()
	{
		return UFbxSceneImportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UFbxSceneImportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateContentFolderHierarchy_MetaData[];
#endif
		static void NewProp_bCreateContentFolderHierarchy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateContentFolderHierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsDynamic_MetaData[];
#endif
		static void NewProp_bImportAsDynamic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsDynamic;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HierarchyType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HierarchyType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HierarchyType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceFrontXAxis_MetaData[];
#endif
		static void NewProp_bForceFrontXAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFrontXAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportTranslation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportUniformScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImportUniformScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTransformVertexToAbsolute_MetaData[];
#endif
		static void NewProp_bTransformVertexToAbsolute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransformVertexToAbsolute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBakePivotInVertex_MetaData[];
#endif
		static void NewProp_bBakePivotInVertex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakePivotInVertex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportStaticMeshLODs_MetaData[];
#endif
		static void NewProp_bImportStaticMeshLODs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportStaticMeshLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportSkeletalMeshLODs_MetaData[];
#endif
		static void NewProp_bImportSkeletalMeshLODs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportSkeletalMeshLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertNormalMaps_MetaData[];
#endif
		static void NewProp_bInvertNormalMaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertNormalMaps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxSceneImportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\x09""Fbx_AddToBlueprint UMETA(DisplayName = \"Add to an existing Blueprint asset\"),\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FbxSceneImportOptions.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
		{ "ToolTip", "Fbx_AddToBlueprint UMETA(DisplayName = \"Add to an existing Blueprint asset\")," },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bCreateContentFolderHierarchy_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "Comment", "/** If checked, a folder's hierarchy will be created under the import asset path. All the created folders will match the actor hierarchy. In case there is more than one actor that links to an asset, the shared asset will be placed at the first actor's place. */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
		{ "ToolTip", "If checked, a folder's hierarchy will be created under the import asset path. All the created folders will match the actor hierarchy. In case there is more than one actor that links to an asset, the shared asset will be placed at the first actor's place." },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bCreateContentFolderHierarchy_SetBit(void* Obj)
	{
		((UFbxSceneImportOptions*)Obj)->bCreateContentFolderHierarchy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bCreateContentFolderHierarchy = { "bCreateContentFolderHierarchy", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxSceneImportOptions), &Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bCreateContentFolderHierarchy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bCreateContentFolderHierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bCreateContentFolderHierarchy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportAsDynamic_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "Comment", "/** If checked, the mobility of all actors or components will be dynamic. If unchecked, they will be static. */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
		{ "ToolTip", "If checked, the mobility of all actors or components will be dynamic. If unchecked, they will be static." },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportAsDynamic_SetBit(void* Obj)
	{
		((UFbxSceneImportOptions*)Obj)->bImportAsDynamic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportAsDynamic = { "bImportAsDynamic", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxSceneImportOptions), &Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportAsDynamic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportAsDynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportAsDynamic_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_HierarchyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_HierarchyType_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "Comment", "/** Choose if you want to generate the scene hierarchy with normal level actors, one actor with multiple components, or one blueprint asset with multiple components. */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
		{ "ToolTip", "Choose if you want to generate the scene hierarchy with normal level actors, one actor with multiple components, or one blueprint asset with multiple components." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_HierarchyType = { "HierarchyType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSceneImportOptions, HierarchyType), Z_Construct_UEnum_UnrealEd_EFBXSceneOptionsCreateHierarchyType, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_HierarchyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_HierarchyType_MetaData)) }; // 1207144707
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bForceFrontXAxis_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "Comment", "/** Whether to force the front axis to be align with X instead of -Y. */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
		{ "ToolTip", "Whether to force the front axis to be align with X instead of -Y." },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bForceFrontXAxis_SetBit(void* Obj)
	{
		((UFbxSceneImportOptions*)Obj)->bForceFrontXAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bForceFrontXAxis = { "bForceFrontXAxis", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxSceneImportOptions), &Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bForceFrontXAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bForceFrontXAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bForceFrontXAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportTranslation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportTranslation = { "ImportTranslation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSceneImportOptions, ImportTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportRotation = { "ImportRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSceneImportOptions, ImportRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportUniformScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportUniformScale = { "ImportUniformScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSceneImportOptions, ImportUniformScale), METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportUniformScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportUniformScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bTransformVertexToAbsolute_MetaData[] = {
		{ "Comment", "/** If this option is true the node absolute transform (transform, offset and pivot) will be apply to the mesh vertices. */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
		{ "ToolTip", "If this option is true the node absolute transform (transform, offset and pivot) will be apply to the mesh vertices." },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bTransformVertexToAbsolute_SetBit(void* Obj)
	{
		((UFbxSceneImportOptions*)Obj)->bTransformVertexToAbsolute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bTransformVertexToAbsolute = { "bTransformVertexToAbsolute", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxSceneImportOptions), &Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bTransformVertexToAbsolute_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bTransformVertexToAbsolute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bTransformVertexToAbsolute_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bBakePivotInVertex_MetaData[] = {
		{ "Category", "Meshes" },
		{ "Comment", "/** - Experimental - If this option is true the inverse node pivot will be apply to the mesh vertices. The pivot from the DCC will then be the origin of the mesh. This option only work with static meshes.*/" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
		{ "ToolTip", "- Experimental - If this option is true the inverse node pivot will be apply to the mesh vertices. The pivot from the DCC will then be the origin of the mesh. This option only work with static meshes." },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bBakePivotInVertex_SetBit(void* Obj)
	{
		((UFbxSceneImportOptions*)Obj)->bBakePivotInVertex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bBakePivotInVertex = { "bBakePivotInVertex", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxSceneImportOptions), &Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bBakePivotInVertex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bBakePivotInVertex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bBakePivotInVertex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportStaticMeshLODs_MetaData[] = {
		{ "Category", "Meshes" },
		{ "Comment", "/** If enabled, creates LOD models for Unreal static meshes from LODs in the import file; If not enabled, only the base static mesh from the LOD group is imported. */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
		{ "ToolTip", "If enabled, creates LOD models for Unreal static meshes from LODs in the import file; If not enabled, only the base static mesh from the LOD group is imported." },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportStaticMeshLODs_SetBit(void* Obj)
	{
		((UFbxSceneImportOptions*)Obj)->bImportStaticMeshLODs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportStaticMeshLODs = { "bImportStaticMeshLODs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxSceneImportOptions), &Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportStaticMeshLODs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportStaticMeshLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportStaticMeshLODs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportSkeletalMeshLODs_MetaData[] = {
		{ "Category", "Meshes" },
		{ "Comment", "/** If enabled, creates LOD models for Unreal skeletal meshes from LODs in the import file; If not enabled, only the base skeletal mesh from the LOD group is imported. */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
		{ "ToolTip", "If enabled, creates LOD models for Unreal skeletal meshes from LODs in the import file; If not enabled, only the base skeletal mesh from the LOD group is imported." },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportSkeletalMeshLODs_SetBit(void* Obj)
	{
		((UFbxSceneImportOptions*)Obj)->bImportSkeletalMeshLODs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportSkeletalMeshLODs = { "bImportSkeletalMeshLODs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxSceneImportOptions), &Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportSkeletalMeshLODs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportSkeletalMeshLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportSkeletalMeshLODs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bInvertNormalMaps_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** If enabled, this option will cause normal map Y (Green) values to be inverted when importing textures */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
		{ "ToolTip", "If enabled, this option will cause normal map Y (Green) values to be inverted when importing textures" },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bInvertNormalMaps_SetBit(void* Obj)
	{
		((UFbxSceneImportOptions*)Obj)->bInvertNormalMaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bInvertNormalMaps = { "bInvertNormalMaps", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxSceneImportOptions), &Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bInvertNormalMaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bInvertNormalMaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bInvertNormalMaps_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxSceneImportOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bCreateContentFolderHierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportAsDynamic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_HierarchyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_HierarchyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bForceFrontXAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportUniformScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bTransformVertexToAbsolute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bBakePivotInVertex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportStaticMeshLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportSkeletalMeshLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bInvertNormalMaps,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxSceneImportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxSceneImportOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::ClassParams = {
		&UFbxSceneImportOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxSceneImportOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxSceneImportOptions()
	{
		if (!Z_Registration_Info_UClass_UFbxSceneImportOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFbxSceneImportOptions.OuterSingleton, Z_Construct_UClass_UFbxSceneImportOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFbxSceneImportOptions.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UFbxSceneImportOptions>()
	{
		return UFbxSceneImportOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxSceneImportOptions);
	UFbxSceneImportOptions::~UFbxSceneImportOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_Statics::EnumInfo[] = {
		{ EFBXSceneOptionsCreateHierarchyType_StaticEnum, TEXT("EFBXSceneOptionsCreateHierarchyType"), &Z_Registration_Info_UEnum_EFBXSceneOptionsCreateHierarchyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1207144707U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFbxSceneImportOptions, UFbxSceneImportOptions::StaticClass, TEXT("UFbxSceneImportOptions"), &Z_Registration_Info_UClass_UFbxSceneImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFbxSceneImportOptions), 2110838357U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_519997763(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
