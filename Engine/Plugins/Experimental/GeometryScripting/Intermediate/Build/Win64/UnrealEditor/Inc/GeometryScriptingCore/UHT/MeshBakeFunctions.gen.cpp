// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshBakeFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshBakeFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeBitDepth();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureClampMode();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureColorMode();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureTypeMode();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeNormalSpace();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeOutputMode();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeResolution();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeSamplesPerPixel();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeTypes();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptBakeResolution;
	static UEnum* EGeometryScriptBakeResolution_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptBakeResolution.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptBakeResolution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeResolution, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptBakeResolution"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptBakeResolution.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptBakeResolution>()
	{
		return EGeometryScriptBakeResolution_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeResolution_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeResolution_Statics::Enumerators[] = {
		{ "EGeometryScriptBakeResolution::Resolution16", (int64)EGeometryScriptBakeResolution::Resolution16 },
		{ "EGeometryScriptBakeResolution::Resolution32", (int64)EGeometryScriptBakeResolution::Resolution32 },
		{ "EGeometryScriptBakeResolution::Resolution64", (int64)EGeometryScriptBakeResolution::Resolution64 },
		{ "EGeometryScriptBakeResolution::Resolution128", (int64)EGeometryScriptBakeResolution::Resolution128 },
		{ "EGeometryScriptBakeResolution::Resolution256", (int64)EGeometryScriptBakeResolution::Resolution256 },
		{ "EGeometryScriptBakeResolution::Resolution512", (int64)EGeometryScriptBakeResolution::Resolution512 },
		{ "EGeometryScriptBakeResolution::Resolution1024", (int64)EGeometryScriptBakeResolution::Resolution1024 },
		{ "EGeometryScriptBakeResolution::Resolution2048", (int64)EGeometryScriptBakeResolution::Resolution2048 },
		{ "EGeometryScriptBakeResolution::Resolution4096", (int64)EGeometryScriptBakeResolution::Resolution4096 },
		{ "EGeometryScriptBakeResolution::Resolution8192", (int64)EGeometryScriptBakeResolution::Resolution8192 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeResolution_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "Resolution1024.DisplayName", "1024 x 1024" },
		{ "Resolution1024.Name", "EGeometryScriptBakeResolution::Resolution1024" },
		{ "Resolution128.DisplayName", "128 x 128" },
		{ "Resolution128.Name", "EGeometryScriptBakeResolution::Resolution128" },
		{ "Resolution16.DisplayName", "16 x 16" },
		{ "Resolution16.Name", "EGeometryScriptBakeResolution::Resolution16" },
		{ "Resolution2048.DisplayName", "2048 x 2048" },
		{ "Resolution2048.Name", "EGeometryScriptBakeResolution::Resolution2048" },
		{ "Resolution256.DisplayName", "256 x 256" },
		{ "Resolution256.Name", "EGeometryScriptBakeResolution::Resolution256" },
		{ "Resolution32.DisplayName", "32 x 32" },
		{ "Resolution32.Name", "EGeometryScriptBakeResolution::Resolution32" },
		{ "Resolution4096.DisplayName", "4096 x 4096" },
		{ "Resolution4096.Name", "EGeometryScriptBakeResolution::Resolution4096" },
		{ "Resolution512.DisplayName", "512 x 512" },
		{ "Resolution512.Name", "EGeometryScriptBakeResolution::Resolution512" },
		{ "Resolution64.DisplayName", "64 x 64" },
		{ "Resolution64.Name", "EGeometryScriptBakeResolution::Resolution64" },
		{ "Resolution8192.DisplayName", "8192 x 8192" },
		{ "Resolution8192.Name", "EGeometryScriptBakeResolution::Resolution8192" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeResolution_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptBakeResolution",
		"EGeometryScriptBakeResolution",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeResolution_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeResolution_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeResolution_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeResolution_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeResolution()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptBakeResolution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptBakeResolution.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeResolution_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptBakeResolution.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptBakeBitDepth;
	static UEnum* EGeometryScriptBakeBitDepth_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptBakeBitDepth.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptBakeBitDepth.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeBitDepth, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptBakeBitDepth"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptBakeBitDepth.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptBakeBitDepth>()
	{
		return EGeometryScriptBakeBitDepth_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeBitDepth_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeBitDepth_Statics::Enumerators[] = {
		{ "EGeometryScriptBakeBitDepth::ChannelBits8", (int64)EGeometryScriptBakeBitDepth::ChannelBits8 },
		{ "EGeometryScriptBakeBitDepth::ChannelBits16", (int64)EGeometryScriptBakeBitDepth::ChannelBits16 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeBitDepth_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChannelBits16.DisplayName", "16 bits/channel" },
		{ "ChannelBits16.Name", "EGeometryScriptBakeBitDepth::ChannelBits16" },
		{ "ChannelBits8.DisplayName", "8 bits/channel" },
		{ "ChannelBits8.Name", "EGeometryScriptBakeBitDepth::ChannelBits8" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeBitDepth_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptBakeBitDepth",
		"EGeometryScriptBakeBitDepth",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeBitDepth_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeBitDepth_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeBitDepth_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeBitDepth_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeBitDepth()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptBakeBitDepth.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptBakeBitDepth.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeBitDepth_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptBakeBitDepth.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptBakeSamplesPerPixel;
	static UEnum* EGeometryScriptBakeSamplesPerPixel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptBakeSamplesPerPixel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptBakeSamplesPerPixel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeSamplesPerPixel, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptBakeSamplesPerPixel"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptBakeSamplesPerPixel.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptBakeSamplesPerPixel>()
	{
		return EGeometryScriptBakeSamplesPerPixel_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeSamplesPerPixel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeSamplesPerPixel_Statics::Enumerators[] = {
		{ "EGeometryScriptBakeSamplesPerPixel::Sample1", (int64)EGeometryScriptBakeSamplesPerPixel::Sample1 },
		{ "EGeometryScriptBakeSamplesPerPixel::Sample4", (int64)EGeometryScriptBakeSamplesPerPixel::Sample4 },
		{ "EGeometryScriptBakeSamplesPerPixel::Sample16", (int64)EGeometryScriptBakeSamplesPerPixel::Sample16 },
		{ "EGeometryScriptBakeSamplesPerPixel::Sample64", (int64)EGeometryScriptBakeSamplesPerPixel::Sample64 },
		{ "EGeometryScriptBakeSamplesPerPixel::Samples256", (int64)EGeometryScriptBakeSamplesPerPixel::Samples256 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeSamplesPerPixel_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "Sample1.DisplayName", "1" },
		{ "Sample1.Name", "EGeometryScriptBakeSamplesPerPixel::Sample1" },
		{ "Sample16.DisplayName", "16" },
		{ "Sample16.Name", "EGeometryScriptBakeSamplesPerPixel::Sample16" },
		{ "Sample4.DisplayName", "4" },
		{ "Sample4.Name", "EGeometryScriptBakeSamplesPerPixel::Sample4" },
		{ "Sample64.DisplayName", "64" },
		{ "Sample64.Name", "EGeometryScriptBakeSamplesPerPixel::Sample64" },
		{ "Samples256.DisplayName", "256" },
		{ "Samples256.Name", "EGeometryScriptBakeSamplesPerPixel::Samples256" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeSamplesPerPixel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptBakeSamplesPerPixel",
		"EGeometryScriptBakeSamplesPerPixel",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeSamplesPerPixel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeSamplesPerPixel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeSamplesPerPixel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeSamplesPerPixel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeSamplesPerPixel()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptBakeSamplesPerPixel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptBakeSamplesPerPixel.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeSamplesPerPixel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptBakeSamplesPerPixel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptBakeTypes;
	static UEnum* EGeometryScriptBakeTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptBakeTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptBakeTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeTypes, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptBakeTypes"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptBakeTypes.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptBakeTypes>()
	{
		return EGeometryScriptBakeTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeTypes_Statics::Enumerators[] = {
		{ "EGeometryScriptBakeTypes::TangentSpaceNormal", (int64)EGeometryScriptBakeTypes::TangentSpaceNormal },
		{ "EGeometryScriptBakeTypes::ObjectSpaceNormal", (int64)EGeometryScriptBakeTypes::ObjectSpaceNormal },
		{ "EGeometryScriptBakeTypes::FaceNormal", (int64)EGeometryScriptBakeTypes::FaceNormal },
		{ "EGeometryScriptBakeTypes::BentNormal", (int64)EGeometryScriptBakeTypes::BentNormal },
		{ "EGeometryScriptBakeTypes::Position", (int64)EGeometryScriptBakeTypes::Position },
		{ "EGeometryScriptBakeTypes::Curvature", (int64)EGeometryScriptBakeTypes::Curvature },
		{ "EGeometryScriptBakeTypes::AmbientOcclusion", (int64)EGeometryScriptBakeTypes::AmbientOcclusion },
		{ "EGeometryScriptBakeTypes::Texture", (int64)EGeometryScriptBakeTypes::Texture },
		{ "EGeometryScriptBakeTypes::MultiTexture", (int64)EGeometryScriptBakeTypes::MultiTexture },
		{ "EGeometryScriptBakeTypes::VertexColor", (int64)EGeometryScriptBakeTypes::VertexColor },
		{ "EGeometryScriptBakeTypes::MaterialID", (int64)EGeometryScriptBakeTypes::MaterialID },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeTypes_Statics::Enum_MetaDataParams[] = {
		{ "AmbientOcclusion.Comment", "/* Ambient occlusion sampled across the hemisphere */" },
		{ "AmbientOcclusion.Name", "EGeometryScriptBakeTypes::AmbientOcclusion" },
		{ "AmbientOcclusion.ToolTip", "Ambient occlusion sampled across the hemisphere" },
		{ "BentNormal.Comment", "/* Normals skewed towards the least occluded direction */" },
		{ "BentNormal.Name", "EGeometryScriptBakeTypes::BentNormal" },
		{ "BentNormal.ToolTip", "Normals skewed towards the least occluded direction" },
		{ "BlueprintType", "true" },
		{ "Curvature.Comment", "/* Local curvature of the mesh surface */" },
		{ "Curvature.Name", "EGeometryScriptBakeTypes::Curvature" },
		{ "Curvature.ToolTip", "Local curvature of the mesh surface" },
		{ "FaceNormal.Comment", "/* Geometric face normals in object space */" },
		{ "FaceNormal.Name", "EGeometryScriptBakeTypes::FaceNormal" },
		{ "FaceNormal.ToolTip", "Geometric face normals in object space" },
		{ "MaterialID.Comment", "/* Material IDs as unique colors */" },
		{ "MaterialID.DisplayName", "Material ID" },
		{ "MaterialID.Name", "EGeometryScriptBakeTypes::MaterialID" },
		{ "MaterialID.ToolTip", "Material IDs as unique colors" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "MultiTexture.Comment", "/* Transfer a texture per material ID */" },
		{ "MultiTexture.Name", "EGeometryScriptBakeTypes::MultiTexture" },
		{ "MultiTexture.ToolTip", "Transfer a texture per material ID" },
		{ "ObjectSpaceNormal.Comment", "/* Interpolated normals in object space */" },
		{ "ObjectSpaceNormal.DisplayName", "Object Normal" },
		{ "ObjectSpaceNormal.Name", "EGeometryScriptBakeTypes::ObjectSpaceNormal" },
		{ "ObjectSpaceNormal.ToolTip", "Interpolated normals in object space" },
		{ "Position.Comment", "/* Positions in object space */" },
		{ "Position.Name", "EGeometryScriptBakeTypes::Position" },
		{ "Position.ToolTip", "Positions in object space" },
		{ "TangentSpaceNormal.Comment", "/* Normals in tangent space */" },
		{ "TangentSpaceNormal.DisplayName", "Tangent Normal" },
		{ "TangentSpaceNormal.Name", "EGeometryScriptBakeTypes::TangentSpaceNormal" },
		{ "TangentSpaceNormal.ToolTip", "Normals in tangent space" },
		{ "Texture.Comment", "/* Transfer a given texture */" },
		{ "Texture.Name", "EGeometryScriptBakeTypes::Texture" },
		{ "Texture.ToolTip", "Transfer a given texture" },
		{ "VertexColor.Comment", "/* Interpolated vertex colors */" },
		{ "VertexColor.Name", "EGeometryScriptBakeTypes::VertexColor" },
		{ "VertexColor.ToolTip", "Interpolated vertex colors" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptBakeTypes",
		"EGeometryScriptBakeTypes",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeTypes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeTypes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeTypes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeTypes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeTypes()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptBakeTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptBakeTypes.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptBakeTypes.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptBakeOutputMode;
	static UEnum* EGeometryScriptBakeOutputMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptBakeOutputMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptBakeOutputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeOutputMode, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptBakeOutputMode"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptBakeOutputMode.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptBakeOutputMode>()
	{
		return EGeometryScriptBakeOutputMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeOutputMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeOutputMode_Statics::Enumerators[] = {
		{ "EGeometryScriptBakeOutputMode::RGBA", (int64)EGeometryScriptBakeOutputMode::RGBA },
		{ "EGeometryScriptBakeOutputMode::PerChannel", (int64)EGeometryScriptBakeOutputMode::PerChannel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeOutputMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "PerChannel.Name", "EGeometryScriptBakeOutputMode::PerChannel" },
		{ "RGBA.Name", "EGeometryScriptBakeOutputMode::RGBA" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeOutputMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptBakeOutputMode",
		"EGeometryScriptBakeOutputMode",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeOutputMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeOutputMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeOutputMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeOutputMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeOutputMode()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptBakeOutputMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptBakeOutputMode.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeOutputMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptBakeOutputMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptBakeNormalSpace;
	static UEnum* EGeometryScriptBakeNormalSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptBakeNormalSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptBakeNormalSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeNormalSpace, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptBakeNormalSpace"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptBakeNormalSpace.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptBakeNormalSpace>()
	{
		return EGeometryScriptBakeNormalSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeNormalSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeNormalSpace_Statics::Enumerators[] = {
		{ "EGeometryScriptBakeNormalSpace::Tangent", (int64)EGeometryScriptBakeNormalSpace::Tangent },
		{ "EGeometryScriptBakeNormalSpace::Object", (int64)EGeometryScriptBakeNormalSpace::Object },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeNormalSpace_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "Object.Comment", "/* Object space */" },
		{ "Object.Name", "EGeometryScriptBakeNormalSpace::Object" },
		{ "Object.ToolTip", "Object space" },
		{ "Tangent.Comment", "/* Tangent space */" },
		{ "Tangent.Name", "EGeometryScriptBakeNormalSpace::Tangent" },
		{ "Tangent.ToolTip", "Tangent space" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeNormalSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptBakeNormalSpace",
		"EGeometryScriptBakeNormalSpace",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeNormalSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeNormalSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeNormalSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeNormalSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeNormalSpace()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptBakeNormalSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptBakeNormalSpace.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeNormalSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptBakeNormalSpace.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureTypeMode;
	static UEnum* EGeometryScriptBakeCurvatureTypeMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureTypeMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureTypeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureTypeMode, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptBakeCurvatureTypeMode"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureTypeMode.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptBakeCurvatureTypeMode>()
	{
		return EGeometryScriptBakeCurvatureTypeMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureTypeMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureTypeMode_Statics::Enumerators[] = {
		{ "EGeometryScriptBakeCurvatureTypeMode::Mean", (int64)EGeometryScriptBakeCurvatureTypeMode::Mean },
		{ "EGeometryScriptBakeCurvatureTypeMode::Max", (int64)EGeometryScriptBakeCurvatureTypeMode::Max },
		{ "EGeometryScriptBakeCurvatureTypeMode::Min", (int64)EGeometryScriptBakeCurvatureTypeMode::Min },
		{ "EGeometryScriptBakeCurvatureTypeMode::Gaussian", (int64)EGeometryScriptBakeCurvatureTypeMode::Gaussian },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureTypeMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Gaussian.Comment", "/** Product of the minimum and maximum principal curvatures */" },
		{ "Gaussian.Name", "EGeometryScriptBakeCurvatureTypeMode::Gaussian" },
		{ "Gaussian.ToolTip", "Product of the minimum and maximum principal curvatures" },
		{ "Max.Comment", "/** Maximum principal curvature */" },
		{ "Max.Name", "EGeometryScriptBakeCurvatureTypeMode::Max" },
		{ "Max.ToolTip", "Maximum principal curvature" },
		{ "Mean.Comment", "/** Average of the minimum and maximum principal curvatures */" },
		{ "Mean.Name", "EGeometryScriptBakeCurvatureTypeMode::Mean" },
		{ "Mean.ToolTip", "Average of the minimum and maximum principal curvatures" },
		{ "Min.Comment", "/** Minimum principal curvature */" },
		{ "Min.Name", "EGeometryScriptBakeCurvatureTypeMode::Min" },
		{ "Min.ToolTip", "Minimum principal curvature" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureTypeMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptBakeCurvatureTypeMode",
		"EGeometryScriptBakeCurvatureTypeMode",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureTypeMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureTypeMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureTypeMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureTypeMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureTypeMode()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureTypeMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureTypeMode.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureTypeMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureTypeMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureColorMode;
	static UEnum* EGeometryScriptBakeCurvatureColorMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureColorMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureColorMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureColorMode, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptBakeCurvatureColorMode"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureColorMode.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptBakeCurvatureColorMode>()
	{
		return EGeometryScriptBakeCurvatureColorMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureColorMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureColorMode_Statics::Enumerators[] = {
		{ "EGeometryScriptBakeCurvatureColorMode::Grayscale", (int64)EGeometryScriptBakeCurvatureColorMode::Grayscale },
		{ "EGeometryScriptBakeCurvatureColorMode::RedBlue", (int64)EGeometryScriptBakeCurvatureColorMode::RedBlue },
		{ "EGeometryScriptBakeCurvatureColorMode::RedGreenBlue", (int64)EGeometryScriptBakeCurvatureColorMode::RedGreenBlue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureColorMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Grayscale.Comment", "/** Map curvature values to grayscale such that black is negative, grey is zero, and white is positive */" },
		{ "Grayscale.Name", "EGeometryScriptBakeCurvatureColorMode::Grayscale" },
		{ "Grayscale.ToolTip", "Map curvature values to grayscale such that black is negative, grey is zero, and white is positive" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "RedBlue.Comment", "/** Map curvature values to red and blue such that red is negative, black is zero, and blue is positive */" },
		{ "RedBlue.Name", "EGeometryScriptBakeCurvatureColorMode::RedBlue" },
		{ "RedBlue.ToolTip", "Map curvature values to red and blue such that red is negative, black is zero, and blue is positive" },
		{ "RedGreenBlue.Comment", "/** Map curvature values to red, green, blue such that red is negative, green is zero, and blue is positive */" },
		{ "RedGreenBlue.Name", "EGeometryScriptBakeCurvatureColorMode::RedGreenBlue" },
		{ "RedGreenBlue.ToolTip", "Map curvature values to red, green, blue such that red is negative, green is zero, and blue is positive" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureColorMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptBakeCurvatureColorMode",
		"EGeometryScriptBakeCurvatureColorMode",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureColorMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureColorMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureColorMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureColorMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureColorMode()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureColorMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureColorMode.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureColorMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureColorMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureClampMode;
	static UEnum* EGeometryScriptBakeCurvatureClampMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureClampMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureClampMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureClampMode, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptBakeCurvatureClampMode"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureClampMode.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptBakeCurvatureClampMode>()
	{
		return EGeometryScriptBakeCurvatureClampMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureClampMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureClampMode_Statics::Enumerators[] = {
		{ "EGeometryScriptBakeCurvatureClampMode::None", (int64)EGeometryScriptBakeCurvatureClampMode::None },
		{ "EGeometryScriptBakeCurvatureClampMode::OnlyPositive", (int64)EGeometryScriptBakeCurvatureClampMode::OnlyPositive },
		{ "EGeometryScriptBakeCurvatureClampMode::OnlyNegative", (int64)EGeometryScriptBakeCurvatureClampMode::OnlyNegative },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureClampMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "None.Comment", "/** Include both negative and positive curvatures */" },
		{ "None.Name", "EGeometryScriptBakeCurvatureClampMode::None" },
		{ "None.ToolTip", "Include both negative and positive curvatures" },
		{ "OnlyNegative.Comment", "/** Clamp positive curvatures to zero */" },
		{ "OnlyNegative.Name", "EGeometryScriptBakeCurvatureClampMode::OnlyNegative" },
		{ "OnlyNegative.ToolTip", "Clamp positive curvatures to zero" },
		{ "OnlyPositive.Comment", "/** Clamp negative curvatures to zero */" },
		{ "OnlyPositive.Name", "EGeometryScriptBakeCurvatureClampMode::OnlyPositive" },
		{ "OnlyPositive.ToolTip", "Clamp negative curvatures to zero" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureClampMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptBakeCurvatureClampMode",
		"EGeometryScriptBakeCurvatureClampMode",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureClampMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureClampMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureClampMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureClampMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureClampMode()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureClampMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureClampMode.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureClampMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureClampMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptBakeTypeOptions;
class UScriptStruct* FGeometryScriptBakeTypeOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptBakeTypeOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptBakeTypeOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptBakeTypeOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptBakeTypeOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptBakeTypeOptions>()
{
	return FGeometryScriptBakeTypeOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_BakeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BakeType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Opaque struct for storing bake type options.\n */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "ToolTip", "Opaque struct for storing bake type options." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptBakeTypeOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions_Statics::NewProp_BakeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions_Statics::NewProp_BakeType_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** The bake output type to generate */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "ToolTip", "The bake output type to generate" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions_Statics::NewProp_BakeType = { "BakeType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBakeTypeOptions, BakeType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions_Statics::NewProp_BakeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions_Statics::NewProp_BakeType_MetaData)) }; // 486137607
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions_Statics::NewProp_BakeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions_Statics::NewProp_BakeType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptBakeTypeOptions",
		sizeof(FGeometryScriptBakeTypeOptions),
		alignof(FGeometryScriptBakeTypeOptions),
		Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptBakeTypeOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptBakeTypeOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptBakeTypeOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptBakeTextureOptions;
class UScriptStruct* FGeometryScriptBakeTextureOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptBakeTextureOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptBakeTextureOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptBakeTextureOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptBakeTextureOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptBakeTextureOptions>()
{
	return FGeometryScriptBakeTextureOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Resolution_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Resolution;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BitDepth_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitDepth_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BitDepth;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SamplesPerPixel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplesPerPixel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SamplesPerPixel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleFilterMask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SampleFilterMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProjectionInWorldSpace_MetaData[];
#endif
		static void NewProp_bProjectionInWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectionInWorldSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptBakeTextureOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_Resolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** The pixel resolution of the generated textures */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "ToolTip", "The pixel resolution of the generated textures" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBakeTextureOptions, Resolution), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeResolution, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_Resolution_MetaData)) }; // 1641573096
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_BitDepth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_BitDepth_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** The bit depth for each channel of the generated textures */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "ToolTip", "The bit depth for each channel of the generated textures" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_BitDepth = { "BitDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBakeTextureOptions, BitDepth), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeBitDepth, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_BitDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_BitDepth_MetaData)) }; // 504009406
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_SamplesPerPixel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_SamplesPerPixel_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Number of samples per pixel */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "ToolTip", "Number of samples per pixel" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_SamplesPerPixel = { "SamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBakeTextureOptions, SamplesPerPixel), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeSamplesPerPixel, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_SamplesPerPixel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_SamplesPerPixel_MetaData)) }; // 1811592132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_SampleFilterMask_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Mask texture for filtering out samples/pixels from the output texture */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "ToolTip", "Mask texture for filtering out samples/pixels from the output texture" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_SampleFilterMask = { "SampleFilterMask", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBakeTextureOptions, SampleFilterMask), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_SampleFilterMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_SampleFilterMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_ProjectionDistance_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Maximum allowed distance for the projection from target mesh to source mesh for the sample to be considered valid.\n\x09 * This is only relevant if a separate source mesh is provided. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "ToolTip", "Maximum allowed distance for the projection from target mesh to source mesh for the sample to be considered valid.\nThis is only relevant if a separate source mesh is provided." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_ProjectionDistance = { "ProjectionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBakeTextureOptions, ProjectionDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_ProjectionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_ProjectionDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_bProjectionInWorldSpace_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, uses the world space positions for the projection from target mesh to source mesh, otherwise it uses their object space positions.\n\x09 * This is only relevant if a separate source mesh is provided. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "ToolTip", "If true, uses the world space positions for the projection from target mesh to source mesh, otherwise it uses their object space positions.\nThis is only relevant if a separate source mesh is provided." },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_bProjectionInWorldSpace_SetBit(void* Obj)
	{
		((FGeometryScriptBakeTextureOptions*)Obj)->bProjectionInWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_bProjectionInWorldSpace = { "bProjectionInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptBakeTextureOptions), &Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_bProjectionInWorldSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_bProjectionInWorldSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_bProjectionInWorldSpace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_Resolution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_BitDepth_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_BitDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_SamplesPerPixel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_SamplesPerPixel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_SampleFilterMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_ProjectionDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewProp_bProjectionInWorldSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptBakeTextureOptions",
		sizeof(FGeometryScriptBakeTextureOptions),
		alignof(FGeometryScriptBakeTextureOptions),
		Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptBakeTextureOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptBakeTextureOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptBakeTextureOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptBakeVertexOptions;
class UScriptStruct* FGeometryScriptBakeVertexOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptBakeVertexOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptBakeVertexOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptBakeVertexOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptBakeVertexOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptBakeVertexOptions>()
{
	return FGeometryScriptBakeVertexOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSplitAtNormalSeams_MetaData[];
#endif
		static void NewProp_bSplitAtNormalSeams_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitAtNormalSeams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSplitAtUVSeams_MetaData[];
#endif
		static void NewProp_bSplitAtUVSeams_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitAtUVSeams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProjectionInWorldSpace_MetaData[];
#endif
		static void NewProp_bProjectionInWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectionInWorldSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptBakeVertexOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_bSplitAtNormalSeams_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, compute a separate vertex color for each unique normal on a vertex */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "ToolTip", "If true, compute a separate vertex color for each unique normal on a vertex" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_bSplitAtNormalSeams_SetBit(void* Obj)
	{
		((FGeometryScriptBakeVertexOptions*)Obj)->bSplitAtNormalSeams = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_bSplitAtNormalSeams = { "bSplitAtNormalSeams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptBakeVertexOptions), &Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_bSplitAtNormalSeams_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_bSplitAtNormalSeams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_bSplitAtNormalSeams_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_bSplitAtUVSeams_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, compute a separate vertex color for each unique UV on a vertex. */" },
		{ "DisplayName", "Split at UV Seams" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "ToolTip", "If true, compute a separate vertex color for each unique UV on a vertex." },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_bSplitAtUVSeams_SetBit(void* Obj)
	{
		((FGeometryScriptBakeVertexOptions*)Obj)->bSplitAtUVSeams = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_bSplitAtUVSeams = { "bSplitAtUVSeams", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptBakeVertexOptions), &Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_bSplitAtUVSeams_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_bSplitAtUVSeams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_bSplitAtUVSeams_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_ProjectionDistance_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Maximum allowed distance for the projection from target mesh to source mesh for the sample to be considered valid.\n\x09 * This is only relevant if a separate source mesh is provided. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "ToolTip", "Maximum allowed distance for the projection from target mesh to source mesh for the sample to be considered valid.\nThis is only relevant if a separate source mesh is provided." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_ProjectionDistance = { "ProjectionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBakeVertexOptions, ProjectionDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_ProjectionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_ProjectionDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_bProjectionInWorldSpace_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, uses the world space positions for the projection from target mesh to source mesh, otherwise it uses their object space positions.\n\x09 * This is only relevant if a separate source mesh is provided. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "ToolTip", "If true, uses the world space positions for the projection from target mesh to source mesh, otherwise it uses their object space positions.\nThis is only relevant if a separate source mesh is provided." },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_bProjectionInWorldSpace_SetBit(void* Obj)
	{
		((FGeometryScriptBakeVertexOptions*)Obj)->bProjectionInWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_bProjectionInWorldSpace = { "bProjectionInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptBakeVertexOptions), &Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_bProjectionInWorldSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_bProjectionInWorldSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_bProjectionInWorldSpace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_bSplitAtNormalSeams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_bSplitAtUVSeams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_ProjectionDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewProp_bProjectionInWorldSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptBakeVertexOptions",
		sizeof(FGeometryScriptBakeVertexOptions),
		alignof(FGeometryScriptBakeVertexOptions),
		Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptBakeVertexOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptBakeVertexOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptBakeVertexOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptBakeOutputType;
class UScriptStruct* FGeometryScriptBakeOutputType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptBakeOutputType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptBakeOutputType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptBakeOutputType"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptBakeOutputType.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptBakeOutputType>()
{
	return FGeometryScriptBakeOutputType::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RGBA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RGBA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_R;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_G_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_G;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptBakeOutputType>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_OutputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_OutputMode_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** The bake output mode */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "ToolTip", "The bake output mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_OutputMode = { "OutputMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBakeOutputType, OutputMode), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeOutputMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_OutputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_OutputMode_MetaData)) }; // 181894208
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_RGBA_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_RGBA = { "RGBA", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBakeOutputType, RGBA), Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_RGBA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_RGBA_MetaData)) }; // 4052076765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_R_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBakeOutputType, R), Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_R_MetaData)) }; // 4052076765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_G_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBakeOutputType, G), Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_G_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_G_MetaData)) }; // 4052076765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBakeOutputType, B), Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_B_MetaData)) }; // 4052076765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBakeOutputType, A), Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_A_MetaData)) }; // 4052076765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_OutputMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_OutputMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_RGBA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_R,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_G,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewProp_A,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptBakeOutputType",
		sizeof(FGeometryScriptBakeOutputType),
		alignof(FGeometryScriptBakeOutputType),
		Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptBakeOutputType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptBakeOutputType.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptBakeOutputType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptBakeTargetMeshOptions;
class UScriptStruct* FGeometryScriptBakeTargetMeshOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptBakeTargetMeshOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptBakeTargetMeshOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptBakeTargetMeshOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptBakeTargetMeshOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptBakeTargetMeshOptions>()
{
	return FGeometryScriptBakeTargetMeshOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetUVLayer_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TargetUVLayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptBakeTargetMeshOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions_Statics::NewProp_TargetUVLayer_MetaData[] = {
		{ "Category", "Options" },
		{ "DisplayName", "Target UV Channel" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions_Statics::NewProp_TargetUVLayer = { "TargetUVLayer", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBakeTargetMeshOptions, TargetUVLayer), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions_Statics::NewProp_TargetUVLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions_Statics::NewProp_TargetUVLayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions_Statics::NewProp_TargetUVLayer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptBakeTargetMeshOptions",
		sizeof(FGeometryScriptBakeTargetMeshOptions),
		alignof(FGeometryScriptBakeTargetMeshOptions),
		Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptBakeTargetMeshOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptBakeTargetMeshOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptBakeTargetMeshOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptBakeSourceMeshOptions;
class UScriptStruct* FGeometryScriptBakeSourceMeshOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptBakeSourceMeshOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptBakeSourceMeshOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptBakeSourceMeshOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptBakeSourceMeshOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptBakeSourceMeshOptions>()
{
	return FGeometryScriptBakeSourceMeshOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceNormalMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceNormalMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceNormalUVLayer_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceNormalUVLayer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceNormalSpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceNormalSpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceNormalSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptBakeSourceMeshOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::NewProp_SourceNormalMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::NewProp_SourceNormalMap = { "SourceNormalMap", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBakeSourceMeshOptions, SourceNormalMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::NewProp_SourceNormalMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::NewProp_SourceNormalMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::NewProp_SourceNormalUVLayer_MetaData[] = {
		{ "Category", "Options" },
		{ "DisplayName", "Source Normal UV Channel" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::NewProp_SourceNormalUVLayer = { "SourceNormalUVLayer", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBakeSourceMeshOptions, SourceNormalUVLayer), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::NewProp_SourceNormalUVLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::NewProp_SourceNormalUVLayer_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::NewProp_SourceNormalSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::NewProp_SourceNormalSpace_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::NewProp_SourceNormalSpace = { "SourceNormalSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBakeSourceMeshOptions, SourceNormalSpace), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeNormalSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::NewProp_SourceNormalSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::NewProp_SourceNormalSpace_MetaData)) }; // 2244277176
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::NewProp_SourceNormalMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::NewProp_SourceNormalUVLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::NewProp_SourceNormalSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::NewProp_SourceNormalSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptBakeSourceMeshOptions",
		sizeof(FGeometryScriptBakeSourceMeshOptions),
		alignof(FGeometryScriptBakeSourceMeshOptions),
		Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptBakeSourceMeshOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptBakeSourceMeshOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptBakeSourceMeshOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptBakeRenderCaptureOptions;
class UScriptStruct* FGeometryScriptBakeRenderCaptureOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptBakeRenderCaptureOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptBakeRenderCaptureOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptBakeRenderCaptureOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptBakeRenderCaptureOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptBakeRenderCaptureOptions>()
{
	return FGeometryScriptBakeRenderCaptureOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Resolution_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Resolution;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RenderCaptureResolution_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderCaptureResolution_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RenderCaptureResolution;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SamplesPerPixel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplesPerPixel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SamplesPerPixel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderCaptureAntiAliasing_MetaData[];
#endif
		static void NewProp_bRenderCaptureAntiAliasing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderCaptureAntiAliasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CleanupTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CleanupTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBaseColorMap_MetaData[];
#endif
		static void NewProp_bBaseColorMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBaseColorMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNormalMap_MetaData[];
#endif
		static void NewProp_bNormalMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPackedMRSMap_MetaData[];
#endif
		static void NewProp_bPackedMRSMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPackedMRSMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMetallicMap_MetaData[];
#endif
		static void NewProp_bMetallicMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMetallicMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRoughnessMap_MetaData[];
#endif
		static void NewProp_bRoughnessMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoughnessMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpecularMap_MetaData[];
#endif
		static void NewProp_bSpecularMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpecularMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEmissiveMap_MetaData[];
#endif
		static void NewProp_bEmissiveMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmissiveMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOpacityMap_MetaData[];
#endif
		static void NewProp_bOpacityMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpacityMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSubsurfaceColorMap_MetaData[];
#endif
		static void NewProp_bSubsurfaceColorMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubsurfaceColorMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfViewDegrees_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_FieldOfViewDegrees;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearPlaneDist_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_NearPlaneDist;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptBakeRenderCaptureOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_Resolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** The pixel resolution of the generated textures */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "ToolTip", "The pixel resolution of the generated textures" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBakeRenderCaptureOptions, Resolution), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeResolution, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_Resolution_MetaData)) }; // 1641573096
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_RenderCaptureResolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_RenderCaptureResolution_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** The pixel resolution of render capture photo set */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "ToolTip", "The pixel resolution of render capture photo set" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_RenderCaptureResolution = { "RenderCaptureResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBakeRenderCaptureOptions, RenderCaptureResolution), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeResolution, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_RenderCaptureResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_RenderCaptureResolution_MetaData)) }; // 1641573096
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_SamplesPerPixel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_SamplesPerPixel_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Number of samples per pixel */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "ToolTip", "Number of samples per pixel" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_SamplesPerPixel = { "SamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBakeRenderCaptureOptions, SamplesPerPixel), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeSamplesPerPixel, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_SamplesPerPixel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_SamplesPerPixel_MetaData)) }; // 1811592132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bRenderCaptureAntiAliasing_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Whether to use anti-aliasing in the render captures, this may introduce artefacts if pixels at different scene depths get blended */" },
		{ "DisplayName", "Render Capture Anti-aliasing" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "ToolTip", "Whether to use anti-aliasing in the render captures, this may introduce artefacts if pixels at different scene depths get blended" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bRenderCaptureAntiAliasing_SetBit(void* Obj)
	{
		((FGeometryScriptBakeRenderCaptureOptions*)Obj)->bRenderCaptureAntiAliasing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bRenderCaptureAntiAliasing = { "bRenderCaptureAntiAliasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptBakeRenderCaptureOptions), &Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bRenderCaptureAntiAliasing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bRenderCaptureAntiAliasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bRenderCaptureAntiAliasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_CleanupTolerance_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/**\n\x09 * This threshold is used to detect occlusion artefacts (e.g., silhouettes/blotches in the base color) so that texels\n\x09 * exhibiting them can be cleaned up i.e., rejected and filled in using the values of nearby valid texels instead.\n\x09 * \n\x09 * If the threshold is zero, the cleanup step is skipped.\n\x09 * If the threshold is too large, texels with artefacts won't be detected and the cleanup step is effectively skipped.\n\x09 * If the threshold is too small, texels without artefacts get detected and results will be bad because there won't\n\x09 * be enough nearby valid texels from which to infill values.\n\x09 * \n\x09 * A good starting point is to choose a threshold around the size of the distance (in world space) between the\n\x09 * target and source meshes; if the target was generated by VoxWrap then the voxel size estimates this distance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "ToolTip", "This threshold is used to detect occlusion artefacts (e.g., silhouettes/blotches in the base color) so that texels\nexhibiting them can be cleaned up i.e., rejected and filled in using the values of nearby valid texels instead.\n\nIf the threshold is zero, the cleanup step is skipped.\nIf the threshold is too large, texels with artefacts won't be detected and the cleanup step is effectively skipped.\nIf the threshold is too small, texels without artefacts get detected and results will be bad because there won't\nbe enough nearby valid texels from which to infill values.\n\nA good starting point is to choose a threshold around the size of the distance (in world space) between the\ntarget and source meshes; if the target was generated by VoxWrap then the voxel size estimates this distance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_CleanupTolerance = { "CleanupTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBakeRenderCaptureOptions, CleanupTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_CleanupTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_CleanupTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bBaseColorMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bBaseColorMap_SetBit(void* Obj)
	{
		((FGeometryScriptBakeRenderCaptureOptions*)Obj)->bBaseColorMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bBaseColorMap = { "bBaseColorMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptBakeRenderCaptureOptions), &Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bBaseColorMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bBaseColorMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bBaseColorMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bNormalMap_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** World space normal map */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "ToolTip", "World space normal map" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bNormalMap_SetBit(void* Obj)
	{
		((FGeometryScriptBakeRenderCaptureOptions*)Obj)->bNormalMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bNormalMap = { "bNormalMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptBakeRenderCaptureOptions), &Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bNormalMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bNormalMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bNormalMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bPackedMRSMap_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Packed Metallic/Roughness/Specular Map. If this is true the separated channel booleans are ignored */" },
		{ "DisplayName", "Packed MRS Map" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "ToolTip", "Packed Metallic/Roughness/Specular Map. If this is true the separated channel booleans are ignored" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bPackedMRSMap_SetBit(void* Obj)
	{
		((FGeometryScriptBakeRenderCaptureOptions*)Obj)->bPackedMRSMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bPackedMRSMap = { "bPackedMRSMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptBakeRenderCaptureOptions), &Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bPackedMRSMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bPackedMRSMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bPackedMRSMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bMetallicMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bMetallicMap_SetBit(void* Obj)
	{
		((FGeometryScriptBakeRenderCaptureOptions*)Obj)->bMetallicMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bMetallicMap = { "bMetallicMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptBakeRenderCaptureOptions), &Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bMetallicMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bMetallicMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bMetallicMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bRoughnessMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bRoughnessMap_SetBit(void* Obj)
	{
		((FGeometryScriptBakeRenderCaptureOptions*)Obj)->bRoughnessMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bRoughnessMap = { "bRoughnessMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptBakeRenderCaptureOptions), &Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bRoughnessMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bRoughnessMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bRoughnessMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bSpecularMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bSpecularMap_SetBit(void* Obj)
	{
		((FGeometryScriptBakeRenderCaptureOptions*)Obj)->bSpecularMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bSpecularMap = { "bSpecularMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptBakeRenderCaptureOptions), &Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bSpecularMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bSpecularMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bSpecularMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bEmissiveMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bEmissiveMap_SetBit(void* Obj)
	{
		((FGeometryScriptBakeRenderCaptureOptions*)Obj)->bEmissiveMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bEmissiveMap = { "bEmissiveMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptBakeRenderCaptureOptions), &Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bEmissiveMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bEmissiveMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bEmissiveMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bOpacityMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bOpacityMap_SetBit(void* Obj)
	{
		((FGeometryScriptBakeRenderCaptureOptions*)Obj)->bOpacityMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bOpacityMap = { "bOpacityMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptBakeRenderCaptureOptions), &Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bOpacityMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bOpacityMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bOpacityMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bSubsurfaceColorMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bSubsurfaceColorMap_SetBit(void* Obj)
	{
		((FGeometryScriptBakeRenderCaptureOptions*)Obj)->bSubsurfaceColorMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bSubsurfaceColorMap = { "bSubsurfaceColorMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptBakeRenderCaptureOptions), &Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bSubsurfaceColorMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bSubsurfaceColorMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bSubsurfaceColorMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_FieldOfViewDegrees_MetaData[] = {
		{ "Comment", "// These are hidden in the UI right now, we might want to expose them if they turn out to be useful for very large\n// or very small objects (not tested yet) TODO Figure out if we want to expose these options\n" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "ToolTip", "These are hidden in the UI right now, we might want to expose them if they turn out to be useful for very large\nor very small objects (not tested yet) TODO Figure out if we want to expose these options" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_FieldOfViewDegrees = { "FieldOfViewDegrees", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBakeRenderCaptureOptions, FieldOfViewDegrees), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_FieldOfViewDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_FieldOfViewDegrees_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_NearPlaneDist_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_NearPlaneDist = { "NearPlaneDist", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBakeRenderCaptureOptions, NearPlaneDist), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_NearPlaneDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_NearPlaneDist_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_Resolution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_RenderCaptureResolution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_RenderCaptureResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_SamplesPerPixel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_SamplesPerPixel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bRenderCaptureAntiAliasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_CleanupTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bBaseColorMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bNormalMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bPackedMRSMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bMetallicMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bRoughnessMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bSpecularMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bEmissiveMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bOpacityMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_bSubsurfaceColorMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_FieldOfViewDegrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewProp_NearPlaneDist,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptBakeRenderCaptureOptions",
		sizeof(FGeometryScriptBakeRenderCaptureOptions),
		alignof(FGeometryScriptBakeRenderCaptureOptions),
		Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptBakeRenderCaptureOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptBakeRenderCaptureOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptBakeRenderCaptureOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptRenderCaptureTextures;
class UScriptStruct* FGeometryScriptRenderCaptureTextures::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptRenderCaptureTextures.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptRenderCaptureTextures.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptRenderCaptureTextures"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptRenderCaptureTextures.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptRenderCaptureTextures>()
{
	return FGeometryScriptRenderCaptureTextures::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseColorMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BaseColorMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasBaseColorMap_MetaData[];
#endif
		static void NewProp_bHasBaseColorMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBaseColorMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NormalMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasNormalMap_MetaData[];
#endif
		static void NewProp_bHasNormalMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasNormalMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackedMRSMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PackedMRSMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasPackedMRSMap_MetaData[];
#endif
		static void NewProp_bHasPackedMRSMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPackedMRSMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetallicMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MetallicMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasMetallicMap_MetaData[];
#endif
		static void NewProp_bHasMetallicMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMetallicMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoughnessMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RoughnessMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRoughnessMap_MetaData[];
#endif
		static void NewProp_bHasRoughnessMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRoughnessMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecularMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpecularMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasSpecularMap_MetaData[];
#endif
		static void NewProp_bHasSpecularMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSpecularMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmissiveMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmissiveMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasEmissiveMap_MetaData[];
#endif
		static void NewProp_bHasEmissiveMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasEmissiveMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpacityMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OpacityMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasOpacityMap_MetaData[];
#endif
		static void NewProp_bHasOpacityMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasOpacityMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubsurfaceColorMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubsurfaceColorMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasSubsurfaceColorMap_MetaData[];
#endif
		static void NewProp_bHasSubsurfaceColorMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSubsurfaceColorMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptRenderCaptureTextures>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_BaseColorMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_BaseColorMap = { "BaseColorMap", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRenderCaptureTextures, BaseColorMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_BaseColorMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_BaseColorMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasBaseColorMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasBaseColorMap_SetBit(void* Obj)
	{
		((FGeometryScriptRenderCaptureTextures*)Obj)->bHasBaseColorMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasBaseColorMap = { "bHasBaseColorMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRenderCaptureTextures), &Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasBaseColorMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasBaseColorMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasBaseColorMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_NormalMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_NormalMap = { "NormalMap", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRenderCaptureTextures, NormalMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_NormalMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_NormalMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasNormalMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasNormalMap_SetBit(void* Obj)
	{
		((FGeometryScriptRenderCaptureTextures*)Obj)->bHasNormalMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasNormalMap = { "bHasNormalMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRenderCaptureTextures), &Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasNormalMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasNormalMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasNormalMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_PackedMRSMap_MetaData[] = {
		{ "Category", "Options" },
		{ "DisplayName", "Packed MRS Map" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_PackedMRSMap = { "PackedMRSMap", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRenderCaptureTextures, PackedMRSMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_PackedMRSMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_PackedMRSMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasPackedMRSMap_MetaData[] = {
		{ "Category", "Options" },
		{ "DisplayName", "Has Packed MRS Map" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasPackedMRSMap_SetBit(void* Obj)
	{
		((FGeometryScriptRenderCaptureTextures*)Obj)->bHasPackedMRSMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasPackedMRSMap = { "bHasPackedMRSMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRenderCaptureTextures), &Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasPackedMRSMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasPackedMRSMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasPackedMRSMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_MetallicMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_MetallicMap = { "MetallicMap", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRenderCaptureTextures, MetallicMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_MetallicMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_MetallicMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasMetallicMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasMetallicMap_SetBit(void* Obj)
	{
		((FGeometryScriptRenderCaptureTextures*)Obj)->bHasMetallicMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasMetallicMap = { "bHasMetallicMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRenderCaptureTextures), &Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasMetallicMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasMetallicMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasMetallicMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_RoughnessMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_RoughnessMap = { "RoughnessMap", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRenderCaptureTextures, RoughnessMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_RoughnessMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_RoughnessMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasRoughnessMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasRoughnessMap_SetBit(void* Obj)
	{
		((FGeometryScriptRenderCaptureTextures*)Obj)->bHasRoughnessMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasRoughnessMap = { "bHasRoughnessMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRenderCaptureTextures), &Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasRoughnessMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasRoughnessMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasRoughnessMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_SpecularMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_SpecularMap = { "SpecularMap", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRenderCaptureTextures, SpecularMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_SpecularMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_SpecularMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasSpecularMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasSpecularMap_SetBit(void* Obj)
	{
		((FGeometryScriptRenderCaptureTextures*)Obj)->bHasSpecularMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasSpecularMap = { "bHasSpecularMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRenderCaptureTextures), &Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasSpecularMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasSpecularMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasSpecularMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_EmissiveMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_EmissiveMap = { "EmissiveMap", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRenderCaptureTextures, EmissiveMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_EmissiveMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_EmissiveMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasEmissiveMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasEmissiveMap_SetBit(void* Obj)
	{
		((FGeometryScriptRenderCaptureTextures*)Obj)->bHasEmissiveMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasEmissiveMap = { "bHasEmissiveMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRenderCaptureTextures), &Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasEmissiveMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasEmissiveMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasEmissiveMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_OpacityMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_OpacityMap = { "OpacityMap", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRenderCaptureTextures, OpacityMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_OpacityMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_OpacityMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasOpacityMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasOpacityMap_SetBit(void* Obj)
	{
		((FGeometryScriptRenderCaptureTextures*)Obj)->bHasOpacityMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasOpacityMap = { "bHasOpacityMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRenderCaptureTextures), &Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasOpacityMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasOpacityMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasOpacityMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_SubsurfaceColorMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_SubsurfaceColorMap = { "SubsurfaceColorMap", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRenderCaptureTextures, SubsurfaceColorMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_SubsurfaceColorMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_SubsurfaceColorMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasSubsurfaceColorMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasSubsurfaceColorMap_SetBit(void* Obj)
	{
		((FGeometryScriptRenderCaptureTextures*)Obj)->bHasSubsurfaceColorMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasSubsurfaceColorMap = { "bHasSubsurfaceColorMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRenderCaptureTextures), &Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasSubsurfaceColorMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasSubsurfaceColorMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasSubsurfaceColorMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_BaseColorMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasBaseColorMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_NormalMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasNormalMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_PackedMRSMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasPackedMRSMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_MetallicMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasMetallicMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_RoughnessMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasRoughnessMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_SpecularMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasSpecularMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_EmissiveMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasEmissiveMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_OpacityMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasOpacityMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_SubsurfaceColorMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewProp_bHasSubsurfaceColorMap,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptRenderCaptureTextures",
		sizeof(FGeometryScriptRenderCaptureTextures),
		alignof(FGeometryScriptRenderCaptureTextures),
		Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptRenderCaptureTextures.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptRenderCaptureTextures.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptRenderCaptureTextures.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBakeFunctions::execBakeTextureFromRenderCaptures)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FTransform,Z_Param_TargetLocalToWorld);
		P_GET_STRUCT(FGeometryScriptBakeTargetMeshOptions,Z_Param_TargetOptions);
		P_GET_TARRAY(AActor*,Z_Param_SourceActors);
		P_GET_STRUCT(FGeometryScriptBakeRenderCaptureOptions,Z_Param_BakeOptions);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptRenderCaptureTextures*)Z_Param__Result=UGeometryScriptLibrary_MeshBakeFunctions::BakeTextureFromRenderCaptures(Z_Param_TargetMesh,Z_Param_TargetLocalToWorld,Z_Param_TargetOptions,Z_Param_SourceActors,Z_Param_BakeOptions,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBakeFunctions::execBakeVertex)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FTransform,Z_Param_TargetTransform);
		P_GET_STRUCT(FGeometryScriptBakeTargetMeshOptions,Z_Param_TargetOptions);
		P_GET_OBJECT(UDynamicMesh,Z_Param_SourceMesh);
		P_GET_STRUCT(FTransform,Z_Param_SourceTransform);
		P_GET_STRUCT(FGeometryScriptBakeSourceMeshOptions,Z_Param_SourceOptions);
		P_GET_STRUCT(FGeometryScriptBakeOutputType,Z_Param_BakeTypes);
		P_GET_STRUCT(FGeometryScriptBakeVertexOptions,Z_Param_BakeOptions);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBakeFunctions::BakeVertex(Z_Param_TargetMesh,Z_Param_TargetTransform,Z_Param_TargetOptions,Z_Param_SourceMesh,Z_Param_SourceTransform,Z_Param_SourceOptions,Z_Param_BakeTypes,Z_Param_BakeOptions,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBakeFunctions::execBakeTexture)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FTransform,Z_Param_TargetTransform);
		P_GET_STRUCT(FGeometryScriptBakeTargetMeshOptions,Z_Param_TargetOptions);
		P_GET_OBJECT(UDynamicMesh,Z_Param_SourceMesh);
		P_GET_STRUCT(FTransform,Z_Param_SourceTransform);
		P_GET_STRUCT(FGeometryScriptBakeSourceMeshOptions,Z_Param_SourceOptions);
		P_GET_TARRAY_REF(FGeometryScriptBakeTypeOptions,Z_Param_Out_BakeTypes);
		P_GET_STRUCT(FGeometryScriptBakeTextureOptions,Z_Param_BakeOptions);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UTexture2D*>*)Z_Param__Result=UGeometryScriptLibrary_MeshBakeFunctions::BakeTexture(Z_Param_TargetMesh,Z_Param_TargetTransform,Z_Param_TargetOptions,Z_Param_SourceMesh,Z_Param_SourceTransform,Z_Param_SourceOptions,Z_Param_Out_BakeTypes,Z_Param_BakeOptions,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeMaterialID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptBakeTypeOptions*)Z_Param__Result=UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeMaterialID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeVertexColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptBakeTypeOptions*)Z_Param__Result=UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeVertexColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeMultiTexture)
	{
		P_GET_TARRAY_REF(UTexture2D*,Z_Param_Out_MaterialIDSourceTextures);
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceUVLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptBakeTypeOptions*)Z_Param__Result=UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeMultiTexture(Z_Param_Out_MaterialIDSourceTextures,Z_Param_SourceUVLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeTexture)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_SourceTexture);
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceUVLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptBakeTypeOptions*)Z_Param__Result=UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeTexture(Z_Param_SourceTexture,Z_Param_SourceUVLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeAmbientOcclusion)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OcclusionRays);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpreadAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BiasAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptBakeTypeOptions*)Z_Param__Result=UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeAmbientOcclusion(Z_Param_OcclusionRays,Z_Param_MaxDistance,Z_Param_SpreadAngle,Z_Param_BiasAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeCurvature)
	{
		P_GET_ENUM(EGeometryScriptBakeCurvatureTypeMode,Z_Param_CurvatureType);
		P_GET_ENUM(EGeometryScriptBakeCurvatureColorMode,Z_Param_ColorMapping);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ColorRangeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinRangeMultiplier);
		P_GET_ENUM(EGeometryScriptBakeCurvatureClampMode,Z_Param_Clamping);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptBakeTypeOptions*)Z_Param__Result=UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeCurvature(EGeometryScriptBakeCurvatureTypeMode(Z_Param_CurvatureType),EGeometryScriptBakeCurvatureColorMode(Z_Param_ColorMapping),Z_Param_ColorRangeMultiplier,Z_Param_MinRangeMultiplier,EGeometryScriptBakeCurvatureClampMode(Z_Param_Clamping));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypePosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptBakeTypeOptions*)Z_Param__Result=UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypePosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeBentNormal)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OcclusionRays);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpreadAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptBakeTypeOptions*)Z_Param__Result=UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeBentNormal(Z_Param_OcclusionRays,Z_Param_MaxDistance,Z_Param_SpreadAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeFaceNormal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptBakeTypeOptions*)Z_Param__Result=UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeFaceNormal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeObjectNormal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptBakeTypeOptions*)Z_Param__Result=UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeObjectNormal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeTangentNormal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptBakeTypeOptions*)Z_Param__Result=UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeTangentNormal();
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshBakeFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshBakeFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshBakeFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BakeTexture", &UGeometryScriptLibrary_MeshBakeFunctions::execBakeTexture },
			{ "BakeTextureFromRenderCaptures", &UGeometryScriptLibrary_MeshBakeFunctions::execBakeTextureFromRenderCaptures },
			{ "BakeVertex", &UGeometryScriptLibrary_MeshBakeFunctions::execBakeVertex },
			{ "MakeBakeTypeAmbientOcclusion", &UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeAmbientOcclusion },
			{ "MakeBakeTypeBentNormal", &UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeBentNormal },
			{ "MakeBakeTypeCurvature", &UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeCurvature },
			{ "MakeBakeTypeFaceNormal", &UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeFaceNormal },
			{ "MakeBakeTypeMaterialID", &UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeMaterialID },
			{ "MakeBakeTypeMultiTexture", &UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeMultiTexture },
			{ "MakeBakeTypeObjectNormal", &UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeObjectNormal },
			{ "MakeBakeTypePosition", &UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypePosition },
			{ "MakeBakeTypeTangentNormal", &UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeTangentNormal },
			{ "MakeBakeTypeTexture", &UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeTexture },
			{ "MakeBakeTypeVertexColor", &UGeometryScriptLibrary_MeshBakeFunctions::execMakeBakeTypeVertexColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics
	{
		struct GeometryScriptLibrary_MeshBakeFunctions_eventBakeTexture_Parms
		{
			UDynamicMesh* TargetMesh;
			FTransform TargetTransform;
			FGeometryScriptBakeTargetMeshOptions TargetOptions;
			UDynamicMesh* SourceMesh;
			FTransform SourceTransform;
			FGeometryScriptBakeSourceMeshOptions SourceOptions;
			TArray<FGeometryScriptBakeTypeOptions> BakeTypes;
			FGeometryScriptBakeTextureOptions BakeOptions;
			UGeometryScriptDebug* Debug;
			TArray<UTexture2D*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetOptions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BakeTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BakeTypes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BakeOptions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeTexture_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeTexture_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_TargetOptions = { "TargetOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeTexture_Parms, TargetOptions), Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions, METADATA_PARAMS(nullptr, 0) }; // 2387824058
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_SourceMesh = { "SourceMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeTexture_Parms, SourceMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_SourceTransform = { "SourceTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeTexture_Parms, SourceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_SourceOptions = { "SourceOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeTexture_Parms, SourceOptions), Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions, METADATA_PARAMS(nullptr, 0) }; // 3528274140
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_BakeTypes_Inner = { "BakeTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions, METADATA_PARAMS(nullptr, 0) }; // 4052076765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_BakeTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_BakeTypes = { "BakeTypes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeTexture_Parms, BakeTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_BakeTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_BakeTypes_MetaData)) }; // 4052076765
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_BakeOptions = { "BakeOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeTexture_Parms, BakeOptions), Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions, METADATA_PARAMS(nullptr, 0) }; // 3022057766
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeTexture_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Textures Out" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeTexture_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_TargetTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_TargetOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_SourceMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_SourceTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_SourceOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_BakeTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_BakeTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_BakeOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Bake" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions, nullptr, "BakeTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::GeometryScriptLibrary_MeshBakeFunctions_eventBakeTexture_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics
	{
		struct GeometryScriptLibrary_MeshBakeFunctions_eventBakeTextureFromRenderCaptures_Parms
		{
			UDynamicMesh* TargetMesh;
			FTransform TargetLocalToWorld;
			FGeometryScriptBakeTargetMeshOptions TargetOptions;
			TArray<AActor*> SourceActors;
			FGeometryScriptBakeRenderCaptureOptions BakeOptions;
			UGeometryScriptDebug* Debug;
			FGeometryScriptRenderCaptureTextures ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocalToWorld;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetOptions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceActors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BakeOptions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeTextureFromRenderCaptures_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::NewProp_TargetLocalToWorld = { "TargetLocalToWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeTextureFromRenderCaptures_Parms, TargetLocalToWorld), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::NewProp_TargetOptions = { "TargetOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeTextureFromRenderCaptures_Parms, TargetOptions), Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions, METADATA_PARAMS(nullptr, 0) }; // 2387824058
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::NewProp_SourceActors_Inner = { "SourceActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::NewProp_SourceActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::NewProp_SourceActors = { "SourceActors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeTextureFromRenderCaptures_Parms, SourceActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::NewProp_SourceActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::NewProp_SourceActors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::NewProp_BakeOptions = { "BakeOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeTextureFromRenderCaptures_Parms, BakeOptions), Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions, METADATA_PARAMS(nullptr, 0) }; // 3636217481
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeTextureFromRenderCaptures_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Textures Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeTextureFromRenderCaptures_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::NewProp_ReturnValue_MetaData)) }; // 3357639822
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::NewProp_TargetLocalToWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::NewProp_TargetOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::NewProp_SourceActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::NewProp_SourceActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::NewProp_BakeOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Bake" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions, nullptr, "BakeTextureFromRenderCaptures", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::GeometryScriptLibrary_MeshBakeFunctions_eventBakeTextureFromRenderCaptures_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics
	{
		struct GeometryScriptLibrary_MeshBakeFunctions_eventBakeVertex_Parms
		{
			UDynamicMesh* TargetMesh;
			FTransform TargetTransform;
			FGeometryScriptBakeTargetMeshOptions TargetOptions;
			UDynamicMesh* SourceMesh;
			FTransform SourceTransform;
			FGeometryScriptBakeSourceMeshOptions SourceOptions;
			FGeometryScriptBakeOutputType BakeTypes;
			FGeometryScriptBakeVertexOptions BakeOptions;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetOptions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BakeTypes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BakeOptions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeVertex_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeVertex_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::NewProp_TargetOptions = { "TargetOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeVertex_Parms, TargetOptions), Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions, METADATA_PARAMS(nullptr, 0) }; // 2387824058
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::NewProp_SourceMesh = { "SourceMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeVertex_Parms, SourceMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::NewProp_SourceTransform = { "SourceTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeVertex_Parms, SourceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::NewProp_SourceOptions = { "SourceOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeVertex_Parms, SourceOptions), Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions, METADATA_PARAMS(nullptr, 0) }; // 3528274140
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::NewProp_BakeTypes = { "BakeTypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeVertex_Parms, BakeTypes), Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType, METADATA_PARAMS(nullptr, 0) }; // 1139350161
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::NewProp_BakeOptions = { "BakeOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeVertex_Parms, BakeOptions), Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions, METADATA_PARAMS(nullptr, 0) }; // 1033302910
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeVertex_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventBakeVertex_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::NewProp_TargetTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::NewProp_TargetOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::NewProp_SourceMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::NewProp_SourceTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::NewProp_SourceOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::NewProp_BakeTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::NewProp_BakeOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Bake" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions, nullptr, "BakeVertex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::GeometryScriptLibrary_MeshBakeFunctions_eventBakeVertex_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Statics
	{
		struct GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeAmbientOcclusion_Parms
		{
			int32 OcclusionRays;
			float MaxDistance;
			float SpreadAngle;
			float BiasAngle;
			FGeometryScriptBakeTypeOptions ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OcclusionRays;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BiasAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Statics::NewProp_OcclusionRays = { "OcclusionRays", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeAmbientOcclusion_Parms, OcclusionRays), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeAmbientOcclusion_Parms, MaxDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Statics::NewProp_SpreadAngle = { "SpreadAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeAmbientOcclusion_Parms, SpreadAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Statics::NewProp_BiasAngle = { "BiasAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeAmbientOcclusion_Parms, BiasAngle), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bake Type Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeAmbientOcclusion_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Statics::NewProp_ReturnValue_MetaData)) }; // 4052076765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Statics::NewProp_OcclusionRays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Statics::NewProp_MaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Statics::NewProp_SpreadAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Statics::NewProp_BiasAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Bake" },
		{ "CPP_Default_BiasAngle", "15.000000" },
		{ "CPP_Default_MaxDistance", "0.000000" },
		{ "CPP_Default_OcclusionRays", "16" },
		{ "CPP_Default_SpreadAngle", "180.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions, nullptr, "MakeBakeTypeAmbientOcclusion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Statics::GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeAmbientOcclusion_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Statics
	{
		struct GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeBentNormal_Parms
		{
			int32 OcclusionRays;
			float MaxDistance;
			float SpreadAngle;
			FGeometryScriptBakeTypeOptions ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OcclusionRays;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Statics::NewProp_OcclusionRays = { "OcclusionRays", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeBentNormal_Parms, OcclusionRays), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeBentNormal_Parms, MaxDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Statics::NewProp_SpreadAngle = { "SpreadAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeBentNormal_Parms, SpreadAngle), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bake Type Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeBentNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Statics::NewProp_ReturnValue_MetaData)) }; // 4052076765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Statics::NewProp_OcclusionRays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Statics::NewProp_MaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Statics::NewProp_SpreadAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Bake" },
		{ "CPP_Default_MaxDistance", "0.000000" },
		{ "CPP_Default_OcclusionRays", "16" },
		{ "CPP_Default_SpreadAngle", "180.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions, nullptr, "MakeBakeTypeBentNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Statics::GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeBentNormal_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics
	{
		struct GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeCurvature_Parms
		{
			EGeometryScriptBakeCurvatureTypeMode CurvatureType;
			EGeometryScriptBakeCurvatureColorMode ColorMapping;
			float ColorRangeMultiplier;
			float MinRangeMultiplier;
			EGeometryScriptBakeCurvatureClampMode Clamping;
			FGeometryScriptBakeTypeOptions ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurvatureType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurvatureType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorMapping_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorMapping;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorRangeMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRangeMultiplier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Clamping_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Clamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::NewProp_CurvatureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::NewProp_CurvatureType = { "CurvatureType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeCurvature_Parms, CurvatureType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureTypeMode, METADATA_PARAMS(nullptr, 0) }; // 3881890396
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::NewProp_ColorMapping_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::NewProp_ColorMapping = { "ColorMapping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeCurvature_Parms, ColorMapping), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureColorMode, METADATA_PARAMS(nullptr, 0) }; // 877197240
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::NewProp_ColorRangeMultiplier = { "ColorRangeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeCurvature_Parms, ColorRangeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::NewProp_MinRangeMultiplier = { "MinRangeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeCurvature_Parms, MinRangeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::NewProp_Clamping_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::NewProp_Clamping = { "Clamping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeCurvature_Parms, Clamping), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBakeCurvatureClampMode, METADATA_PARAMS(nullptr, 0) }; // 3680640947
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bake Type Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeCurvature_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::NewProp_ReturnValue_MetaData)) }; // 4052076765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::NewProp_CurvatureType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::NewProp_CurvatureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::NewProp_ColorMapping_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::NewProp_ColorMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::NewProp_ColorRangeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::NewProp_MinRangeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::NewProp_Clamping_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::NewProp_Clamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Bake" },
		{ "CPP_Default_Clamping", "None" },
		{ "CPP_Default_ColorMapping", "Grayscale" },
		{ "CPP_Default_ColorRangeMultiplier", "1.000000" },
		{ "CPP_Default_CurvatureType", "Mean" },
		{ "CPP_Default_MinRangeMultiplier", "0.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions, nullptr, "MakeBakeTypeCurvature", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeCurvature_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal_Statics
	{
		struct GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeFaceNormal_Parms
		{
			FGeometryScriptBakeTypeOptions ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bake Type Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeFaceNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal_Statics::NewProp_ReturnValue_MetaData)) }; // 4052076765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Bake" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions, nullptr, "MakeBakeTypeFaceNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal_Statics::GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeFaceNormal_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID_Statics
	{
		struct GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeMaterialID_Parms
		{
			FGeometryScriptBakeTypeOptions ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bake Type Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeMaterialID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID_Statics::NewProp_ReturnValue_MetaData)) }; // 4052076765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Bake" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions, nullptr, "MakeBakeTypeMaterialID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID_Statics::GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeMaterialID_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics
	{
		struct GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeMultiTexture_Parms
		{
			TArray<UTexture2D*> MaterialIDSourceTextures;
			int32 SourceUVLayer;
			FGeometryScriptBakeTypeOptions ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialIDSourceTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIDSourceTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialIDSourceTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceUVLayer_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceUVLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::NewProp_MaterialIDSourceTextures_Inner = { "MaterialIDSourceTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::NewProp_MaterialIDSourceTextures_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::NewProp_MaterialIDSourceTextures = { "MaterialIDSourceTextures", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeMultiTexture_Parms, MaterialIDSourceTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::NewProp_MaterialIDSourceTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::NewProp_MaterialIDSourceTextures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::NewProp_SourceUVLayer_MetaData[] = {
		{ "DisplayName", "Source UV Channel" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::NewProp_SourceUVLayer = { "SourceUVLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeMultiTexture_Parms, SourceUVLayer), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::NewProp_SourceUVLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::NewProp_SourceUVLayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bake Type Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeMultiTexture_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::NewProp_ReturnValue_MetaData)) }; // 4052076765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::NewProp_MaterialIDSourceTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::NewProp_MaterialIDSourceTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::NewProp_SourceUVLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Bake" },
		{ "CPP_Default_SourceUVLayer", "0" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions, nullptr, "MakeBakeTypeMultiTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeMultiTexture_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal_Statics
	{
		struct GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeObjectNormal_Parms
		{
			FGeometryScriptBakeTypeOptions ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bake Type Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeObjectNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal_Statics::NewProp_ReturnValue_MetaData)) }; // 4052076765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Bake" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions, nullptr, "MakeBakeTypeObjectNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal_Statics::GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeObjectNormal_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition_Statics
	{
		struct GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypePosition_Parms
		{
			FGeometryScriptBakeTypeOptions ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bake Type Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition_Statics::NewProp_ReturnValue_MetaData)) }; // 4052076765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Bake" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions, nullptr, "MakeBakeTypePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition_Statics::GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypePosition_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal_Statics
	{
		struct GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeTangentNormal_Parms
		{
			FGeometryScriptBakeTypeOptions ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bake Type Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeTangentNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal_Statics::NewProp_ReturnValue_MetaData)) }; // 4052076765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Bake" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions, nullptr, "MakeBakeTypeTangentNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal_Statics::GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeTangentNormal_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Statics
	{
		struct GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeTexture_Parms
		{
			UTexture2D* SourceTexture;
			int32 SourceUVLayer;
			FGeometryScriptBakeTypeOptions ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceTexture;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceUVLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Statics::NewProp_SourceTexture = { "SourceTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeTexture_Parms, SourceTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Statics::NewProp_SourceUVLayer = { "SourceUVLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeTexture_Parms, SourceUVLayer), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bake Type Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeTexture_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Statics::NewProp_ReturnValue_MetaData)) }; // 4052076765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Statics::NewProp_SourceTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Statics::NewProp_SourceUVLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Bake" },
		{ "CPP_Default_SourceTexture", "None" },
		{ "CPP_Default_SourceUVLayer", "0" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions, nullptr, "MakeBakeTypeTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Statics::GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeTexture_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor_Statics
	{
		struct GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeVertexColor_Parms
		{
			FGeometryScriptBakeTypeOptions ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bake Type Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeVertexColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor_Statics::NewProp_ReturnValue_MetaData)) }; // 4052076765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Bake" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions, nullptr, "MakeBakeTypeVertexColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor_Statics::GeometryScriptLibrary_MeshBakeFunctions_eventMakeBakeTypeVertexColor_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshBakeFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshBakeFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture, "BakeTexture" }, // 1165628125
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures, "BakeTextureFromRenderCaptures" }, // 4246853042
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex, "BakeVertex" }, // 4015190679
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion, "MakeBakeTypeAmbientOcclusion" }, // 2532727341
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal, "MakeBakeTypeBentNormal" }, // 987166057
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature, "MakeBakeTypeCurvature" }, // 160300678
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal, "MakeBakeTypeFaceNormal" }, // 1094887860
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID, "MakeBakeTypeMaterialID" }, // 2700723430
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture, "MakeBakeTypeMultiTexture" }, // 616637658
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal, "MakeBakeTypeObjectNormal" }, // 2628823622
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition, "MakeBakeTypePosition" }, // 1792200815
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal, "MakeBakeTypeTangentNormal" }, // 498517409
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture, "MakeBakeTypeTexture" }, // 956878299
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor, "MakeBakeTypeVertexColor" }, // 2418233196
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshBakeFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBakeFunctions.h" },
		{ "ScriptName", "GeometryScript_Bake" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshBakeFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshBakeFunctions::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBakeFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBakeFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBakeFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshBakeFunctions>()
	{
		return UGeometryScriptLibrary_MeshBakeFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshBakeFunctions::UGeometryScriptLibrary_MeshBakeFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshBakeFunctions);
	UGeometryScriptLibrary_MeshBakeFunctions::~UGeometryScriptLibrary_MeshBakeFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_Statics::EnumInfo[] = {
		{ EGeometryScriptBakeResolution_StaticEnum, TEXT("EGeometryScriptBakeResolution"), &Z_Registration_Info_UEnum_EGeometryScriptBakeResolution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1641573096U) },
		{ EGeometryScriptBakeBitDepth_StaticEnum, TEXT("EGeometryScriptBakeBitDepth"), &Z_Registration_Info_UEnum_EGeometryScriptBakeBitDepth, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 504009406U) },
		{ EGeometryScriptBakeSamplesPerPixel_StaticEnum, TEXT("EGeometryScriptBakeSamplesPerPixel"), &Z_Registration_Info_UEnum_EGeometryScriptBakeSamplesPerPixel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1811592132U) },
		{ EGeometryScriptBakeTypes_StaticEnum, TEXT("EGeometryScriptBakeTypes"), &Z_Registration_Info_UEnum_EGeometryScriptBakeTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 486137607U) },
		{ EGeometryScriptBakeOutputMode_StaticEnum, TEXT("EGeometryScriptBakeOutputMode"), &Z_Registration_Info_UEnum_EGeometryScriptBakeOutputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 181894208U) },
		{ EGeometryScriptBakeNormalSpace_StaticEnum, TEXT("EGeometryScriptBakeNormalSpace"), &Z_Registration_Info_UEnum_EGeometryScriptBakeNormalSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2244277176U) },
		{ EGeometryScriptBakeCurvatureTypeMode_StaticEnum, TEXT("EGeometryScriptBakeCurvatureTypeMode"), &Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureTypeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3881890396U) },
		{ EGeometryScriptBakeCurvatureColorMode_StaticEnum, TEXT("EGeometryScriptBakeCurvatureColorMode"), &Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureColorMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 877197240U) },
		{ EGeometryScriptBakeCurvatureClampMode_StaticEnum, TEXT("EGeometryScriptBakeCurvatureClampMode"), &Z_Registration_Info_UEnum_EGeometryScriptBakeCurvatureClampMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3680640947U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptBakeTypeOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions_Statics::NewStructOps, TEXT("GeometryScriptBakeTypeOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptBakeTypeOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptBakeTypeOptions), 4052076765U) },
		{ FGeometryScriptBakeTextureOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics::NewStructOps, TEXT("GeometryScriptBakeTextureOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptBakeTextureOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptBakeTextureOptions), 3022057766U) },
		{ FGeometryScriptBakeVertexOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics::NewStructOps, TEXT("GeometryScriptBakeVertexOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptBakeVertexOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptBakeVertexOptions), 1033302910U) },
		{ FGeometryScriptBakeOutputType::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics::NewStructOps, TEXT("GeometryScriptBakeOutputType"), &Z_Registration_Info_UScriptStruct_GeometryScriptBakeOutputType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptBakeOutputType), 1139350161U) },
		{ FGeometryScriptBakeTargetMeshOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions_Statics::NewStructOps, TEXT("GeometryScriptBakeTargetMeshOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptBakeTargetMeshOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptBakeTargetMeshOptions), 2387824058U) },
		{ FGeometryScriptBakeSourceMeshOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics::NewStructOps, TEXT("GeometryScriptBakeSourceMeshOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptBakeSourceMeshOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptBakeSourceMeshOptions), 3528274140U) },
		{ FGeometryScriptBakeRenderCaptureOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics::NewStructOps, TEXT("GeometryScriptBakeRenderCaptureOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptBakeRenderCaptureOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptBakeRenderCaptureOptions), 3636217481U) },
		{ FGeometryScriptRenderCaptureTextures::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics::NewStructOps, TEXT("GeometryScriptRenderCaptureTextures"), &Z_Registration_Info_UScriptStruct_GeometryScriptRenderCaptureTextures, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptRenderCaptureTextures), 3357639822U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions, UGeometryScriptLibrary_MeshBakeFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshBakeFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBakeFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshBakeFunctions), 3696306537U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_3119747103(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
