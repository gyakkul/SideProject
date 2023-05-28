// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplaceMeshTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplaceMeshTool() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshCommonProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshCommonProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshSineWaveProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshSineWaveProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshTextureMapProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshTextureMapProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USelectiveTessellationProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USelectiveTessellationProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType();
	MESHMODELINGTOOLSEXP_API UScriptStruct* Z_Construct_UScriptStruct_FPerlinLayerProperties();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplaceMeshToolDisplaceType;
	static UEnum* EDisplaceMeshToolDisplaceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplaceMeshToolDisplaceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplaceMeshToolDisplaceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EDisplaceMeshToolDisplaceType"));
		}
		return Z_Registration_Info_UEnum_EDisplaceMeshToolDisplaceType.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EDisplaceMeshToolDisplaceType>()
	{
		return EDisplaceMeshToolDisplaceType_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType_Statics::Enumerators[] = {
		{ "EDisplaceMeshToolDisplaceType::Constant", (int64)EDisplaceMeshToolDisplaceType::Constant },
		{ "EDisplaceMeshToolDisplaceType::DisplacementMap", (int64)EDisplaceMeshToolDisplaceType::DisplacementMap },
		{ "EDisplaceMeshToolDisplaceType::RandomNoise", (int64)EDisplaceMeshToolDisplaceType::RandomNoise },
		{ "EDisplaceMeshToolDisplaceType::PerlinNoise", (int64)EDisplaceMeshToolDisplaceType::PerlinNoise },
		{ "EDisplaceMeshToolDisplaceType::SineWave", (int64)EDisplaceMeshToolDisplaceType::SineWave },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType_Statics::Enum_MetaDataParams[] = {
		{ "Constant.Comment", "/** Offset a set distance in the normal direction. */" },
		{ "Constant.DisplayName", "Constant" },
		{ "Constant.Name", "EDisplaceMeshToolDisplaceType::Constant" },
		{ "Constant.ToolTip", "Offset a set distance in the normal direction." },
		{ "DisplacementMap.Comment", "/** Offset in the normal direction using the first channel of a 2D texture. */" },
		{ "DisplacementMap.DisplayName", "Texture2D Map" },
		{ "DisplacementMap.Name", "EDisplaceMeshToolDisplaceType::DisplacementMap" },
		{ "DisplacementMap.ToolTip", "Offset in the normal direction using the first channel of a 2D texture." },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "PerlinNoise.Comment", "/** Offset in the normal direction weighted by Perlin noise. \n\x09    We use the following formula to compute the weighting for each vertex:\n\x09\x09\x09w = PerlinNoise3D(f * (X + r))\n\x09\x09Where f is a frequency parameter, X is the vertex position, and r is a randomly-generated offset (using the Seed property).\n\x09\x09Note the range of 3D Perlin noise is [-sqrt(3/4), sqrt(3/4)].\n\x09*/" },
		{ "PerlinNoise.DisplayName", "Perlin Noise" },
		{ "PerlinNoise.Name", "EDisplaceMeshToolDisplaceType::PerlinNoise" },
		{ "PerlinNoise.ToolTip", "Offset in the normal direction weighted by Perlin noise.\n          We use the following formula to compute the weighting for each vertex:\n                      w = PerlinNoise3D(f * (X + r))\n              Where f is a frequency parameter, X is the vertex position, and r is a randomly-generated offset (using the Seed property).\n              Note the range of 3D Perlin noise is [-sqrt(3/4), sqrt(3/4)]." },
		{ "RandomNoise.Comment", "/** Offset vertices randomly. */" },
		{ "RandomNoise.DisplayName", "Random Noise" },
		{ "RandomNoise.Name", "EDisplaceMeshToolDisplaceType::RandomNoise" },
		{ "RandomNoise.ToolTip", "Offset vertices randomly." },
		{ "SineWave.Comment", "/** Move vertices in spatial sine wave pattern */" },
		{ "SineWave.DisplayName", "Sine Wave" },
		{ "SineWave.Name", "EDisplaceMeshToolDisplaceType::SineWave" },
		{ "SineWave.ToolTip", "Move vertices in spatial sine wave pattern" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EDisplaceMeshToolDisplaceType",
		"EDisplaceMeshToolDisplaceType",
		Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType()
	{
		if (!Z_Registration_Info_UEnum_EDisplaceMeshToolDisplaceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplaceMeshToolDisplaceType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplaceMeshToolDisplaceType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplaceMeshToolSubdivisionType;
	static UEnum* EDisplaceMeshToolSubdivisionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplaceMeshToolSubdivisionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplaceMeshToolSubdivisionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EDisplaceMeshToolSubdivisionType"));
		}
		return Z_Registration_Info_UEnum_EDisplaceMeshToolSubdivisionType.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EDisplaceMeshToolSubdivisionType>()
	{
		return EDisplaceMeshToolSubdivisionType_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType_Statics::Enumerators[] = {
		{ "EDisplaceMeshToolSubdivisionType::Flat", (int64)EDisplaceMeshToolSubdivisionType::Flat },
		{ "EDisplaceMeshToolSubdivisionType::PNTriangles", (int64)EDisplaceMeshToolSubdivisionType::PNTriangles },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType_Statics::Enum_MetaDataParams[] = {
		{ "Flat.Comment", "/** Subdivide the mesh using loop-style subdivision. */" },
		{ "Flat.DisplayName", "Flat" },
		{ "Flat.Name", "EDisplaceMeshToolSubdivisionType::Flat" },
		{ "Flat.ToolTip", "Subdivide the mesh using loop-style subdivision." },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "PNTriangles.Comment", "/** Subdivide the mesh using PN triangles which replace each original flat triangle by a curved shape that is \n\x09\x09retriangulated into a number of small subtriangles. The geometry of a PN triangle is defined as one cubic Bezier \n\x09\x09patch using control points. The patch matches the point and normal information at the vertices of the original \n\x09\x09""flat triangle.*/" },
		{ "PNTriangles.DisplayName", "PN Triangles" },
		{ "PNTriangles.Name", "EDisplaceMeshToolSubdivisionType::PNTriangles" },
		{ "PNTriangles.ToolTip", "Subdivide the mesh using PN triangles which replace each original flat triangle by a curved shape that is\n              retriangulated into a number of small subtriangles. The geometry of a PN triangle is defined as one cubic Bezier\n              patch using control points. The patch matches the point and normal information at the vertices of the original\n              flat triangle." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EDisplaceMeshToolSubdivisionType",
		"EDisplaceMeshToolSubdivisionType",
		Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType()
	{
		if (!Z_Registration_Info_UEnum_EDisplaceMeshToolSubdivisionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplaceMeshToolSubdivisionType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplaceMeshToolSubdivisionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplaceMeshToolTriangleSelectionType;
	static UEnum* EDisplaceMeshToolTriangleSelectionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplaceMeshToolTriangleSelectionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplaceMeshToolTriangleSelectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EDisplaceMeshToolTriangleSelectionType"));
		}
		return Z_Registration_Info_UEnum_EDisplaceMeshToolTriangleSelectionType.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EDisplaceMeshToolTriangleSelectionType>()
	{
		return EDisplaceMeshToolTriangleSelectionType_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType_Statics::Enumerators[] = {
		{ "EDisplaceMeshToolTriangleSelectionType::None", (int64)EDisplaceMeshToolTriangleSelectionType::None },
		{ "EDisplaceMeshToolTriangleSelectionType::Material", (int64)EDisplaceMeshToolTriangleSelectionType::Material },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType_Statics::Enum_MetaDataParams[] = {
		{ "Material.Comment", "/** Tessellate only triangles assigned to the chosen material */" },
		{ "Material.DisplayName", "Material" },
		{ "Material.Name", "EDisplaceMeshToolTriangleSelectionType::Material" },
		{ "Material.ToolTip", "Tessellate only triangles assigned to the chosen material" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "None.Comment", "/** Tessellate the whole mesh */" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EDisplaceMeshToolTriangleSelectionType::None" },
		{ "None.ToolTip", "Tessellate the whole mesh" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EDisplaceMeshToolTriangleSelectionType",
		"EDisplaceMeshToolTriangleSelectionType",
		Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType()
	{
		if (!Z_Registration_Info_UEnum_EDisplaceMeshToolTriangleSelectionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplaceMeshToolTriangleSelectionType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplaceMeshToolTriangleSelectionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplaceMeshToolChannelType;
	static UEnum* EDisplaceMeshToolChannelType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplaceMeshToolChannelType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplaceMeshToolChannelType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EDisplaceMeshToolChannelType"));
		}
		return Z_Registration_Info_UEnum_EDisplaceMeshToolChannelType.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EDisplaceMeshToolChannelType>()
	{
		return EDisplaceMeshToolChannelType_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType_Statics::Enumerators[] = {
		{ "EDisplaceMeshToolChannelType::Red", (int64)EDisplaceMeshToolChannelType::Red },
		{ "EDisplaceMeshToolChannelType::Green", (int64)EDisplaceMeshToolChannelType::Green },
		{ "EDisplaceMeshToolChannelType::Blue", (int64)EDisplaceMeshToolChannelType::Blue },
		{ "EDisplaceMeshToolChannelType::Alpha", (int64)EDisplaceMeshToolChannelType::Alpha },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType_Statics::Enum_MetaDataParams[] = {
		{ "Alpha.Name", "EDisplaceMeshToolChannelType::Alpha" },
		{ "Blue.Name", "EDisplaceMeshToolChannelType::Blue" },
		{ "Green.Name", "EDisplaceMeshToolChannelType::Green" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "Red.Name", "EDisplaceMeshToolChannelType::Red" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EDisplaceMeshToolChannelType",
		"EDisplaceMeshToolChannelType",
		Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType()
	{
		if (!Z_Registration_Info_UEnum_EDisplaceMeshToolChannelType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplaceMeshToolChannelType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplaceMeshToolChannelType.InnerSingleton;
	}
	DEFINE_FUNCTION(UDisplaceMeshCommonProperties::execGetWeightMapsFunc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetWeightMapsFunc();
		P_NATIVE_END;
	}
	void UDisplaceMeshCommonProperties::StaticRegisterNativesUDisplaceMeshCommonProperties()
	{
		UClass* Class = UDisplaceMeshCommonProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWeightMapsFunc", &UDisplaceMeshCommonProperties::execGetWeightMapsFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics
	{
		struct DisplaceMeshCommonProperties_eventGetWeightMapsFunc_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplaceMeshCommonProperties_eventGetWeightMapsFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplaceMeshCommonProperties, nullptr, "GetWeightMapsFunc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::DisplaceMeshCommonProperties_eventGetWeightMapsFunc_Parms), Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplaceMeshCommonProperties);
	UClass* Z_Construct_UClass_UDisplaceMeshCommonProperties_NoRegister()
	{
		return UDisplaceMeshCommonProperties::StaticClass();
	}
	struct Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DisplacementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplacementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DisplacementType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplaceIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplaceIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RandomSeed;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SubdivisionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubdivisionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SubdivisionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subdivisions_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Subdivisions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightMap_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeightMap;
		static const UECodeGen_Private::FStrPropertyParams NewProp_WeightMapsList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightMapsList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightMapsList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertWeightMap_MetaData[];
#endif
		static void NewProp_bInvertWeightMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertWeightMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowWireframe_MetaData[];
#endif
		static void NewProp_bShowWireframe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWireframe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableSizeWarning_MetaData[];
#endif
		static void NewProp_bDisableSizeWarning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableSizeWarning;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc, "GetWeightMapsFunc" }, // 3420863277
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** The basic set of properties shared by (more or less) all DisplacementTypes. */" },
		{ "IncludePath", "DisplaceMeshTool.h" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "The basic set of properties shared by (more or less) all DisplacementTypes." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_DisplacementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_DisplacementType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Displacement type */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Displacement type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_DisplacementType = { "DisplacementType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshCommonProperties, DisplacementType), Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_DisplacementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_DisplacementType_MetaData)) }; // 3419670015
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_DisplaceIntensity_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "100000.0" },
		{ "ClampMin", "-10000.0" },
		{ "Comment", "/** Displacement intensity */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Displacement intensity" },
		{ "UIMax", "100.0" },
		{ "UIMin", "-100.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_DisplaceIntensity = { "DisplaceIntensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshCommonProperties, DisplaceIntensity), METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_DisplaceIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_DisplaceIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Seed for randomization */" },
		{ "Delta", "1" },
		{ "EditCondition", "DisplacementType == EDisplaceMeshToolDisplaceType::RandomNoise || DisplacementType == EDisplaceMeshToolDisplaceType::PerlinNoise" },
		{ "LinearDeltaSensitivity", "50" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Seed for randomization" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshCommonProperties, RandomSeed), METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_RandomSeed_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_SubdivisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_SubdivisionType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Type of the  mesh subdivision. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Type of the  mesh subdivision." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_SubdivisionType = { "SubdivisionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshCommonProperties, SubdivisionType), Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_SubdivisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_SubdivisionType_MetaData)) }; // 1322231029
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_Subdivisions_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of times to subdivide the mesh before displacing it. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Number of times to subdivide the mesh before displacing it." },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_Subdivisions = { "Subdivisions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshCommonProperties, Subdivisions), METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_Subdivisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_Subdivisions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_WeightMap_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Select vertex weight map. If configured, the weight map value will be sampled to modulate displacement intensity. */" },
		{ "GetOptions", "GetWeightMapsFunc" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Select vertex weight map. If configured, the weight map value will be sampled to modulate displacement intensity." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_WeightMap = { "WeightMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshCommonProperties, WeightMap), METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_WeightMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_WeightMap_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_WeightMapsList_Inner = { "WeightMapsList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_WeightMapsList_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_WeightMapsList = { "WeightMapsList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshCommonProperties, WeightMapsList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_WeightMapsList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_WeightMapsList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bInvertWeightMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
	};
#endif
	void Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bInvertWeightMap_SetBit(void* Obj)
	{
		((UDisplaceMeshCommonProperties*)Obj)->bInvertWeightMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bInvertWeightMap = { "bInvertWeightMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplaceMeshCommonProperties), &Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bInvertWeightMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bInvertWeightMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bInvertWeightMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bShowWireframe_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
	};
#endif
	void Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bShowWireframe_SetBit(void* Obj)
	{
		((UDisplaceMeshCommonProperties*)Obj)->bShowWireframe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bShowWireframe = { "bShowWireframe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplaceMeshCommonProperties), &Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bShowWireframe_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bShowWireframe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bShowWireframe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bDisableSizeWarning_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bDisableSizeWarning_SetBit(void* Obj)
	{
		((UDisplaceMeshCommonProperties*)Obj)->bDisableSizeWarning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bDisableSizeWarning = { "bDisableSizeWarning", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplaceMeshCommonProperties), &Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bDisableSizeWarning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bDisableSizeWarning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bDisableSizeWarning_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_DisplacementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_DisplacementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_DisplaceIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_RandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_SubdivisionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_SubdivisionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_Subdivisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_WeightMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_WeightMapsList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_WeightMapsList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bInvertWeightMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bShowWireframe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bDisableSizeWarning,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplaceMeshCommonProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::ClassParams = {
		&UDisplaceMeshCommonProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplaceMeshCommonProperties()
	{
		if (!Z_Registration_Info_UClass_UDisplaceMeshCommonProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplaceMeshCommonProperties.OuterSingleton, Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplaceMeshCommonProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDisplaceMeshCommonProperties>()
	{
		return UDisplaceMeshCommonProperties::StaticClass();
	}
	UDisplaceMeshCommonProperties::UDisplaceMeshCommonProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplaceMeshCommonProperties);
	UDisplaceMeshCommonProperties::~UDisplaceMeshCommonProperties() {}
	DEFINE_FUNCTION(USelectiveTessellationProperties::execGetMaterialIDsFunc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetMaterialIDsFunc();
		P_NATIVE_END;
	}
	void USelectiveTessellationProperties::StaticRegisterNativesUSelectiveTessellationProperties()
	{
		UClass* Class = USelectiveTessellationProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaterialIDsFunc", &USelectiveTessellationProperties::execGetMaterialIDsFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics
	{
		struct SelectiveTessellationProperties_eventGetMaterialIDsFunc_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SelectiveTessellationProperties_eventGetMaterialIDsFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectiveTessellationProperties, nullptr, "GetMaterialIDsFunc", nullptr, nullptr, sizeof(Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::SelectiveTessellationProperties_eventGetMaterialIDsFunc_Parms), Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelectiveTessellationProperties);
	UClass* Z_Construct_UClass_USelectiveTessellationProperties_NoRegister()
	{
		return USelectiveTessellationProperties::StaticClass();
	}
	struct Z_Construct_UClass_USelectiveTessellationProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActiveMaterial;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialIDList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIDList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialIDList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelectiveTessellationProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USelectiveTessellationProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc, "GetMaterialIDsFunc" }, // 1674411786
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectiveTessellationProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** PropertySet for properties affecting the selective tessellation. */" },
		{ "IncludePath", "DisplaceMeshTool.h" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "PropertySet for properties affecting the selective tessellation." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_SelectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_SelectionType_MetaData[] = {
		{ "Category", "SelectiveTessellationOptions" },
		{ "Comment", "/** Optionally, restrict tessellation to a subset of the triangles. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Optionally, restrict tessellation to a subset of the triangles." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USelectiveTessellationProperties, SelectionType), Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType, METADATA_PARAMS(Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_SelectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_SelectionType_MetaData)) }; // 3414555651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_ActiveMaterial_MetaData[] = {
		{ "Category", "SelectiveTessellationOptions" },
		{ "Comment", "/** Name of the selected material. */" },
		{ "EditCondition", "SelectionType == EDisplaceMeshToolTriangleSelectionType::Material" },
		{ "EditConditionHides", "" },
		{ "GetOptions", "GetMaterialIDsFunc" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Name of the selected material." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_ActiveMaterial = { "ActiveMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USelectiveTessellationProperties, ActiveMaterial), METADATA_PARAMS(Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_ActiveMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_ActiveMaterial_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_MaterialIDList_Inner = { "MaterialIDList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_MaterialIDList_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_MaterialIDList = { "MaterialIDList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USelectiveTessellationProperties, MaterialIDList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_MaterialIDList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_MaterialIDList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USelectiveTessellationProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_SelectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_SelectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_ActiveMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_MaterialIDList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_MaterialIDList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelectiveTessellationProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelectiveTessellationProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USelectiveTessellationProperties_Statics::ClassParams = {
		&USelectiveTessellationProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USelectiveTessellationProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USelectiveTessellationProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USelectiveTessellationProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USelectiveTessellationProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USelectiveTessellationProperties()
	{
		if (!Z_Registration_Info_UClass_USelectiveTessellationProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelectiveTessellationProperties.OuterSingleton, Z_Construct_UClass_USelectiveTessellationProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USelectiveTessellationProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USelectiveTessellationProperties>()
	{
		return USelectiveTessellationProperties::StaticClass();
	}
	USelectiveTessellationProperties::USelectiveTessellationProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelectiveTessellationProperties);
	USelectiveTessellationProperties::~USelectiveTessellationProperties() {}
	void UDisplaceMeshTextureMapProperties::StaticRegisterNativesUDisplaceMeshTextureMapProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplaceMeshTextureMapProperties);
	UClass* Z_Construct_UClass_UDisplaceMeshTextureMapProperties_NoRegister()
	{
		return UDisplaceMeshTextureMapProperties::StaticClass();
	}
	struct Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplacementMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DisplacementMap;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Channel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Channel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplacementMapBaseValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplacementMapBaseValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyAdjustmentCurve_MetaData[];
#endif
		static void NewProp_bApplyAdjustmentCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyAdjustmentCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustmentCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AdjustmentCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecalcNormals_MetaData[];
#endif
		static void NewProp_bRecalcNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecalcNormals;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** PropertySet for properties affecting the Image Map displacement type. */" },
		{ "IncludePath", "DisplaceMeshTool.h" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "PropertySet for properties affecting the Image Map displacement type." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_DisplacementMap_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Displacement map. Only the first channel is used. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Displacement map. Only the first channel is used." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_DisplacementMap = { "DisplacementMap", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshTextureMapProperties, DisplacementMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_DisplacementMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_DisplacementMap_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_Channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Channel in the displacement map to use. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Channel in the displacement map to use." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshTextureMapProperties, Channel), Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_Channel_MetaData)) }; // 3551181399
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_DisplacementMapBaseValue_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The value in the texture map that corresponds to no displacement. For instance, if set to 0, then all\n\x09 displacement will be positive. If set to 0.5, displacement below 0.5 will be negative, and above will be\n\x09 positive. Default is for 128/255 to be no displacement. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "The value in the texture map that corresponds to no displacement. For instance, if set to 0, then all\n       displacement will be positive. If set to 0.5, displacement below 0.5 will be negative, and above will be\n       positive. Default is for 128/255 to be no displacement." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_DisplacementMapBaseValue = { "DisplacementMapBaseValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshTextureMapProperties, DisplacementMapBaseValue), METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_DisplacementMapBaseValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_DisplacementMapBaseValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_UVScale_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** When sampling from the texture map, how to scale the mesh UV's in the x and y directions. For a mesh with\n\x09UV's in the range 0 to 1, setting a scale above 1 will result in tiling the texture map, and scaling below\n\x09""1 will result in using only part of the texture map.*/" },
		{ "Delta", "0.010000" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "When sampling from the texture map, how to scale the mesh UV's in the x and y directions. For a mesh with\n      UV's in the range 0 to 1, setting a scale above 1 will result in tiling the texture map, and scaling below\n      1 will result in using only part of the texture map." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshTextureMapProperties, UVScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_UVScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_UVScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_UVOffset_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** When sampling from the texture map, how to offset the mesh UV's. This will result in offsetting the\n\x09tiling of the texture map across the mesh. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "When sampling from the texture map, how to offset the mesh UV's. This will result in offsetting the\n      tiling of the texture map across the mesh." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_UVOffset = { "UVOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshTextureMapProperties, UVOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_UVOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_UVOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_bApplyAdjustmentCurve_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** When true, applies a function to remap the values in the displacement map, which can be used \n\x09 for contrast adjustment. The texture map values are converted to the range [0,1] before applying\n\x09 the remapping. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "When true, applies a function to remap the values in the displacement map, which can be used\n       for contrast adjustment. The texture map values are converted to the range [0,1] before applying\n       the remapping." },
	};
#endif
	void Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_bApplyAdjustmentCurve_SetBit(void* Obj)
	{
		((UDisplaceMeshTextureMapProperties*)Obj)->bApplyAdjustmentCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_bApplyAdjustmentCurve = { "bApplyAdjustmentCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplaceMeshTextureMapProperties), &Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_bApplyAdjustmentCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_bApplyAdjustmentCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_bApplyAdjustmentCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_AdjustmentCurve_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** This curve is queried in the range [0,1] to adjust contrast of the displacement map. */" },
		{ "EditCondition", "bApplyAdjustmentCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "This curve is queried in the range [0,1] to adjust contrast of the displacement map." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_AdjustmentCurve = { "AdjustmentCurve", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshTextureMapProperties, AdjustmentCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_AdjustmentCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_AdjustmentCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_bRecalcNormals_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Recalculate normals from displaced mesh. Disable this if you are applying Displacements that are paired with an existing Normal Map in your Material. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Recalculate normals from displaced mesh. Disable this if you are applying Displacements that are paired with an existing Normal Map in your Material." },
	};
#endif
	void Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_bRecalcNormals_SetBit(void* Obj)
	{
		((UDisplaceMeshTextureMapProperties*)Obj)->bRecalcNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_bRecalcNormals = { "bRecalcNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplaceMeshTextureMapProperties), &Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_bRecalcNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_bRecalcNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_bRecalcNormals_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_DisplacementMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_Channel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_DisplacementMapBaseValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_UVScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_UVOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_bApplyAdjustmentCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_AdjustmentCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_bRecalcNormals,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplaceMeshTextureMapProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::ClassParams = {
		&UDisplaceMeshTextureMapProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplaceMeshTextureMapProperties()
	{
		if (!Z_Registration_Info_UClass_UDisplaceMeshTextureMapProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplaceMeshTextureMapProperties.OuterSingleton, Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplaceMeshTextureMapProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDisplaceMeshTextureMapProperties>()
	{
		return UDisplaceMeshTextureMapProperties::StaticClass();
	}
	UDisplaceMeshTextureMapProperties::UDisplaceMeshTextureMapProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplaceMeshTextureMapProperties);
	UDisplaceMeshTextureMapProperties::~UDisplaceMeshTextureMapProperties() {}
	void UDisplaceMeshDirectionalFilterProperties::StaticRegisterNativesUDisplaceMeshDirectionalFilterProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplaceMeshDirectionalFilterProperties);
	UClass* Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_NoRegister()
	{
		return UDisplaceMeshDirectionalFilterProperties::StaticClass();
	}
	struct Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFilter_MetaData[];
#endif
		static void NewProp_bEnableFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilterDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilterWidth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Properties for a directional filter. Allows for displacement to be applied only to vertices whose normals point in a given direction */" },
		{ "IncludePath", "DisplaceMeshTool.h" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Properties for a directional filter. Allows for displacement to be applied only to vertices whose normals point in a given direction" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_bEnableFilter_MetaData[] = {
		{ "Category", "DirectionalFilterOptions" },
		{ "Comment", "/** Whether the directional filter is active. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Whether the directional filter is active." },
	};
#endif
	void Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_bEnableFilter_SetBit(void* Obj)
	{
		((UDisplaceMeshDirectionalFilterProperties*)Obj)->bEnableFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_bEnableFilter = { "bEnableFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplaceMeshDirectionalFilterProperties), &Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_bEnableFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_bEnableFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_bEnableFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_FilterDirection_MetaData[] = {
		{ "Category", "DirectionalFilterOptions" },
		{ "Comment", "/** Unit vector representing the direction to filter along. */" },
		{ "Delta", "0.500000" },
		{ "EditCondition", "bEnableFilter == true" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Unit vector representing the direction to filter along." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_FilterDirection = { "FilterDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshDirectionalFilterProperties, FilterDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_FilterDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_FilterDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_FilterWidth_MetaData[] = {
		{ "Category", "DirectionalFilterOptions" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Scalar value determining how close to the filter direction the vertex normals must be in order to be displaced.\n\x09\x09""0: Only normals pointing exactly in the filter direction are displaced.\n\x09\x09""0.5: Normals forming angle up to 90 from the filter direction are displaced.\n\x09\x09""1.0: All vertices are displaced.\n\x09*/" },
		{ "EditCondition", "bEnableFilter == true" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Scalar value determining how close to the filter direction the vertex normals must be in order to be displaced.\n              0: Only normals pointing exactly in the filter direction are displaced.\n              0.5: Normals forming angle up to 90 from the filter direction are displaced.\n              1.0: All vertices are displaced." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_FilterWidth = { "FilterWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshDirectionalFilterProperties, FilterWidth), METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_FilterWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_FilterWidth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_bEnableFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_FilterDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_FilterWidth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplaceMeshDirectionalFilterProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::ClassParams = {
		&UDisplaceMeshDirectionalFilterProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties()
	{
		if (!Z_Registration_Info_UClass_UDisplaceMeshDirectionalFilterProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplaceMeshDirectionalFilterProperties.OuterSingleton, Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplaceMeshDirectionalFilterProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDisplaceMeshDirectionalFilterProperties>()
	{
		return UDisplaceMeshDirectionalFilterProperties::StaticClass();
	}
	UDisplaceMeshDirectionalFilterProperties::UDisplaceMeshDirectionalFilterProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplaceMeshDirectionalFilterProperties);
	UDisplaceMeshDirectionalFilterProperties::~UDisplaceMeshDirectionalFilterProperties() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerlinLayerProperties;
class UScriptStruct* FPerlinLayerProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerlinLayerProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerlinLayerProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerlinLayerProperties, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("PerlinLayerProperties"));
	}
	return Z_Registration_Info_UScriptStruct_PerlinLayerProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UScriptStruct* StaticStruct<FPerlinLayerProperties>()
{
	return FPerlinLayerProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Per-layer properties for Perlin noise. Each layer has independent Frequency and Intensity. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Per-layer properties for Perlin noise. Each layer has independent Frequency and Intensity." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerlinLayerProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "PerlinNoiseOptions" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Frequency of Perlin noise layer */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Frequency of Perlin noise layer" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerlinLayerProperties, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "PerlinNoiseOptions" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "-100.0" },
		{ "Comment", "/** Intensity/amplitude of Perlin noise layer */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Intensity/amplitude of Perlin noise layer" },
		{ "UIMax", "10.0" },
		{ "UIMin", "-10.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerlinLayerProperties, Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::NewProp_Intensity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::NewProp_Intensity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		&NewStructOps,
		"PerlinLayerProperties",
		sizeof(FPerlinLayerProperties),
		alignof(FPerlinLayerProperties),
		Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerlinLayerProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_PerlinLayerProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerlinLayerProperties.InnerSingleton, Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PerlinLayerProperties.InnerSingleton;
	}
	void UDisplaceMeshPerlinNoiseProperties::StaticRegisterNativesUDisplaceMeshPerlinNoiseProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplaceMeshPerlinNoiseProperties);
	UClass* Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_NoRegister()
	{
		return UDisplaceMeshPerlinNoiseProperties::StaticClass();
	}
	struct Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerlinLayerProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerlinLayerProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerlinLayerProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** PropertySet for properties affecting the Perlin Noise displacement type. */" },
		{ "IncludePath", "DisplaceMeshTool.h" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "PropertySet for properties affecting the Perlin Noise displacement type." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::NewProp_PerlinLayerProperties_Inner = { "PerlinLayerProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPerlinLayerProperties, METADATA_PARAMS(nullptr, 0) }; // 1693402577
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::NewProp_PerlinLayerProperties_MetaData[] = {
		{ "Category", "PerlinNoiseOptions" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::NewProp_PerlinLayerProperties = { "PerlinLayerProperties", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshPerlinNoiseProperties, PerlinLayerProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::NewProp_PerlinLayerProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::NewProp_PerlinLayerProperties_MetaData)) }; // 1693402577
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::NewProp_PerlinLayerProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::NewProp_PerlinLayerProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplaceMeshPerlinNoiseProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::ClassParams = {
		&UDisplaceMeshPerlinNoiseProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties()
	{
		if (!Z_Registration_Info_UClass_UDisplaceMeshPerlinNoiseProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplaceMeshPerlinNoiseProperties.OuterSingleton, Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplaceMeshPerlinNoiseProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDisplaceMeshPerlinNoiseProperties>()
	{
		return UDisplaceMeshPerlinNoiseProperties::StaticClass();
	}
	UDisplaceMeshPerlinNoiseProperties::UDisplaceMeshPerlinNoiseProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplaceMeshPerlinNoiseProperties);
	UDisplaceMeshPerlinNoiseProperties::~UDisplaceMeshPerlinNoiseProperties() {}
	void UDisplaceMeshSineWaveProperties::StaticRegisterNativesUDisplaceMeshSineWaveProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplaceMeshSineWaveProperties);
	UClass* Z_Construct_UClass_UDisplaceMeshSineWaveProperties_NoRegister()
	{
		return UDisplaceMeshSineWaveProperties::StaticClass();
	}
	struct Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SineWaveFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SineWaveFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SineWavePhaseShift_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SineWavePhaseShift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SineWaveDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SineWaveDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** PropertySet for Sine wave displacement */" },
		{ "IncludePath", "DisplaceMeshTool.h" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "PropertySet for Sine wave displacement" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::NewProp_SineWaveFrequency_MetaData[] = {
		{ "Category", "SineWaveOptions" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Sine wave displacement frequency */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Sine wave displacement frequency" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::NewProp_SineWaveFrequency = { "SineWaveFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshSineWaveProperties, SineWaveFrequency), METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::NewProp_SineWaveFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::NewProp_SineWaveFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::NewProp_SineWavePhaseShift_MetaData[] = {
		{ "Category", "SineWaveOptions" },
		{ "ClampMax", "6.28318531" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Sine wave phase shift */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Sine wave phase shift" },
		{ "UIMax", "6.28318531" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::NewProp_SineWavePhaseShift = { "SineWavePhaseShift", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshSineWaveProperties, SineWavePhaseShift), METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::NewProp_SineWavePhaseShift_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::NewProp_SineWavePhaseShift_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::NewProp_SineWaveDirection_MetaData[] = {
		{ "Category", "SineWaveOptions" },
		{ "Comment", "/** Unit vector representing the direction of wave displacement. */" },
		{ "Delta", "0.500000" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Unit vector representing the direction of wave displacement." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::NewProp_SineWaveDirection = { "SineWaveDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshSineWaveProperties, SineWaveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::NewProp_SineWaveDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::NewProp_SineWaveDirection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::NewProp_SineWaveFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::NewProp_SineWavePhaseShift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::NewProp_SineWaveDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplaceMeshSineWaveProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::ClassParams = {
		&UDisplaceMeshSineWaveProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplaceMeshSineWaveProperties()
	{
		if (!Z_Registration_Info_UClass_UDisplaceMeshSineWaveProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplaceMeshSineWaveProperties.OuterSingleton, Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplaceMeshSineWaveProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDisplaceMeshSineWaveProperties>()
	{
		return UDisplaceMeshSineWaveProperties::StaticClass();
	}
	UDisplaceMeshSineWaveProperties::UDisplaceMeshSineWaveProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplaceMeshSineWaveProperties);
	UDisplaceMeshSineWaveProperties::~UDisplaceMeshSineWaveProperties() {}
	void UDisplaceMeshToolBuilder::StaticRegisterNativesUDisplaceMeshToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplaceMeshToolBuilder);
	UClass* Z_Construct_UClass_UDisplaceMeshToolBuilder_NoRegister()
	{
		return UDisplaceMeshToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UDisplaceMeshToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplaceMeshToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for Simple Mesh Displacement Tool\n */" },
		{ "IncludePath", "DisplaceMeshTool.h" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Builder for Simple Mesh Displacement Tool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplaceMeshToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplaceMeshToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplaceMeshToolBuilder_Statics::ClassParams = {
		&UDisplaceMeshToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplaceMeshToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UDisplaceMeshToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplaceMeshToolBuilder.OuterSingleton, Z_Construct_UClass_UDisplaceMeshToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplaceMeshToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDisplaceMeshToolBuilder>()
	{
		return UDisplaceMeshToolBuilder::StaticClass();
	}
	UDisplaceMeshToolBuilder::UDisplaceMeshToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplaceMeshToolBuilder);
	UDisplaceMeshToolBuilder::~UDisplaceMeshToolBuilder() {}
	void UDisplaceMeshTool::StaticRegisterNativesUDisplaceMeshTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplaceMeshTool);
	UClass* Z_Construct_UClass_UDisplaceMeshTool_NoRegister()
	{
		return UDisplaceMeshTool::StaticClass();
	}
	struct Z_Construct_UClass_UDisplaceMeshTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CommonProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalFilterProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DirectionalFilterProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureMapProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextureMapProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NoiseProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SineWaveProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SineWaveProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectiveTessellationProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectiveTessellationProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveContrastCurveTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveContrastCurveTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMeshActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplaceMeshTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple Mesh Displacement Tool\n */" },
		{ "IncludePath", "DisplaceMeshTool.h" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Simple Mesh Displacement Tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_CommonProperties_MetaData[] = {
		{ "Comment", "/** Shared properties for all displacement modes. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Shared properties for all displacement modes." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_CommonProperties = { "CommonProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshTool, CommonProperties), Z_Construct_UClass_UDisplaceMeshCommonProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_CommonProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_CommonProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_DirectionalFilterProperties_MetaData[] = {
		{ "Comment", "/** Properties defining the directional filter. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Properties defining the directional filter." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_DirectionalFilterProperties = { "DirectionalFilterProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshTool, DirectionalFilterProperties), Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_DirectionalFilterProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_DirectionalFilterProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_TextureMapProperties_MetaData[] = {
		{ "Comment", "/** Properties defining the texture map */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Properties defining the texture map" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_TextureMapProperties = { "TextureMapProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshTool, TextureMapProperties), Z_Construct_UClass_UDisplaceMeshTextureMapProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_TextureMapProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_TextureMapProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_NoiseProperties_MetaData[] = {
		{ "Comment", "/** Multi-layer Perlin noise frequencies and intensities */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Multi-layer Perlin noise frequencies and intensities" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_NoiseProperties = { "NoiseProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshTool, NoiseProperties), Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_NoiseProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_NoiseProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_SineWaveProperties_MetaData[] = {
		{ "Comment", "/** Sine wave parameters and direction of displacement */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Sine wave parameters and direction of displacement" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_SineWaveProperties = { "SineWaveProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshTool, SineWaveProperties), Z_Construct_UClass_UDisplaceMeshSineWaveProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_SineWaveProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_SineWaveProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_SelectiveTessellationProperties_MetaData[] = {
		{ "Comment", "/** Selective tessellation properties */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Selective tessellation properties" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_SelectiveTessellationProperties = { "SelectiveTessellationProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshTool, SelectiveTessellationProperties), Z_Construct_UClass_USelectiveTessellationProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_SelectiveTessellationProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_SelectiveTessellationProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_ActiveContrastCurveTarget_MetaData[] = {
		{ "Comment", "/** Contrast Curve we are actively listening to */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Contrast Curve we are actively listening to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_ActiveContrastCurveTarget = { "ActiveContrastCurveTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshTool, ActiveContrastCurveTarget), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_ActiveContrastCurveTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_ActiveContrastCurveTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_PreviewMeshActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_PreviewMeshActor = { "PreviewMeshActor", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshTool, PreviewMeshActor), Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_PreviewMeshActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_PreviewMeshActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_DynamicMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_DynamicMeshComponent = { "DynamicMeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplaceMeshTool, DynamicMeshComponent), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_DynamicMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_DynamicMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplaceMeshTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_CommonProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_DirectionalFilterProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_TextureMapProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_NoiseProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_SineWaveProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_SelectiveTessellationProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_ActiveContrastCurveTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_PreviewMeshActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_DynamicMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplaceMeshTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplaceMeshTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplaceMeshTool_Statics::ClassParams = {
		&UDisplaceMeshTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplaceMeshTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTool_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplaceMeshTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplaceMeshTool()
	{
		if (!Z_Registration_Info_UClass_UDisplaceMeshTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplaceMeshTool.OuterSingleton, Z_Construct_UClass_UDisplaceMeshTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplaceMeshTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDisplaceMeshTool>()
	{
		return UDisplaceMeshTool::StaticClass();
	}
	UDisplaceMeshTool::UDisplaceMeshTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplaceMeshTool);
	UDisplaceMeshTool::~UDisplaceMeshTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DisplaceMeshTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DisplaceMeshTool_h_Statics::EnumInfo[] = {
		{ EDisplaceMeshToolDisplaceType_StaticEnum, TEXT("EDisplaceMeshToolDisplaceType"), &Z_Registration_Info_UEnum_EDisplaceMeshToolDisplaceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3419670015U) },
		{ EDisplaceMeshToolSubdivisionType_StaticEnum, TEXT("EDisplaceMeshToolSubdivisionType"), &Z_Registration_Info_UEnum_EDisplaceMeshToolSubdivisionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1322231029U) },
		{ EDisplaceMeshToolTriangleSelectionType_StaticEnum, TEXT("EDisplaceMeshToolTriangleSelectionType"), &Z_Registration_Info_UEnum_EDisplaceMeshToolTriangleSelectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3414555651U) },
		{ EDisplaceMeshToolChannelType_StaticEnum, TEXT("EDisplaceMeshToolChannelType"), &Z_Registration_Info_UEnum_EDisplaceMeshToolChannelType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3551181399U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DisplaceMeshTool_h_Statics::ScriptStructInfo[] = {
		{ FPerlinLayerProperties::StaticStruct, Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::NewStructOps, TEXT("PerlinLayerProperties"), &Z_Registration_Info_UScriptStruct_PerlinLayerProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerlinLayerProperties), 1693402577U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DisplaceMeshTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplaceMeshCommonProperties, UDisplaceMeshCommonProperties::StaticClass, TEXT("UDisplaceMeshCommonProperties"), &Z_Registration_Info_UClass_UDisplaceMeshCommonProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplaceMeshCommonProperties), 1347645655U) },
		{ Z_Construct_UClass_USelectiveTessellationProperties, USelectiveTessellationProperties::StaticClass, TEXT("USelectiveTessellationProperties"), &Z_Registration_Info_UClass_USelectiveTessellationProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelectiveTessellationProperties), 753462875U) },
		{ Z_Construct_UClass_UDisplaceMeshTextureMapProperties, UDisplaceMeshTextureMapProperties::StaticClass, TEXT("UDisplaceMeshTextureMapProperties"), &Z_Registration_Info_UClass_UDisplaceMeshTextureMapProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplaceMeshTextureMapProperties), 1241590806U) },
		{ Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties, UDisplaceMeshDirectionalFilterProperties::StaticClass, TEXT("UDisplaceMeshDirectionalFilterProperties"), &Z_Registration_Info_UClass_UDisplaceMeshDirectionalFilterProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplaceMeshDirectionalFilterProperties), 100681025U) },
		{ Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties, UDisplaceMeshPerlinNoiseProperties::StaticClass, TEXT("UDisplaceMeshPerlinNoiseProperties"), &Z_Registration_Info_UClass_UDisplaceMeshPerlinNoiseProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplaceMeshPerlinNoiseProperties), 4216882781U) },
		{ Z_Construct_UClass_UDisplaceMeshSineWaveProperties, UDisplaceMeshSineWaveProperties::StaticClass, TEXT("UDisplaceMeshSineWaveProperties"), &Z_Registration_Info_UClass_UDisplaceMeshSineWaveProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplaceMeshSineWaveProperties), 3479615938U) },
		{ Z_Construct_UClass_UDisplaceMeshToolBuilder, UDisplaceMeshToolBuilder::StaticClass, TEXT("UDisplaceMeshToolBuilder"), &Z_Registration_Info_UClass_UDisplaceMeshToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplaceMeshToolBuilder), 3081682151U) },
		{ Z_Construct_UClass_UDisplaceMeshTool, UDisplaceMeshTool::StaticClass, TEXT("UDisplaceMeshTool"), &Z_Registration_Info_UClass_UDisplaceMeshTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplaceMeshTool), 2744755552U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DisplaceMeshTool_h_1088145070(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DisplaceMeshTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DisplaceMeshTool_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DisplaceMeshTool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DisplaceMeshTool_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DisplaceMeshTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DisplaceMeshTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
