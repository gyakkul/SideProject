// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryScriptTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptAxis();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptContainmentOutcomePins();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptDebugMessageType();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptErrorType();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptIndexType();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLODType();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSearchOutcomePins();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptColorFlags();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptColorList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptDebugMessage();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptDynamicMeshBVH();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptGroupLayer();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptIndexList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPolyPath();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptScalarList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptTriangle();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptTriangleList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptUVList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptUVTriangle();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptVectorList();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptOutcomePins;
	static UEnum* EGeometryScriptOutcomePins_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptOutcomePins.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptOutcomePins.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptOutcomePins"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptOutcomePins.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptOutcomePins>()
	{
		return EGeometryScriptOutcomePins_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins_Statics::Enumerators[] = {
		{ "EGeometryScriptOutcomePins::Failure", (int64)EGeometryScriptOutcomePins::Failure },
		{ "EGeometryScriptOutcomePins::Success", (int64)EGeometryScriptOutcomePins::Success },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failure.Name", "EGeometryScriptOutcomePins::Failure" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
		{ "Success.Name", "EGeometryScriptOutcomePins::Success" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptOutcomePins",
		"EGeometryScriptOutcomePins",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptOutcomePins.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptOutcomePins.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptOutcomePins.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptSearchOutcomePins;
	static UEnum* EGeometryScriptSearchOutcomePins_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptSearchOutcomePins.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptSearchOutcomePins.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSearchOutcomePins, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptSearchOutcomePins"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptSearchOutcomePins.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptSearchOutcomePins>()
	{
		return EGeometryScriptSearchOutcomePins_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSearchOutcomePins_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSearchOutcomePins_Statics::Enumerators[] = {
		{ "EGeometryScriptSearchOutcomePins::Found", (int64)EGeometryScriptSearchOutcomePins::Found },
		{ "EGeometryScriptSearchOutcomePins::NotFound", (int64)EGeometryScriptSearchOutcomePins::NotFound },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSearchOutcomePins_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Found.Name", "EGeometryScriptSearchOutcomePins::Found" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
		{ "NotFound.Name", "EGeometryScriptSearchOutcomePins::NotFound" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSearchOutcomePins_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptSearchOutcomePins",
		"EGeometryScriptSearchOutcomePins",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSearchOutcomePins_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSearchOutcomePins_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSearchOutcomePins_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSearchOutcomePins_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSearchOutcomePins()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptSearchOutcomePins.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptSearchOutcomePins.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSearchOutcomePins_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptSearchOutcomePins.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptContainmentOutcomePins;
	static UEnum* EGeometryScriptContainmentOutcomePins_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptContainmentOutcomePins.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptContainmentOutcomePins.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptContainmentOutcomePins, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptContainmentOutcomePins"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptContainmentOutcomePins.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptContainmentOutcomePins>()
	{
		return EGeometryScriptContainmentOutcomePins_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptContainmentOutcomePins_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptContainmentOutcomePins_Statics::Enumerators[] = {
		{ "EGeometryScriptContainmentOutcomePins::Inside", (int64)EGeometryScriptContainmentOutcomePins::Inside },
		{ "EGeometryScriptContainmentOutcomePins::Outside", (int64)EGeometryScriptContainmentOutcomePins::Outside },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptContainmentOutcomePins_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Inside.Name", "EGeometryScriptContainmentOutcomePins::Inside" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
		{ "Outside.Name", "EGeometryScriptContainmentOutcomePins::Outside" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptContainmentOutcomePins_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptContainmentOutcomePins",
		"EGeometryScriptContainmentOutcomePins",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptContainmentOutcomePins_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptContainmentOutcomePins_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptContainmentOutcomePins_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptContainmentOutcomePins_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptContainmentOutcomePins()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptContainmentOutcomePins.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptContainmentOutcomePins.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptContainmentOutcomePins_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptContainmentOutcomePins.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptLODType;
	static UEnum* EGeometryScriptLODType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptLODType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptLODType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLODType, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptLODType"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptLODType.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptLODType>()
	{
		return EGeometryScriptLODType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLODType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLODType_Statics::Enumerators[] = {
		{ "EGeometryScriptLODType::MaxAvailable", (int64)EGeometryScriptLODType::MaxAvailable },
		{ "EGeometryScriptLODType::HiResSourceModel", (int64)EGeometryScriptLODType::HiResSourceModel },
		{ "EGeometryScriptLODType::SourceModel", (int64)EGeometryScriptLODType::SourceModel },
		{ "EGeometryScriptLODType::RenderData", (int64)EGeometryScriptLODType::RenderData },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLODType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HiResSourceModel.Name", "EGeometryScriptLODType::HiResSourceModel" },
		{ "MaxAvailable.Name", "EGeometryScriptLODType::MaxAvailable" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
		{ "RenderData.Name", "EGeometryScriptLODType::RenderData" },
		{ "SourceModel.Name", "EGeometryScriptLODType::SourceModel" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLODType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptLODType",
		"EGeometryScriptLODType",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLODType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLODType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLODType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLODType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLODType()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptLODType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptLODType.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLODType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptLODType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptAxis;
	static UEnum* EGeometryScriptAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptAxis, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptAxis"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptAxis.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptAxis>()
	{
		return EGeometryScriptAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptAxis_Statics::Enumerators[] = {
		{ "EGeometryScriptAxis::X", (int64)EGeometryScriptAxis::X },
		{ "EGeometryScriptAxis::Y", (int64)EGeometryScriptAxis::Y },
		{ "EGeometryScriptAxis::Z", (int64)EGeometryScriptAxis::Z },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptAxis_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
		{ "X.Name", "EGeometryScriptAxis::X" },
		{ "Y.Name", "EGeometryScriptAxis::Y" },
		{ "Z.Name", "EGeometryScriptAxis::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptAxis",
		"EGeometryScriptAxis",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptAxis()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptAxis.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptAxis.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptMeshReadLOD;
class UScriptStruct* FGeometryScriptMeshReadLOD::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshReadLOD.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptMeshReadLOD.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptMeshReadLOD"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptMeshReadLOD.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptMeshReadLOD>()
{
	return FGeometryScriptMeshReadLOD::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_LODType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LODType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptMeshReadLOD>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD_Statics::NewProp_LODType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD_Statics::NewProp_LODType_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD_Statics::NewProp_LODType = { "LODType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshReadLOD, LODType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLODType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD_Statics::NewProp_LODType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD_Statics::NewProp_LODType_MetaData)) }; // 68706456
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD_Statics::NewProp_LODIndex_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshReadLOD, LODIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD_Statics::NewProp_LODIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD_Statics::NewProp_LODType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD_Statics::NewProp_LODType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD_Statics::NewProp_LODIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptMeshReadLOD",
		sizeof(FGeometryScriptMeshReadLOD),
		alignof(FGeometryScriptMeshReadLOD),
		Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshReadLOD.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptMeshReadLOD.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptMeshReadLOD.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptMeshWriteLOD;
class UScriptStruct* FGeometryScriptMeshWriteLOD::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshWriteLOD.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptMeshWriteLOD.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptMeshWriteLOD"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptMeshWriteLOD.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptMeshWriteLOD>()
{
	return FGeometryScriptMeshWriteLOD::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWriteHiResSource_MetaData[];
#endif
		static void NewProp_bWriteHiResSource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteHiResSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptMeshWriteLOD>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD_Statics::NewProp_bWriteHiResSource_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD_Statics::NewProp_bWriteHiResSource_SetBit(void* Obj)
	{
		((FGeometryScriptMeshWriteLOD*)Obj)->bWriteHiResSource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD_Statics::NewProp_bWriteHiResSource = { "bWriteHiResSource", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshWriteLOD), &Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD_Statics::NewProp_bWriteHiResSource_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD_Statics::NewProp_bWriteHiResSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD_Statics::NewProp_bWriteHiResSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD_Statics::NewProp_LODIndex_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshWriteLOD, LODIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD_Statics::NewProp_LODIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD_Statics::NewProp_bWriteHiResSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD_Statics::NewProp_LODIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptMeshWriteLOD",
		sizeof(FGeometryScriptMeshWriteLOD),
		alignof(FGeometryScriptMeshWriteLOD),
		Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshWriteLOD.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptMeshWriteLOD.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptMeshWriteLOD.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptTriangle;
class UScriptStruct* FGeometryScriptTriangle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptTriangle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptTriangle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptTriangle, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptTriangle"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptTriangle.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptTriangle>()
{
	return FGeometryScriptTriangle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n// Triangles\n//\n" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
		{ "ToolTip", "Triangles" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptTriangle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::NewProp_Vector0_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::NewProp_Vector0 = { "Vector0", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptTriangle, Vector0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::NewProp_Vector0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::NewProp_Vector0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::NewProp_Vector1_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::NewProp_Vector1 = { "Vector1", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptTriangle, Vector1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::NewProp_Vector1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::NewProp_Vector1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::NewProp_Vector2_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::NewProp_Vector2 = { "Vector2", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptTriangle, Vector2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::NewProp_Vector2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::NewProp_Vector2_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::NewProp_Vector0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::NewProp_Vector1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::NewProp_Vector2,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptTriangle",
		sizeof(FGeometryScriptTriangle),
		alignof(FGeometryScriptTriangle),
		Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptTriangle()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptTriangle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptTriangle.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptTriangle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptTrianglePoint;
class UScriptStruct* FGeometryScriptTrianglePoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptTrianglePoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptTrianglePoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptTrianglePoint"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptTrianglePoint.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptTrianglePoint>()
{
	return FGeometryScriptTrianglePoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValid_MetaData[];
#endif
		static void NewProp_bValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriangleID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TriangleID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaryCoords_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaryCoords;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptTrianglePoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewProp_bValid_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewProp_bValid_SetBit(void* Obj)
	{
		((FGeometryScriptTrianglePoint*)Obj)->bValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewProp_bValid = { "bValid", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptTrianglePoint), &Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewProp_bValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewProp_bValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewProp_bValid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewProp_TriangleID_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptTrianglePoint, TriangleID), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewProp_TriangleID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewProp_TriangleID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptTrianglePoint, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewProp_BaryCoords_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewProp_BaryCoords = { "BaryCoords", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptTrianglePoint, BaryCoords), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewProp_BaryCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewProp_BaryCoords_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewProp_bValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewProp_TriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewProp_BaryCoords,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptTrianglePoint",
		sizeof(FGeometryScriptTrianglePoint),
		alignof(FGeometryScriptTrianglePoint),
		Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptTrianglePoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptTrianglePoint.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptTrianglePoint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptUVTriangle;
class UScriptStruct* FGeometryScriptUVTriangle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptUVTriangle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptUVTriangle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptUVTriangle, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptUVTriangle"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptUVTriangle.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptUVTriangle>()
{
	return FGeometryScriptUVTriangle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptUVTriangle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::NewProp_UV0_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptUVTriangle, UV0), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::NewProp_UV0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::NewProp_UV1_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptUVTriangle, UV1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::NewProp_UV1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::NewProp_UV1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::NewProp_UV2_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptUVTriangle, UV2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::NewProp_UV2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::NewProp_UV2_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::NewProp_UV1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::NewProp_UV2,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptUVTriangle",
		sizeof(FGeometryScriptUVTriangle),
		alignof(FGeometryScriptUVTriangle),
		Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptUVTriangle()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptUVTriangle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptUVTriangle.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptUVTriangle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptColorFlags;
class UScriptStruct* FGeometryScriptColorFlags::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptColorFlags.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptColorFlags.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptColorFlags, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptColorFlags"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptColorFlags.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptColorFlags>()
{
	return FGeometryScriptColorFlags::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRed_MetaData[];
#endif
		static void NewProp_bRed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGreen_MetaData[];
#endif
		static void NewProp_bGreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlue_MetaData[];
#endif
		static void NewProp_bBlue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlpha_MetaData[];
#endif
		static void NewProp_bAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n// Colors\n//\n" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
		{ "ToolTip", "Colors" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptColorFlags>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bRed_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bRed_SetBit(void* Obj)
	{
		((FGeometryScriptColorFlags*)Obj)->bRed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bRed = { "bRed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptColorFlags), &Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bRed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bRed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bRed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bGreen_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bGreen_SetBit(void* Obj)
	{
		((FGeometryScriptColorFlags*)Obj)->bGreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bGreen = { "bGreen", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptColorFlags), &Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bGreen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bGreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bGreen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bBlue_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bBlue_SetBit(void* Obj)
	{
		((FGeometryScriptColorFlags*)Obj)->bBlue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bBlue = { "bBlue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptColorFlags), &Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bBlue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bBlue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bBlue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bAlpha_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bAlpha_SetBit(void* Obj)
	{
		((FGeometryScriptColorFlags*)Obj)->bAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bAlpha = { "bAlpha", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptColorFlags), &Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bAlpha_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bAlpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bRed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bGreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bBlue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewProp_bAlpha,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptColorFlags",
		sizeof(FGeometryScriptColorFlags),
		alignof(FGeometryScriptColorFlags),
		Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptColorFlags()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptColorFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptColorFlags.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptColorFlags.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptGroupLayer;
class UScriptStruct* FGeometryScriptGroupLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptGroupLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptGroupLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptGroupLayer, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptGroupLayer"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptGroupLayer.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptGroupLayer>()
{
	return FGeometryScriptGroupLayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptGroupLayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultLayer_MetaData[];
#endif
		static void NewProp_bDefaultLayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtendedLayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ExtendedLayerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptGroupLayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FGeometryScriptGroupLayer identifies a PolyGroup Layer of a Mesh.\n * The Default Layer always exists, Extended layers may or may not exist.\n */" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
		{ "ToolTip", "FGeometryScriptGroupLayer identifies a PolyGroup Layer of a Mesh.\nThe Default Layer always exists, Extended layers may or may not exist." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptGroupLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptGroupLayer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptGroupLayer_Statics::NewProp_bDefaultLayer_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** If true,the default/standard PolyGroup Layer is used */" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
		{ "ToolTip", "If true,the default/standard PolyGroup Layer is used" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptGroupLayer_Statics::NewProp_bDefaultLayer_SetBit(void* Obj)
	{
		((FGeometryScriptGroupLayer*)Obj)->bDefaultLayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptGroupLayer_Statics::NewProp_bDefaultLayer = { "bDefaultLayer", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptGroupLayer), &Z_Construct_UScriptStruct_FGeometryScriptGroupLayer_Statics::NewProp_bDefaultLayer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptGroupLayer_Statics::NewProp_bDefaultLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptGroupLayer_Statics::NewProp_bDefaultLayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptGroupLayer_Statics::NewProp_ExtendedLayerIndex_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** Index of an extended PolyGroup Layer (which may or may not exist on any given Mesh) */" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
		{ "ToolTip", "Index of an extended PolyGroup Layer (which may or may not exist on any given Mesh)" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptGroupLayer_Statics::NewProp_ExtendedLayerIndex = { "ExtendedLayerIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptGroupLayer, ExtendedLayerIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptGroupLayer_Statics::NewProp_ExtendedLayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptGroupLayer_Statics::NewProp_ExtendedLayerIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptGroupLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptGroupLayer_Statics::NewProp_bDefaultLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptGroupLayer_Statics::NewProp_ExtendedLayerIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptGroupLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptGroupLayer",
		sizeof(FGeometryScriptGroupLayer),
		alignof(FGeometryScriptGroupLayer),
		Z_Construct_UScriptStruct_FGeometryScriptGroupLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptGroupLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptGroupLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptGroupLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptGroupLayer()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptGroupLayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptGroupLayer.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptGroupLayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptGroupLayer.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptIndexType;
	static UEnum* EGeometryScriptIndexType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptIndexType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptIndexType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptIndexType, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptIndexType"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptIndexType.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptIndexType>()
	{
		return EGeometryScriptIndexType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptIndexType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptIndexType_Statics::Enumerators[] = {
		{ "EGeometryScriptIndexType::Any", (int64)EGeometryScriptIndexType::Any },
		{ "EGeometryScriptIndexType::Triangle", (int64)EGeometryScriptIndexType::Triangle },
		{ "EGeometryScriptIndexType::Vertex", (int64)EGeometryScriptIndexType::Vertex },
		{ "EGeometryScriptIndexType::MaterialID", (int64)EGeometryScriptIndexType::MaterialID },
		{ "EGeometryScriptIndexType::PolygroupID", (int64)EGeometryScriptIndexType::PolygroupID },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptIndexType_Statics::Enum_MetaDataParams[] = {
		{ "Any.Comment", "// Index lists of Any type are compatible with any other index list type\n" },
		{ "Any.Name", "EGeometryScriptIndexType::Any" },
		{ "Any.ToolTip", "Index lists of Any type are compatible with any other index list type" },
		{ "BlueprintType", "true" },
		{ "Comment", "// By default structs exposed to Python will use a per-UPROPERTY comparison. When this doesn't give correct results\n// (e.g., for structs with no properties, which will compare equal in all cases because there are no properties to\n// compare), it is necessary to define explicit equality operators and add the following WithIdenticalViaEquality trait.\n// Note that users can write blueprints/python scripts which pass these lists to many function calls so we would like to\n// avoid copying them (very slow if they have millions of elements) so we defined the equality operations using pointer\n// equality but this is potentially confusing if users expect that different lists with the same elements compare equal.\n" },
		{ "MaterialID.Name", "EGeometryScriptIndexType::MaterialID" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
		{ "PolygroupID.DisplayName", "PolyGroup ID" },
		{ "PolygroupID.Name", "EGeometryScriptIndexType::PolygroupID" },
		{ "ToolTip", "By default structs exposed to Python will use a per-UPROPERTY comparison. When this doesn't give correct results\n(e.g., for structs with no properties, which will compare equal in all cases because there are no properties to\ncompare), it is necessary to define explicit equality operators and add the following WithIdenticalViaEquality trait.\nNote that users can write blueprints/python scripts which pass these lists to many function calls so we would like to\navoid copying them (very slow if they have millions of elements) so we defined the equality operations using pointer\nequality but this is potentially confusing if users expect that different lists with the same elements compare equal." },
		{ "Triangle.Name", "EGeometryScriptIndexType::Triangle" },
		{ "Vertex.Name", "EGeometryScriptIndexType::Vertex" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptIndexType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptIndexType",
		"EGeometryScriptIndexType",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptIndexType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptIndexType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptIndexType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptIndexType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptIndexType()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptIndexType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptIndexType.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptIndexType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptIndexType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptIndexList;
class UScriptStruct* FGeometryScriptIndexList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptIndexList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptIndexList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptIndexList, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptIndexList"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptIndexList.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptIndexList>()
{
	return FGeometryScriptIndexList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptIndexList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_IndexType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IndexType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptIndexList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Index List" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptIndexList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptIndexList>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptIndexList_Statics::NewProp_IndexType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptIndexList_Statics::NewProp_IndexType_MetaData[] = {
		{ "Category", "IndexList" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptIndexList_Statics::NewProp_IndexType = { "IndexType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptIndexList, IndexType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptIndexType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptIndexList_Statics::NewProp_IndexType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptIndexList_Statics::NewProp_IndexType_MetaData)) }; // 4266585007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptIndexList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptIndexList_Statics::NewProp_IndexType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptIndexList_Statics::NewProp_IndexType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptIndexList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptIndexList",
		sizeof(FGeometryScriptIndexList),
		alignof(FGeometryScriptIndexList),
		Z_Construct_UScriptStruct_FGeometryScriptIndexList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptIndexList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptIndexList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptIndexList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptIndexList()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptIndexList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptIndexList.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptIndexList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptIndexList.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptTriangleList;
class UScriptStruct* FGeometryScriptTriangleList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptTriangleList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptTriangleList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptTriangleList, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptTriangleList"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptTriangleList.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptTriangleList>()
{
	return FGeometryScriptTriangleList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptTriangleList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTriangleList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Triangle List" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptTriangleList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptTriangleList>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptTriangleList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptTriangleList",
		sizeof(FGeometryScriptTriangleList),
		alignof(FGeometryScriptTriangleList),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptTriangleList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTriangleList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptTriangleList()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptTriangleList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptTriangleList.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptTriangleList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptTriangleList.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptScalarList;
class UScriptStruct* FGeometryScriptScalarList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptScalarList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptScalarList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptScalarList, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptScalarList"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptScalarList.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptScalarList>()
{
	return FGeometryScriptScalarList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptScalarList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptScalarList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Scalar List" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptScalarList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptScalarList>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptScalarList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptScalarList",
		sizeof(FGeometryScriptScalarList),
		alignof(FGeometryScriptScalarList),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptScalarList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptScalarList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptScalarList()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptScalarList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptScalarList.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptScalarList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptScalarList.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptVectorList;
class UScriptStruct* FGeometryScriptVectorList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptVectorList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptVectorList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptVectorList, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptVectorList"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptVectorList.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptVectorList>()
{
	return FGeometryScriptVectorList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptVectorList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptVectorList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Vector List" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptVectorList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptVectorList>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptVectorList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptVectorList",
		sizeof(FGeometryScriptVectorList),
		alignof(FGeometryScriptVectorList),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptVectorList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptVectorList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptVectorList()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptVectorList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptVectorList.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptVectorList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptVectorList.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptUVList;
class UScriptStruct* FGeometryScriptUVList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptUVList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptUVList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptUVList, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptUVList"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptUVList.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptUVList>()
{
	return FGeometryScriptUVList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptUVList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptUVList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "UV List" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptUVList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptUVList>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptUVList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptUVList",
		sizeof(FGeometryScriptUVList),
		alignof(FGeometryScriptUVList),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptUVList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptUVList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptUVList()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptUVList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptUVList.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptUVList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptUVList.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptColorList;
class UScriptStruct* FGeometryScriptColorList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptColorList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptColorList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptColorList, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptColorList"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptColorList.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptColorList>()
{
	return FGeometryScriptColorList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptColorList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptColorList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Color List" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptColorList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptColorList>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptColorList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptColorList",
		sizeof(FGeometryScriptColorList),
		alignof(FGeometryScriptColorList),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptColorList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptColorList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptColorList()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptColorList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptColorList.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptColorList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptColorList.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptPolyPath;
class UScriptStruct* FGeometryScriptPolyPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptPolyPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptPolyPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptPolyPath, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptPolyPath"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptPolyPath.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptPolyPath>()
{
	return FGeometryScriptPolyPath::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptPolyPath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClosedLoop_MetaData[];
#endif
		static void NewProp_bClosedLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosedLoop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPolyPath_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "PolyPath" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptPolyPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptPolyPath>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPolyPath_Statics::NewProp_bClosedLoop_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptPolyPath_Statics::NewProp_bClosedLoop_SetBit(void* Obj)
	{
		((FGeometryScriptPolyPath*)Obj)->bClosedLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPolyPath_Statics::NewProp_bClosedLoop = { "bClosedLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptPolyPath), &Z_Construct_UScriptStruct_FGeometryScriptPolyPath_Statics::NewProp_bClosedLoop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPolyPath_Statics::NewProp_bClosedLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPolyPath_Statics::NewProp_bClosedLoop_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptPolyPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPolyPath_Statics::NewProp_bClosedLoop,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptPolyPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptPolyPath",
		sizeof(FGeometryScriptPolyPath),
		alignof(FGeometryScriptPolyPath),
		Z_Construct_UScriptStruct_FGeometryScriptPolyPath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPolyPath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPolyPath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPolyPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPolyPath()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptPolyPath.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptPolyPath.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptPolyPath_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptPolyPath.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptDynamicMeshBVH;
class UScriptStruct* FGeometryScriptDynamicMeshBVH::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptDynamicMeshBVH.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptDynamicMeshBVH.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptDynamicMeshBVH, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptDynamicMeshBVH"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptDynamicMeshBVH.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptDynamicMeshBVH>()
{
	return FGeometryScriptDynamicMeshBVH::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptDynamicMeshBVH_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptDynamicMeshBVH_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n// Spatial data structures\n//\n" },
		{ "DisplayName", "DynamicMesh BVH Cache" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
		{ "ToolTip", "Spatial data structures" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptDynamicMeshBVH_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptDynamicMeshBVH>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptDynamicMeshBVH_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptDynamicMeshBVH",
		sizeof(FGeometryScriptDynamicMeshBVH),
		alignof(FGeometryScriptDynamicMeshBVH),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptDynamicMeshBVH_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptDynamicMeshBVH_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptDynamicMeshBVH()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptDynamicMeshBVH.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptDynamicMeshBVH.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptDynamicMeshBVH_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptDynamicMeshBVH.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptDebugMessageType;
	static UEnum* EGeometryScriptDebugMessageType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptDebugMessageType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptDebugMessageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptDebugMessageType, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptDebugMessageType"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptDebugMessageType.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptDebugMessageType>()
	{
		return EGeometryScriptDebugMessageType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptDebugMessageType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptDebugMessageType_Statics::Enumerators[] = {
		{ "EGeometryScriptDebugMessageType::ErrorMessage", (int64)EGeometryScriptDebugMessageType::ErrorMessage },
		{ "EGeometryScriptDebugMessageType::WarningMessage", (int64)EGeometryScriptDebugMessageType::WarningMessage },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptDebugMessageType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n// Errors/Debugging\n//\n" },
		{ "ErrorMessage.Name", "EGeometryScriptDebugMessageType::ErrorMessage" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
		{ "ToolTip", "Errors/Debugging" },
		{ "WarningMessage.Name", "EGeometryScriptDebugMessageType::WarningMessage" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptDebugMessageType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptDebugMessageType",
		"EGeometryScriptDebugMessageType",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptDebugMessageType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptDebugMessageType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptDebugMessageType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptDebugMessageType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptDebugMessageType()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptDebugMessageType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptDebugMessageType.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptDebugMessageType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptDebugMessageType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptErrorType;
	static UEnum* EGeometryScriptErrorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptErrorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptErrorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptErrorType, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptErrorType"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptErrorType.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptErrorType>()
	{
		return EGeometryScriptErrorType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptErrorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptErrorType_Statics::Enumerators[] = {
		{ "EGeometryScriptErrorType::NoError", (int64)EGeometryScriptErrorType::NoError },
		{ "EGeometryScriptErrorType::UnknownError", (int64)EGeometryScriptErrorType::UnknownError },
		{ "EGeometryScriptErrorType::InvalidInputs", (int64)EGeometryScriptErrorType::InvalidInputs },
		{ "EGeometryScriptErrorType::OperationFailed", (int64)EGeometryScriptErrorType::OperationFailed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptErrorType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "InvalidInputs.Name", "EGeometryScriptErrorType::InvalidInputs" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
		{ "NoError.Comment", "// warning: must only append members!\n" },
		{ "NoError.Name", "EGeometryScriptErrorType::NoError" },
		{ "NoError.ToolTip", "warning: must only append members!" },
		{ "OperationFailed.Name", "EGeometryScriptErrorType::OperationFailed" },
		{ "UnknownError.Name", "EGeometryScriptErrorType::UnknownError" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptErrorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptErrorType",
		"EGeometryScriptErrorType",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptErrorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptErrorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptErrorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptErrorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptErrorType()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptErrorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptErrorType.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptErrorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptErrorType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptDebugMessage;
class UScriptStruct* FGeometryScriptDebugMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptDebugMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptDebugMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptDebugMessage, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptDebugMessage"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptDebugMessage.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptDebugMessage>()
{
	return FGeometryScriptDebugMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_MessageType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MessageType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ErrorType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ErrorType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptDebugMessage>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::NewProp_MessageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::NewProp_MessageType_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptDebugMessage, MessageType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptDebugMessageType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::NewProp_MessageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::NewProp_MessageType_MetaData)) }; // 2334617004
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::NewProp_ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::NewProp_ErrorType_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::NewProp_ErrorType = { "ErrorType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptDebugMessage, ErrorType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptErrorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::NewProp_ErrorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::NewProp_ErrorType_MetaData)) }; // 3452943679
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptDebugMessage, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::NewProp_MessageType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::NewProp_MessageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::NewProp_ErrorType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::NewProp_ErrorType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::NewProp_Message,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptDebugMessage",
		sizeof(FGeometryScriptDebugMessage),
		alignof(FGeometryScriptDebugMessage),
		Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptDebugMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptDebugMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptDebugMessage.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptDebugMessage.InnerSingleton;
	}
	void UGeometryScriptDebug::StaticRegisterNativesUGeometryScriptDebug()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptDebug);
	UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister()
	{
		return UGeometryScriptDebug::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptDebug_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Messages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Messages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Messages;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptDebug_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptDebug_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GeometryScript/GeometryScriptTypes.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
		{ "TestMetadata", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryScriptDebug_Statics::NewProp_Messages_Inner = { "Messages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGeometryScriptDebugMessage, METADATA_PARAMS(nullptr, 0) }; // 2033028265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptDebug_Statics::NewProp_Messages_MetaData[] = {
		{ "Category", "Messages" },
		{ "ModuleRelativePath", "Public/GeometryScript/GeometryScriptTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryScriptDebug_Statics::NewProp_Messages = { "Messages", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryScriptDebug, Messages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptDebug_Statics::NewProp_Messages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptDebug_Statics::NewProp_Messages_MetaData)) }; // 2033028265
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryScriptDebug_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryScriptDebug_Statics::NewProp_Messages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryScriptDebug_Statics::NewProp_Messages,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptDebug_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptDebug>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptDebug_Statics::ClassParams = {
		&UGeometryScriptDebug::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeometryScriptDebug_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptDebug_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptDebug_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptDebug_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptDebug()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptDebug.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptDebug.OuterSingleton, Z_Construct_UClass_UGeometryScriptDebug_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptDebug.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptDebug>()
	{
		return UGeometryScriptDebug::StaticClass();
	}
	UGeometryScriptDebug::UGeometryScriptDebug(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptDebug);
	UGeometryScriptDebug::~UGeometryScriptDebug() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_GeometryScriptTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_GeometryScriptTypes_h_Statics::EnumInfo[] = {
		{ EGeometryScriptOutcomePins_StaticEnum, TEXT("EGeometryScriptOutcomePins"), &Z_Registration_Info_UEnum_EGeometryScriptOutcomePins, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3716180884U) },
		{ EGeometryScriptSearchOutcomePins_StaticEnum, TEXT("EGeometryScriptSearchOutcomePins"), &Z_Registration_Info_UEnum_EGeometryScriptSearchOutcomePins, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1303551219U) },
		{ EGeometryScriptContainmentOutcomePins_StaticEnum, TEXT("EGeometryScriptContainmentOutcomePins"), &Z_Registration_Info_UEnum_EGeometryScriptContainmentOutcomePins, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2045701573U) },
		{ EGeometryScriptLODType_StaticEnum, TEXT("EGeometryScriptLODType"), &Z_Registration_Info_UEnum_EGeometryScriptLODType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 68706456U) },
		{ EGeometryScriptAxis_StaticEnum, TEXT("EGeometryScriptAxis"), &Z_Registration_Info_UEnum_EGeometryScriptAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1190487509U) },
		{ EGeometryScriptIndexType_StaticEnum, TEXT("EGeometryScriptIndexType"), &Z_Registration_Info_UEnum_EGeometryScriptIndexType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4266585007U) },
		{ EGeometryScriptDebugMessageType_StaticEnum, TEXT("EGeometryScriptDebugMessageType"), &Z_Registration_Info_UEnum_EGeometryScriptDebugMessageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2334617004U) },
		{ EGeometryScriptErrorType_StaticEnum, TEXT("EGeometryScriptErrorType"), &Z_Registration_Info_UEnum_EGeometryScriptErrorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3452943679U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_GeometryScriptTypes_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptMeshReadLOD::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD_Statics::NewStructOps, TEXT("GeometryScriptMeshReadLOD"), &Z_Registration_Info_UScriptStruct_GeometryScriptMeshReadLOD, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptMeshReadLOD), 3978269310U) },
		{ FGeometryScriptMeshWriteLOD::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD_Statics::NewStructOps, TEXT("GeometryScriptMeshWriteLOD"), &Z_Registration_Info_UScriptStruct_GeometryScriptMeshWriteLOD, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptMeshWriteLOD), 2178222923U) },
		{ FGeometryScriptTriangle::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptTriangle_Statics::NewStructOps, TEXT("GeometryScriptTriangle"), &Z_Registration_Info_UScriptStruct_GeometryScriptTriangle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptTriangle), 309759555U) },
		{ FGeometryScriptTrianglePoint::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint_Statics::NewStructOps, TEXT("GeometryScriptTrianglePoint"), &Z_Registration_Info_UScriptStruct_GeometryScriptTrianglePoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptTrianglePoint), 3281470363U) },
		{ FGeometryScriptUVTriangle::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptUVTriangle_Statics::NewStructOps, TEXT("GeometryScriptUVTriangle"), &Z_Registration_Info_UScriptStruct_GeometryScriptUVTriangle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptUVTriangle), 192984062U) },
		{ FGeometryScriptColorFlags::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptColorFlags_Statics::NewStructOps, TEXT("GeometryScriptColorFlags"), &Z_Registration_Info_UScriptStruct_GeometryScriptColorFlags, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptColorFlags), 1356907492U) },
		{ FGeometryScriptGroupLayer::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptGroupLayer_Statics::NewStructOps, TEXT("GeometryScriptGroupLayer"), &Z_Registration_Info_UScriptStruct_GeometryScriptGroupLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptGroupLayer), 1149642374U) },
		{ FGeometryScriptIndexList::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptIndexList_Statics::NewStructOps, TEXT("GeometryScriptIndexList"), &Z_Registration_Info_UScriptStruct_GeometryScriptIndexList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptIndexList), 2920384414U) },
		{ FGeometryScriptTriangleList::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptTriangleList_Statics::NewStructOps, TEXT("GeometryScriptTriangleList"), &Z_Registration_Info_UScriptStruct_GeometryScriptTriangleList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptTriangleList), 2584906498U) },
		{ FGeometryScriptScalarList::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptScalarList_Statics::NewStructOps, TEXT("GeometryScriptScalarList"), &Z_Registration_Info_UScriptStruct_GeometryScriptScalarList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptScalarList), 396077995U) },
		{ FGeometryScriptVectorList::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptVectorList_Statics::NewStructOps, TEXT("GeometryScriptVectorList"), &Z_Registration_Info_UScriptStruct_GeometryScriptVectorList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptVectorList), 400507777U) },
		{ FGeometryScriptUVList::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptUVList_Statics::NewStructOps, TEXT("GeometryScriptUVList"), &Z_Registration_Info_UScriptStruct_GeometryScriptUVList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptUVList), 1719514926U) },
		{ FGeometryScriptColorList::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptColorList_Statics::NewStructOps, TEXT("GeometryScriptColorList"), &Z_Registration_Info_UScriptStruct_GeometryScriptColorList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptColorList), 3651011655U) },
		{ FGeometryScriptPolyPath::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptPolyPath_Statics::NewStructOps, TEXT("GeometryScriptPolyPath"), &Z_Registration_Info_UScriptStruct_GeometryScriptPolyPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptPolyPath), 1006159731U) },
		{ FGeometryScriptDynamicMeshBVH::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptDynamicMeshBVH_Statics::NewStructOps, TEXT("GeometryScriptDynamicMeshBVH"), &Z_Registration_Info_UScriptStruct_GeometryScriptDynamicMeshBVH, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptDynamicMeshBVH), 830645978U) },
		{ FGeometryScriptDebugMessage::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptDebugMessage_Statics::NewStructOps, TEXT("GeometryScriptDebugMessage"), &Z_Registration_Info_UScriptStruct_GeometryScriptDebugMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptDebugMessage), 2033028265U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_GeometryScriptTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptDebug, UGeometryScriptDebug::StaticClass, TEXT("UGeometryScriptDebug"), &Z_Registration_Info_UClass_UGeometryScriptDebug, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptDebug), 3929240986U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_GeometryScriptTypes_h_442403291(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_GeometryScriptTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_GeometryScriptTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_GeometryScriptTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_GeometryScriptTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_GeometryScriptTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_GeometryScriptTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
