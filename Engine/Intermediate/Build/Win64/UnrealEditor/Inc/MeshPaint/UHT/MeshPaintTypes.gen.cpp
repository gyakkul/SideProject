// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshPaintTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshPaintTypes() {}
// Cross Module References
	MESHPAINT_API UEnum* Z_Construct_UEnum_MeshPaint_EMeshPaintMode();
	MESHPAINT_API UEnum* Z_Construct_UEnum_MeshPaint_EMeshVertexPaintTarget();
	UPackage* Z_Construct_UPackage__Script_MeshPaint();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshPaintMode;
	static UEnum* EMeshPaintMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshPaintMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshPaintMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshPaint_EMeshPaintMode, (UObject*)Z_Construct_UPackage__Script_MeshPaint(), TEXT("EMeshPaintMode"));
		}
		return Z_Registration_Info_UEnum_EMeshPaintMode.OuterSingleton;
	}
	template<> MESHPAINT_API UEnum* StaticEnum<EMeshPaintMode>()
	{
		return EMeshPaintMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshPaint_EMeshPaintMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshPaint_EMeshPaintMode_Statics::Enumerators[] = {
		{ "EMeshPaintMode::PaintColors", (int64)EMeshPaintMode::PaintColors },
		{ "EMeshPaintMode::PaintWeights", (int64)EMeshPaintMode::PaintWeights },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshPaint_EMeshPaintMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Mesh paint mode */" },
		{ "ModuleRelativePath", "Public/MeshPaintTypes.h" },
		{ "PaintColors.Comment", "/** Painting colors directly */" },
		{ "PaintColors.Name", "EMeshPaintMode::PaintColors" },
		{ "PaintColors.ToolTip", "Painting colors directly" },
		{ "PaintWeights.Comment", "/** Painting texture blend weights */" },
		{ "PaintWeights.Name", "EMeshPaintMode::PaintWeights" },
		{ "PaintWeights.ToolTip", "Painting texture blend weights" },
		{ "ToolTip", "Mesh paint mode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshPaint_EMeshPaintMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshPaint,
		nullptr,
		"EMeshPaintMode",
		"EMeshPaintMode",
		Z_Construct_UEnum_MeshPaint_EMeshPaintMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshPaint_EMeshPaintMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshPaint_EMeshPaintMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshPaint_EMeshPaintMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshPaint_EMeshPaintMode()
	{
		if (!Z_Registration_Info_UEnum_EMeshPaintMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshPaintMode.InnerSingleton, Z_Construct_UEnum_MeshPaint_EMeshPaintMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshPaintMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshVertexPaintTarget;
	static UEnum* EMeshVertexPaintTarget_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshVertexPaintTarget.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshVertexPaintTarget.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshPaint_EMeshVertexPaintTarget, (UObject*)Z_Construct_UPackage__Script_MeshPaint(), TEXT("EMeshVertexPaintTarget"));
		}
		return Z_Registration_Info_UEnum_EMeshVertexPaintTarget.OuterSingleton;
	}
	template<> MESHPAINT_API UEnum* StaticEnum<EMeshVertexPaintTarget>()
	{
		return EMeshVertexPaintTarget_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshPaint_EMeshVertexPaintTarget_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshPaint_EMeshVertexPaintTarget_Statics::Enumerators[] = {
		{ "EMeshVertexPaintTarget::ComponentInstance", (int64)EMeshVertexPaintTarget::ComponentInstance },
		{ "EMeshVertexPaintTarget::Mesh", (int64)EMeshVertexPaintTarget::Mesh },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshPaint_EMeshVertexPaintTarget_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Vertex paint target */" },
		{ "ComponentInstance.Comment", "/** Paint the static mesh component instance in the level */" },
		{ "ComponentInstance.Name", "EMeshVertexPaintTarget::ComponentInstance" },
		{ "ComponentInstance.ToolTip", "Paint the static mesh component instance in the level" },
		{ "Mesh.Comment", "/** Paint the actual static mesh asset */" },
		{ "Mesh.Name", "EMeshVertexPaintTarget::Mesh" },
		{ "Mesh.ToolTip", "Paint the actual static mesh asset" },
		{ "ModuleRelativePath", "Public/MeshPaintTypes.h" },
		{ "ToolTip", "Vertex paint target" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshPaint_EMeshVertexPaintTarget_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshPaint,
		nullptr,
		"EMeshVertexPaintTarget",
		"EMeshVertexPaintTarget",
		Z_Construct_UEnum_MeshPaint_EMeshVertexPaintTarget_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshPaint_EMeshVertexPaintTarget_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshPaint_EMeshVertexPaintTarget_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshPaint_EMeshVertexPaintTarget_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshPaint_EMeshVertexPaintTarget()
	{
		if (!Z_Registration_Info_UEnum_EMeshVertexPaintTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshVertexPaintTarget.InnerSingleton, Z_Construct_UEnum_MeshPaint_EMeshVertexPaintTarget_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshVertexPaintTarget.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintTypes_h_Statics::EnumInfo[] = {
		{ EMeshPaintMode_StaticEnum, TEXT("EMeshPaintMode"), &Z_Registration_Info_UEnum_EMeshPaintMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 987404475U) },
		{ EMeshVertexPaintTarget_StaticEnum, TEXT("EMeshVertexPaintTarget"), &Z_Registration_Info_UEnum_EMeshVertexPaintTarget, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2525558755U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintTypes_h_948279680(TEXT("/Script/MeshPaint"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
