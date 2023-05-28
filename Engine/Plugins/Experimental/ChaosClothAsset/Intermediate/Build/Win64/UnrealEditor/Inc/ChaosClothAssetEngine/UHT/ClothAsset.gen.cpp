// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/ClothAsset.h"
#include "../../Source/Runtime/Engine/Classes/Engine/SkinnedAssetCommon.h"
#include "../../Source/Runtime/Engine/Public/PerPlatformProperties.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothAsset() {}
// Cross Module References
	CHAOSCLOTHASSETENGINE_API UClass* Z_Construct_UClass_UChaosClothAsset();
	CHAOSCLOTHASSETENGINE_API UClass* Z_Construct_UClass_UChaosClothAsset_NoRegister();
	CHAOSCLOTHASSETENGINE_API UEnum* Z_Construct_UEnum_ChaosClothAssetEngine_EClothAssetAsyncProperties();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflow_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedAsset();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMaterial();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshLODInfo();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetEngine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClothAssetAsyncProperties;
	static UEnum* EClothAssetAsyncProperties_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EClothAssetAsyncProperties.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EClothAssetAsyncProperties.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosClothAssetEngine_EClothAssetAsyncProperties, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetEngine(), TEXT("EClothAssetAsyncProperties"));
		}
		return Z_Registration_Info_UEnum_EClothAssetAsyncProperties.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETENGINE_API UEnum* StaticEnum<EClothAssetAsyncProperties>()
	{
		return EClothAssetAsyncProperties_StaticEnum();
	}
	struct Z_Construct_UEnum_ChaosClothAssetEngine_EClothAssetAsyncProperties_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ChaosClothAssetEngine_EClothAssetAsyncProperties_Statics::Enumerators[] = {
		{ "EClothAssetAsyncProperties::None", (int64)EClothAssetAsyncProperties::None },
		{ "EClothAssetAsyncProperties::RenderData", (int64)EClothAssetAsyncProperties::RenderData },
		{ "EClothAssetAsyncProperties::All", (int64)EClothAssetAsyncProperties::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ChaosClothAssetEngine_EClothAssetAsyncProperties_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "EClothAssetAsyncProperties::All" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothAsset.h" },
		{ "None.Name", "EClothAssetAsyncProperties::None" },
		{ "RenderData.Name", "EClothAssetAsyncProperties::RenderData" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosClothAssetEngine_EClothAssetAsyncProperties_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ChaosClothAssetEngine,
		nullptr,
		"EClothAssetAsyncProperties",
		"EClothAssetAsyncProperties",
		Z_Construct_UEnum_ChaosClothAssetEngine_EClothAssetAsyncProperties_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosClothAssetEngine_EClothAssetAsyncProperties_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ChaosClothAssetEngine_EClothAssetAsyncProperties_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosClothAssetEngine_EClothAssetAsyncProperties_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ChaosClothAssetEngine_EClothAssetAsyncProperties()
	{
		if (!Z_Registration_Info_UEnum_EClothAssetAsyncProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClothAssetAsyncProperties.InnerSingleton, Z_Construct_UEnum_ChaosClothAssetEngine_EClothAssetAsyncProperties_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EClothAssetAsyncProperties.InnerSingleton;
	}
	DEFINE_FUNCTION(UChaosClothAsset::execGetShadowPhysicsAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhysicsAsset**)Z_Param__Result=P_THIS->GetShadowPhysicsAsset();
		P_NATIVE_END;
	}
	void UChaosClothAsset::StaticRegisterNativesUChaosClothAsset()
	{
		UClass* Class = UChaosClothAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetShadowPhysicsAsset", &UChaosClothAsset::execGetShadowPhysicsAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChaosClothAsset_GetShadowPhysicsAsset_Statics
	{
		struct ChaosClothAsset_eventGetShadowPhysicsAsset_Parms
		{
			UPhysicsAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaosClothAsset_GetShadowPhysicsAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothAsset_eventGetShadowPhysicsAsset_Parms, ReturnValue), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothAsset_GetShadowPhysicsAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothAsset_GetShadowPhysicsAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothAsset_GetShadowPhysicsAsset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothAsset_GetShadowPhysicsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothAsset, nullptr, "GetShadowPhysicsAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosClothAsset_GetShadowPhysicsAsset_Statics::ChaosClothAsset_eventGetShadowPhysicsAsset_Parms), Z_Construct_UFunction_UChaosClothAsset_GetShadowPhysicsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothAsset_GetShadowPhysicsAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothAsset_GetShadowPhysicsAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothAsset_GetShadowPhysicsAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothAsset_GetShadowPhysicsAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothAsset_GetShadowPhysicsAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosClothAsset);
	UClass* Z_Construct_UClass_UChaosClothAsset_NoRegister()
	{
		return UChaosClothAsset::StaticClass();
	}
	struct Z_Construct_UClass_UChaosClothAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataflowAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataflowAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataflowTerminal_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DataflowTerminal;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysicsAsset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableBelowMinLodStripping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisableBelowMinLodStripping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLod_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinLod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportRayTracing_MetaData[];
#endif
		static void NewProp_bSupportRayTracing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportRayTracing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingMinLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RayTracingMinLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothTransition_MetaData[];
#endif
		static void NewProp_bSmoothTransition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothTransition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMultipleInfluences_MetaData[];
#endif
		static void NewProp_bUseMultipleInfluences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMultipleInfluences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinningKernelRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SkinningKernelRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowPhysicsAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ShadowPhysicsAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosClothAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkinnedAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChaosClothAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChaosClothAsset_GetShadowPhysicsAsset, "GetShadowPhysicsAsset" }, // 4203361286
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Cloth asset for pattern based simulation.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ChaosClothAsset/ClothAsset.h" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothAsset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Cloth asset for pattern based simulation." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_DataflowAsset_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "//\n// Dataflow\n//\n" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothAsset.h" },
		{ "ToolTip", "Dataflow" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_DataflowAsset = { "DataflowAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothAsset, DataflowAsset), Z_Construct_UClass_UDataflow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_DataflowAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_DataflowAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_DataflowTerminal_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_DataflowTerminal = { "DataflowTerminal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothAsset, DataflowTerminal), METADATA_PARAMS(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_DataflowTerminal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_DataflowTerminal_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSkeletalMaterial, METADATA_PARAMS(nullptr, 0) }; // 3772910854
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** List of materials for this cloth asset. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothAsset.h" },
		{ "ToolTip", "List of materials for this cloth asset." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothAsset, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_Materials_MetaData)) }; // 3772910854
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_PhysicsAsset_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Physics asset used for collision. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothAsset.h" },
		{ "ToolTip", "Physics asset used for collision." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothAsset, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_PhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_PhysicsAsset_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_LODInfo_Inner = { "LODInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSkeletalMeshLODInfo, METADATA_PARAMS(nullptr, 0) }; // 2104056873
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_LODInfo_MetaData[] = {
		{ "Category", "LevelOfDetails" },
		{ "Comment", "/** Struct containing information for each LOD level, such as materials to use, and when use the LOD. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothAsset.h" },
		{ "ToolTip", "Struct containing information for each LOD level, such as materials to use, and when use the LOD." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_LODInfo = { "LODInfo", nullptr, (EPropertyFlags)0x0040000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothAsset, LODInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_LODInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_LODInfo_MetaData)) }; // 2104056873
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_DisableBelowMinLodStripping_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_DisableBelowMinLodStripping = { "DisableBelowMinLodStripping", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothAsset, DisableBelowMinLodStripping), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_DisableBelowMinLodStripping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_DisableBelowMinLodStripping_MetaData)) }; // 3656766386
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_MinLod_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "DisplayName", "Minimum LOD" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_MinLod = { "MinLod", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothAsset, MinLod), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_MinLod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_MinLod_MetaData)) }; // 1463691826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_bSupportRayTracing_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "Comment", "/** Enable raytracing for this asset. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothAsset.h" },
		{ "ToolTip", "Enable raytracing for this asset." },
	};
