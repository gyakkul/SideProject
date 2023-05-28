// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/MeshVertexPainter/MeshVertexPainter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshVertexPainter() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVertexPaintAxis();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVertexPaintAxis;
	static UEnum* EVertexPaintAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVertexPaintAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVertexPaintAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVertexPaintAxis, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVertexPaintAxis"));
		}
		return Z_Registration_Info_UEnum_EVertexPaintAxis.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVertexPaintAxis>()
	{
		return EVertexPaintAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EVertexPaintAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EVertexPaintAxis_Statics::Enumerators[] = {
		{ "EVertexPaintAxis::X", (int64)EVertexPaintAxis::X },
		{ "EVertexPaintAxis::Y", (int64)EVertexPaintAxis::Y },
		{ "EVertexPaintAxis::Z", (int64)EVertexPaintAxis::Z },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EVertexPaintAxis_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MeshVertexPainter/MeshVertexPainter.h" },
		{ "X.Name", "EVertexPaintAxis::X" },
		{ "Y.Name", "EVertexPaintAxis::Y" },
		{ "Z.Name", "EVertexPaintAxis::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVertexPaintAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EVertexPaintAxis",
		"EVertexPaintAxis",
		Z_Construct_UEnum_Engine_EVertexPaintAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVertexPaintAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EVertexPaintAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVertexPaintAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EVertexPaintAxis()
	{
		if (!Z_Registration_Info_UEnum_EVertexPaintAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVertexPaintAxis.InnerSingleton, Z_Construct_UEnum_Engine_EVertexPaintAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVertexPaintAxis.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainter_h_Statics::EnumInfo[] = {
		{ EVertexPaintAxis_StaticEnum, TEXT("EVertexPaintAxis"), &Z_Registration_Info_UEnum_EVertexPaintAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2109965151U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainter_h_2106071904(TEXT("/Script/Engine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
