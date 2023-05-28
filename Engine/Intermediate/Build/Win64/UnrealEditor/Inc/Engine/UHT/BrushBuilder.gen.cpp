// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/BrushBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrushBuilder() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBrushBuilder();
	ENGINE_API UClass* Z_Construct_UClass_UBrushBuilder_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBuilderPoly();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuilderPoly;
class UScriptStruct* FBuilderPoly::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuilderPoly.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuilderPoly.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuilderPoly, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BuilderPoly"));
	}
	return Z_Registration_Info_UScriptStruct_BuilderPoly.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBuilderPoly>()
{
	return FBuilderPoly::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBuilderPoly_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyFlags_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PolyFlags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuilderPoly_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Internal state, not accessible to script.\n" },
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
		{ "ToolTip", "Internal state, not accessible to script." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuilderPoly>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_VertexIndices_Inner = { "VertexIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_VertexIndices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_VertexIndices = { "VertexIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuilderPoly, VertexIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_VertexIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_VertexIndices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuilderPoly, Direction), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_ItemName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuilderPoly, ItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_PolyFlags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_PolyFlags = { "PolyFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuilderPoly, PolyFlags), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_PolyFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_PolyFlags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuilderPoly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_VertexIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_VertexIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_PolyFlags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuilderPoly_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BuilderPoly",
		sizeof(FBuilderPoly),
		alignof(FBuilderPoly),
		Z_Construct_UScriptStruct_FBuilderPoly_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuilderPoly_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBuilderPoly_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuilderPoly_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBuilderPoly()
	{
		if (!Z_Registration_Info_UScriptStruct_BuilderPoly.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuilderPoly.InnerSingleton, Z_Construct_UScriptStruct_FBuilderPoly_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BuilderPoly.InnerSingleton;
	}
	void UBrushBuilder::StaticRegisterNativesUBrushBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBrushBuilder);
	UClass* Z_Construct_UClass_UBrushBuilder_NoRegister()
	{
		return UBrushBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UBrushBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitmapFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BitmapFilename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToolTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyBadParams_MetaData[];
#endif
		static void NewProp_NotifyBadParams_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NotifyBadParams;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Polys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Polys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Polys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Layer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MergeCoplanars_MetaData[];
#endif
		static void NewProp_MergeCoplanars_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MergeCoplanars;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBrushBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class of UnrealEd brush builders.\n *\n *\n * Tips for writing brush builders:\n *\n * - Always validate the user-specified and call BadParameters function\n *   if anything is wrong, instead of actually building geometry.\n *   If you build an invalid brush due to bad user parameters, you'll\n *   cause an extraordinary amount of pain for the poor user.\n *\n * - When generating polygons with more than 3 vertices, BE SURE all the\n *   polygon's vertices are coplanar!  Out-of-plane polygons will cause\n *   geometry to be corrupted.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/BrushBuilder.h" },
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
		{ "ToolTip", "Base class of UnrealEd brush builders.\n\n\nTips for writing brush builders:\n\n- Always validate the user-specified and call BadParameters function\n  if anything is wrong, instead of actually building geometry.\n  If you build an invalid brush due to bad user parameters, you'll\n  cause an extraordinary amount of pain for the poor user.\n\n- When generating polygons with more than 3 vertices, BE SURE all the\n  polygon's vertices are coplanar!  Out-of-plane polygons will cause\n  geometry to be corrupted." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBuilder_Statics::NewProp_BitmapFilename_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_BitmapFilename = { "BitmapFilename", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrushBuilder, BitmapFilename), METADATA_PARAMS(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_BitmapFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_BitmapFilename_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBuilder_Statics::NewProp_ToolTip_MetaData[] = {
		{ "Comment", "/** localized FString that will be displayed as the name of this brush builder in the editor */" },
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
		{ "ToolTip", "localized FString that will be displayed as the name of this brush builder in the editor" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrushBuilder, ToolTip), METADATA_PARAMS(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_ToolTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_ToolTip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBuilder_Statics::NewProp_NotifyBadParams_MetaData[] = {
		{ "Comment", "/** If false, disabled the bad param notifications */" },
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
		{ "ToolTip", "If false, disabled the bad param notifications" },
	};
#endif
	void Z_Construct_UClass_UBrushBuilder_Statics::NewProp_NotifyBadParams_SetBit(void* Obj)
	{
		((UBrushBuilder*)Obj)->NotifyBadParams = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_NotifyBadParams = { "NotifyBadParams", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBrushBuilder), &Z_Construct_UClass_UBrushBuilder_Statics::NewProp_NotifyBadParams_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_NotifyBadParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_NotifyBadParams_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Vertices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrushBuilder, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Polys_Inner = { "Polys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBuilderPoly, METADATA_PARAMS(nullptr, 0) }; // 3643798951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Polys_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Polys = { "Polys", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrushBuilder, Polys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Polys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Polys_MetaData)) }; // 3643798951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Layer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrushBuilder, Layer), METADATA_PARAMS(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Layer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Layer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBuilder_Statics::NewProp_MergeCoplanars_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
#endif
	void Z_Construct_UClass_UBrushBuilder_Statics::NewProp_MergeCoplanars_SetBit(void* Obj)
	{
		((UBrushBuilder*)Obj)->MergeCoplanars = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_MergeCoplanars = { "MergeCoplanars", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBrushBuilder), &Z_Construct_UClass_UBrushBuilder_Statics::NewProp_MergeCoplanars_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_MergeCoplanars_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_MergeCoplanars_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBrushBuilder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_BitmapFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_ToolTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_NotifyBadParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Polys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Polys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Layer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_MergeCoplanars,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBrushBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrushBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBrushBuilder_Statics::ClassParams = {
		&UBrushBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBrushBuilder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBuilder_Statics::PropPointers),
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBrushBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBrushBuilder()
	{
		if (!Z_Registration_Info_UClass_UBrushBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBrushBuilder.OuterSingleton, Z_Construct_UClass_UBrushBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBrushBuilder.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UBrushBuilder>()
	{
		return UBrushBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushBuilder);
	UBrushBuilder::~UBrushBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_Statics::ScriptStructInfo[] = {
		{ FBuilderPoly::StaticStruct, Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewStructOps, TEXT("BuilderPoly"), &Z_Registration_Info_UScriptStruct_BuilderPoly, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuilderPoly), 3643798951U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBrushBuilder, UBrushBuilder::StaticClass, TEXT("UBrushBuilder"), &Z_Registration_Info_UClass_UBrushBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBrushBuilder), 318663726U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_3002245321(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