#endif
	void Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_bSupportRayTracing_SetBit(void* Obj)
	{
		((UChaosClothAsset*)Obj)->bSupportRayTracing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_bSupportRayTracing = { "bSupportRayTracing", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UChaosClothAsset), &Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_bSupportRayTracing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_bSupportRayTracing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_bSupportRayTracing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_RayTracingMinLOD_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "Comment", "/** Minimum raytracing LOD for this asset. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothAsset.h" },
		{ "ToolTip", "Minimum raytracing LOD for this asset." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_RayTracingMinLOD = { "RayTracingMinLOD", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothAsset, RayTracingMinLOD), METADATA_PARAMS(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_RayTracingMinLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_RayTracingMinLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_bSmoothTransition_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "Comment", "/** Whether to blend positions between the skinned/simulated transitions of the cloth render mesh. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothAsset.h" },
		{ "ToolTip", "Whether to blend positions between the skinned/simulated transitions of the cloth render mesh." },
	};
#endif
	void Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_bSmoothTransition_SetBit(void* Obj)
	{
		((UChaosClothAsset*)Obj)->bSmoothTransition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_bSmoothTransition = { "bSmoothTransition", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UChaosClothAsset), &Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_bSmoothTransition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_bSmoothTransition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_bSmoothTransition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_bUseMultipleInfluences_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "Comment", "/** Whether to use multiple triangle influences on the proxy wrap deformer to help smoothen deformations. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothAsset.h" },
		{ "ToolTip", "Whether to use multiple triangle influences on the proxy wrap deformer to help smoothen deformations." },
	};
