// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshNormalsFunctions.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshNormalsFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTangentTypes();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptGroupLayer();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptTriangle();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptVectorList();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptCalculateNormalsOptions;
class UScriptStruct* FGeometryScriptCalculateNormalsOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptCalculateNormalsOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptCalculateNormalsOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptCalculateNormalsOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptCalculateNormalsOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptCalculateNormalsOptions>()
{
	return FGeometryScriptCalculateNormalsOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAngleWeighted_MetaData[];
#endif
		static void NewProp_bAngleWeighted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngleWeighted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAreaWeighted_MetaData[];
#endif
		static void NewProp_bAreaWeighted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAreaWeighted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptCalculateNormalsOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::NewProp_bAngleWeighted_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::NewProp_bAngleWeighted_SetBit(void* Obj)
	{
		((FGeometryScriptCalculateNormalsOptions*)Obj)->bAngleWeighted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::NewProp_bAngleWeighted = { "bAngleWeighted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCalculateNormalsOptions), &Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::NewProp_bAngleWeighted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::NewProp_bAngleWeighted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::NewProp_bAngleWeighted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::NewProp_bAreaWeighted_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::NewProp_bAreaWeighted_SetBit(void* Obj)
	{
		((FGeometryScriptCalculateNormalsOptions*)Obj)->bAreaWeighted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::NewProp_bAreaWeighted = { "bAreaWeighted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCalculateNormalsOptions), &Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::NewProp_bAreaWeighted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::NewProp_bAreaWeighted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::NewProp_bAreaWeighted_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::NewProp_bAngleWeighted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::NewProp_bAreaWeighted,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptCalculateNormalsOptions",
		sizeof(FGeometryScriptCalculateNormalsOptions),
		alignof(FGeometryScriptCalculateNormalsOptions),
		Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptCalculateNormalsOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptCalculateNormalsOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptCalculateNormalsOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptSplitNormalsOptions;
class UScriptStruct* FGeometryScriptSplitNormalsOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptSplitNormalsOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptSplitNormalsOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptSplitNormalsOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptSplitNormalsOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptSplitNormalsOptions>()
{
	return FGeometryScriptSplitNormalsOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSplitByOpeningAngle_MetaData[];
#endif
		static void NewProp_bSplitByOpeningAngle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitByOpeningAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpeningAngleDeg_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OpeningAngleDeg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSplitByFaceGroup_MetaData[];
#endif
		static void NewProp_bSplitByFaceGroup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitByFaceGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupLayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptSplitNormalsOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_bSplitByOpeningAngle_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_bSplitByOpeningAngle_SetBit(void* Obj)
	{
		((FGeometryScriptSplitNormalsOptions*)Obj)->bSplitByOpeningAngle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_bSplitByOpeningAngle = { "bSplitByOpeningAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptSplitNormalsOptions), &Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_bSplitByOpeningAngle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_bSplitByOpeningAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_bSplitByOpeningAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_OpeningAngleDeg_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_OpeningAngleDeg = { "OpeningAngleDeg", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSplitNormalsOptions, OpeningAngleDeg), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_OpeningAngleDeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_OpeningAngleDeg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_bSplitByFaceGroup_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_bSplitByFaceGroup_SetBit(void* Obj)
	{
		((FGeometryScriptSplitNormalsOptions*)Obj)->bSplitByFaceGroup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_bSplitByFaceGroup = { "bSplitByFaceGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptSplitNormalsOptions), &Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_bSplitByFaceGroup_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_bSplitByFaceGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_bSplitByFaceGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_GroupLayer_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_GroupLayer = { "GroupLayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSplitNormalsOptions, GroupLayer), Z_Construct_UScriptStruct_FGeometryScriptGroupLayer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_GroupLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_GroupLayer_MetaData)) }; // 1149642374
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_bSplitByOpeningAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_OpeningAngleDeg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_bSplitByFaceGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewProp_GroupLayer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptSplitNormalsOptions",
		sizeof(FGeometryScriptSplitNormalsOptions),
		alignof(FGeometryScriptSplitNormalsOptions),
		Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptSplitNormalsOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptSplitNormalsOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptSplitNormalsOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptTangentTypes;
	static UEnum* EGeometryScriptTangentTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptTangentTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptTangentTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTangentTypes, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptTangentTypes"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptTangentTypes.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptTangentTypes>()
	{
		return EGeometryScriptTangentTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTangentTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTangentTypes_Statics::Enumerators[] = {
		{ "EGeometryScriptTangentTypes::FastMikkT", (int64)EGeometryScriptTangentTypes::FastMikkT },
		{ "EGeometryScriptTangentTypes::PerTriangle", (int64)EGeometryScriptTangentTypes::PerTriangle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTangentTypes_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FastMikkT.Name", "EGeometryScriptTangentTypes::FastMikkT" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
		{ "PerTriangle.Name", "EGeometryScriptTangentTypes::PerTriangle" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTangentTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptTangentTypes",
		"EGeometryScriptTangentTypes",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTangentTypes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTangentTypes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTangentTypes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTangentTypes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTangentTypes()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptTangentTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptTangentTypes.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTangentTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptTangentTypes.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptTangentsOptions;
class UScriptStruct* FGeometryScriptTangentsOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptTangentsOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptTangentsOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptTangentsOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptTangentsOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptTangentsOptions>()
{
	return FGeometryScriptTangentsOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVLayer_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UVLayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptTangentsOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptTangentsOptions, Type), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTangentTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::NewProp_Type_MetaData)) }; // 1353896359
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::NewProp_UVLayer_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::NewProp_UVLayer = { "UVLayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptTangentsOptions, UVLayer), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::NewProp_UVLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::NewProp_UVLayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::NewProp_UVLayer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptTangentsOptions",
		sizeof(FGeometryScriptTangentsOptions),
		alignof(FGeometryScriptTangentsOptions),
		Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptTangentsOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptTangentsOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptTangentsOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshNormalsFunctions::execUpdateVertexNormal)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexID);
		P_GET_UBOOL(Z_Param_bUpdateNormal);
		P_GET_STRUCT(FVector,Z_Param_NewNormal);
		P_GET_UBOOL(Z_Param_bUpdateTangents);
		P_GET_STRUCT(FVector,Z_Param_NewTangentX);
		P_GET_STRUCT(FVector,Z_Param_NewTangentY);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidVertex);
		P_GET_UBOOL(Z_Param_bMergeSplitValues);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshNormalsFunctions::UpdateVertexNormal(Z_Param_TargetMesh,Z_Param_VertexID,Z_Param_bUpdateNormal,Z_Param_NewNormal,Z_Param_bUpdateTangents,Z_Param_NewTangentX,Z_Param_NewTangentY,Z_Param_Out_bIsValidVertex,Z_Param_bMergeSplitValues,Z_Param_bDeferChangeNotifications);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshNormalsFunctions::execGetMeshPerVertexTangents)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FGeometryScriptVectorList,Z_Param_Out_TangentXList);
		P_GET_STRUCT_REF(FGeometryScriptVectorList,Z_Param_Out_TangentYList);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidTangentSet);
		P_GET_UBOOL_REF(Z_Param_Out_bHasVertexIDGaps);
		P_GET_UBOOL(Z_Param_bAverageSplitVertexValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshPerVertexTangents(Z_Param_TargetMesh,Z_Param_Out_TangentXList,Z_Param_Out_TangentYList,Z_Param_Out_bIsValidTangentSet,Z_Param_Out_bHasVertexIDGaps,Z_Param_bAverageSplitVertexValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshNormalsFunctions::execSetMeshPerVertexTangents)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_TangentXList);
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_TangentYList);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshPerVertexTangents(Z_Param_TargetMesh,Z_Param_TangentXList,Z_Param_TangentYList,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshNormalsFunctions::execComputeTangents)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptTangentsOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshNormalsFunctions::ComputeTangents(Z_Param_TargetMesh,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshNormalsFunctions::execDiscardTangents)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshNormalsFunctions::DiscardTangents(Z_Param_TargetMesh,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshNormalsFunctions::execGetMeshHasTangents)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_UBOOL_REF(Z_Param_Out_bHasTangents);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshHasTangents(Z_Param_TargetMesh,Z_Param_Out_bHasTangents,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshNormalsFunctions::execGetMeshPerVertexNormals)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FGeometryScriptVectorList,Z_Param_Out_NormalList);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidNormalSet);
		P_GET_UBOOL_REF(Z_Param_Out_bHasVertexIDGaps);
		P_GET_UBOOL(Z_Param_bAverageSplitVertexValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshPerVertexNormals(Z_Param_TargetMesh,Z_Param_Out_NormalList,Z_Param_Out_bIsValidNormalSet,Z_Param_Out_bHasVertexIDGaps,Z_Param_bAverageSplitVertexValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshNormalsFunctions::execSetMeshPerVertexNormals)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_VertexNormalList);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshPerVertexNormals(Z_Param_TargetMesh,Z_Param_VertexNormalList,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshNormalsFunctions::execSetMeshTriangleNormals)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_TriangleID);
		P_GET_STRUCT(FGeometryScriptTriangle,Z_Param_Normals);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidTriangle);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshTriangleNormals(Z_Param_TargetMesh,Z_Param_TriangleID,Z_Param_Normals,Z_Param_Out_bIsValidTriangle,Z_Param_bDeferChangeNotifications);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshNormalsFunctions::execComputeSplitNormals)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptSplitNormalsOptions,Z_Param_SplitOptions);
		P_GET_STRUCT(FGeometryScriptCalculateNormalsOptions,Z_Param_CalculateOptions);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshNormalsFunctions::ComputeSplitNormals(Z_Param_TargetMesh,Z_Param_SplitOptions,Z_Param_CalculateOptions,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshNormalsFunctions::execRecomputeNormals)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptCalculateNormalsOptions,Z_Param_CalculateOptions);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshNormalsFunctions::RecomputeNormals(Z_Param_TargetMesh,Z_Param_CalculateOptions,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshNormalsFunctions::execSetPerFaceNormals)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshNormalsFunctions::SetPerFaceNormals(Z_Param_TargetMesh,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshNormalsFunctions::execSetPerVertexNormals)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshNormalsFunctions::SetPerVertexNormals(Z_Param_TargetMesh,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshNormalsFunctions::execAutoRepairNormals)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshNormalsFunctions::AutoRepairNormals(Z_Param_TargetMesh,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshNormalsFunctions::execFlipNormals)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshNormalsFunctions::FlipNormals(Z_Param_TargetMesh,Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshNormalsFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshNormalsFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshNormalsFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutoRepairNormals", &UGeometryScriptLibrary_MeshNormalsFunctions::execAutoRepairNormals },
			{ "ComputeSplitNormals", &UGeometryScriptLibrary_MeshNormalsFunctions::execComputeSplitNormals },
			{ "ComputeTangents", &UGeometryScriptLibrary_MeshNormalsFunctions::execComputeTangents },
			{ "DiscardTangents", &UGeometryScriptLibrary_MeshNormalsFunctions::execDiscardTangents },
			{ "FlipNormals", &UGeometryScriptLibrary_MeshNormalsFunctions::execFlipNormals },
			{ "GetMeshHasTangents", &UGeometryScriptLibrary_MeshNormalsFunctions::execGetMeshHasTangents },
			{ "GetMeshPerVertexNormals", &UGeometryScriptLibrary_MeshNormalsFunctions::execGetMeshPerVertexNormals },
			{ "GetMeshPerVertexTangents", &UGeometryScriptLibrary_MeshNormalsFunctions::execGetMeshPerVertexTangents },
			{ "RecomputeNormals", &UGeometryScriptLibrary_MeshNormalsFunctions::execRecomputeNormals },
			{ "SetMeshPerVertexNormals", &UGeometryScriptLibrary_MeshNormalsFunctions::execSetMeshPerVertexNormals },
			{ "SetMeshPerVertexTangents", &UGeometryScriptLibrary_MeshNormalsFunctions::execSetMeshPerVertexTangents },
			{ "SetMeshTriangleNormals", &UGeometryScriptLibrary_MeshNormalsFunctions::execSetMeshTriangleNormals },
			{ "SetPerFaceNormals", &UGeometryScriptLibrary_MeshNormalsFunctions::execSetPerFaceNormals },
			{ "SetPerVertexNormals", &UGeometryScriptLibrary_MeshNormalsFunctions::execSetPerVertexNormals },
			{ "UpdateVertexNormal", &UGeometryScriptLibrary_MeshNormalsFunctions::execUpdateVertexNormal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Statics
	{
		struct GeometryScriptLibrary_MeshNormalsFunctions_eventAutoRepairNormals_Parms
		{
			UDynamicMesh* TargetMesh;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventAutoRepairNormals_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventAutoRepairNormals_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventAutoRepairNormals_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Normals" },
		{ "Comment", "/**\n\x09 * Attempt to repair inconsistent normals in TargetMesh. Currently this is done in two passes. In the first pass, triangles with\n\x09 * reversed orientation from their neighours are incrementally flipped until each connected component has a consistent orientation,\n\x09 * if this is possible (note that this is not always globally possible, eg for a mobius-strip topology there is no consistent orientation).\n\x09 * In the second pass, the \"global\" orientation is detected by casting rays from outside the mesh. This may produce incorrect results for\n\x09 * meshes that are not closed. \n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Attempt to repair inconsistent normals in TargetMesh. Currently this is done in two passes. In the first pass, triangles with\nreversed orientation from their neighours are incrementally flipped until each connected component has a consistent orientation,\nif this is possible (note that this is not always globally possible, eg for a mobius-strip topology there is no consistent orientation).\nIn the second pass, the \"global\" orientation is detected by casting rays from outside the mesh. This may produce incorrect results for\nmeshes that are not closed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions, nullptr, "AutoRepairNormals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Statics::GeometryScriptLibrary_MeshNormalsFunctions_eventAutoRepairNormals_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics
	{
		struct GeometryScriptLibrary_MeshNormalsFunctions_eventComputeSplitNormals_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptSplitNormalsOptions SplitOptions;
			FGeometryScriptCalculateNormalsOptions CalculateOptions;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplitOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CalculateOptions;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventComputeSplitNormals_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics::NewProp_SplitOptions = { "SplitOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventComputeSplitNormals_Parms, SplitOptions), Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions, METADATA_PARAMS(nullptr, 0) }; // 131333535
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics::NewProp_CalculateOptions = { "CalculateOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventComputeSplitNormals_Parms, CalculateOptions), Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions, METADATA_PARAMS(nullptr, 0) }; // 3841336970
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventComputeSplitNormals_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventComputeSplitNormals_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics::NewProp_SplitOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics::NewProp_CalculateOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Normals" },
		{ "Comment", "/**\n\x09 * Recompute hard edges / split-normals for TargetMesh based on the provided SplitOptions, and then \n\x09 * recompute the new shared triangle-vertex normals using the given CalculateOptions. \n\x09 * The normal recomputation is identical to calling RecomputeNormals.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Recompute hard edges / split-normals for TargetMesh based on the provided SplitOptions, and then\nrecompute the new shared triangle-vertex normals using the given CalculateOptions.\nThe normal recomputation is identical to calling RecomputeNormals." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions, nullptr, "ComputeSplitNormals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics::GeometryScriptLibrary_MeshNormalsFunctions_eventComputeSplitNormals_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Statics
	{
		struct GeometryScriptLibrary_MeshNormalsFunctions_eventComputeTangents_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptTangentsOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventComputeTangents_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventComputeTangents_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions, METADATA_PARAMS(nullptr, 0) }; // 3805090749
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventComputeTangents_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventComputeTangents_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Normals" },
		{ "Comment", "/**\n\x09 * Recompute Tangents for the TargetMesh, using the method and settings specified by FGeometryScriptTangentsOptions\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Recompute Tangents for the TargetMesh, using the method and settings specified by FGeometryScriptTangentsOptions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions, nullptr, "ComputeTangents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Statics::GeometryScriptLibrary_MeshNormalsFunctions_eventComputeTangents_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Statics
	{
		struct GeometryScriptLibrary_MeshNormalsFunctions_eventDiscardTangents_Parms
		{
			UDynamicMesh* TargetMesh;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventDiscardTangents_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventDiscardTangents_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventDiscardTangents_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Normals" },
		{ "Comment", "/**\n\x09 * Remove any existing Tangents Attribute Layer from the TargetMesh\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Remove any existing Tangents Attribute Layer from the TargetMesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions, nullptr, "DiscardTangents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Statics::GeometryScriptLibrary_MeshNormalsFunctions_eventDiscardTangents_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Statics
	{
		struct GeometryScriptLibrary_MeshNormalsFunctions_eventFlipNormals_Parms
		{
			UDynamicMesh* TargetMesh;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventFlipNormals_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventFlipNormals_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventFlipNormals_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Normals" },
		{ "Comment", "/**\n\x09 * Flip/Invert the normal vectors of TargetMesh by multiplying them by -1, as well as reversing the mesh triangle orientations, ie triangle (a,b,c) becomes (b,a,c)\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Flip/Invert the normal vectors of TargetMesh by multiplying them by -1, as well as reversing the mesh triangle orientations, ie triangle (a,b,c) becomes (b,a,c)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions, nullptr, "FlipNormals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Statics::GeometryScriptLibrary_MeshNormalsFunctions_eventFlipNormals_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics
	{
		struct GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshHasTangents_Parms
		{
			UDynamicMesh* TargetMesh;
			bool bHasTangents;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static void NewProp_bHasTangents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTangents;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshHasTangents_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics::NewProp_bHasTangents_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshHasTangents_Parms*)Obj)->bHasTangents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics::NewProp_bHasTangents = { "bHasTangents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshHasTangents_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics::NewProp_bHasTangents_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshHasTangents_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshHasTangents_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics::NewProp_bHasTangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Normals" },
		{ "Comment", "/**\n\x09 * Check if the TargetMesh has a Tangents Attribute Layer enabled\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Check if the TargetMesh has a Tangents Attribute Layer enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions, nullptr, "GetMeshHasTangents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics::GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshHasTangents_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics
	{
		struct GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshPerVertexNormals_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptVectorList NormalList;
			bool bIsValidNormalSet;
			bool bHasVertexIDGaps;
			bool bAverageSplitVertexValues;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalList;
		static void NewProp_bIsValidNormalSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidNormalSet;
		static void NewProp_bHasVertexIDGaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasVertexIDGaps;
		static void NewProp_bAverageSplitVertexValues_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAverageSplitVertexValues;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshPerVertexNormals_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::NewProp_NormalList = { "NormalList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshPerVertexNormals_Parms, NormalList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::NewProp_bIsValidNormalSet_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshPerVertexNormals_Parms*)Obj)->bIsValidNormalSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::NewProp_bIsValidNormalSet = { "bIsValidNormalSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshPerVertexNormals_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::NewProp_bIsValidNormalSet_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::NewProp_bHasVertexIDGaps_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshPerVertexNormals_Parms*)Obj)->bHasVertexIDGaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::NewProp_bHasVertexIDGaps = { "bHasVertexIDGaps", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshPerVertexNormals_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::NewProp_bHasVertexIDGaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::NewProp_bAverageSplitVertexValues_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshPerVertexNormals_Parms*)Obj)->bAverageSplitVertexValues = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::NewProp_bAverageSplitVertexValues = { "bAverageSplitVertexValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshPerVertexNormals_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::NewProp_bAverageSplitVertexValues_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshPerVertexNormals_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::NewProp_NormalList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::NewProp_bIsValidNormalSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::NewProp_bHasVertexIDGaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::NewProp_bAverageSplitVertexValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Normals" },
		{ "Comment", "/**\n\x09 * Get a list of single normal vectors for each mesh vertex in the TargetMesh, derived from the Normals Overlay.\n\x09 * The Normals Overlay may store multiple normals for a single vertex (ie split normals)\n\x09 * In such cases the normals can either be averaged, or the last normal seen will be used, depending on the bAverageSplitVertexValues parameter.\n\x09 * @param NormalList output normal list will be stored here. Size will be equal to the MaxVertexID of TargetMesh  (not the VertexCount!)\n\x09 * @param bIsValidNormalSet will be set to true if the Normal Overlay was valid\n\x09 * @param bHasVertexIDGaps will be set to true if some vertex indices in TargetMesh were invalid, ie MaxVertexID > VertexCount \n\x09 * @param bAverageSplitVertexValues control how multiple normals at the same vertex should be interpreted\n\x09 */" },
		{ "CPP_Default_bAverageSplitVertexValues", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get a list of single normal vectors for each mesh vertex in the TargetMesh, derived from the Normals Overlay.\nThe Normals Overlay may store multiple normals for a single vertex (ie split normals)\nIn such cases the normals can either be averaged, or the last normal seen will be used, depending on the bAverageSplitVertexValues parameter.\n@param NormalList output normal list will be stored here. Size will be equal to the MaxVertexID of TargetMesh  (not the VertexCount!)\n@param bIsValidNormalSet will be set to true if the Normal Overlay was valid\n@param bHasVertexIDGaps will be set to true if some vertex indices in TargetMesh were invalid, ie MaxVertexID > VertexCount\n@param bAverageSplitVertexValues control how multiple normals at the same vertex should be interpreted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions, nullptr, "GetMeshPerVertexNormals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshPerVertexNormals_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics
	{
		struct GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshPerVertexTangents_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptVectorList TangentXList;
			FGeometryScriptVectorList TangentYList;
			bool bIsValidTangentSet;
			bool bHasVertexIDGaps;
			bool bAverageSplitVertexValues;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TangentXList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TangentYList;
		static void NewProp_bIsValidTangentSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidTangentSet;
		static void NewProp_bHasVertexIDGaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasVertexIDGaps;
		static void NewProp_bAverageSplitVertexValues_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAverageSplitVertexValues;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshPerVertexTangents_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::NewProp_TangentXList = { "TangentXList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshPerVertexTangents_Parms, TangentXList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::NewProp_TangentYList = { "TangentYList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshPerVertexTangents_Parms, TangentYList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::NewProp_bIsValidTangentSet_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshPerVertexTangents_Parms*)Obj)->bIsValidTangentSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::NewProp_bIsValidTangentSet = { "bIsValidTangentSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshPerVertexTangents_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::NewProp_bIsValidTangentSet_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::NewProp_bHasVertexIDGaps_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshPerVertexTangents_Parms*)Obj)->bHasVertexIDGaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::NewProp_bHasVertexIDGaps = { "bHasVertexIDGaps", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshPerVertexTangents_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::NewProp_bHasVertexIDGaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::NewProp_bAverageSplitVertexValues_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshPerVertexTangents_Parms*)Obj)->bAverageSplitVertexValues = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::NewProp_bAverageSplitVertexValues = { "bAverageSplitVertexValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshPerVertexTangents_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::NewProp_bAverageSplitVertexValues_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshPerVertexTangents_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::NewProp_TangentXList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::NewProp_TangentYList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::NewProp_bIsValidTangentSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::NewProp_bHasVertexIDGaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::NewProp_bAverageSplitVertexValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Normals" },
		{ "Comment", "/**\n\x09 * Get a list of single tangent vectors for each mesh vertex in the TargetMesh, derived from the Tangents Overlays.\n\x09 * The Tangents Overlay may store multiple tangents for a single vertex (ie split tangents)\n\x09 * In such cases the tangents can either be averaged, or the last tangent seen will be used, depending on the bAverageSplitVertexValues parameter.\n\x09 * @param TangentXList output Tangent \"X\" vectors list will be stored here. Size will be equal to the MaxVertexID of TargetMesh  (not the VertexCount!)\n\x09 * @param TangentYList output Tangent \"Y\" vectors (Binormal/Bitangent) list will be stored here. Size will be equal to TangentXList\n\x09 * @param bIsValidTangentSet will be set to true if the Tangent Overlay was valid\n\x09 * @param bHasVertexIDGaps will be set to true if some vertex indices in TargetMesh were invalid, ie MaxVertexID > VertexCount \n\x09 * @param bAverageSplitVertexValues control how multiple tangents at the same vertex should be interpreted\n\x09 */" },
		{ "CPP_Default_bAverageSplitVertexValues", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get a list of single tangent vectors for each mesh vertex in the TargetMesh, derived from the Tangents Overlays.\nThe Tangents Overlay may store multiple tangents for a single vertex (ie split tangents)\nIn such cases the tangents can either be averaged, or the last tangent seen will be used, depending on the bAverageSplitVertexValues parameter.\n@param TangentXList output Tangent \"X\" vectors list will be stored here. Size will be equal to the MaxVertexID of TargetMesh  (not the VertexCount!)\n@param TangentYList output Tangent \"Y\" vectors (Binormal/Bitangent) list will be stored here. Size will be equal to TangentXList\n@param bIsValidTangentSet will be set to true if the Tangent Overlay was valid\n@param bHasVertexIDGaps will be set to true if some vertex indices in TargetMesh were invalid, ie MaxVertexID > VertexCount\n@param bAverageSplitVertexValues control how multiple tangents at the same vertex should be interpreted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions, nullptr, "GetMeshPerVertexTangents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::GeometryScriptLibrary_MeshNormalsFunctions_eventGetMeshPerVertexTangents_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Statics
	{
		struct GeometryScriptLibrary_MeshNormalsFunctions_eventRecomputeNormals_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptCalculateNormalsOptions CalculateOptions;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CalculateOptions;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventRecomputeNormals_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Statics::NewProp_CalculateOptions = { "CalculateOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventRecomputeNormals_Parms, CalculateOptions), Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions, METADATA_PARAMS(nullptr, 0) }; // 3841336970
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventRecomputeNormals_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventRecomputeNormals_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Statics::NewProp_CalculateOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Normals" },
		{ "Comment", "/**\n\x09 * Recompute the normals of TargetMesh using the given CalculateOptions. This method will preserve any existing hard\n\x09 * edges, ie each shared triangle-vertex normal is recomputed by averaging the face normals of triangles that reference\n\x09 * that shared triangle-vertex normal\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Recompute the normals of TargetMesh using the given CalculateOptions. This method will preserve any existing hard\nedges, ie each shared triangle-vertex normal is recomputed by averaging the face normals of triangles that reference\nthat shared triangle-vertex normal" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions, nullptr, "RecomputeNormals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Statics::GeometryScriptLibrary_MeshNormalsFunctions_eventRecomputeNormals_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Statics
	{
		struct GeometryScriptLibrary_MeshNormalsFunctions_eventSetMeshPerVertexNormals_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptVectorList VertexNormalList;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexNormalList;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventSetMeshPerVertexNormals_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Statics::NewProp_VertexNormalList = { "VertexNormalList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventSetMeshPerVertexNormals_Parms, VertexNormalList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventSetMeshPerVertexNormals_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventSetMeshPerVertexNormals_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Statics::NewProp_VertexNormalList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Normals" },
		{ "Comment", "/**\n\x09 * Set all normals in the TargetMesh Normals Overlay to the specified per-vertex normals\n\x09 * @param VertexNormalList per-vertex normals. Size must be equal to the MaxVertexID of TargetMesh  (ie non-compact TargetMesh is supported)\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set all normals in the TargetMesh Normals Overlay to the specified per-vertex normals\n@param VertexNormalList per-vertex normals. Size must be equal to the MaxVertexID of TargetMesh  (ie non-compact TargetMesh is supported)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions, nullptr, "SetMeshPerVertexNormals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Statics::GeometryScriptLibrary_MeshNormalsFunctions_eventSetMeshPerVertexNormals_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics
	{
		struct GeometryScriptLibrary_MeshNormalsFunctions_eventSetMeshPerVertexTangents_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptVectorList TangentXList;
			FGeometryScriptVectorList TangentYList;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TangentXList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TangentYList;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventSetMeshPerVertexTangents_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics::NewProp_TangentXList = { "TangentXList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventSetMeshPerVertexTangents_Parms, TangentXList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics::NewProp_TangentYList = { "TangentYList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventSetMeshPerVertexTangents_Parms, TangentYList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventSetMeshPerVertexTangents_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventSetMeshPerVertexTangents_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics::NewProp_TangentXList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics::NewProp_TangentYList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Normals" },
		{ "Comment", "/**\n\x09 * Set all tangents in the TargetMesh Tangents Overlays to the specified per-vertex tangents\n\x09 * @param TangentXList per-vertex tangent vectors. Size must be equal to the MaxVertexID of TargetMesh  (ie non-compact TargetMesh is supported)\n\x09 * @param TangentYList per-vertex bitangent/binormal vectors. Size must be equal to TangentXList\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set all tangents in the TargetMesh Tangents Overlays to the specified per-vertex tangents\n@param TangentXList per-vertex tangent vectors. Size must be equal to the MaxVertexID of TargetMesh  (ie non-compact TargetMesh is supported)\n@param TangentYList per-vertex bitangent/binormal vectors. Size must be equal to TangentXList" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions, nullptr, "SetMeshPerVertexTangents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics::GeometryScriptLibrary_MeshNormalsFunctions_eventSetMeshPerVertexTangents_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics
	{
		struct GeometryScriptLibrary_MeshNormalsFunctions_eventSetMeshTriangleNormals_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 TriangleID;
			FGeometryScriptTriangle Normals;
			bool bIsValidTriangle;
			bool bDeferChangeNotifications;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TriangleID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals;
		static void NewProp_bIsValidTriangle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidTriangle;
		static void NewProp_bDeferChangeNotifications_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferChangeNotifications;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventSetMeshTriangleNormals_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventSetMeshTriangleNormals_Parms, TriangleID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventSetMeshTriangleNormals_Parms, Normals), Z_Construct_UScriptStruct_FGeometryScriptTriangle, METADATA_PARAMS(nullptr, 0) }; // 309759555
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::NewProp_bIsValidTriangle_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshNormalsFunctions_eventSetMeshTriangleNormals_Parms*)Obj)->bIsValidTriangle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::NewProp_bIsValidTriangle = { "bIsValidTriangle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshNormalsFunctions_eventSetMeshTriangleNormals_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::NewProp_bIsValidTriangle_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshNormalsFunctions_eventSetMeshTriangleNormals_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshNormalsFunctions_eventSetMeshTriangleNormals_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventSetMeshTriangleNormals_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::NewProp_TriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::NewProp_bIsValidTriangle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Normals" },
		{ "Comment", "/**\n\x09 * Set the triangle-vertex normals for the given TriangleID on the TargetMesh. This will\n\x09 * create unique triangle-vertex normals, ie it will create hard edges / split normals in \n\x09 * the normal overlay for each edge of the triangle. \n\x09 * @param bIsValidTriangle will be returned as false if TriangleID does not refer to a valid triangle\n\x09 * @param bDeferChangeNotifications if true, no mesh change notification will be sent. Set to true if changing many normals in a loop.\n\x09 */" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the triangle-vertex normals for the given TriangleID on the TargetMesh. This will\ncreate unique triangle-vertex normals, ie it will create hard edges / split normals in\nthe normal overlay for each edge of the triangle.\n@param bIsValidTriangle will be returned as false if TriangleID does not refer to a valid triangle\n@param bDeferChangeNotifications if true, no mesh change notification will be sent. Set to true if changing many normals in a loop." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions, nullptr, "SetMeshTriangleNormals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::GeometryScriptLibrary_MeshNormalsFunctions_eventSetMeshTriangleNormals_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Statics
	{
		struct GeometryScriptLibrary_MeshNormalsFunctions_eventSetPerFaceNormals_Parms
		{
			UDynamicMesh* TargetMesh;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventSetPerFaceNormals_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventSetPerFaceNormals_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventSetPerFaceNormals_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Normals" },
		{ "Comment", "/**\n\x09 * Recompute the normals of TargetMesh by setting the normals of each triangle vertex to the triangle/face normal.\n\x09 * Each vertex will have a unique normal in each triangle, ie there will be hard edges / split normals at every mesh edge\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "DisplayName", "Set Mesh To Facet Normals" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Recompute the normals of TargetMesh by setting the normals of each triangle vertex to the triangle/face normal.\nEach vertex will have a unique normal in each triangle, ie there will be hard edges / split normals at every mesh edge" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions, nullptr, "SetPerFaceNormals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Statics::GeometryScriptLibrary_MeshNormalsFunctions_eventSetPerFaceNormals_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Statics
	{
		struct GeometryScriptLibrary_MeshNormalsFunctions_eventSetPerVertexNormals_Parms
		{
			UDynamicMesh* TargetMesh;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventSetPerVertexNormals_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventSetPerVertexNormals_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventSetPerVertexNormals_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Normals" },
		{ "Comment", "/**\n\x09 * Recompute the normals of TargetMesh by averaging the triangle/face normals around each vertex, using combined area and angle weighting.\n\x09 * Each vertex will have a single normal, ie there will be no hard edges.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "DisplayName", "Set Mesh To Per Vertex Normals" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Recompute the normals of TargetMesh by averaging the triangle/face normals around each vertex, using combined area and angle weighting.\nEach vertex will have a single normal, ie there will be no hard edges." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions, nullptr, "SetPerVertexNormals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Statics::GeometryScriptLibrary_MeshNormalsFunctions_eventSetPerVertexNormals_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics
	{
		struct GeometryScriptLibrary_MeshNormalsFunctions_eventUpdateVertexNormal_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 VertexID;
			bool bUpdateNormal;
			FVector NewNormal;
			bool bUpdateTangents;
			FVector NewTangentX;
			FVector NewTangentY;
			bool bIsValidVertex;
			bool bMergeSplitValues;
			bool bDeferChangeNotifications;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_VertexID;
		static void NewProp_bUpdateNormal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateNormal;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewNormal;
		static void NewProp_bUpdateTangents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateTangents;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTangentX;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTangentY;
		static void NewProp_bIsValidVertex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidVertex;
		static void NewProp_bMergeSplitValues_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeSplitValues;
		static void NewProp_bDeferChangeNotifications_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferChangeNotifications;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventUpdateVertexNormal_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventUpdateVertexNormal_Parms, VertexID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_bUpdateNormal_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshNormalsFunctions_eventUpdateVertexNormal_Parms*)Obj)->bUpdateNormal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_bUpdateNormal = { "bUpdateNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshNormalsFunctions_eventUpdateVertexNormal_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_bUpdateNormal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_NewNormal = { "NewNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventUpdateVertexNormal_Parms, NewNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_bUpdateTangents_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshNormalsFunctions_eventUpdateVertexNormal_Parms*)Obj)->bUpdateTangents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_bUpdateTangents = { "bUpdateTangents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshNormalsFunctions_eventUpdateVertexNormal_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_bUpdateTangents_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_NewTangentX = { "NewTangentX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventUpdateVertexNormal_Parms, NewTangentX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_NewTangentY = { "NewTangentY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventUpdateVertexNormal_Parms, NewTangentY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_bIsValidVertex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshNormalsFunctions_eventUpdateVertexNormal_Parms*)Obj)->bIsValidVertex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_bIsValidVertex = { "bIsValidVertex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshNormalsFunctions_eventUpdateVertexNormal_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_bIsValidVertex_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_bMergeSplitValues_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshNormalsFunctions_eventUpdateVertexNormal_Parms*)Obj)->bMergeSplitValues = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_bMergeSplitValues = { "bMergeSplitValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshNormalsFunctions_eventUpdateVertexNormal_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_bMergeSplitValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshNormalsFunctions_eventUpdateVertexNormal_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshNormalsFunctions_eventUpdateVertexNormal_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshNormalsFunctions_eventUpdateVertexNormal_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_VertexID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_bUpdateNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_NewNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_bUpdateTangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_NewTangentX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_NewTangentY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_bIsValidVertex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_bMergeSplitValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::Function_MetaDataParams[] = {
		{ "bUpdateNormal", "true" },
		{ "Category", "GeometryScript|MeshEdits" },
		{ "Comment", "/**\n\x09 * Update the Normals and/or Tangents at VertexID of TargetMesh. Note that the specified vertex may have \"split normals\"\n\x09 * or \"split tangents\", ie in the case of hard/crease normals, UV seams, and so on. In these situations, by default\n\x09 * each of the unique normals/tangents at the vertex will be updated, but they will not be \"merged\", ie they will remain split.\n\x09 * However if bMergeSplitValues=true, then the vertex will be \"un-split\", ie after the function call the vertex will have\n\x09 * a single unique shared normal and/or tangents. \n\x09 * \n\x09 * Note that this function requires that some normals/tangents already exist on the TargetMesh. If this is not the case, \n\x09 * functions like SetPerVertexNormals and ComputeTangents can be used to initialize the normals/tangents first.\n\x09 * \x09\n\x09 * @param bUpdateNormal if true (default) then the normals overlay is updated\n\x09 * @param NewNormal the new normal vector. This vector will not be normalized, it must be normalized by the calling code.\n\x09 * @param bUpdateTangents if true then the tangents overlay will be updated. If the tangents overlay does not exist, this function returns an error.\n\x09 * @param NewTangentX the new tangent vector. This vector will not be normalized, it must be normalized by the calling code.\n\x09 * @param NewTangentY the new bitangent/binormal vector. This vector will not be normalized, it must be normalized by the calling code.\n\x09 * @param bIsValidVertex will be set to true on return if the VertexID was valid, ie had valid normals and tangents\n\x09 * @param bMergeSplitValues if true, any split normals/tangents at the vertex will be cleared, and a unique normal/tangent element will be set in the connected triangles\n\x09 * @param bDeferChangeNotifications if true, no mesh change notification will be sent. Set to true if changing many normals in a loop.\n\x09 */" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Update the Normals and/or Tangents at VertexID of TargetMesh. Note that the specified vertex may have \"split normals\"\nor \"split tangents\", ie in the case of hard/crease normals, UV seams, and so on. In these situations, by default\neach of the unique normals/tangents at the vertex will be updated, but they will not be \"merged\", ie they will remain split.\nHowever if bMergeSplitValues=true, then the vertex will be \"un-split\", ie after the function call the vertex will have\na single unique shared normal and/or tangents.\n\nNote that this function requires that some normals/tangents already exist on the TargetMesh. If this is not the case,\nfunctions like SetPerVertexNormals and ComputeTangents can be used to initialize the normals/tangents first.\n\n@param bUpdateNormal if true (default) then the normals overlay is updated\n@param NewNormal the new normal vector. This vector will not be normalized, it must be normalized by the calling code.\n@param bUpdateTangents if true then the tangents overlay will be updated. If the tangents overlay does not exist, this function returns an error.\n@param NewTangentX the new tangent vector. This vector will not be normalized, it must be normalized by the calling code.\n@param NewTangentY the new bitangent/binormal vector. This vector will not be normalized, it must be normalized by the calling code.\n@param bIsValidVertex will be set to true on return if the VertexID was valid, ie had valid normals and tangents\n@param bMergeSplitValues if true, any split normals/tangents at the vertex will be cleared, and a unique normal/tangent element will be set in the connected triangles\n@param bDeferChangeNotifications if true, no mesh change notification will be sent. Set to true if changing many normals in a loop." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions, nullptr, "UpdateVertexNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::GeometryScriptLibrary_MeshNormalsFunctions_eventUpdateVertexNormal_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshNormalsFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshNormalsFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals, "AutoRepairNormals" }, // 2872146329
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals, "ComputeSplitNormals" }, // 1511527066
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents, "ComputeTangents" }, // 3907181915
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents, "DiscardTangents" }, // 2868452187
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals, "FlipNormals" }, // 1930639428
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents, "GetMeshHasTangents" }, // 2021358911
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals, "GetMeshPerVertexNormals" }, // 1535374811
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents, "GetMeshPerVertexTangents" }, // 3013588228
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals, "RecomputeNormals" }, // 1012022033
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals, "SetMeshPerVertexNormals" }, // 239277990
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents, "SetMeshPerVertexTangents" }, // 294250024
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals, "SetMeshTriangleNormals" }, // 1034446485
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals, "SetPerFaceNormals" }, // 2256238058
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals, "SetPerVertexNormals" }, // 1395429809
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal, "UpdateVertexNormal" }, // 609382845
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshNormalsFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshNormalsFunctions.h" },
		{ "ScriptName", "GeometryScript_Normals" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshNormalsFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshNormalsFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshNormalsFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshNormalsFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshNormalsFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshNormalsFunctions>()
	{
		return UGeometryScriptLibrary_MeshNormalsFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshNormalsFunctions::UGeometryScriptLibrary_MeshNormalsFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshNormalsFunctions);
	UGeometryScriptLibrary_MeshNormalsFunctions::~UGeometryScriptLibrary_MeshNormalsFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_Statics::EnumInfo[] = {
		{ EGeometryScriptTangentTypes_StaticEnum, TEXT("EGeometryScriptTangentTypes"), &Z_Registration_Info_UEnum_EGeometryScriptTangentTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1353896359U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptCalculateNormalsOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::NewStructOps, TEXT("GeometryScriptCalculateNormalsOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptCalculateNormalsOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptCalculateNormalsOptions), 3841336970U) },
		{ FGeometryScriptSplitNormalsOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewStructOps, TEXT("GeometryScriptSplitNormalsOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptSplitNormalsOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptSplitNormalsOptions), 131333535U) },
		{ FGeometryScriptTangentsOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::NewStructOps, TEXT("GeometryScriptTangentsOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptTangentsOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptTangentsOptions), 3805090749U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions, UGeometryScriptLibrary_MeshNormalsFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshNormalsFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshNormalsFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshNormalsFunctions), 906550800U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_2588749429(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
