// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshPaintingToolsetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshPaintingToolsetTypes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	MESHPAINTINGTOOLSET_API UEnum* Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintDataColorViewMode();
	MESHPAINTINGTOOLSET_API UEnum* Z_Construct_UEnum_MeshPaintingToolset_EMeshVertexPaintModeTarget();
	MESHPAINTINGTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FPaintComponentOverride();
	MESHPAINTINGTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FPaintTexture2DData();
	UPackage* Z_Construct_UPackage__Script_MeshPaintingToolset();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshPaintDataColorViewMode;
	static UEnum* EMeshPaintDataColorViewMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshPaintDataColorViewMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshPaintDataColorViewMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintDataColorViewMode, (UObject*)Z_Construct_UPackage__Script_MeshPaintingToolset(), TEXT("EMeshPaintDataColorViewMode"));
		}
		return Z_Registration_Info_UEnum_EMeshPaintDataColorViewMode.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UEnum* StaticEnum<EMeshPaintDataColorViewMode>()
	{
		return EMeshPaintDataColorViewMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintDataColorViewMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintDataColorViewMode_Statics::Enumerators[] = {
		{ "EMeshPaintDataColorViewMode::Normal", (int64)EMeshPaintDataColorViewMode::Normal },
		{ "EMeshPaintDataColorViewMode::RGB", (int64)EMeshPaintDataColorViewMode::RGB },
		{ "EMeshPaintDataColorViewMode::Alpha", (int64)EMeshPaintDataColorViewMode::Alpha },
		{ "EMeshPaintDataColorViewMode::Red", (int64)EMeshPaintDataColorViewMode::Red },
		{ "EMeshPaintDataColorViewMode::Green", (int64)EMeshPaintDataColorViewMode::Green },
		{ "EMeshPaintDataColorViewMode::Blue", (int64)EMeshPaintDataColorViewMode::Blue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintDataColorViewMode_Statics::Enum_MetaDataParams[] = {
		{ "Alpha.Comment", "/** Alpha only */" },
		{ "Alpha.DisplayName", "Alpha Channel" },
		{ "Alpha.Name", "EMeshPaintDataColorViewMode::Alpha" },
		{ "Alpha.ToolTip", "Alpha only" },
		{ "Blue.Comment", "/** Blue only */" },
		{ "Blue.DisplayName", "Blue Channel" },
		{ "Blue.Name", "EMeshPaintDataColorViewMode::Blue" },
		{ "Blue.ToolTip", "Blue only" },
		{ "Comment", "/** Mesh paint color view modes (somewhat maps to EVertexColorViewMode engine enum.) */" },
		{ "Green.Comment", "/** Green only */" },
		{ "Green.DisplayName", "Green Channel" },
		{ "Green.Name", "EMeshPaintDataColorViewMode::Green" },
		{ "Green.ToolTip", "Green only" },
		{ "ModuleRelativePath", "Public/MeshPaintingToolsetTypes.h" },
		{ "Normal.Comment", "/** Normal view mode (vertex color visualization off) */" },
		{ "Normal.DisplayName", "Off" },
		{ "Normal.Name", "EMeshPaintDataColorViewMode::Normal" },
		{ "Normal.ToolTip", "Normal view mode (vertex color visualization off)" },
		{ "Red.Comment", "/** Red only */" },
		{ "Red.DisplayName", "Red Channel" },
		{ "Red.Name", "EMeshPaintDataColorViewMode::Red" },
		{ "Red.ToolTip", "Red only" },
		{ "RGB.Comment", "/** RGB only */" },
		{ "RGB.DisplayName", "RGB Channels" },
		{ "RGB.Name", "EMeshPaintDataColorViewMode::RGB" },
		{ "RGB.ToolTip", "RGB only" },
		{ "ToolTip", "Mesh paint color view modes (somewhat maps to EVertexColorViewMode engine enum.)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintDataColorViewMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
		nullptr,
		"EMeshPaintDataColorViewMode",
		"EMeshPaintDataColorViewMode",
		Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintDataColorViewMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintDataColorViewMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintDataColorViewMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintDataColorViewMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintDataColorViewMode()
	{
		if (!Z_Registration_Info_UEnum_EMeshPaintDataColorViewMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshPaintDataColorViewMode.InnerSingleton, Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintDataColorViewMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshPaintDataColorViewMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshVertexPaintModeTarget;
	static UEnum* EMeshVertexPaintModeTarget_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshVertexPaintModeTarget.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshVertexPaintModeTarget.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshPaintingToolset_EMeshVertexPaintModeTarget, (UObject*)Z_Construct_UPackage__Script_MeshPaintingToolset(), TEXT("EMeshVertexPaintModeTarget"));
		}
		return Z_Registration_Info_UEnum_EMeshVertexPaintModeTarget.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UEnum* StaticEnum<EMeshVertexPaintModeTarget>()
	{
		return EMeshVertexPaintModeTarget_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshPaintingToolset_EMeshVertexPaintModeTarget_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshPaintingToolset_EMeshVertexPaintModeTarget_Statics::Enumerators[] = {
		{ "EMeshVertexPaintModeTarget::ComponentInstance", (int64)EMeshVertexPaintModeTarget::ComponentInstance },
		{ "EMeshVertexPaintModeTarget::Mesh", (int64)EMeshVertexPaintModeTarget::Mesh },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshPaintingToolset_EMeshVertexPaintModeTarget_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Vertex paint target */" },
		{ "ComponentInstance.Comment", "/** Paint the static mesh component instance in the level */" },
		{ "ComponentInstance.Name", "EMeshVertexPaintModeTarget::ComponentInstance" },
		{ "ComponentInstance.ToolTip", "Paint the static mesh component instance in the level" },
		{ "Mesh.Comment", "/** Paint the actual static mesh asset */" },
		{ "Mesh.Name", "EMeshVertexPaintModeTarget::Mesh" },
		{ "Mesh.ToolTip", "Paint the actual static mesh asset" },
		{ "ModuleRelativePath", "Public/MeshPaintingToolsetTypes.h" },
		{ "ToolTip", "Vertex paint target" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshPaintingToolset_EMeshVertexPaintModeTarget_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
		nullptr,
		"EMeshVertexPaintModeTarget",
		"EMeshVertexPaintModeTarget",
		Z_Construct_UEnum_MeshPaintingToolset_EMeshVertexPaintModeTarget_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshPaintingToolset_EMeshVertexPaintModeTarget_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshPaintingToolset_EMeshVertexPaintModeTarget_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshPaintingToolset_EMeshVertexPaintModeTarget_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshPaintingToolset_EMeshVertexPaintModeTarget()
	{
		if (!Z_Registration_Info_UEnum_EMeshVertexPaintModeTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshVertexPaintModeTarget.InnerSingleton, Z_Construct_UEnum_MeshPaintingToolset_EMeshVertexPaintModeTarget_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshVertexPaintModeTarget.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaintTexture2DData;
class UScriptStruct* FPaintTexture2DData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaintTexture2DData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaintTexture2DData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaintTexture2DData, (UObject*)Z_Construct_UPackage__Script_MeshPaintingToolset(), TEXT("PaintTexture2DData"));
	}
	return Z_Registration_Info_UScriptStruct_PaintTexture2DData.OuterSingleton;
}
template<> MESHPAINTINGTOOLSET_API UScriptStruct* StaticStruct<FPaintTexture2DData>()
{
	return FPaintTexture2DData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaintTexture2DData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintingTexture2D_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PaintingTexture2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPaintingTexture2DModified_MetaData[];
#endif
		static void NewProp_bIsPaintingTexture2DModified_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPaintingTexture2DModified;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScratchTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScratchTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintRenderTargetTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PaintRenderTargetTexture;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PaintedComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintedComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PaintedComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshPaintingToolsetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaintTexture2DData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_PaintingTexture2D_MetaData[] = {
		{ "Comment", "/** The original texture that we're painting */" },
		{ "ModuleRelativePath", "Public/MeshPaintingToolsetTypes.h" },
		{ "ToolTip", "The original texture that we're painting" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_PaintingTexture2D = { "PaintingTexture2D", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaintTexture2DData, PaintingTexture2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_PaintingTexture2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_PaintingTexture2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_bIsPaintingTexture2DModified_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshPaintingToolsetTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_bIsPaintingTexture2DModified_SetBit(void* Obj)
	{
		((FPaintTexture2DData*)Obj)->bIsPaintingTexture2DModified = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_bIsPaintingTexture2DModified = { "bIsPaintingTexture2DModified", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPaintTexture2DData), &Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_bIsPaintingTexture2DModified_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_bIsPaintingTexture2DModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_bIsPaintingTexture2DModified_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_ScratchTexture_MetaData[] = {
		{ "Comment", "/** Texture used to store the paint modifications for the transactions */" },
		{ "ModuleRelativePath", "Public/MeshPaintingToolsetTypes.h" },
		{ "ToolTip", "Texture used to store the paint modifications for the transactions" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_ScratchTexture = { "ScratchTexture", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaintTexture2DData, ScratchTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_ScratchTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_ScratchTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_PaintRenderTargetTexture_MetaData[] = {
		{ "Comment", "/** Render target texture for painting */" },
		{ "ModuleRelativePath", "Public/MeshPaintingToolsetTypes.h" },
		{ "ToolTip", "Render target texture for painting" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_PaintRenderTargetTexture = { "PaintRenderTargetTexture", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaintTexture2DData, PaintRenderTargetTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_PaintRenderTargetTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_PaintRenderTargetTexture_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_PaintedComponents_Inner = { "PaintedComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_PaintedComponents_MetaData[] = {
		{ "Comment", "/** List of component we are painting on */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeshPaintingToolsetTypes.h" },
		{ "ToolTip", "List of component we are painting on" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_PaintedComponents = { "PaintedComponents", nullptr, (EPropertyFlags)0x0014008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaintTexture2DData, PaintedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_PaintedComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_PaintedComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_PaintingTexture2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_bIsPaintingTexture2DModified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_ScratchTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_PaintRenderTargetTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_PaintedComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewProp_PaintedComponents,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
		nullptr,
		&NewStructOps,
		"PaintTexture2DData",
		sizeof(FPaintTexture2DData),
		alignof(FPaintTexture2DData),
		Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaintTexture2DData()
	{
		if (!Z_Registration_Info_UScriptStruct_PaintTexture2DData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaintTexture2DData.InnerSingleton, Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaintTexture2DData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaintComponentOverride;
class UScriptStruct* FPaintComponentOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaintComponentOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaintComponentOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaintComponentOverride, (UObject*)Z_Construct_UPackage__Script_MeshPaintingToolset(), TEXT("PaintComponentOverride"));
	}
	return Z_Registration_Info_UScriptStruct_PaintComponentOverride.OuterSingleton;
}
template<> MESHPAINTINGTOOLSET_API UScriptStruct* StaticStruct<FPaintComponentOverride>()
{
	return FPaintComponentOverride::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaintComponentOverride_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PaintedComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintedComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PaintedComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaintComponentOverride_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshPaintingToolsetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaintComponentOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaintComponentOverride>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPaintComponentOverride_Statics::NewProp_PaintedComponents_Inner = { "PaintedComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaintComponentOverride_Statics::NewProp_PaintedComponents_MetaData[] = {
		{ "Comment", "/** List of components overridden */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeshPaintingToolsetTypes.h" },
		{ "ToolTip", "List of components overridden" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPaintComponentOverride_Statics::NewProp_PaintedComponents = { "PaintedComponents", nullptr, (EPropertyFlags)0x0014008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaintComponentOverride, PaintedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaintComponentOverride_Statics::NewProp_PaintedComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintComponentOverride_Statics::NewProp_PaintedComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaintComponentOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintComponentOverride_Statics::NewProp_PaintedComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintComponentOverride_Statics::NewProp_PaintedComponents,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaintComponentOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
		nullptr,
		&NewStructOps,
		"PaintComponentOverride",
		sizeof(FPaintComponentOverride),
		alignof(FPaintComponentOverride),
		Z_Construct_UScriptStruct_FPaintComponentOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintComponentOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaintComponentOverride_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintComponentOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaintComponentOverride()
	{
		if (!Z_Registration_Info_UScriptStruct_PaintComponentOverride.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaintComponentOverride.InnerSingleton, Z_Construct_UScriptStruct_FPaintComponentOverride_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaintComponentOverride.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintingToolsetTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintingToolsetTypes_h_Statics::EnumInfo[] = {
		{ EMeshPaintDataColorViewMode_StaticEnum, TEXT("EMeshPaintDataColorViewMode"), &Z_Registration_Info_UEnum_EMeshPaintDataColorViewMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 929006201U) },
		{ EMeshVertexPaintModeTarget_StaticEnum, TEXT("EMeshVertexPaintModeTarget"), &Z_Registration_Info_UEnum_EMeshVertexPaintModeTarget, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 832548559U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintingToolsetTypes_h_Statics::ScriptStructInfo[] = {
		{ FPaintTexture2DData::StaticStruct, Z_Construct_UScriptStruct_FPaintTexture2DData_Statics::NewStructOps, TEXT("PaintTexture2DData"), &Z_Registration_Info_UScriptStruct_PaintTexture2DData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaintTexture2DData), 1256278004U) },
		{ FPaintComponentOverride::StaticStruct, Z_Construct_UScriptStruct_FPaintComponentOverride_Statics::NewStructOps, TEXT("PaintComponentOverride"), &Z_Registration_Info_UScriptStruct_PaintComponentOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaintComponentOverride), 3322245576U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintingToolsetTypes_h_1264899468(TEXT("/Script/MeshPaintingToolset"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintingToolsetTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintingToolsetTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintingToolsetTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintingToolsetTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
