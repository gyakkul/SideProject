// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassRepresentation/Public/MassRepresentationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassRepresentationTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentMobility();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	MASSREPRESENTATION_API UEnum* Z_Construct_UEnum_MassRepresentation_EMassRepresentationType();
	MASSREPRESENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FISMCSharedData();
	MASSREPRESENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo();
	MASSREPRESENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassLODSignificanceRange();
	MASSREPRESENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc();
	MASSREPRESENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc();
	UPackage* Z_Construct_UPackage__Script_MassRepresentation();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassRepresentationType;
	static UEnum* EMassRepresentationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMassRepresentationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMassRepresentationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassRepresentation_EMassRepresentationType, (UObject*)Z_Construct_UPackage__Script_MassRepresentation(), TEXT("EMassRepresentationType"));
		}
		return Z_Registration_Info_UEnum_EMassRepresentationType.OuterSingleton;
	}
	template<> MASSREPRESENTATION_API UEnum* StaticEnum<EMassRepresentationType>()
	{
		return EMassRepresentationType_StaticEnum();
	}
	struct Z_Construct_UEnum_MassRepresentation_EMassRepresentationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MassRepresentation_EMassRepresentationType_Statics::Enumerators[] = {
		{ "EMassRepresentationType::HighResSpawnedActor", (int64)EMassRepresentationType::HighResSpawnedActor },
		{ "EMassRepresentationType::LowResSpawnedActor", (int64)EMassRepresentationType::LowResSpawnedActor },
		{ "EMassRepresentationType::StaticMeshInstance", (int64)EMassRepresentationType::StaticMeshInstance },
		{ "EMassRepresentationType::None", (int64)EMassRepresentationType::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MassRepresentation_EMassRepresentationType_Statics::Enum_MetaDataParams[] = {
		{ "HighResSpawnedActor.Name", "EMassRepresentationType::HighResSpawnedActor" },
		{ "LowResSpawnedActor.Name", "EMassRepresentationType::LowResSpawnedActor" },
		{ "ModuleRelativePath", "Public/MassRepresentationTypes.h" },
		{ "None.Name", "EMassRepresentationType::None" },
		{ "StaticMeshInstance.Name", "EMassRepresentationType::StaticMeshInstance" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassRepresentation_EMassRepresentationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MassRepresentation,
		nullptr,
		"EMassRepresentationType",
		"EMassRepresentationType",
		Z_Construct_UEnum_MassRepresentation_EMassRepresentationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MassRepresentation_EMassRepresentationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MassRepresentation_EMassRepresentationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MassRepresentation_EMassRepresentationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MassRepresentation_EMassRepresentationType()
	{
		if (!Z_Registration_Info_UEnum_EMassRepresentationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassRepresentationType.InnerSingleton, Z_Construct_UEnum_MassRepresentation_EMassRepresentationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMassRepresentationType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticMeshInstanceVisualizationMeshDesc;
class UScriptStruct* FStaticMeshInstanceVisualizationMeshDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshInstanceVisualizationMeshDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticMeshInstanceVisualizationMeshDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc, (UObject*)Z_Construct_UPackage__Script_MassRepresentation(), TEXT("StaticMeshInstanceVisualizationMeshDesc"));
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshInstanceVisualizationMeshDesc.OuterSingleton;
}
template<> MASSREPRESENTATION_API UScriptStruct* StaticStruct<FStaticMeshInstanceVisualizationMeshDesc>()
{
	return FStaticMeshInstanceVisualizationMeshDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialOverrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLODSignificance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLODSignificance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLODSignificance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLODSignificance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadows_MetaData[];
#endif
		static void NewProp_bCastShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mobility_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mobility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassRepresentationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshInstanceVisualizationMeshDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Mass|Visual" },
		{ "Comment", "/** The static mesh visual representation */" },
		{ "ModuleRelativePath", "Public/MassRepresentationTypes.h" },
		{ "ToolTip", "The static mesh visual representation" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMeshInstanceVisualizationMeshDesc, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_MaterialOverrides_Inner = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_MaterialOverrides_MetaData[] = {
		{ "Category", "Mass|Visual" },
		{ "Comment", "/**\n\x09 * Material overrides for the static mesh visual representation. \n\x09 * \n\x09 * Array indices correspond to material slot indices on the static mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MassRepresentationTypes.h" },
		{ "ToolTip", "Material overrides for the static mesh visual representation.\n\nArray indices correspond to material slot indices on the static mesh." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_MaterialOverrides = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMeshInstanceVisualizationMeshDesc, MaterialOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_MaterialOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_MaterialOverrides_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_MinLODSignificance_MetaData[] = {
		{ "Category", "Mass|Visual" },
		{ "Comment", "/** The minimum inclusive LOD significance to start using this static mesh */" },
		{ "ModuleRelativePath", "Public/MassRepresentationTypes.h" },
		{ "ToolTip", "The minimum inclusive LOD significance to start using this static mesh" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_MinLODSignificance = { "MinLODSignificance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMeshInstanceVisualizationMeshDesc, MinLODSignificance), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_MinLODSignificance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_MinLODSignificance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_MaxLODSignificance_MetaData[] = {
		{ "Category", "Mass|Visual" },
		{ "Comment", "/** The maximum exclusive LOD significance to stop using this static mesh */" },
		{ "ModuleRelativePath", "Public/MassRepresentationTypes.h" },
		{ "ToolTip", "The maximum exclusive LOD significance to stop using this static mesh" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_MaxLODSignificance = { "MaxLODSignificance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMeshInstanceVisualizationMeshDesc, MaxLODSignificance), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_MaxLODSignificance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_MaxLODSignificance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_bCastShadows_MetaData[] = {
		{ "Category", "Mass|Visual" },
		{ "Comment", "/** Controls whether the ISM can cast shadow or not */" },
		{ "ModuleRelativePath", "Public/MassRepresentationTypes.h" },
		{ "ToolTip", "Controls whether the ISM can cast shadow or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_bCastShadows_SetBit(void* Obj)
	{
		((FStaticMeshInstanceVisualizationMeshDesc*)Obj)->bCastShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_bCastShadows = { "bCastShadows", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStaticMeshInstanceVisualizationMeshDesc), &Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_bCastShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_bCastShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_bCastShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_Mobility_MetaData[] = {
		{ "Category", "Mass|Visual" },
		{ "Comment", "/** Controls the mobility of the ISM */" },
		{ "ModuleRelativePath", "Public/MassRepresentationTypes.h" },
		{ "ToolTip", "Controls the mobility of the ISM" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_Mobility = { "Mobility", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMeshInstanceVisualizationMeshDesc, Mobility), Z_Construct_UEnum_Engine_EComponentMobility, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_Mobility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_Mobility_MetaData)) }; // 3258784245
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_MaterialOverrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_MaterialOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_MinLODSignificance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_MaxLODSignificance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_bCastShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewProp_Mobility,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
		nullptr,
		&NewStructOps,
		"StaticMeshInstanceVisualizationMeshDesc",
		sizeof(FStaticMeshInstanceVisualizationMeshDesc),
		alignof(FStaticMeshInstanceVisualizationMeshDesc),
		Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_StaticMeshInstanceVisualizationMeshDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticMeshInstanceVisualizationMeshDesc.InnerSingleton, Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StaticMeshInstanceVisualizationMeshDesc.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStaticMeshInstanceVisualizationDesc>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStaticMeshInstanceVisualizationDesc cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticMeshInstanceVisualizationDesc;
class UScriptStruct* FStaticMeshInstanceVisualizationDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshInstanceVisualizationDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticMeshInstanceVisualizationDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc, (UObject*)Z_Construct_UPackage__Script_MassRepresentation(), TEXT("StaticMeshInstanceVisualizationDesc"));
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshInstanceVisualizationDesc.OuterSingleton;
}
template<> MASSREPRESENTATION_API UScriptStruct* StaticStruct<FStaticMeshInstanceVisualizationDesc>()
{
	return FStaticMeshInstanceVisualizationDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Meshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTransformOffset_MetaData[];
#endif
		static void NewProp_bUseTransformOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTransformOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassRepresentationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshInstanceVisualizationDesc>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc, METADATA_PARAMS(nullptr, 0) }; // 1573587155
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::NewProp_Meshes_MetaData[] = {
		{ "Category", "Mass|Visual" },
		{ "Comment", "/** \n\x09 * Mesh descriptions. These will be instanced together using the same transform for each, to \n\x09 * visualize the given agent.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MassRepresentationTypes.h" },
		{ "ToolTip", "Mesh descriptions. These will be instanced together using the same transform for each, to\nvisualize the given agent." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMeshInstanceVisualizationDesc, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::NewProp_Meshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::NewProp_Meshes_MetaData)) }; // 1573587155
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::NewProp_bUseTransformOffset_MetaData[] = {
		{ "Category", "Mass|Visual" },
		{ "Comment", "/** Boolean to enable code to transform the static meshes if not align the mass agent transform */" },
		{ "ModuleRelativePath", "Public/MassRepresentationTypes.h" },
		{ "ToolTip", "Boolean to enable code to transform the static meshes if not align the mass agent transform" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::NewProp_bUseTransformOffset_SetBit(void* Obj)
	{
		((FStaticMeshInstanceVisualizationDesc*)Obj)->bUseTransformOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::NewProp_bUseTransformOffset = { "bUseTransformOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStaticMeshInstanceVisualizationDesc), &Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::NewProp_bUseTransformOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::NewProp_bUseTransformOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::NewProp_bUseTransformOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::NewProp_TransformOffset_MetaData[] = {
		{ "Category", "Mass|Visual" },
		{ "Comment", "/** Transform to offset the static meshes if not align the mass agent transform */" },
		{ "EditCondition", "bUseTransformOffset" },
		{ "ModuleRelativePath", "Public/MassRepresentationTypes.h" },
		{ "ToolTip", "Transform to offset the static meshes if not align the mass agent transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::NewProp_TransformOffset = { "TransformOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMeshInstanceVisualizationDesc, TransformOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::NewProp_TransformOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::NewProp_TransformOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::NewProp_Meshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::NewProp_Meshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::NewProp_bUseTransformOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::NewProp_TransformOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StaticMeshInstanceVisualizationDesc",
		sizeof(FStaticMeshInstanceVisualizationDesc),
		alignof(FStaticMeshInstanceVisualizationDesc),
		Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_StaticMeshInstanceVisualizationDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticMeshInstanceVisualizationDesc.InnerSingleton, Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StaticMeshInstanceVisualizationDesc.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ISMCSharedData;
class UScriptStruct* FISMCSharedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ISMCSharedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ISMCSharedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FISMCSharedData, (UObject*)Z_Construct_UPackage__Script_MassRepresentation(), TEXT("ISMCSharedData"));
	}
	return Z_Registration_Info_UScriptStruct_ISMCSharedData.OuterSingleton;
}
template<> MASSREPRESENTATION_API UScriptStruct* StaticStruct<FISMCSharedData>()
{
	return FISMCSharedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FISMCSharedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMCSharedData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassRepresentationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FISMCSharedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FISMCSharedData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FISMCSharedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
		nullptr,
		&NewStructOps,
		"ISMCSharedData",
		sizeof(FISMCSharedData),
		alignof(FISMCSharedData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FISMCSharedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMCSharedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FISMCSharedData()
	{
		if (!Z_Registration_Info_UScriptStruct_ISMCSharedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ISMCSharedData.InnerSingleton, Z_Construct_UScriptStruct_FISMCSharedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ISMCSharedData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassLODSignificanceRange;
class UScriptStruct* FMassLODSignificanceRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassLODSignificanceRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassLODSignificanceRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassLODSignificanceRange, (UObject*)Z_Construct_UPackage__Script_MassRepresentation(), TEXT("MassLODSignificanceRange"));
	}
	return Z_Registration_Info_UScriptStruct_MassLODSignificanceRange.OuterSingleton;
}
template<> MASSREPRESENTATION_API UScriptStruct* StaticStruct<FMassLODSignificanceRange>()
{
	return FMassLODSignificanceRange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassLODSignificanceRange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_StaticMeshRefs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshRefs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticMeshRefs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLODSignificanceRange_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassRepresentationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassLODSignificanceRange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassLODSignificanceRange>();
	}
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMassLODSignificanceRange_Statics::NewProp_StaticMeshRefs_Inner = { "StaticMeshRefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLODSignificanceRange_Statics::NewProp_StaticMeshRefs_MetaData[] = {
		{ "Comment", "/** The component handling these instances */" },
		{ "ModuleRelativePath", "Public/MassRepresentationTypes.h" },
		{ "ToolTip", "The component handling these instances" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassLODSignificanceRange_Statics::NewProp_StaticMeshRefs = { "StaticMeshRefs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassLODSignificanceRange, StaticMeshRefs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLODSignificanceRange_Statics::NewProp_StaticMeshRefs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLODSignificanceRange_Statics::NewProp_StaticMeshRefs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassLODSignificanceRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLODSignificanceRange_Statics::NewProp_StaticMeshRefs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLODSignificanceRange_Statics::NewProp_StaticMeshRefs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassLODSignificanceRange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
		nullptr,
		&NewStructOps,
		"MassLODSignificanceRange",
		sizeof(FMassLODSignificanceRange),
		alignof(FMassLODSignificanceRange),
		Z_Construct_UScriptStruct_FMassLODSignificanceRange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLODSignificanceRange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLODSignificanceRange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLODSignificanceRange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassLODSignificanceRange()
	{
		if (!Z_Registration_Info_UScriptStruct_MassLODSignificanceRange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassLODSignificanceRange.InnerSingleton, Z_Construct_UScriptStruct_FMassLODSignificanceRange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassLODSignificanceRange.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassInstancedStaticMeshInfo;
class UScriptStruct* FMassInstancedStaticMeshInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassInstancedStaticMeshInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassInstancedStaticMeshInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo, (UObject*)Z_Construct_UPackage__Script_MassRepresentation(), TEXT("MassInstancedStaticMeshInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MassInstancedStaticMeshInfo.OuterSingleton;
}
template<> MASSREPRESENTATION_API UScriptStruct* StaticStruct<FMassInstancedStaticMeshInfo>()
{
	return FMassInstancedStaticMeshInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Desc;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InstancedStaticMeshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedStaticMeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancedStaticMeshComponents;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODSignificanceRanges_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODSignificanceRanges_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODSignificanceRanges;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassRepresentationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassInstancedStaticMeshInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::NewProp_Desc_MetaData[] = {
		{ "Comment", "/** Information about this static mesh which will represent all instances */" },
		{ "ModuleRelativePath", "Public/MassRepresentationTypes.h" },
		{ "ToolTip", "Information about this static mesh which will represent all instances" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::NewProp_Desc = { "Desc", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassInstancedStaticMeshInfo, Desc), Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::NewProp_Desc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::NewProp_Desc_MetaData)) }; // 1697696323
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::NewProp_InstancedStaticMeshComponents_Inner = { "InstancedStaticMeshComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::NewProp_InstancedStaticMeshComponents_MetaData[] = {
		{ "Comment", "/** The component handling these instances */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassRepresentationTypes.h" },
		{ "ToolTip", "The component handling these instances" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::NewProp_InstancedStaticMeshComponents = { "InstancedStaticMeshComponents", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassInstancedStaticMeshInfo, InstancedStaticMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::NewProp_InstancedStaticMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::NewProp_InstancedStaticMeshComponents_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::NewProp_LODSignificanceRanges_Inner = { "LODSignificanceRanges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMassLODSignificanceRange, METADATA_PARAMS(nullptr, 0) }; // 2223144396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::NewProp_LODSignificanceRanges_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassRepresentationTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::NewProp_LODSignificanceRanges = { "LODSignificanceRanges", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassInstancedStaticMeshInfo, LODSignificanceRanges), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::NewProp_LODSignificanceRanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::NewProp_LODSignificanceRanges_MetaData)) }; // 2223144396
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::NewProp_Desc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::NewProp_InstancedStaticMeshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::NewProp_InstancedStaticMeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::NewProp_LODSignificanceRanges_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::NewProp_LODSignificanceRanges,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
		nullptr,
		&NewStructOps,
		"MassInstancedStaticMeshInfo",
		sizeof(FMassInstancedStaticMeshInfo),
		alignof(FMassInstancedStaticMeshInfo),
		Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MassInstancedStaticMeshInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassInstancedStaticMeshInfo.InnerSingleton, Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassInstancedStaticMeshInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationTypes_h_Statics::EnumInfo[] = {
		{ EMassRepresentationType_StaticEnum, TEXT("EMassRepresentationType"), &Z_Registration_Info_UEnum_EMassRepresentationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3602014643U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationTypes_h_Statics::ScriptStructInfo[] = {
		{ FStaticMeshInstanceVisualizationMeshDesc::StaticStruct, Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics::NewStructOps, TEXT("StaticMeshInstanceVisualizationMeshDesc"), &Z_Registration_Info_UScriptStruct_StaticMeshInstanceVisualizationMeshDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticMeshInstanceVisualizationMeshDesc), 1573587155U) },
		{ FStaticMeshInstanceVisualizationDesc::StaticStruct, Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics::NewStructOps, TEXT("StaticMeshInstanceVisualizationDesc"), &Z_Registration_Info_UScriptStruct_StaticMeshInstanceVisualizationDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticMeshInstanceVisualizationDesc), 1697696323U) },
		{ FISMCSharedData::StaticStruct, Z_Construct_UScriptStruct_FISMCSharedData_Statics::NewStructOps, TEXT("ISMCSharedData"), &Z_Registration_Info_UScriptStruct_ISMCSharedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FISMCSharedData), 2826222421U) },
		{ FMassLODSignificanceRange::StaticStruct, Z_Construct_UScriptStruct_FMassLODSignificanceRange_Statics::NewStructOps, TEXT("MassLODSignificanceRange"), &Z_Registration_Info_UScriptStruct_MassLODSignificanceRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassLODSignificanceRange), 2223144396U) },
		{ FMassInstancedStaticMeshInfo::StaticStruct, Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics::NewStructOps, TEXT("MassInstancedStaticMeshInfo"), &Z_Registration_Info_UScriptStruct_MassInstancedStaticMeshInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassInstancedStaticMeshInfo), 1846068014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationTypes_h_802918257(TEXT("/Script/MassRepresentation"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