#endif
	void Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_bUseMultipleInfluences_SetBit(void* Obj)
	{
		((UChaosClothAsset*)Obj)->bUseMultipleInfluences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_bUseMultipleInfluences = { "bUseMultipleInfluences", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UChaosClothAsset), &Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_bUseMultipleInfluences_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_bUseMultipleInfluences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_bUseMultipleInfluences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_SkinningKernelRadius_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "Comment", "/** The radius from which to get the multiple triangle influences from the simulated proxy mesh. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothAsset.h" },
		{ "ToolTip", "The radius from which to get the multiple triangle influences from the simulated proxy mesh." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_SkinningKernelRadius = { "SkinningKernelRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothAsset, SkinningKernelRadius), METADATA_PARAMS(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_SkinningKernelRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_SkinningKernelRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_ShadowPhysicsAsset_MetaData[] = {
		{ "BlueprintGetter", "GetShadowPhysicsAsset" },
		{ "Category", "Lighting" },
		{ "Comment", "/**\n\x09 * Physics asset whose shapes will be used for shadowing when components have bCastCharacterCapsuleDirectShadow or bCastCharacterCapsuleIndirectShadow enabled.\n\x09 * Only spheres and sphyl shapes in the physics asset can be supported.  The more shapes used, the higher the cost of the capsule shadows will be.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothAsset.h" },
		{ "ToolTip", "Physics asset whose shapes will be used for shadowing when components have bCastCharacterCapsuleDirectShadow or bCastCharacterCapsuleIndirectShadow enabled.\nOnly spheres and sphyl shapes in the physics asset can be supported.  The more shapes used, the higher the cost of the capsule shadows will be." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_ShadowPhysicsAsset = { "ShadowPhysicsAsset", nullptr, (EPropertyFlags)0x0044010000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothAsset, ShadowPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_ShadowPhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_ShadowPhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_AssetGuid_MetaData[] = {
		{ "Comment", "/** A unique identifier as used by the section rendering code. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothAsset.h" },
		{ "ToolTip", "A unique identifier as used by the section rendering code." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_AssetGuid = { "AssetGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothAsset, AssetGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_AssetGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_AssetGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosClothAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_DataflowAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_DataflowTerminal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_Materials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_PhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_LODInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_LODInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_DisableBelowMinLodStripping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_MinLod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_bSupportRayTracing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_RayTracingMinLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_bSmoothTransition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_bUseMultipleInfluences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_SkinningKernelRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_ShadowPhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAsset_Statics::NewProp_AssetGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosClothAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosClothAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosClothAsset_Statics::ClassParams = {
		&UChaosClothAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChaosClothAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAsset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosClothAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosClothAsset()
	{
		if (!Z_Registration_Info_UClass_UChaosClothAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosClothAsset.OuterSingleton, Z_Construct_UClass_UChaosClothAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosClothAsset.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETENGINE_API UClass* StaticClass<UChaosClothAsset>()
	{
		return UChaosClothAsset::StaticClass();
	}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UChaosClothAsset)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_Statics::EnumInfo[] = {
		{ EClothAssetAsyncProperties_StaticEnum, TEXT("EClothAssetAsyncProperties"), &Z_Registration_Info_UEnum_EClothAssetAsyncProperties, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1728051380U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosClothAsset, UChaosClothAsset::StaticClass, TEXT("UChaosClothAsset"), &Z_Registration_Info_UClass_UChaosClothAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosClothAsset), 130133159U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_759679861(TEXT("/Script/ChaosClothAssetEngine"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAsset_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
