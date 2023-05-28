// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassGameplayDebug/Public/MassGameplayDebugTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassGameplayDebugTypes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
	MASSGAMEPLAYDEBUG_API UEnum* Z_Construct_UEnum_MassGameplayDebug_EMassEntityDebugShape();
	MASSGAMEPLAYDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FAgentDebugVisualization();
	MASSGAMEPLAYDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FDataFragment_DebugVis();
	MASSGAMEPLAYDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FMassDebuggableTag();
	MASSGAMEPLAYDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FSimDebugDataRow();
	MASSGAMEPLAYDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FSimDebugVisFragment();
	UPackage* Z_Construct_UPackage__Script_MassGameplayDebug();
// End Cross Module References

static_assert(std::is_polymorphic<FSimDebugDataRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSimDebugDataRow cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimDebugDataRow;
class UScriptStruct* FSimDebugDataRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimDebugDataRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimDebugDataRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimDebugDataRow, (UObject*)Z_Construct_UPackage__Script_MassGameplayDebug(), TEXT("SimDebugDataRow"));
	}
	return Z_Registration_Info_UScriptStruct_SimDebugDataRow.OuterSingleton;
}
template<> MASSGAMEPLAYDEBUG_API UScriptStruct* StaticStruct<FSimDebugDataRow>()
{
	return FSimDebugDataRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimDebugDataRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassGameplayDebugTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimDebugDataRow>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MassGameplayDebugTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimDebugDataRow, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::NewProp_MaterialOverride_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MassGameplayDebugTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::NewProp_MaterialOverride = { "MaterialOverride", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimDebugDataRow, MaterialOverride), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::NewProp_MaterialOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::NewProp_MaterialOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MassGameplayDebugTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimDebugDataRow, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::NewProp_Scale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::NewProp_MaterialOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::NewProp_Scale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassGameplayDebug,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SimDebugDataRow",
		sizeof(FSimDebugDataRow),
		alignof(FSimDebugDataRow),
		Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimDebugDataRow()
	{
		if (!Z_Registration_Info_UScriptStruct_SimDebugDataRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimDebugDataRow.InnerSingleton, Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimDebugDataRow.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSimDebugVisFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FSimDebugVisFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimDebugVisFragment;
class UScriptStruct* FSimDebugVisFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimDebugVisFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimDebugVisFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimDebugVisFragment, (UObject*)Z_Construct_UPackage__Script_MassGameplayDebug(), TEXT("SimDebugVisFragment"));
	}
	return Z_Registration_Info_UScriptStruct_SimDebugVisFragment.OuterSingleton;
}
template<> MASSGAMEPLAYDEBUG_API UScriptStruct* StaticStruct<FSimDebugVisFragment>()
{
	return FSimDebugVisFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimDebugVisFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimDebugVisFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassGameplayDebugTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimDebugVisFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimDebugVisFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimDebugVisFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassGameplayDebug,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"SimDebugVisFragment",
		sizeof(FSimDebugVisFragment),
		alignof(FSimDebugVisFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimDebugVisFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimDebugVisFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimDebugVisFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_SimDebugVisFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimDebugVisFragment.InnerSingleton, Z_Construct_UScriptStruct_FSimDebugVisFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimDebugVisFragment.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassEntityDebugShape;
	static UEnum* EMassEntityDebugShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMassEntityDebugShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMassEntityDebugShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassGameplayDebug_EMassEntityDebugShape, (UObject*)Z_Construct_UPackage__Script_MassGameplayDebug(), TEXT("EMassEntityDebugShape"));
		}
		return Z_Registration_Info_UEnum_EMassEntityDebugShape.OuterSingleton;
	}
	template<> MASSGAMEPLAYDEBUG_API UEnum* StaticEnum<EMassEntityDebugShape>()
	{
		return EMassEntityDebugShape_StaticEnum();
	}
	struct Z_Construct_UEnum_MassGameplayDebug_EMassEntityDebugShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MassGameplayDebug_EMassEntityDebugShape_Statics::Enumerators[] = {
		{ "EMassEntityDebugShape::Box", (int64)EMassEntityDebugShape::Box },
		{ "EMassEntityDebugShape::Cone", (int64)EMassEntityDebugShape::Cone },
		{ "EMassEntityDebugShape::Cylinder", (int64)EMassEntityDebugShape::Cylinder },
		{ "EMassEntityDebugShape::Capsule", (int64)EMassEntityDebugShape::Capsule },
		{ "EMassEntityDebugShape::MAX", (int64)EMassEntityDebugShape::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MassGameplayDebug_EMassEntityDebugShape_Statics::Enum_MetaDataParams[] = {
		{ "Box.Name", "EMassEntityDebugShape::Box" },
		{ "Capsule.Name", "EMassEntityDebugShape::Capsule" },
		{ "Cone.Name", "EMassEntityDebugShape::Cone" },
		{ "Cylinder.Name", "EMassEntityDebugShape::Cylinder" },
		{ "MAX.Name", "EMassEntityDebugShape::MAX" },
		{ "ModuleRelativePath", "Public/MassGameplayDebugTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassGameplayDebug_EMassEntityDebugShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MassGameplayDebug,
		nullptr,
		"EMassEntityDebugShape",
		"EMassEntityDebugShape",
		Z_Construct_UEnum_MassGameplayDebug_EMassEntityDebugShape_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MassGameplayDebug_EMassEntityDebugShape_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MassGameplayDebug_EMassEntityDebugShape_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MassGameplayDebug_EMassEntityDebugShape_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MassGameplayDebug_EMassEntityDebugShape()
	{
		if (!Z_Registration_Info_UEnum_EMassEntityDebugShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassEntityDebugShape.InnerSingleton, Z_Construct_UEnum_MassGameplayDebug_EMassEntityDebugShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMassEntityDebugShape.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDataFragment_DebugVis>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FDataFragment_DebugVis cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataFragment_DebugVis;
class UScriptStruct* FDataFragment_DebugVis::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataFragment_DebugVis.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataFragment_DebugVis.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataFragment_DebugVis, (UObject*)Z_Construct_UPackage__Script_MassGameplayDebug(), TEXT("DataFragment_DebugVis"));
	}
	return Z_Registration_Info_UScriptStruct_DataFragment_DebugVis.OuterSingleton;
}
template<> MASSGAMEPLAYDEBUG_API UScriptStruct* StaticStruct<FDataFragment_DebugVis>()
{
	return FDataFragment_DebugVis::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataFragment_DebugVis_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Shape_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Shape;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFragment_DebugVis_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassGameplayDebugTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataFragment_DebugVis_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataFragment_DebugVis>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDataFragment_DebugVis_Statics::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFragment_DebugVis_Statics::NewProp_Shape_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MassGameplayDebugTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDataFragment_DebugVis_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataFragment_DebugVis, Shape), Z_Construct_UEnum_MassGameplayDebug_EMassEntityDebugShape, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFragment_DebugVis_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFragment_DebugVis_Statics::NewProp_Shape_MetaData)) }; // 1379628009
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataFragment_DebugVis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFragment_DebugVis_Statics::NewProp_Shape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFragment_DebugVis_Statics::NewProp_Shape,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataFragment_DebugVis_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassGameplayDebug,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"DataFragment_DebugVis",
		sizeof(FDataFragment_DebugVis),
		alignof(FDataFragment_DebugVis),
		Z_Construct_UScriptStruct_FDataFragment_DebugVis_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFragment_DebugVis_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFragment_DebugVis_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFragment_DebugVis_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataFragment_DebugVis()
	{
		if (!Z_Registration_Info_UScriptStruct_DataFragment_DebugVis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataFragment_DebugVis.InnerSingleton, Z_Construct_UScriptStruct_FDataFragment_DebugVis_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataFragment_DebugVis.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassDebuggableTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassDebuggableTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassDebuggableTag;
class UScriptStruct* FMassDebuggableTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassDebuggableTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassDebuggableTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassDebuggableTag, (UObject*)Z_Construct_UPackage__Script_MassGameplayDebug(), TEXT("MassDebuggableTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassDebuggableTag.OuterSingleton;
}
template<> MASSGAMEPLAYDEBUG_API UScriptStruct* StaticStruct<FMassDebuggableTag>()
{
	return FMassDebuggableTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassDebuggableTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassDebuggableTag_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassGameplayDebugTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassDebuggableTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassDebuggableTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassDebuggableTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassGameplayDebug,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassDebuggableTag",
		sizeof(FMassDebuggableTag),
		alignof(FMassDebuggableTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassDebuggableTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassDebuggableTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassDebuggableTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassDebuggableTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassDebuggableTag.InnerSingleton, Z_Construct_UScriptStruct_FMassDebuggableTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassDebuggableTag.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAgentDebugVisualization>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAgentDebugVisualization cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AgentDebugVisualization;
class UScriptStruct* FAgentDebugVisualization::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AgentDebugVisualization.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AgentDebugVisualization.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAgentDebugVisualization, (UObject*)Z_Construct_UPackage__Script_MassGameplayDebug(), TEXT("AgentDebugVisualization"));
	}
	return Z_Registration_Info_UScriptStruct_AgentDebugVisualization.OuterSingleton;
}
template<> MASSGAMEPLAYDEBUG_API UScriptStruct* StaticStruct<FAgentDebugVisualization>()
{
	return FAgentDebugVisualization::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualNearCullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_VisualNearCullDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualFarCullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_VisualFarCullDistance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WireShape_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WireShape_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WireShape;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassGameplayDebugTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAgentDebugVisualization>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Mass|Debug" },
		{ "ModuleRelativePath", "Public/MassGameplayDebugTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAgentDebugVisualization, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_MaterialOverride_MetaData[] = {
		{ "Category", "Mass|Debug" },
		{ "ModuleRelativePath", "Public/MassGameplayDebugTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_MaterialOverride = { "MaterialOverride", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAgentDebugVisualization, MaterialOverride), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_MaterialOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_MaterialOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_VisualNearCullDistance_MetaData[] = {
		{ "Category", "Mass|Debug" },
		{ "Comment", "/** Near cull distance to override default value for that agent type */" },
		{ "ModuleRelativePath", "Public/MassGameplayDebugTypes.h" },
		{ "ToolTip", "Near cull distance to override default value for that agent type" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_VisualNearCullDistance = { "VisualNearCullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAgentDebugVisualization, VisualNearCullDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_VisualNearCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_VisualNearCullDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_VisualFarCullDistance_MetaData[] = {
		{ "Category", "Mass|Debug" },
		{ "Comment", "/** Far cull distance to override default value for that agent type */" },
		{ "ModuleRelativePath", "Public/MassGameplayDebugTypes.h" },
		{ "ToolTip", "Far cull distance to override default value for that agent type" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_VisualFarCullDistance = { "VisualFarCullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAgentDebugVisualization, VisualFarCullDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_VisualFarCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_VisualFarCullDistance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_WireShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_WireShape_MetaData[] = {
		{ "Category", "Mass|Debug" },
		{ "Comment", "/** If Mesh is not set this WireShape will be used for debug drawing via GameplayDebugger */" },
		{ "ModuleRelativePath", "Public/MassGameplayDebugTypes.h" },
		{ "ToolTip", "If Mesh is not set this WireShape will be used for debug drawing via GameplayDebugger" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_WireShape = { "WireShape", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAgentDebugVisualization, WireShape), Z_Construct_UEnum_MassGameplayDebug_EMassEntityDebugShape, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_WireShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_WireShape_MetaData)) }; // 1379628009
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_MaterialOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_VisualNearCullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_VisualFarCullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_WireShape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewProp_WireShape,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassGameplayDebug,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AgentDebugVisualization",
		sizeof(FAgentDebugVisualization),
		alignof(FAgentDebugVisualization),
		Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAgentDebugVisualization()
	{
		if (!Z_Registration_Info_UScriptStruct_AgentDebugVisualization.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AgentDebugVisualization.InnerSingleton, Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AgentDebugVisualization.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassGameplayDebugTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassGameplayDebugTypes_h_Statics::EnumInfo[] = {
		{ EMassEntityDebugShape_StaticEnum, TEXT("EMassEntityDebugShape"), &Z_Registration_Info_UEnum_EMassEntityDebugShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1379628009U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassGameplayDebugTypes_h_Statics::ScriptStructInfo[] = {
		{ FSimDebugDataRow::StaticStruct, Z_Construct_UScriptStruct_FSimDebugDataRow_Statics::NewStructOps, TEXT("SimDebugDataRow"), &Z_Registration_Info_UScriptStruct_SimDebugDataRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimDebugDataRow), 3244379655U) },
		{ FSimDebugVisFragment::StaticStruct, Z_Construct_UScriptStruct_FSimDebugVisFragment_Statics::NewStructOps, TEXT("SimDebugVisFragment"), &Z_Registration_Info_UScriptStruct_SimDebugVisFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimDebugVisFragment), 2369947602U) },
		{ FDataFragment_DebugVis::StaticStruct, Z_Construct_UScriptStruct_FDataFragment_DebugVis_Statics::NewStructOps, TEXT("DataFragment_DebugVis"), &Z_Registration_Info_UScriptStruct_DataFragment_DebugVis, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataFragment_DebugVis), 1863765801U) },
		{ FMassDebuggableTag::StaticStruct, Z_Construct_UScriptStruct_FMassDebuggableTag_Statics::NewStructOps, TEXT("MassDebuggableTag"), &Z_Registration_Info_UScriptStruct_MassDebuggableTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassDebuggableTag), 2002279280U) },
		{ FAgentDebugVisualization::StaticStruct, Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics::NewStructOps, TEXT("AgentDebugVisualization"), &Z_Registration_Info_UScriptStruct_AgentDebugVisualization, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAgentDebugVisualization), 2813970967U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassGameplayDebugTypes_h_2697945774(TEXT("/Script/MassGameplayDebug"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassGameplayDebugTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassGameplayDebugTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassGameplayDebugTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassGameplayDebugTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
