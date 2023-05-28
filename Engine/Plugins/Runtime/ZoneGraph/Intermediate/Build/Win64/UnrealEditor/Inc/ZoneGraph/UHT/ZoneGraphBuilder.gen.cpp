// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphBuilder.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoneGraphBuilder() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_ZoneGraph();
	ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneShapeComponent_NoRegister();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphBuildData();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphBuilder();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphLaneHandle();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneShapeComponentBuildData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphBuilderRegisteredComponent;
class UScriptStruct* FZoneGraphBuilderRegisteredComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphBuilderRegisteredComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphBuilderRegisteredComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneGraphBuilderRegisteredComponent"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphBuilderRegisteredComponent.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneGraphBuilderRegisteredComponent>()
{
	return FZoneGraphBuilderRegisteredComponent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeHash_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ShapeHash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// 5 levels of hierarchy, 4 ration between levels (biggest bucket 4^5 = 1024 cells)\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphBuilder.h" },
		{ "ToolTip", "5 levels of hierarchy, 4 ration between levels (biggest bucket 4^5 = 1024 cells)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphBuilderRegisteredComponent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZoneGraphBuilder.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBuilderRegisteredComponent, Component), Z_Construct_UClass_UZoneShapeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent_Statics::NewProp_ShapeHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphBuilder.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent_Statics::NewProp_ShapeHash = { "ShapeHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBuilderRegisteredComponent, ShapeHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent_Statics::NewProp_ShapeHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent_Statics::NewProp_ShapeHash_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent_Statics::NewProp_ShapeHash,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneGraphBuilderRegisteredComponent",
		sizeof(FZoneGraphBuilderRegisteredComponent),
		alignof(FZoneGraphBuilderRegisteredComponent),
		Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphBuilderRegisteredComponent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphBuilderRegisteredComponent.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphBuilderRegisteredComponent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneShapeComponentBuildData;
class UScriptStruct* FZoneShapeComponentBuildData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneShapeComponentBuildData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneShapeComponentBuildData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneShapeComponentBuildData, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneShapeComponentBuildData"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneShapeComponentBuildData.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneShapeComponentBuildData>()
{
	return FZoneShapeComponentBuildData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneShapeComponentBuildData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZoneIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Lanes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lanes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Lanes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapeComponentBuildData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Build time data for UZoneShapeComponent\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphBuilder.h" },
		{ "ToolTip", "Build time data for UZoneShapeComponent" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneShapeComponentBuildData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneShapeComponentBuildData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapeComponentBuildData_Statics::NewProp_ZoneIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphBuilder.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneShapeComponentBuildData_Statics::NewProp_ZoneIndex = { "ZoneIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneShapeComponentBuildData, ZoneIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapeComponentBuildData_Statics::NewProp_ZoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapeComponentBuildData_Statics::NewProp_ZoneIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneShapeComponentBuildData_Statics::NewProp_Lanes_Inner = { "Lanes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FZoneGraphLaneHandle, METADATA_PARAMS(nullptr, 0) }; // 439458847
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapeComponentBuildData_Statics::NewProp_Lanes_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphBuilder.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FZoneShapeComponentBuildData_Statics::NewProp_Lanes = { "Lanes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneShapeComponentBuildData, Lanes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapeComponentBuildData_Statics::NewProp_Lanes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapeComponentBuildData_Statics::NewProp_Lanes_MetaData)) }; // 439458847
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneShapeComponentBuildData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapeComponentBuildData_Statics::NewProp_ZoneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapeComponentBuildData_Statics::NewProp_Lanes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapeComponentBuildData_Statics::NewProp_Lanes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneShapeComponentBuildData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneShapeComponentBuildData",
		sizeof(FZoneShapeComponentBuildData),
		alignof(FZoneShapeComponentBuildData),
		Z_Construct_UScriptStruct_FZoneShapeComponentBuildData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapeComponentBuildData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapeComponentBuildData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapeComponentBuildData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneShapeComponentBuildData()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneShapeComponentBuildData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneShapeComponentBuildData.InnerSingleton, Z_Construct_UScriptStruct_FZoneShapeComponentBuildData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneShapeComponentBuildData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphBuildData;
class UScriptStruct* FZoneGraphBuildData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphBuildData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphBuildData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphBuildData, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneGraphBuildData"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphBuildData.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneGraphBuildData>()
{
	return FZoneGraphBuildData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphBuildData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneShapeComponentBuildData_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ZoneShapeComponentBuildData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneShapeComponentBuildData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ZoneShapeComponentBuildData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBuildData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Build time data, can be used to map things between editor representation and baked data.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphBuilder.h" },
		{ "ToolTip", "Build time data, can be used to map things between editor representation and baked data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphBuildData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphBuildData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphBuildData_Statics::NewProp_ZoneShapeComponentBuildData_ValueProp = { "ZoneShapeComponentBuildData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FZoneShapeComponentBuildData, METADATA_PARAMS(nullptr, 0) }; // 3700386720
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FZoneGraphBuildData_Statics::NewProp_ZoneShapeComponentBuildData_Key_KeyProp = { "ZoneShapeComponentBuildData_Key", nullptr, (EPropertyFlags)0x0004000000080000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UZoneShapeComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBuildData_Statics::NewProp_ZoneShapeComponentBuildData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphBuilder.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FZoneGraphBuildData_Statics::NewProp_ZoneShapeComponentBuildData = { "ZoneShapeComponentBuildData", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBuildData, ZoneShapeComponentBuildData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBuildData_Statics::NewProp_ZoneShapeComponentBuildData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBuildData_Statics::NewProp_ZoneShapeComponentBuildData_MetaData)) }; // 3700386720
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphBuildData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBuildData_Statics::NewProp_ZoneShapeComponentBuildData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBuildData_Statics::NewProp_ZoneShapeComponentBuildData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBuildData_Statics::NewProp_ZoneShapeComponentBuildData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphBuildData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneGraphBuildData",
		sizeof(FZoneGraphBuildData),
		alignof(FZoneGraphBuildData),
		Z_Construct_UScriptStruct_FZoneGraphBuildData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBuildData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBuildData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBuildData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphBuildData()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphBuildData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphBuildData.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphBuildData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphBuildData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphBuilder;
class UScriptStruct* FZoneGraphBuilder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphBuilder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphBuilder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphBuilder, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneGraphBuilder"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphBuilder.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneGraphBuilder>()
{
	return FZoneGraphBuilder::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShapeComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShapeComponents;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShapeComponentsFreeList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeComponentsFreeList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShapeComponentsFreeList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShapeComponentToIndex_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ShapeComponentToIndex_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeComponentToIndex_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ShapeComponentToIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BuildData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphBuilder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphBuilder>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_ShapeComponents_Inner = { "ShapeComponents", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent, METADATA_PARAMS(nullptr, 0) }; // 2901187618
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_ShapeComponents_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphBuilder.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_ShapeComponents = { "ShapeComponents", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBuilder, ShapeComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_ShapeComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_ShapeComponents_MetaData)) }; // 2901187618
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_ShapeComponentsFreeList_Inner = { "ShapeComponentsFreeList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_ShapeComponentsFreeList_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphBuilder.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_ShapeComponentsFreeList = { "ShapeComponentsFreeList", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBuilder, ShapeComponentsFreeList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_ShapeComponentsFreeList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_ShapeComponentsFreeList_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_ShapeComponentToIndex_ValueProp = { "ShapeComponentToIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_ShapeComponentToIndex_Key_KeyProp = { "ShapeComponentToIndex_Key", nullptr, (EPropertyFlags)0x0004000000080000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UZoneShapeComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_ShapeComponentToIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphBuilder.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_ShapeComponentToIndex = { "ShapeComponentToIndex", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBuilder, ShapeComponentToIndex), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_ShapeComponentToIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_ShapeComponentToIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_BuildData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphBuilder.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_BuildData = { "BuildData", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBuilder, BuildData), Z_Construct_UScriptStruct_FZoneGraphBuildData, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_BuildData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_BuildData_MetaData)) }; // 699995203
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_ShapeComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_ShapeComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_ShapeComponentsFreeList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_ShapeComponentsFreeList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_ShapeComponentToIndex_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_ShapeComponentToIndex_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_ShapeComponentToIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewProp_BuildData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneGraphBuilder",
		sizeof(FZoneGraphBuilder),
		alignof(FZoneGraphBuilder),
		Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphBuilder()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphBuilder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphBuilder.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphBuilder.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphBuilder_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphBuilder_h_Statics::ScriptStructInfo[] = {
		{ FZoneGraphBuilderRegisteredComponent::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphBuilderRegisteredComponent_Statics::NewStructOps, TEXT("ZoneGraphBuilderRegisteredComponent"), &Z_Registration_Info_UScriptStruct_ZoneGraphBuilderRegisteredComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphBuilderRegisteredComponent), 2901187618U) },
		{ FZoneShapeComponentBuildData::StaticStruct, Z_Construct_UScriptStruct_FZoneShapeComponentBuildData_Statics::NewStructOps, TEXT("ZoneShapeComponentBuildData"), &Z_Registration_Info_UScriptStruct_ZoneShapeComponentBuildData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneShapeComponentBuildData), 3700386720U) },
		{ FZoneGraphBuildData::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphBuildData_Statics::NewStructOps, TEXT("ZoneGraphBuildData"), &Z_Registration_Info_UScriptStruct_ZoneGraphBuildData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphBuildData), 699995203U) },
		{ FZoneGraphBuilder::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphBuilder_Statics::NewStructOps, TEXT("ZoneGraphBuilder"), &Z_Registration_Info_UScriptStruct_ZoneGraphBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphBuilder), 38009447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphBuilder_h_1575938921(TEXT("/Script/ZoneGraph"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphBuilder_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphBuilder_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
