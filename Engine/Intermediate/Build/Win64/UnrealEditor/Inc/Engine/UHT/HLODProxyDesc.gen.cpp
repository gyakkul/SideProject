// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/HLOD/HLODProxyDesc.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "../../Source/Runtime/Engine/Public/SceneTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODProxyDesc() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UHLODProxyDesc();
	ENGINE_API UClass* Z_Construct_UClass_UHLODProxyDesc_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomPrimitiveData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHLODISMComponentDesc();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialProxySettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HLODISMComponentDesc;
class UScriptStruct* FHLODISMComponentDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HLODISMComponentDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HLODISMComponentDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHLODISMComponentDesc, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("HLODISMComponentDesc"));
	}
	return Z_Registration_Info_UScriptStruct_HLODISMComponentDesc.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FHLODISMComponentDesc>()
{
	return FHLODISMComponentDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Instances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Instances;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancesCustomPrimitiveData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancesCustomPrimitiveData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancesCustomPrimitiveData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Describe a LODActor ISM component */" },
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
		{ "ToolTip", "Describe a LODActor ISM component" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHLODISMComponentDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHLODISMComponentDesc, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHLODISMComponentDesc, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Instances_Inner = { "Instances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Instances_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHLODISMComponentDesc, Instances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Instances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Instances_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_InstancesCustomPrimitiveData_Inner = { "InstancesCustomPrimitiveData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomPrimitiveData, METADATA_PARAMS(nullptr, 0) }; // 2560451921
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_InstancesCustomPrimitiveData_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_InstancesCustomPrimitiveData = { "InstancesCustomPrimitiveData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHLODISMComponentDesc, InstancesCustomPrimitiveData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_InstancesCustomPrimitiveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_InstancesCustomPrimitiveData_MetaData)) }; // 2560451921
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Instances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Instances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_InstancesCustomPrimitiveData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_InstancesCustomPrimitiveData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"HLODISMComponentDesc",
		sizeof(FHLODISMComponentDesc),
		alignof(FHLODISMComponentDesc),
		Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHLODISMComponentDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_HLODISMComponentDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HLODISMComponentDesc.InnerSingleton, Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HLODISMComponentDesc.InnerSingleton;
	}
	void UHLODProxyDesc::StaticRegisterNativesUHLODProxyDesc()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLODProxyDesc);
	UClass* Z_Construct_UClass_UHLODProxyDesc_NoRegister()
	{
		return UHLODProxyDesc::StaticClass();
	}
	struct Z_Construct_UClass_UHLODProxyDesc_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ISMComponentsDesc_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ISMComponentsDesc_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ISMComponentsDesc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODDrawDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LODDrawDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaterialMergeSettings_MetaData[];
#endif
		static void NewProp_bOverrideMaterialMergeSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaterialMergeSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideTransitionScreenSize_MetaData[];
#endif
		static void NewProp_bOverrideTransitionScreenSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideTransitionScreenSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionScreenSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionScreenSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideScreenSize_MetaData[];
#endif
		static void NewProp_bOverrideScreenSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideScreenSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ScreenSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODActorTag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LODActorTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODBakingTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HLODBakingTransform;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SubHLODDescs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubHLODDescs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubHLODDescs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHLODProxyDesc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Describe a LODActor */" },
		{ "IncludePath", "HLOD/HLODProxyDesc.h" },
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
		{ "ToolTip", "Describe a LODActor" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubActors_Inner = { "SubActors", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubActors = { "SubActors", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLODProxyDesc, SubActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLODProxyDesc, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_StaticMesh_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ISMComponentsDesc_Inner = { "ISMComponentsDesc", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHLODISMComponentDesc, METADATA_PARAMS(nullptr, 0) }; // 1420678306
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ISMComponentsDesc_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ISMComponentsDesc = { "ISMComponentsDesc", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLODProxyDesc, ISMComponentsDesc), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ISMComponentsDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ISMComponentsDesc_MetaData)) }; // 1420678306
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODDrawDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODDrawDistance = { "LODDrawDistance", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLODProxyDesc, LODDrawDistance), METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODDrawDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODDrawDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideMaterialMergeSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	void Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideMaterialMergeSettings_SetBit(void* Obj)
	{
		((UHLODProxyDesc*)Obj)->bOverrideMaterialMergeSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideMaterialMergeSettings = { "bOverrideMaterialMergeSettings", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHLODProxyDesc), &Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideMaterialMergeSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideMaterialMergeSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideMaterialMergeSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_MaterialSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLODProxyDesc, MaterialSettings), Z_Construct_UScriptStruct_FMaterialProxySettings, METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_MaterialSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_MaterialSettings_MetaData)) }; // 3442938596
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideTransitionScreenSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	void Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideTransitionScreenSize_SetBit(void* Obj)
	{
		((UHLODProxyDesc*)Obj)->bOverrideTransitionScreenSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideTransitionScreenSize = { "bOverrideTransitionScreenSize", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHLODProxyDesc), &Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideTransitionScreenSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideTransitionScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideTransitionScreenSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_TransitionScreenSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_TransitionScreenSize = { "TransitionScreenSize", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLODProxyDesc, TransitionScreenSize), METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_TransitionScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_TransitionScreenSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideScreenSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	void Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideScreenSize_SetBit(void* Obj)
	{
		((UHLODProxyDesc*)Obj)->bOverrideScreenSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideScreenSize = { "bOverrideScreenSize", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHLODProxyDesc), &Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideScreenSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideScreenSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLODProxyDesc, ScreenSize), METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ScreenSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLODProxyDesc, Key), METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODLevel = { "LODLevel", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLODProxyDesc, LODLevel), METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODActorTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODActorTag = { "LODActorTag", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLODProxyDesc, LODActorTag), METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODActorTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODActorTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLODProxyDesc, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_HLODBakingTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_HLODBakingTransform = { "HLODBakingTransform", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLODProxyDesc, HLODBakingTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_HLODBakingTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_HLODBakingTransform_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubHLODDescs_Inner = { "SubHLODDescs", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UHLODProxyDesc_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubHLODDescs_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubHLODDescs = { "SubHLODDescs", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLODProxyDesc, SubHLODDescs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubHLODDescs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubHLODDescs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHLODProxyDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ISMComponentsDesc_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ISMComponentsDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODDrawDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideMaterialMergeSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_MaterialSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideTransitionScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_TransitionScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODActorTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_HLODBakingTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubHLODDescs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubHLODDescs,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHLODProxyDesc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODProxyDesc>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLODProxyDesc_Statics::ClassParams = {
		&UHLODProxyDesc::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UHLODProxyDesc_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::PropPointers), 0),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHLODProxyDesc()
	{
		if (!Z_Registration_Info_UClass_UHLODProxyDesc.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLODProxyDesc.OuterSingleton, Z_Construct_UClass_UHLODProxyDesc_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHLODProxyDesc.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UHLODProxyDesc>()
	{
		return UHLODProxyDesc::StaticClass();
	}
	UHLODProxyDesc::UHLODProxyDesc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODProxyDesc);
	UHLODProxyDesc::~UHLODProxyDesc() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODProxyDesc_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODProxyDesc_h_Statics::ScriptStructInfo[] = {
		{ FHLODISMComponentDesc::StaticStruct, Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewStructOps, TEXT("HLODISMComponentDesc"), &Z_Registration_Info_UScriptStruct_HLODISMComponentDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHLODISMComponentDesc), 1420678306U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODProxyDesc_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHLODProxyDesc, UHLODProxyDesc::StaticClass, TEXT("UHLODProxyDesc"), &Z_Registration_Info_UClass_UHLODProxyDesc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLODProxyDesc), 2065788705U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODProxyDesc_h_2606591254(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODProxyDesc_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODProxyDesc_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODProxyDesc_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODProxyDesc_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
