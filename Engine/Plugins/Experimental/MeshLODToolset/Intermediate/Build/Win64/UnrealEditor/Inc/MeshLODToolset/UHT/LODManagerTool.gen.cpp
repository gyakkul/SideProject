// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tools/LODManagerTool.h"
#include "../../Source/Runtime/Engine/Classes/Engine/StaticMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLODManagerTool() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMaterial();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_ULODManagerActionPropertySet();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_ULODManagerActionPropertySet_NoRegister();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_ULODManagerHiResSourceModelActions();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_ULODManagerHiResSourceModelActions_NoRegister();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_ULODManagerLODProperties();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_ULODManagerLODProperties_NoRegister();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_ULODManagerMaterialActions();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_ULODManagerMaterialActions_NoRegister();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_ULODManagerPreviewLODProperties();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_ULODManagerPreviewLODProperties_NoRegister();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_ULODManagerTool();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_ULODManagerTool_NoRegister();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_ULODManagerToolBuilder();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_ULODManagerToolBuilder_NoRegister();
	MESHLODTOOLSET_API UEnum* Z_Construct_UEnum_MeshLODToolset_ELODManagerToolActions();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FLODManagerLODInfo();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshLODToolset();
// End Cross Module References
	void ULODManagerToolBuilder::StaticRegisterNativesULODManagerToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULODManagerToolBuilder);
	UClass* Z_Construct_UClass_ULODManagerToolBuilder_NoRegister()
	{
		return ULODManagerToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_ULODManagerToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULODManagerToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODManagerToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Tools/LODManagerTool.h" },
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULODManagerToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULODManagerToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULODManagerToolBuilder_Statics::ClassParams = {
		&ULODManagerToolBuilder::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULODManagerToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULODManagerToolBuilder()
	{
		if (!Z_Registration_Info_UClass_ULODManagerToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULODManagerToolBuilder.OuterSingleton, Z_Construct_UClass_ULODManagerToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULODManagerToolBuilder.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UClass* StaticClass<ULODManagerToolBuilder>()
	{
		return ULODManagerToolBuilder::StaticClass();
	}
	ULODManagerToolBuilder::ULODManagerToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULODManagerToolBuilder);
	ULODManagerToolBuilder::~ULODManagerToolBuilder() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LODManagerLODInfo;
class UScriptStruct* FLODManagerLODInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LODManagerLODInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LODManagerLODInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLODManagerLODInfo, (UObject*)Z_Construct_UPackage__Script_MeshLODToolset(), TEXT("LODManagerLODInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LODManagerLODInfo.OuterSingleton;
}
template<> MESHLODTOOLSET_API UScriptStruct* StaticStruct<FLODManagerLODInfo>()
{
	return FLODManagerLODInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriangleCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLODManagerLODInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics::NewProp_VertexCount_MetaData[] = {
		{ "Category", "LODInformation" },
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics::NewProp_VertexCount = { "VertexCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLODManagerLODInfo, VertexCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics::NewProp_VertexCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics::NewProp_VertexCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics::NewProp_TriangleCount_MetaData[] = {
		{ "Category", "LODInformation" },
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics::NewProp_TriangleCount = { "TriangleCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLODManagerLODInfo, TriangleCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics::NewProp_TriangleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics::NewProp_TriangleCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics::NewProp_VertexCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics::NewProp_TriangleCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
		nullptr,
		&NewStructOps,
		"LODManagerLODInfo",
		sizeof(FLODManagerLODInfo),
		alignof(FLODManagerLODInfo),
		Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLODManagerLODInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_LODManagerLODInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LODManagerLODInfo.InnerSingleton, Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LODManagerLODInfo.InnerSingleton;
	}
	void ULODManagerLODProperties::StaticRegisterNativesULODManagerLODProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULODManagerLODProperties);
	UClass* Z_Construct_UClass_ULODManagerLODProperties_NoRegister()
	{
		return ULODManagerLODProperties::StaticClass();
	}
	struct Z_Construct_UClass_ULODManagerLODProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceLODs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceLODs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceLODs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HiResSource_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiResSource_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HiResSource;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderLODs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderLODs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RenderLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNaniteEnabled_MetaData[];
#endif
		static void NewProp_bNaniteEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNaniteEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PercentTriangles_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentTriangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULODManagerLODProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODManagerLODProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/LODManagerTool.h" },
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_SourceLODs_Inner = { "SourceLODs", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLODManagerLODInfo, METADATA_PARAMS(nullptr, 0) }; // 200755976
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_SourceLODs_MetaData[] = {
		{ "Category", "LODInformation" },
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_SourceLODs = { "SourceLODs", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULODManagerLODProperties, SourceLODs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_SourceLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_SourceLODs_MetaData)) }; // 200755976
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_HiResSource_Inner = { "HiResSource", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLODManagerLODInfo, METADATA_PARAMS(nullptr, 0) }; // 200755976
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_HiResSource_MetaData[] = {
		{ "Category", "LODInformation" },
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_HiResSource = { "HiResSource", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULODManagerLODProperties, HiResSource), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_HiResSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_HiResSource_MetaData)) }; // 200755976
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_RenderLODs_Inner = { "RenderLODs", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLODManagerLODInfo, METADATA_PARAMS(nullptr, 0) }; // 200755976
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_RenderLODs_MetaData[] = {
		{ "Category", "LODInformation" },
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_RenderLODs = { "RenderLODs", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULODManagerLODProperties, RenderLODs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_RenderLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_RenderLODs_MetaData)) }; // 200755976
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_bNaniteEnabled_MetaData[] = {
		{ "Category", "Nanite" },
		{ "DisplayName", "Enabled" },
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	void Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_bNaniteEnabled_SetBit(void* Obj)
	{
		((ULODManagerLODProperties*)Obj)->bNaniteEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_bNaniteEnabled = { "bNaniteEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULODManagerLODProperties), &Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_bNaniteEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_bNaniteEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_bNaniteEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_PercentTriangles_MetaData[] = {
		{ "Category", "Nanite" },
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_PercentTriangles = { "PercentTriangles", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULODManagerLODProperties, PercentTriangles), METADATA_PARAMS(Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_PercentTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_PercentTriangles_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStaticMaterial, METADATA_PARAMS(nullptr, 0) }; // 1568753263
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULODManagerLODProperties, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_Materials_MetaData)) }; // 1568753263
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULODManagerLODProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_SourceLODs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_SourceLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_HiResSource_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_HiResSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_RenderLODs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_RenderLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_bNaniteEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_PercentTriangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODManagerLODProperties_Statics::NewProp_Materials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULODManagerLODProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULODManagerLODProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULODManagerLODProperties_Statics::ClassParams = {
		&ULODManagerLODProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULODManagerLODProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerLODProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULODManagerLODProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerLODProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULODManagerLODProperties()
	{
		if (!Z_Registration_Info_UClass_ULODManagerLODProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULODManagerLODProperties.OuterSingleton, Z_Construct_UClass_ULODManagerLODProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULODManagerLODProperties.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UClass* StaticClass<ULODManagerLODProperties>()
	{
		return ULODManagerLODProperties::StaticClass();
	}
	ULODManagerLODProperties::ULODManagerLODProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULODManagerLODProperties);
	ULODManagerLODProperties::~ULODManagerLODProperties() {}
	DEFINE_FUNCTION(ULODManagerPreviewLODProperties::execGetLODNamesFunc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetLODNamesFunc();
		P_NATIVE_END;
	}
	void ULODManagerPreviewLODProperties::StaticRegisterNativesULODManagerPreviewLODProperties()
	{
		UClass* Class = ULODManagerPreviewLODProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLODNamesFunc", &ULODManagerPreviewLODProperties::execGetLODNamesFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULODManagerPreviewLODProperties_GetLODNamesFunc_Statics
	{
		struct LODManagerPreviewLODProperties_eventGetLODNamesFunc_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULODManagerPreviewLODProperties_GetLODNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULODManagerPreviewLODProperties_GetLODNamesFunc_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULODManagerPreviewLODProperties_GetLODNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LODManagerPreviewLODProperties_eventGetLODNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULODManagerPreviewLODProperties_GetLODNamesFunc_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULODManagerPreviewLODProperties_GetLODNamesFunc_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULODManagerPreviewLODProperties_GetLODNamesFunc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULODManagerPreviewLODProperties_GetLODNamesFunc_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULODManagerPreviewLODProperties_GetLODNamesFunc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULODManagerPreviewLODProperties_GetLODNamesFunc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULODManagerPreviewLODProperties_GetLODNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULODManagerPreviewLODProperties, nullptr, "GetLODNamesFunc", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULODManagerPreviewLODProperties_GetLODNamesFunc_Statics::LODManagerPreviewLODProperties_eventGetLODNamesFunc_Parms), Z_Construct_UFunction_ULODManagerPreviewLODProperties_GetLODNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULODManagerPreviewLODProperties_GetLODNamesFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULODManagerPreviewLODProperties_GetLODNamesFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULODManagerPreviewLODProperties_GetLODNamesFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULODManagerPreviewLODProperties_GetLODNamesFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULODManagerPreviewLODProperties_GetLODNamesFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULODManagerPreviewLODProperties);
	UClass* Z_Construct_UClass_ULODManagerPreviewLODProperties_NoRegister()
	{
		return ULODManagerPreviewLODProperties::StaticClass();
	}
	struct Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibleLOD_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VisibleLOD;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LODNamesList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODNamesList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODNamesList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowSeams_MetaData[];
#endif
		static void NewProp_bShowSeams_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSeams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULODManagerPreviewLODProperties_GetLODNamesFunc, "GetLODNamesFunc" }, // 750669530
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/LODManagerTool.h" },
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::NewProp_VisibleLOD_MetaData[] = {
		{ "Category", "LODPreview" },
		{ "Comment", "/** LOD to visualise. Default option is equivalent to disabling the Tool, RenderData is the mesh used for rendering derived from the SourceModel (possibly simplified) */" },
		{ "DisplayName", "Show LOD" },
		{ "GetOptions", "GetLODNamesFunc" },
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "LOD to visualise. Default option is equivalent to disabling the Tool, RenderData is the mesh used for rendering derived from the SourceModel (possibly simplified)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::NewProp_VisibleLOD = { "VisibleLOD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULODManagerPreviewLODProperties, VisibleLOD), METADATA_PARAMS(Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::NewProp_VisibleLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::NewProp_VisibleLOD_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::NewProp_LODNamesList_Inner = { "LODNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::NewProp_LODNamesList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::NewProp_LODNamesList = { "LODNamesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULODManagerPreviewLODProperties, LODNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::NewProp_LODNamesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::NewProp_LODNamesList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::NewProp_bShowSeams_MetaData[] = {
		{ "Category", "LODPreview" },
		{ "Comment", "/** Control whether mesh borders are displayed */" },
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
		{ "ToolTip", "Control whether mesh borders are displayed" },
	};
#endif
	void Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::NewProp_bShowSeams_SetBit(void* Obj)
	{
		((ULODManagerPreviewLODProperties*)Obj)->bShowSeams = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::NewProp_bShowSeams = { "bShowSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULODManagerPreviewLODProperties), &Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::NewProp_bShowSeams_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::NewProp_bShowSeams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::NewProp_bShowSeams_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::NewProp_VisibleLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::NewProp_LODNamesList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::NewProp_LODNamesList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::NewProp_bShowSeams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULODManagerPreviewLODProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::ClassParams = {
		&ULODManagerPreviewLODProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULODManagerPreviewLODProperties()
	{
		if (!Z_Registration_Info_UClass_ULODManagerPreviewLODProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULODManagerPreviewLODProperties.OuterSingleton, Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULODManagerPreviewLODProperties.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UClass* StaticClass<ULODManagerPreviewLODProperties>()
	{
		return ULODManagerPreviewLODProperties::StaticClass();
	}
	ULODManagerPreviewLODProperties::ULODManagerPreviewLODProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULODManagerPreviewLODProperties);
	ULODManagerPreviewLODProperties::~ULODManagerPreviewLODProperties() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELODManagerToolActions;
	static UEnum* ELODManagerToolActions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELODManagerToolActions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELODManagerToolActions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshLODToolset_ELODManagerToolActions, (UObject*)Z_Construct_UPackage__Script_MeshLODToolset(), TEXT("ELODManagerToolActions"));
		}
		return Z_Registration_Info_UEnum_ELODManagerToolActions.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UEnum* StaticEnum<ELODManagerToolActions>()
	{
		return ELODManagerToolActions_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshLODToolset_ELODManagerToolActions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshLODToolset_ELODManagerToolActions_Statics::Enumerators[] = {
		{ "ELODManagerToolActions::NoAction", (int64)ELODManagerToolActions::NoAction },
		{ "ELODManagerToolActions::MoveHiResToLOD0", (int64)ELODManagerToolActions::MoveHiResToLOD0 },
		{ "ELODManagerToolActions::DeleteHiResSourceModel", (int64)ELODManagerToolActions::DeleteHiResSourceModel },
		{ "ELODManagerToolActions::RemoveUnreferencedMaterials", (int64)ELODManagerToolActions::RemoveUnreferencedMaterials },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshLODToolset_ELODManagerToolActions_Statics::Enum_MetaDataParams[] = {
		{ "DeleteHiResSourceModel.Name", "ELODManagerToolActions::DeleteHiResSourceModel" },
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
		{ "MoveHiResToLOD0.Name", "ELODManagerToolActions::MoveHiResToLOD0" },
		{ "NoAction.Name", "ELODManagerToolActions::NoAction" },
		{ "RemoveUnreferencedMaterials.Name", "ELODManagerToolActions::RemoveUnreferencedMaterials" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshLODToolset_ELODManagerToolActions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshLODToolset,
		nullptr,
		"ELODManagerToolActions",
		"ELODManagerToolActions",
		Z_Construct_UEnum_MeshLODToolset_ELODManagerToolActions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshLODToolset_ELODManagerToolActions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshLODToolset_ELODManagerToolActions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshLODToolset_ELODManagerToolActions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshLODToolset_ELODManagerToolActions()
	{
		if (!Z_Registration_Info_UEnum_ELODManagerToolActions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELODManagerToolActions.InnerSingleton, Z_Construct_UEnum_MeshLODToolset_ELODManagerToolActions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELODManagerToolActions.InnerSingleton;
	}
	void ULODManagerActionPropertySet::StaticRegisterNativesULODManagerActionPropertySet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULODManagerActionPropertySet);
	UClass* Z_Construct_UClass_ULODManagerActionPropertySet_NoRegister()
	{
		return ULODManagerActionPropertySet::StaticClass();
	}
	struct Z_Construct_UClass_ULODManagerActionPropertySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULODManagerActionPropertySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODManagerActionPropertySet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/LODManagerTool.h" },
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULODManagerActionPropertySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULODManagerActionPropertySet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULODManagerActionPropertySet_Statics::ClassParams = {
		&ULODManagerActionPropertySet::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULODManagerActionPropertySet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerActionPropertySet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULODManagerActionPropertySet()
	{
		if (!Z_Registration_Info_UClass_ULODManagerActionPropertySet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULODManagerActionPropertySet.OuterSingleton, Z_Construct_UClass_ULODManagerActionPropertySet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULODManagerActionPropertySet.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UClass* StaticClass<ULODManagerActionPropertySet>()
	{
		return ULODManagerActionPropertySet::StaticClass();
	}
	ULODManagerActionPropertySet::ULODManagerActionPropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULODManagerActionPropertySet);
	ULODManagerActionPropertySet::~ULODManagerActionPropertySet() {}
	DEFINE_FUNCTION(ULODManagerHiResSourceModelActions::execDelete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Delete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULODManagerHiResSourceModelActions::execMoveToLOD0)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveToLOD0();
		P_NATIVE_END;
	}
	void ULODManagerHiResSourceModelActions::StaticRegisterNativesULODManagerHiResSourceModelActions()
	{
		UClass* Class = ULODManagerHiResSourceModelActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Delete", &ULODManagerHiResSourceModelActions::execDelete },
			{ "MoveToLOD0", &ULODManagerHiResSourceModelActions::execMoveToLOD0 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULODManagerHiResSourceModelActions_Delete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULODManagerHiResSourceModelActions_Delete_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "HiResSourceModel" },
		{ "Comment", "/** Delete the HiRes Source Model */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
		{ "ToolTip", "Delete the HiRes Source Model" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULODManagerHiResSourceModelActions_Delete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULODManagerHiResSourceModelActions, nullptr, "Delete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULODManagerHiResSourceModelActions_Delete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULODManagerHiResSourceModelActions_Delete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULODManagerHiResSourceModelActions_Delete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULODManagerHiResSourceModelActions_Delete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULODManagerHiResSourceModelActions_MoveToLOD0_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULODManagerHiResSourceModelActions_MoveToLOD0_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "HiResSourceModel" },
		{ "Comment", "/** Move the HiRes Source Model to LOD0 */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
		{ "ToolTip", "Move the HiRes Source Model to LOD0" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULODManagerHiResSourceModelActions_MoveToLOD0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULODManagerHiResSourceModelActions, nullptr, "MoveToLOD0", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULODManagerHiResSourceModelActions_MoveToLOD0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULODManagerHiResSourceModelActions_MoveToLOD0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULODManagerHiResSourceModelActions_MoveToLOD0()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULODManagerHiResSourceModelActions_MoveToLOD0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULODManagerHiResSourceModelActions);
	UClass* Z_Construct_UClass_ULODManagerHiResSourceModelActions_NoRegister()
	{
		return ULODManagerHiResSourceModelActions::StaticClass();
	}
	struct Z_Construct_UClass_ULODManagerHiResSourceModelActions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULODManagerHiResSourceModelActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULODManagerActionPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULODManagerHiResSourceModelActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULODManagerHiResSourceModelActions_Delete, "Delete" }, // 4093637287
		{ &Z_Construct_UFunction_ULODManagerHiResSourceModelActions_MoveToLOD0, "MoveToLOD0" }, // 2192354457
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODManagerHiResSourceModelActions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/LODManagerTool.h" },
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULODManagerHiResSourceModelActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULODManagerHiResSourceModelActions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULODManagerHiResSourceModelActions_Statics::ClassParams = {
		&ULODManagerHiResSourceModelActions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULODManagerHiResSourceModelActions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerHiResSourceModelActions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULODManagerHiResSourceModelActions()
	{
		if (!Z_Registration_Info_UClass_ULODManagerHiResSourceModelActions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULODManagerHiResSourceModelActions.OuterSingleton, Z_Construct_UClass_ULODManagerHiResSourceModelActions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULODManagerHiResSourceModelActions.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UClass* StaticClass<ULODManagerHiResSourceModelActions>()
	{
		return ULODManagerHiResSourceModelActions::StaticClass();
	}
	ULODManagerHiResSourceModelActions::ULODManagerHiResSourceModelActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULODManagerHiResSourceModelActions);
	ULODManagerHiResSourceModelActions::~ULODManagerHiResSourceModelActions() {}
	DEFINE_FUNCTION(ULODManagerMaterialActions::execCleanMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CleanMaterials();
		P_NATIVE_END;
	}
	void ULODManagerMaterialActions::StaticRegisterNativesULODManagerMaterialActions()
	{
		UClass* Class = ULODManagerMaterialActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CleanMaterials", &ULODManagerMaterialActions::execCleanMaterials },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULODManagerMaterialActions_CleanMaterials_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULODManagerMaterialActions_CleanMaterials_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "MaterialSet" },
		{ "Comment", "/** Discard any Materials that are not referenced by any LOD */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
		{ "ToolTip", "Discard any Materials that are not referenced by any LOD" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULODManagerMaterialActions_CleanMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULODManagerMaterialActions, nullptr, "CleanMaterials", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULODManagerMaterialActions_CleanMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULODManagerMaterialActions_CleanMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULODManagerMaterialActions_CleanMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULODManagerMaterialActions_CleanMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULODManagerMaterialActions);
	UClass* Z_Construct_UClass_ULODManagerMaterialActions_NoRegister()
	{
		return ULODManagerMaterialActions::StaticClass();
	}
	struct Z_Construct_UClass_ULODManagerMaterialActions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULODManagerMaterialActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULODManagerActionPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULODManagerMaterialActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULODManagerMaterialActions_CleanMaterials, "CleanMaterials" }, // 1116070792
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODManagerMaterialActions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/LODManagerTool.h" },
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULODManagerMaterialActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULODManagerMaterialActions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULODManagerMaterialActions_Statics::ClassParams = {
		&ULODManagerMaterialActions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULODManagerMaterialActions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerMaterialActions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULODManagerMaterialActions()
	{
		if (!Z_Registration_Info_UClass_ULODManagerMaterialActions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULODManagerMaterialActions.OuterSingleton, Z_Construct_UClass_ULODManagerMaterialActions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULODManagerMaterialActions.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UClass* StaticClass<ULODManagerMaterialActions>()
	{
		return ULODManagerMaterialActions::StaticClass();
	}
	ULODManagerMaterialActions::ULODManagerMaterialActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULODManagerMaterialActions);
	ULODManagerMaterialActions::~ULODManagerMaterialActions() {}
	DEFINE_FUNCTION(ULODManagerTool::execRemoveUnreferencedMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveUnreferencedMaterials();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULODManagerTool::execMoveHiResToLOD0)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveHiResToLOD0();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULODManagerTool::execDeleteHiResSourceModel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteHiResSourceModel();
		P_NATIVE_END;
	}
	void ULODManagerTool::StaticRegisterNativesULODManagerTool()
	{
		UClass* Class = ULODManagerTool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteHiResSourceModel", &ULODManagerTool::execDeleteHiResSourceModel },
			{ "MoveHiResToLOD0", &ULODManagerTool::execMoveHiResToLOD0 },
			{ "RemoveUnreferencedMaterials", &ULODManagerTool::execRemoveUnreferencedMaterials },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULODManagerTool_DeleteHiResSourceModel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULODManagerTool_DeleteHiResSourceModel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULODManagerTool_DeleteHiResSourceModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULODManagerTool, nullptr, "DeleteHiResSourceModel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULODManagerTool_DeleteHiResSourceModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULODManagerTool_DeleteHiResSourceModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULODManagerTool_DeleteHiResSourceModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULODManagerTool_DeleteHiResSourceModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULODManagerTool_MoveHiResToLOD0_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULODManagerTool_MoveHiResToLOD0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULODManagerTool_MoveHiResToLOD0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULODManagerTool, nullptr, "MoveHiResToLOD0", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULODManagerTool_MoveHiResToLOD0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULODManagerTool_MoveHiResToLOD0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULODManagerTool_MoveHiResToLOD0()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULODManagerTool_MoveHiResToLOD0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULODManagerTool_RemoveUnreferencedMaterials_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULODManagerTool_RemoveUnreferencedMaterials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULODManagerTool_RemoveUnreferencedMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULODManagerTool, nullptr, "RemoveUnreferencedMaterials", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULODManagerTool_RemoveUnreferencedMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULODManagerTool_RemoveUnreferencedMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULODManagerTool_RemoveUnreferencedMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULODManagerTool_RemoveUnreferencedMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULODManagerTool);
	UClass* Z_Construct_UClass_ULODManagerTool_NoRegister()
	{
		return ULODManagerTool::StaticClass();
	}
	struct Z_Construct_UClass_ULODManagerTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODInfoProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LODInfoProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODPreviewProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LODPreviewProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiResSourceModelActions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HiResSourceModelActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialActions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODPreview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LODPreview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODPreviewLines_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LODPreviewLines;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULODManagerTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULODManagerTool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULODManagerTool_DeleteHiResSourceModel, "DeleteHiResSourceModel" }, // 464532451
		{ &Z_Construct_UFunction_ULODManagerTool_MoveHiResToLOD0, "MoveHiResToLOD0" }, // 3852826499
		{ &Z_Construct_UFunction_ULODManagerTool_RemoveUnreferencedMaterials, "RemoveUnreferencedMaterials" }, // 31015261
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODManagerTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mesh Attribute Editor Tool\n */" },
		{ "IncludePath", "Tools/LODManagerTool.h" },
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
		{ "ToolTip", "Mesh Attribute Editor Tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODManagerTool_Statics::NewProp_LODInfoProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULODManagerTool_Statics::NewProp_LODInfoProperties = { "LODInfoProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULODManagerTool, LODInfoProperties), Z_Construct_UClass_ULODManagerLODProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULODManagerTool_Statics::NewProp_LODInfoProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerTool_Statics::NewProp_LODInfoProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODManagerTool_Statics::NewProp_LODPreviewProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULODManagerTool_Statics::NewProp_LODPreviewProperties = { "LODPreviewProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULODManagerTool, LODPreviewProperties), Z_Construct_UClass_ULODManagerPreviewLODProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULODManagerTool_Statics::NewProp_LODPreviewProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerTool_Statics::NewProp_LODPreviewProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODManagerTool_Statics::NewProp_HiResSourceModelActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULODManagerTool_Statics::NewProp_HiResSourceModelActions = { "HiResSourceModelActions", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULODManagerTool, HiResSourceModelActions), Z_Construct_UClass_ULODManagerHiResSourceModelActions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULODManagerTool_Statics::NewProp_HiResSourceModelActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerTool_Statics::NewProp_HiResSourceModelActions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODManagerTool_Statics::NewProp_MaterialActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULODManagerTool_Statics::NewProp_MaterialActions = { "MaterialActions", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULODManagerTool, MaterialActions), Z_Construct_UClass_ULODManagerMaterialActions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULODManagerTool_Statics::NewProp_MaterialActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerTool_Statics::NewProp_MaterialActions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODManagerTool_Statics::NewProp_LODPreview_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULODManagerTool_Statics::NewProp_LODPreview = { "LODPreview", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULODManagerTool, LODPreview), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULODManagerTool_Statics::NewProp_LODPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerTool_Statics::NewProp_LODPreview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODManagerTool_Statics::NewProp_LODPreviewLines_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/LODManagerTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULODManagerTool_Statics::NewProp_LODPreviewLines = { "LODPreviewLines", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULODManagerTool, LODPreviewLines), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULODManagerTool_Statics::NewProp_LODPreviewLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerTool_Statics::NewProp_LODPreviewLines_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULODManagerTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODManagerTool_Statics::NewProp_LODInfoProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODManagerTool_Statics::NewProp_LODPreviewProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODManagerTool_Statics::NewProp_HiResSourceModelActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODManagerTool_Statics::NewProp_MaterialActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODManagerTool_Statics::NewProp_LODPreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODManagerTool_Statics::NewProp_LODPreviewLines,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULODManagerTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULODManagerTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULODManagerTool_Statics::ClassParams = {
		&ULODManagerTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULODManagerTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULODManagerTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULODManagerTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULODManagerTool()
	{
		if (!Z_Registration_Info_UClass_ULODManagerTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULODManagerTool.OuterSingleton, Z_Construct_UClass_ULODManagerTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULODManagerTool.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UClass* StaticClass<ULODManagerTool>()
	{
		return ULODManagerTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULODManagerTool);
	ULODManagerTool::~ULODManagerTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_Statics::EnumInfo[] = {
		{ ELODManagerToolActions_StaticEnum, TEXT("ELODManagerToolActions"), &Z_Registration_Info_UEnum_ELODManagerToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1602240070U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_Statics::ScriptStructInfo[] = {
		{ FLODManagerLODInfo::StaticStruct, Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics::NewStructOps, TEXT("LODManagerLODInfo"), &Z_Registration_Info_UScriptStruct_LODManagerLODInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLODManagerLODInfo), 200755976U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULODManagerToolBuilder, ULODManagerToolBuilder::StaticClass, TEXT("ULODManagerToolBuilder"), &Z_Registration_Info_UClass_ULODManagerToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULODManagerToolBuilder), 2741735662U) },
		{ Z_Construct_UClass_ULODManagerLODProperties, ULODManagerLODProperties::StaticClass, TEXT("ULODManagerLODProperties"), &Z_Registration_Info_UClass_ULODManagerLODProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULODManagerLODProperties), 2284763937U) },
		{ Z_Construct_UClass_ULODManagerPreviewLODProperties, ULODManagerPreviewLODProperties::StaticClass, TEXT("ULODManagerPreviewLODProperties"), &Z_Registration_Info_UClass_ULODManagerPreviewLODProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULODManagerPreviewLODProperties), 4283289834U) },
		{ Z_Construct_UClass_ULODManagerActionPropertySet, ULODManagerActionPropertySet::StaticClass, TEXT("ULODManagerActionPropertySet"), &Z_Registration_Info_UClass_ULODManagerActionPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULODManagerActionPropertySet), 4217024567U) },
		{ Z_Construct_UClass_ULODManagerHiResSourceModelActions, ULODManagerHiResSourceModelActions::StaticClass, TEXT("ULODManagerHiResSourceModelActions"), &Z_Registration_Info_UClass_ULODManagerHiResSourceModelActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULODManagerHiResSourceModelActions), 1996532977U) },
		{ Z_Construct_UClass_ULODManagerMaterialActions, ULODManagerMaterialActions::StaticClass, TEXT("ULODManagerMaterialActions"), &Z_Registration_Info_UClass_ULODManagerMaterialActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULODManagerMaterialActions), 508749011U) },
		{ Z_Construct_UClass_ULODManagerTool, ULODManagerTool::StaticClass, TEXT("ULODManagerTool"), &Z_Registration_Info_UClass_ULODManagerTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULODManagerTool), 2401301518U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_3056077790(TEXT("/Script/MeshLODToolset"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
