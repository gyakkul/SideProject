// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshPrimitiveFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshPrimitiveFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitivePolygroupMode();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveUVMode();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptPrimitivePolygroupMode;
	static UEnum* EGeometryScriptPrimitivePolygroupMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptPrimitivePolygroupMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptPrimitivePolygroupMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitivePolygroupMode, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptPrimitivePolygroupMode"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptPrimitivePolygroupMode.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptPrimitivePolygroupMode>()
	{
		return EGeometryScriptPrimitivePolygroupMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitivePolygroupMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitivePolygroupMode_Statics::Enumerators[] = {
		{ "EGeometryScriptPrimitivePolygroupMode::SingleGroup", (int64)EGeometryScriptPrimitivePolygroupMode::SingleGroup },
		{ "EGeometryScriptPrimitivePolygroupMode::PerFace", (int64)EGeometryScriptPrimitivePolygroupMode::PerFace },
		{ "EGeometryScriptPrimitivePolygroupMode::PerQuad", (int64)EGeometryScriptPrimitivePolygroupMode::PerQuad },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitivePolygroupMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "PerFace.Name", "EGeometryScriptPrimitivePolygroupMode::PerFace" },
		{ "PerQuad.Name", "EGeometryScriptPrimitivePolygroupMode::PerQuad" },
		{ "SingleGroup.Name", "EGeometryScriptPrimitivePolygroupMode::SingleGroup" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitivePolygroupMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptPrimitivePolygroupMode",
		"EGeometryScriptPrimitivePolygroupMode",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitivePolygroupMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitivePolygroupMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitivePolygroupMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitivePolygroupMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitivePolygroupMode()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptPrimitivePolygroupMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptPrimitivePolygroupMode.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitivePolygroupMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptPrimitivePolygroupMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptPrimitiveOriginMode;
	static UEnum* EGeometryScriptPrimitiveOriginMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptPrimitiveOriginMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptPrimitiveOriginMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptPrimitiveOriginMode"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptPrimitiveOriginMode.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptPrimitiveOriginMode>()
	{
		return EGeometryScriptPrimitiveOriginMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode_Statics::Enumerators[] = {
		{ "EGeometryScriptPrimitiveOriginMode::Center", (int64)EGeometryScriptPrimitiveOriginMode::Center },
		{ "EGeometryScriptPrimitiveOriginMode::Base", (int64)EGeometryScriptPrimitiveOriginMode::Base },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode_Statics::Enum_MetaDataParams[] = {
		{ "Base.Name", "EGeometryScriptPrimitiveOriginMode::Base" },
		{ "BlueprintType", "true" },
		{ "Center.Name", "EGeometryScriptPrimitiveOriginMode::Center" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptPrimitiveOriginMode",
		"EGeometryScriptPrimitiveOriginMode",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptPrimitiveOriginMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptPrimitiveOriginMode.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptPrimitiveOriginMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptPrimitiveUVMode;
	static UEnum* EGeometryScriptPrimitiveUVMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptPrimitiveUVMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptPrimitiveUVMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveUVMode, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptPrimitiveUVMode"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptPrimitiveUVMode.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptPrimitiveUVMode>()
	{
		return EGeometryScriptPrimitiveUVMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveUVMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveUVMode_Statics::Enumerators[] = {
		{ "EGeometryScriptPrimitiveUVMode::Uniform", (int64)EGeometryScriptPrimitiveUVMode::Uniform },
		{ "EGeometryScriptPrimitiveUVMode::ScaleToFill", (int64)EGeometryScriptPrimitiveUVMode::ScaleToFill },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveUVMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScaleToFill.Name", "EGeometryScriptPrimitiveUVMode::ScaleToFill" },
		{ "Uniform.Name", "EGeometryScriptPrimitiveUVMode::Uniform" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveUVMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptPrimitiveUVMode",
		"EGeometryScriptPrimitiveUVMode",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveUVMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveUVMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveUVMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveUVMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveUVMode()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptPrimitiveUVMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptPrimitiveUVMode.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveUVMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptPrimitiveUVMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptPrimitiveOptions;
class UScriptStruct* FGeometryScriptPrimitiveOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptPrimitiveOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptPrimitiveOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptPrimitiveOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptPrimitiveOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptPrimitiveOptions>()
{
	return FGeometryScriptPrimitiveOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_PolygroupMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygroupMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PolygroupMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipOrientation_MetaData[];
#endif
		static void NewProp_bFlipOrientation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipOrientation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UVMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UVMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptPrimitiveOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewProp_PolygroupMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewProp_PolygroupMode_MetaData[] = {
		{ "Category", "Options" },
		{ "DisplayName", "PolyGroup Mode" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewProp_PolygroupMode = { "PolygroupMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptPrimitiveOptions, PolygroupMode), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitivePolygroupMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewProp_PolygroupMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewProp_PolygroupMode_MetaData)) }; // 2278437824
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewProp_bFlipOrientation_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewProp_bFlipOrientation_SetBit(void* Obj)
	{
		((FGeometryScriptPrimitiveOptions*)Obj)->bFlipOrientation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewProp_bFlipOrientation = { "bFlipOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptPrimitiveOptions), &Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewProp_bFlipOrientation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewProp_bFlipOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewProp_bFlipOrientation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewProp_UVMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewProp_UVMode_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewProp_UVMode = { "UVMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptPrimitiveOptions, UVMode), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveUVMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewProp_UVMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewProp_UVMode_MetaData)) }; // 2932896547
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewProp_PolygroupMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewProp_PolygroupMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewProp_bFlipOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewProp_UVMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewProp_UVMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptPrimitiveOptions",
		sizeof(FGeometryScriptPrimitiveOptions),
		alignof(FGeometryScriptPrimitiveOptions),
		Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptPrimitiveOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptPrimitiveOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptPrimitiveOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptRevolveOptions;
class UScriptStruct* FGeometryScriptRevolveOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptRevolveOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptRevolveOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptRevolveOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptRevolveOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptRevolveOptions>()
{
	return FGeometryScriptRevolveOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RevolveDegrees_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RevolveDegrees;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DegreeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DegreeOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverseDirection_MetaData[];
#endif
		static void NewProp_bReverseDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHardNormals_MetaData[];
#endif
		static void NewProp_bHardNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHardNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardNormalAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HardNormalAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProfileAtMidpoint_MetaData[];
#endif
		static void NewProp_bProfileAtMidpoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProfileAtMidpoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFillPartialRevolveEndcaps_MetaData[];
#endif
		static void NewProp_bFillPartialRevolveEndcaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillPartialRevolveEndcaps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptRevolveOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_RevolveDegrees_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_RevolveDegrees = { "RevolveDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRevolveOptions, RevolveDegrees), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_RevolveDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_RevolveDegrees_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_DegreeOffset_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_DegreeOffset = { "DegreeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRevolveOptions, DegreeOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_DegreeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_DegreeOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bReverseDirection_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bReverseDirection_SetBit(void* Obj)
	{
		((FGeometryScriptRevolveOptions*)Obj)->bReverseDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bReverseDirection = { "bReverseDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRevolveOptions), &Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bReverseDirection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bReverseDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bReverseDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bHardNormals_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bHardNormals_SetBit(void* Obj)
	{
		((FGeometryScriptRevolveOptions*)Obj)->bHardNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bHardNormals = { "bHardNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRevolveOptions), &Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bHardNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bHardNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bHardNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_HardNormalAngle_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_HardNormalAngle = { "HardNormalAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRevolveOptions, HardNormalAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_HardNormalAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_HardNormalAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bProfileAtMidpoint_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bProfileAtMidpoint_SetBit(void* Obj)
	{
		((FGeometryScriptRevolveOptions*)Obj)->bProfileAtMidpoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bProfileAtMidpoint = { "bProfileAtMidpoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRevolveOptions), &Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bProfileAtMidpoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bProfileAtMidpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bProfileAtMidpoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bFillPartialRevolveEndcaps_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bFillPartialRevolveEndcaps_SetBit(void* Obj)
	{
		((FGeometryScriptRevolveOptions*)Obj)->bFillPartialRevolveEndcaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bFillPartialRevolveEndcaps = { "bFillPartialRevolveEndcaps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRevolveOptions), &Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bFillPartialRevolveEndcaps_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bFillPartialRevolveEndcaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bFillPartialRevolveEndcaps_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_RevolveDegrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_DegreeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bReverseDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bHardNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_HardNormalAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bProfileAtMidpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bFillPartialRevolveEndcaps,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptRevolveOptions",
		sizeof(FGeometryScriptRevolveOptions),
		alignof(FGeometryScriptRevolveOptions),
		Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptRevolveOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptRevolveOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptRevolveOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptVoronoiOptions;
class UScriptStruct* FGeometryScriptVoronoiOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptVoronoiOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptVoronoiOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptVoronoiOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptVoronoiOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptVoronoiOptions>()
{
	return FGeometryScriptVoronoiOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundsExpand_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundsExpand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CreateCells_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateCells_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CreateCells;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeBoundary_MetaData[];
#endif
		static void NewProp_bIncludeBoundary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeBoundary;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptVoronoiOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_BoundsExpand_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_BoundsExpand = { "BoundsExpand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptVoronoiOptions, BoundsExpand), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_BoundsExpand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_BoundsExpand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_Bounds_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptVoronoiOptions, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_Bounds_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_CreateCells_Inner = { "CreateCells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_CreateCells_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Optional list of cells to create meshes for.  If empty, create all cells. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ToolTip", "Optional list of cells to create meshes for.  If empty, create all cells." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_CreateCells = { "CreateCells", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptVoronoiOptions, CreateCells), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_CreateCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_CreateCells_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_bIncludeBoundary_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Whether to include the bordering Voronoi cells (which extend 'infinitely' to any boundary) */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ToolTip", "Whether to include the bordering Voronoi cells (which extend 'infinitely' to any boundary)" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_bIncludeBoundary_SetBit(void* Obj)
	{
		((FGeometryScriptVoronoiOptions*)Obj)->bIncludeBoundary = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_bIncludeBoundary = { "bIncludeBoundary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptVoronoiOptions), &Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_bIncludeBoundary_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_bIncludeBoundary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_bIncludeBoundary_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_BoundsExpand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_CreateCells_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_CreateCells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_bIncludeBoundary,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptVoronoiOptions",
		sizeof(FGeometryScriptVoronoiOptions),
		alignof(FGeometryScriptVoronoiOptions),
		Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptVoronoiOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptVoronoiOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptVoronoiOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendRoundRectangle_Compatibility_5_0)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DimensionX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DimensionY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CornerRadius);
		P_GET_PROPERTY(FIntProperty,Z_Param_StepsWidth);
		P_GET_PROPERTY(FIntProperty,Z_Param_StepsHeight);
		P_GET_PROPERTY(FIntProperty,Z_Param_StepsRound);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRoundRectangle_Compatibility_5_0(Z_Param_TargetMesh,Z_Param_PrimitiveOptions,Z_Param_Transform,Z_Param_DimensionX,Z_Param_DimensionY,Z_Param_CornerRadius,Z_Param_StepsWidth,Z_Param_StepsHeight,Z_Param_StepsRound,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendRectangle_Compatibility_5_0)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DimensionX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DimensionY);
		P_GET_PROPERTY(FIntProperty,Z_Param_StepsWidth);
		P_GET_PROPERTY(FIntProperty,Z_Param_StepsHeight);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRectangle_Compatibility_5_0(Z_Param_TargetMesh,Z_Param_PrimitiveOptions,Z_Param_Transform,Z_Param_DimensionX,Z_Param_DimensionY,Z_Param_StepsWidth,Z_Param_StepsHeight,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendVoronoiDiagram2D)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_VoronoiSites);
		P_GET_STRUCT(FGeometryScriptVoronoiOptions,Z_Param_VoronoiOptions);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendVoronoiDiagram2D(Z_Param_TargetMesh,Z_Param_PrimitiveOptions,Z_Param_Transform,Z_Param_Out_VoronoiSites,Z_Param_VoronoiOptions,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendCurvedStairs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StepWidth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StepHeight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InnerRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurveAngle);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumSteps);
		P_GET_UBOOL(Z_Param_bFloating);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCurvedStairs(Z_Param_TargetMesh,Z_Param_PrimitiveOptions,Z_Param_Transform,Z_Param_StepWidth,Z_Param_StepHeight,Z_Param_InnerRadius,Z_Param_CurveAngle,Z_Param_NumSteps,Z_Param_bFloating,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendLinearStairs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StepWidth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StepHeight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StepDepth);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumSteps);
		P_GET_UBOOL(Z_Param_bFloating);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendLinearStairs(Z_Param_TargetMesh,Z_Param_PrimitiveOptions,Z_Param_Transform,Z_Param_StepWidth,Z_Param_StepHeight,Z_Param_StepDepth,Z_Param_NumSteps,Z_Param_bFloating,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendTriangulatedPolygon)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_PolygonVertices);
		P_GET_UBOOL(Z_Param_bAllowSelfIntersections);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendTriangulatedPolygon(Z_Param_TargetMesh,Z_Param_PrimitiveOptions,Z_Param_Transform,Z_Param_Out_PolygonVertices,Z_Param_bAllowSelfIntersections,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendDisc)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_AngleSteps);
		P_GET_PROPERTY(FIntProperty,Z_Param_SpokeSteps);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HoleRadius);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendDisc(Z_Param_TargetMesh,Z_Param_PrimitiveOptions,Z_Param_Transform,Z_Param_Radius,Z_Param_AngleSteps,Z_Param_SpokeSteps,Z_Param_StartAngle,Z_Param_EndAngle,Z_Param_HoleRadius,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendRoundRectangleXY)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DimensionX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DimensionY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CornerRadius);
		P_GET_PROPERTY(FIntProperty,Z_Param_StepsWidth);
		P_GET_PROPERTY(FIntProperty,Z_Param_StepsHeight);
		P_GET_PROPERTY(FIntProperty,Z_Param_StepsRound);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRoundRectangleXY(Z_Param_TargetMesh,Z_Param_PrimitiveOptions,Z_Param_Transform,Z_Param_DimensionX,Z_Param_DimensionY,Z_Param_CornerRadius,Z_Param_StepsWidth,Z_Param_StepsHeight,Z_Param_StepsRound,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendRectangleXY)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DimensionX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DimensionY);
		P_GET_PROPERTY(FIntProperty,Z_Param_StepsWidth);
		P_GET_PROPERTY(FIntProperty,Z_Param_StepsHeight);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRectangleXY(Z_Param_TargetMesh,Z_Param_PrimitiveOptions,Z_Param_Transform,Z_Param_DimensionX,Z_Param_DimensionY,Z_Param_StepsWidth,Z_Param_StepsHeight,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSweepPolygon)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_PolygonVertices);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_SweepPath);
		P_GET_UBOOL(Z_Param_bLoop);
		P_GET_UBOOL(Z_Param_bCapped);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RotationAngleDeg);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSweepPolygon(Z_Param_TargetMesh,Z_Param_PrimitiveOptions,Z_Param_Transform,Z_Param_Out_PolygonVertices,Z_Param_Out_SweepPath,Z_Param_bLoop,Z_Param_bCapped,Z_Param_StartScale,Z_Param_EndScale,Z_Param_RotationAngleDeg,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSimpleSweptPolygon)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_PolygonVertices);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_SweepPath);
		P_GET_UBOOL(Z_Param_bLoop);
		P_GET_UBOOL(Z_Param_bCapped);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndScale);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleSweptPolygon(Z_Param_TargetMesh,Z_Param_PrimitiveOptions,Z_Param_Transform,Z_Param_Out_PolygonVertices,Z_Param_Out_SweepPath,Z_Param_bLoop,Z_Param_bCapped,Z_Param_StartScale,Z_Param_EndScale,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSimpleExtrudePolygon)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_PolygonVertices);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Height);
		P_GET_PROPERTY(FIntProperty,Z_Param_HeightSteps);
		P_GET_UBOOL(Z_Param_bCapped);
		P_GET_ENUM(EGeometryScriptPrimitiveOriginMode,Z_Param_Origin);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleExtrudePolygon(Z_Param_TargetMesh,Z_Param_PrimitiveOptions,Z_Param_Transform,Z_Param_Out_PolygonVertices,Z_Param_Height,Z_Param_HeightSteps,Z_Param_bCapped,EGeometryScriptPrimitiveOriginMode(Z_Param_Origin),Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSweepPolyline)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_PolylineVertices);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_SweepPath);
		P_GET_TARRAY_REF(float,Z_Param_Out_PolylineTexParamU);
		P_GET_TARRAY_REF(float,Z_Param_Out_SweepPathTexParamV);
		P_GET_UBOOL(Z_Param_bLoop);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RotationAngleDeg);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSweepPolyline(Z_Param_TargetMesh,Z_Param_PrimitiveOptions,Z_Param_Transform,Z_Param_Out_PolylineVertices,Z_Param_Out_SweepPath,Z_Param_Out_PolylineTexParamU,Z_Param_Out_SweepPathTexParamV,Z_Param_bLoop,Z_Param_StartScale,Z_Param_EndScale,Z_Param_RotationAngleDeg,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendRevolvePath)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_PathVertices);
		P_GET_STRUCT(FGeometryScriptRevolveOptions,Z_Param_RevolveOptions);
		P_GET_PROPERTY(FIntProperty,Z_Param_Steps);
		P_GET_UBOOL(Z_Param_bCapped);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRevolvePath(Z_Param_TargetMesh,Z_Param_PrimitiveOptions,Z_Param_Transform,Z_Param_Out_PathVertices,Z_Param_RevolveOptions,Z_Param_Steps,Z_Param_bCapped,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSpiralRevolvePolygon)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_PolygonVertices);
		P_GET_STRUCT(FGeometryScriptRevolveOptions,Z_Param_RevolveOptions);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_Steps);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RisePerRevolution);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSpiralRevolvePolygon(Z_Param_TargetMesh,Z_Param_PrimitiveOptions,Z_Param_Transform,Z_Param_Out_PolygonVertices,Z_Param_RevolveOptions,Z_Param_Radius,Z_Param_Steps,Z_Param_RisePerRevolution,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendRevolvePolygon)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_PolygonVertices);
		P_GET_STRUCT(FGeometryScriptRevolveOptions,Z_Param_RevolveOptions);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_Steps);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRevolvePolygon(Z_Param_TargetMesh,Z_Param_PrimitiveOptions,Z_Param_Transform,Z_Param_Out_PolygonVertices,Z_Param_RevolveOptions,Z_Param_Radius,Z_Param_Steps,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendTorus)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_STRUCT(FGeometryScriptRevolveOptions,Z_Param_RevolveOptions);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MajorRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinorRadius);
		P_GET_PROPERTY(FIntProperty,Z_Param_MajorSteps);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinorSteps);
		P_GET_ENUM(EGeometryScriptPrimitiveOriginMode,Z_Param_Origin);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendTorus(Z_Param_TargetMesh,Z_Param_PrimitiveOptions,Z_Param_Transform,Z_Param_RevolveOptions,Z_Param_MajorRadius,Z_Param_MinorRadius,Z_Param_MajorSteps,Z_Param_MinorSteps,EGeometryScriptPrimitiveOriginMode(Z_Param_Origin),Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendCone)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BaseRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TopRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Height);
		P_GET_PROPERTY(FIntProperty,Z_Param_RadialSteps);
		P_GET_PROPERTY(FIntProperty,Z_Param_HeightSteps);
		P_GET_UBOOL(Z_Param_bCapped);
		P_GET_ENUM(EGeometryScriptPrimitiveOriginMode,Z_Param_Origin);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCone(Z_Param_TargetMesh,Z_Param_PrimitiveOptions,Z_Param_Transform,Z_Param_BaseRadius,Z_Param_TopRadius,Z_Param_Height,Z_Param_RadialSteps,Z_Param_HeightSteps,Z_Param_bCapped,EGeometryScriptPrimitiveOriginMode(Z_Param_Origin),Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendCylinder)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Height);
		P_GET_PROPERTY(FIntProperty,Z_Param_RadialSteps);
		P_GET_PROPERTY(FIntProperty,Z_Param_HeightSteps);
		P_GET_UBOOL(Z_Param_bCapped);
		P_GET_ENUM(EGeometryScriptPrimitiveOriginMode,Z_Param_Origin);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCylinder(Z_Param_TargetMesh,Z_Param_PrimitiveOptions,Z_Param_Transform,Z_Param_Radius,Z_Param_Height,Z_Param_RadialSteps,Z_Param_HeightSteps,Z_Param_bCapped,EGeometryScriptPrimitiveOriginMode(Z_Param_Origin),Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendCapsule)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LineLength);
		P_GET_PROPERTY(FIntProperty,Z_Param_HemisphereSteps);
		P_GET_PROPERTY(FIntProperty,Z_Param_CircleSteps);
		P_GET_ENUM(EGeometryScriptPrimitiveOriginMode,Z_Param_Origin);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCapsule(Z_Param_TargetMesh,Z_Param_PrimitiveOptions,Z_Param_Transform,Z_Param_Radius,Z_Param_LineLength,Z_Param_HemisphereSteps,Z_Param_CircleSteps,EGeometryScriptPrimitiveOriginMode(Z_Param_Origin),Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSphereBox)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_StepsX);
		P_GET_PROPERTY(FIntProperty,Z_Param_StepsY);
		P_GET_PROPERTY(FIntProperty,Z_Param_StepsZ);
		P_GET_ENUM(EGeometryScriptPrimitiveOriginMode,Z_Param_Origin);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSphereBox(Z_Param_TargetMesh,Z_Param_PrimitiveOptions,Z_Param_Transform,Z_Param_Radius,Z_Param_StepsX,Z_Param_StepsY,Z_Param_StepsZ,EGeometryScriptPrimitiveOriginMode(Z_Param_Origin),Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSphereLatLong)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_StepsPhi);
		P_GET_PROPERTY(FIntProperty,Z_Param_StepsTheta);
		P_GET_ENUM(EGeometryScriptPrimitiveOriginMode,Z_Param_Origin);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSphereLatLong(Z_Param_TargetMesh,Z_Param_PrimitiveOptions,Z_Param_Transform,Z_Param_Radius,Z_Param_StepsPhi,Z_Param_StepsTheta,EGeometryScriptPrimitiveOriginMode(Z_Param_Origin),Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendBox)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DimensionX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DimensionY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DimensionZ);
		P_GET_PROPERTY(FIntProperty,Z_Param_StepsX);
		P_GET_PROPERTY(FIntProperty,Z_Param_StepsY);
		P_GET_PROPERTY(FIntProperty,Z_Param_StepsZ);
		P_GET_ENUM(EGeometryScriptPrimitiveOriginMode,Z_Param_Origin);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendBox(Z_Param_TargetMesh,Z_Param_PrimitiveOptions,Z_Param_Transform,Z_Param_DimensionX,Z_Param_DimensionY,Z_Param_DimensionZ,Z_Param_StepsX,Z_Param_StepsY,Z_Param_StepsZ,EGeometryScriptPrimitiveOriginMode(Z_Param_Origin),Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshPrimitiveFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshPrimitiveFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshPrimitiveFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AppendBox", &UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendBox },
			{ "AppendCapsule", &UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendCapsule },
			{ "AppendCone", &UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendCone },
			{ "AppendCurvedStairs", &UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendCurvedStairs },
			{ "AppendCylinder", &UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendCylinder },
			{ "AppendDisc", &UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendDisc },
			{ "AppendLinearStairs", &UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendLinearStairs },
			{ "AppendRectangle_Compatibility_5_0", &UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendRectangle_Compatibility_5_0 },
			{ "AppendRectangleXY", &UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendRectangleXY },
			{ "AppendRevolvePath", &UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendRevolvePath },
			{ "AppendRevolvePolygon", &UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendRevolvePolygon },
			{ "AppendRoundRectangle_Compatibility_5_0", &UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendRoundRectangle_Compatibility_5_0 },
			{ "AppendRoundRectangleXY", &UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendRoundRectangleXY },
			{ "AppendSimpleExtrudePolygon", &UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSimpleExtrudePolygon },
			{ "AppendSimpleSweptPolygon", &UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSimpleSweptPolygon },
			{ "AppendSphereBox", &UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSphereBox },
			{ "AppendSphereLatLong", &UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSphereLatLong },
			{ "AppendSpiralRevolvePolygon", &UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSpiralRevolvePolygon },
			{ "AppendSweepPolygon", &UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSweepPolygon },
			{ "AppendSweepPolyline", &UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSweepPolyline },
			{ "AppendTorus", &UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendTorus },
			{ "AppendTriangulatedPolygon", &UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendTriangulatedPolygon },
			{ "AppendVoronoiDiagram2D", &UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendVoronoiDiagram2D },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics
	{
		struct GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendBox_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPrimitiveOptions PrimitiveOptions;
			FTransform Transform;
			float DimensionX;
			float DimensionY;
			float DimensionZ;
			int32 StepsX;
			int32 StepsY;
			int32 StepsZ;
			EGeometryScriptPrimitiveOriginMode Origin;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DimensionX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DimensionY;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DimensionZ;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepsX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepsY;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepsZ;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendBox_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendBox_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(nullptr, 0) }; // 3989445202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendBox_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_DimensionX = { "DimensionX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendBox_Parms, DimensionX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_DimensionY = { "DimensionY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendBox_Parms, DimensionY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_DimensionZ = { "DimensionZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendBox_Parms, DimensionZ), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_StepsX = { "StepsX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendBox_Parms, StepsX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_StepsY = { "StepsY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendBox_Parms, StepsY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_StepsZ = { "StepsZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendBox_Parms, StepsZ), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendBox_Parms, Origin), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode, METADATA_PARAMS(nullptr, 0) }; // 2167989438
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendBox_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendBox_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_PrimitiveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_DimensionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_DimensionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_DimensionZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_StepsX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_StepsY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_StepsZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_Origin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_DimensionX", "100.000000" },
		{ "CPP_Default_DimensionY", "100.000000" },
		{ "CPP_Default_DimensionZ", "100.000000" },
		{ "CPP_Default_Origin", "Base" },
		{ "CPP_Default_StepsX", "0" },
		{ "CPP_Default_StepsY", "0" },
		{ "CPP_Default_StepsZ", "0" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, nullptr, "AppendBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendBox_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics
	{
		struct GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCapsule_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPrimitiveOptions PrimitiveOptions;
			FTransform Transform;
			float Radius;
			float LineLength;
			int32 HemisphereSteps;
			int32 CircleSteps;
			EGeometryScriptPrimitiveOriginMode Origin;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineLength;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HemisphereSteps;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CircleSteps;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCapsule_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCapsule_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(nullptr, 0) }; // 3989445202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCapsule_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCapsule_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_LineLength = { "LineLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCapsule_Parms, LineLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_HemisphereSteps = { "HemisphereSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCapsule_Parms, HemisphereSteps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_CircleSteps = { "CircleSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCapsule_Parms, CircleSteps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCapsule_Parms, Origin), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode, METADATA_PARAMS(nullptr, 0) }; // 2167989438
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCapsule_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCapsule_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_PrimitiveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_LineLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_HemisphereSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_CircleSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_Origin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "CPP_Default_CircleSteps", "8" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_HemisphereSteps", "5" },
		{ "CPP_Default_LineLength", "75.000000" },
		{ "CPP_Default_Origin", "Base" },
		{ "CPP_Default_Radius", "30.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, nullptr, "AppendCapsule", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCapsule_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics
	{
		struct GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCone_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPrimitiveOptions PrimitiveOptions;
			FTransform Transform;
			float BaseRadius;
			float TopRadius;
			float Height;
			int32 RadialSteps;
			int32 HeightSteps;
			bool bCapped;
			EGeometryScriptPrimitiveOriginMode Origin;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseRadius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TopRadius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RadialSteps;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HeightSteps;
		static void NewProp_bCapped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCapped;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCone_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCone_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(nullptr, 0) }; // 3989445202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCone_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_BaseRadius = { "BaseRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCone_Parms, BaseRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_TopRadius = { "TopRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCone_Parms, TopRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCone_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_RadialSteps = { "RadialSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCone_Parms, RadialSteps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_HeightSteps = { "HeightSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCone_Parms, HeightSteps), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_bCapped_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCone_Parms*)Obj)->bCapped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_bCapped = { "bCapped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCone_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_bCapped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCone_Parms, Origin), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode, METADATA_PARAMS(nullptr, 0) }; // 2167989438
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCone_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCone_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_PrimitiveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_BaseRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_TopRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_RadialSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_HeightSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_bCapped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_Origin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "CPP_Default_BaseRadius", "50.000000" },
		{ "CPP_Default_bCapped", "true" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_Height", "100.000000" },
		{ "CPP_Default_HeightSteps", "4" },
		{ "CPP_Default_Origin", "Base" },
		{ "CPP_Default_RadialSteps", "12" },
		{ "CPP_Default_TopRadius", "5.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, nullptr, "AppendCone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCone_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics
	{
		struct GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCurvedStairs_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPrimitiveOptions PrimitiveOptions;
			FTransform Transform;
			float StepWidth;
			float StepHeight;
			float InnerRadius;
			float CurveAngle;
			int32 NumSteps;
			bool bFloating;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StepWidth;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StepHeight;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerRadius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveAngle;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumSteps;
		static void NewProp_bFloating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFloating;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCurvedStairs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCurvedStairs_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(nullptr, 0) }; // 3989445202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCurvedStairs_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_StepWidth = { "StepWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCurvedStairs_Parms, StepWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_StepHeight = { "StepHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCurvedStairs_Parms, StepHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCurvedStairs_Parms, InnerRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_CurveAngle = { "CurveAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCurvedStairs_Parms, CurveAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_NumSteps = { "NumSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCurvedStairs_Parms, NumSteps), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_bFloating_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCurvedStairs_Parms*)Obj)->bFloating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_bFloating = { "bFloating", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCurvedStairs_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_bFloating_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCurvedStairs_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCurvedStairs_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_PrimitiveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_StepWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_StepHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_InnerRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_CurveAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_NumSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_bFloating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "CPP_Default_bFloating", "false" },
		{ "CPP_Default_CurveAngle", "90.000000" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_InnerRadius", "150.000000" },
		{ "CPP_Default_NumSteps", "8" },
		{ "CPP_Default_StepHeight", "20.000000" },
		{ "CPP_Default_StepWidth", "100.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, nullptr, "AppendCurvedStairs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCurvedStairs_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics
	{
		struct GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCylinder_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPrimitiveOptions PrimitiveOptions;
			FTransform Transform;
			float Radius;
			float Height;
			int32 RadialSteps;
			int32 HeightSteps;
			bool bCapped;
			EGeometryScriptPrimitiveOriginMode Origin;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RadialSteps;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HeightSteps;
		static void NewProp_bCapped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCapped;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCylinder_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCylinder_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(nullptr, 0) }; // 3989445202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCylinder_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCylinder_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCylinder_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_RadialSteps = { "RadialSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCylinder_Parms, RadialSteps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_HeightSteps = { "HeightSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCylinder_Parms, HeightSteps), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_bCapped_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCylinder_Parms*)Obj)->bCapped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_bCapped = { "bCapped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCylinder_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_bCapped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCylinder_Parms, Origin), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode, METADATA_PARAMS(nullptr, 0) }; // 2167989438
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCylinder_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCylinder_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_PrimitiveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_RadialSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_HeightSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_bCapped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_Origin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "CPP_Default_bCapped", "true" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_Height", "100.000000" },
		{ "CPP_Default_HeightSteps", "0" },
		{ "CPP_Default_Origin", "Base" },
		{ "CPP_Default_RadialSteps", "12" },
		{ "CPP_Default_Radius", "50.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, nullptr, "AppendCylinder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendCylinder_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics
	{
		struct GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendDisc_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPrimitiveOptions PrimitiveOptions;
			FTransform Transform;
			float Radius;
			int32 AngleSteps;
			int32 SpokeSteps;
			float StartAngle;
			float EndAngle;
			float HoleRadius;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AngleSteps;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpokeSteps;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoleRadius;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendDisc_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendDisc_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(nullptr, 0) }; // 3989445202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendDisc_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendDisc_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_AngleSteps = { "AngleSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendDisc_Parms, AngleSteps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_SpokeSteps = { "SpokeSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendDisc_Parms, SpokeSteps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_StartAngle = { "StartAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendDisc_Parms, StartAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_EndAngle = { "EndAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendDisc_Parms, EndAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_HoleRadius = { "HoleRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendDisc_Parms, HoleRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendDisc_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendDisc_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_PrimitiveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_AngleSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_SpokeSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_StartAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_EndAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_HoleRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "CPP_Default_AngleSteps", "16" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_EndAngle", "360.000000" },
		{ "CPP_Default_HoleRadius", "0.000000" },
		{ "CPP_Default_Radius", "50.000000" },
		{ "CPP_Default_SpokeSteps", "0" },
		{ "CPP_Default_StartAngle", "0.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, nullptr, "AppendDisc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendDisc_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics
	{
		struct GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendLinearStairs_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPrimitiveOptions PrimitiveOptions;
			FTransform Transform;
			float StepWidth;
			float StepHeight;
			float StepDepth;
			int32 NumSteps;
			bool bFloating;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StepWidth;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StepHeight;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StepDepth;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumSteps;
		static void NewProp_bFloating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFloating;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendLinearStairs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendLinearStairs_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(nullptr, 0) }; // 3989445202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendLinearStairs_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_StepWidth = { "StepWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendLinearStairs_Parms, StepWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_StepHeight = { "StepHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendLinearStairs_Parms, StepHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_StepDepth = { "StepDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendLinearStairs_Parms, StepDepth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_NumSteps = { "NumSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendLinearStairs_Parms, NumSteps), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_bFloating_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendLinearStairs_Parms*)Obj)->bFloating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_bFloating = { "bFloating", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendLinearStairs_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_bFloating_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendLinearStairs_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendLinearStairs_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_PrimitiveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_StepWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_StepHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_StepDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_NumSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_bFloating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "CPP_Default_bFloating", "false" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_NumSteps", "8" },
		{ "CPP_Default_StepDepth", "30.000000" },
		{ "CPP_Default_StepHeight", "20.000000" },
		{ "CPP_Default_StepWidth", "100.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, nullptr, "AppendLinearStairs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendLinearStairs_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics
	{
		struct GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRectangle_Compatibility_5_0_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPrimitiveOptions PrimitiveOptions;
			FTransform Transform;
			float DimensionX;
			float DimensionY;
			int32 StepsWidth;
			int32 StepsHeight;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DimensionX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DimensionY;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepsWidth;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepsHeight;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRectangle_Compatibility_5_0_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRectangle_Compatibility_5_0_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(nullptr, 0) }; // 3989445202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRectangle_Compatibility_5_0_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::NewProp_DimensionX = { "DimensionX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRectangle_Compatibility_5_0_Parms, DimensionX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::NewProp_DimensionY = { "DimensionY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRectangle_Compatibility_5_0_Parms, DimensionY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::NewProp_StepsWidth = { "StepsWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRectangle_Compatibility_5_0_Parms, StepsWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::NewProp_StepsHeight = { "StepsHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRectangle_Compatibility_5_0_Parms, StepsHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRectangle_Compatibility_5_0_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRectangle_Compatibility_5_0_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::NewProp_PrimitiveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::NewProp_DimensionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::NewProp_DimensionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::NewProp_StepsWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::NewProp_StepsHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Compatibility" },
		{ "Comment", "/**\n\x09 * 5.0 Preview 1 Compatibility version of AppendRectangleXY. Incorrectly interprets the input dimensions.\n\x09 * Incorrectly divides the input DimensionX and DimensionY by 2.\n\x09 * @warning It is strongly recommended that callers of this function update to the current AppendRectangleXY function!\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_DimensionX", "100.000000" },
		{ "CPP_Default_DimensionY", "100.000000" },
		{ "CPP_Default_StepsHeight", "0" },
		{ "CPP_Default_StepsWidth", "0" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "5.0 Preview 1 Compatibility version of AppendRectangleXY. Incorrectly interprets the input dimensions.\nIncorrectly divides the input DimensionX and DimensionY by 2.\n@warning It is strongly recommended that callers of this function update to the current AppendRectangleXY function!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, nullptr, "AppendRectangle_Compatibility_5_0", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRectangle_Compatibility_5_0_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics
	{
		struct GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRectangleXY_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPrimitiveOptions PrimitiveOptions;
			FTransform Transform;
			float DimensionX;
			float DimensionY;
			int32 StepsWidth;
			int32 StepsHeight;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DimensionX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DimensionY;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepsWidth;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepsHeight;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRectangleXY_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRectangleXY_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(nullptr, 0) }; // 3989445202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRectangleXY_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::NewProp_DimensionX = { "DimensionX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRectangleXY_Parms, DimensionX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::NewProp_DimensionY = { "DimensionY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRectangleXY_Parms, DimensionY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::NewProp_StepsWidth = { "StepsWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRectangleXY_Parms, StepsWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::NewProp_StepsHeight = { "StepsHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRectangleXY_Parms, StepsHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRectangleXY_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRectangleXY_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::NewProp_PrimitiveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::NewProp_DimensionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::NewProp_DimensionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::NewProp_StepsWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::NewProp_StepsHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_DimensionX", "100.000000" },
		{ "CPP_Default_DimensionY", "100.000000" },
		{ "CPP_Default_StepsHeight", "0" },
		{ "CPP_Default_StepsWidth", "0" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, nullptr, "AppendRectangleXY", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRectangleXY_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics
	{
		struct GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRevolvePath_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPrimitiveOptions PrimitiveOptions;
			FTransform Transform;
			TArray<FVector2D> PathVertices;
			FGeometryScriptRevolveOptions RevolveOptions;
			int32 Steps;
			bool bCapped;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathVertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathVertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PathVertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RevolveOptions;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Steps;
		static void NewProp_bCapped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCapped;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRevolvePath_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRevolvePath_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(nullptr, 0) }; // 3989445202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRevolvePath_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_PathVertices_Inner = { "PathVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_PathVertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_PathVertices = { "PathVertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRevolvePath_Parms, PathVertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_PathVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_PathVertices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_RevolveOptions = { "RevolveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRevolvePath_Parms, RevolveOptions), Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions, METADATA_PARAMS(nullptr, 0) }; // 2427785201
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_Steps = { "Steps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRevolvePath_Parms, Steps), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_bCapped_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRevolvePath_Parms*)Obj)->bCapped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_bCapped = { "bCapped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRevolvePath_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_bCapped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRevolvePath_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRevolvePath_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_PrimitiveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_PathVertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_PathVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_RevolveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_Steps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_bCapped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "CPP_Default_bCapped", "true" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_Steps", "8" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, nullptr, "AppendRevolvePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRevolvePath_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics
	{
		struct GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRevolvePolygon_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPrimitiveOptions PrimitiveOptions;
			FTransform Transform;
			TArray<FVector2D> PolygonVertices;
			FGeometryScriptRevolveOptions RevolveOptions;
			float Radius;
			int32 Steps;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonVertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygonVertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PolygonVertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RevolveOptions;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Steps;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRevolvePolygon_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRevolvePolygon_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(nullptr, 0) }; // 3989445202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRevolvePolygon_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_PolygonVertices_Inner = { "PolygonVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_PolygonVertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_PolygonVertices = { "PolygonVertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRevolvePolygon_Parms, PolygonVertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_PolygonVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_PolygonVertices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_RevolveOptions = { "RevolveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRevolvePolygon_Parms, RevolveOptions), Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions, METADATA_PARAMS(nullptr, 0) }; // 2427785201
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRevolvePolygon_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_Steps = { "Steps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRevolvePolygon_Parms, Steps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRevolvePolygon_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRevolvePolygon_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_PrimitiveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_PolygonVertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_PolygonVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_RevolveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_Steps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "Comment", "/**\n\x09 * In the coordinate system of the revolve polygon, +X is towards the \"outside\" of the revolve donut, and +Y is \"up\" (ie +Z in local space)\n\x09 * Polygon should be oriented counter-clockwise to produce a correctly-oriented shape, otherwise it will be inside-out\n\x09 * Polygon endpoint is not repeated.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_Radius", "100.000000" },
		{ "CPP_Default_Steps", "8" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "In the coordinate system of the revolve polygon, +X is towards the \"outside\" of the revolve donut, and +Y is \"up\" (ie +Z in local space)\nPolygon should be oriented counter-clockwise to produce a correctly-oriented shape, otherwise it will be inside-out\nPolygon endpoint is not repeated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, nullptr, "AppendRevolvePolygon", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRevolvePolygon_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics
	{
		struct GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangle_Compatibility_5_0_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPrimitiveOptions PrimitiveOptions;
			FTransform Transform;
			float DimensionX;
			float DimensionY;
			float CornerRadius;
			int32 StepsWidth;
			int32 StepsHeight;
			int32 StepsRound;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DimensionX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DimensionY;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CornerRadius;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepsWidth;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepsHeight;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepsRound;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangle_Compatibility_5_0_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangle_Compatibility_5_0_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(nullptr, 0) }; // 3989445202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangle_Compatibility_5_0_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_DimensionX = { "DimensionX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangle_Compatibility_5_0_Parms, DimensionX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_DimensionY = { "DimensionY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangle_Compatibility_5_0_Parms, DimensionY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_CornerRadius = { "CornerRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangle_Compatibility_5_0_Parms, CornerRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_StepsWidth = { "StepsWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangle_Compatibility_5_0_Parms, StepsWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_StepsHeight = { "StepsHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangle_Compatibility_5_0_Parms, StepsHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_StepsRound = { "StepsRound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangle_Compatibility_5_0_Parms, StepsRound), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangle_Compatibility_5_0_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangle_Compatibility_5_0_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_PrimitiveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_DimensionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_DimensionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_CornerRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_StepsWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_StepsHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_StepsRound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Compatibility" },
		{ "Comment", "/**\n\x09 * 5.0 Preview 1 Compatibility version of AppendRoundRectangleXY. \n\x09 * Incorrectly divides the input DimensionX and DimensionY by 2.\n\x09 * @warning It is strongly recommended that callers of this function update to the current AppendRoundRectangleXY function!\n\x09 */" },
		{ "CPP_Default_CornerRadius", "5.000000" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_DimensionX", "100.000000" },
		{ "CPP_Default_DimensionY", "100.000000" },
		{ "CPP_Default_StepsHeight", "0" },
		{ "CPP_Default_StepsRound", "4" },
		{ "CPP_Default_StepsWidth", "0" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "5.0 Preview 1 Compatibility version of AppendRoundRectangleXY.\nIncorrectly divides the input DimensionX and DimensionY by 2.\n@warning It is strongly recommended that callers of this function update to the current AppendRoundRectangleXY function!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, nullptr, "AppendRoundRectangle_Compatibility_5_0", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangle_Compatibility_5_0_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics
	{
		struct GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangleXY_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPrimitiveOptions PrimitiveOptions;
			FTransform Transform;
			float DimensionX;
			float DimensionY;
			float CornerRadius;
			int32 StepsWidth;
			int32 StepsHeight;
			int32 StepsRound;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DimensionX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DimensionY;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CornerRadius;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepsWidth;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepsHeight;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepsRound;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangleXY_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangleXY_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(nullptr, 0) }; // 3989445202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangleXY_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_DimensionX = { "DimensionX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangleXY_Parms, DimensionX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_DimensionY = { "DimensionY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangleXY_Parms, DimensionY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_CornerRadius = { "CornerRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangleXY_Parms, CornerRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_StepsWidth = { "StepsWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangleXY_Parms, StepsWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_StepsHeight = { "StepsHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangleXY_Parms, StepsHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_StepsRound = { "StepsRound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangleXY_Parms, StepsRound), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangleXY_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangleXY_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_PrimitiveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_DimensionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_DimensionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_CornerRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_StepsWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_StepsHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_StepsRound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "CPP_Default_CornerRadius", "5.000000" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_DimensionX", "100.000000" },
		{ "CPP_Default_DimensionY", "100.000000" },
		{ "CPP_Default_StepsHeight", "0" },
		{ "CPP_Default_StepsRound", "4" },
		{ "CPP_Default_StepsWidth", "0" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, nullptr, "AppendRoundRectangleXY", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendRoundRectangleXY_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics
	{
		struct GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleExtrudePolygon_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPrimitiveOptions PrimitiveOptions;
			FTransform Transform;
			TArray<FVector2D> PolygonVertices;
			float Height;
			int32 HeightSteps;
			bool bCapped;
			EGeometryScriptPrimitiveOriginMode Origin;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonVertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygonVertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PolygonVertices;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HeightSteps;
		static void NewProp_bCapped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCapped;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleExtrudePolygon_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleExtrudePolygon_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(nullptr, 0) }; // 3989445202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleExtrudePolygon_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_PolygonVertices_Inner = { "PolygonVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_PolygonVertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_PolygonVertices = { "PolygonVertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleExtrudePolygon_Parms, PolygonVertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_PolygonVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_PolygonVertices_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleExtrudePolygon_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_HeightSteps = { "HeightSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleExtrudePolygon_Parms, HeightSteps), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_bCapped_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleExtrudePolygon_Parms*)Obj)->bCapped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_bCapped = { "bCapped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleExtrudePolygon_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_bCapped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleExtrudePolygon_Parms, Origin), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode, METADATA_PARAMS(nullptr, 0) }; // 2167989438
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleExtrudePolygon_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleExtrudePolygon_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_PrimitiveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_PolygonVertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_PolygonVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_HeightSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_bCapped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_Origin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "Comment", "/**\n\x09 * Polygon should be oriented counter-clockwise to produce a correctly-oriented shape, otherwise it will be inside-out\n\x09 * Polygon endpoint is not repeated.\n\x09 */" },
		{ "CPP_Default_bCapped", "true" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_Height", "100.000000" },
		{ "CPP_Default_HeightSteps", "0" },
		{ "CPP_Default_Origin", "Base" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Polygon should be oriented counter-clockwise to produce a correctly-oriented shape, otherwise it will be inside-out\nPolygon endpoint is not repeated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, nullptr, "AppendSimpleExtrudePolygon", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleExtrudePolygon_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics
	{
		struct GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleSweptPolygon_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPrimitiveOptions PrimitiveOptions;
			FTransform Transform;
			TArray<FVector2D> PolygonVertices;
			TArray<FVector> SweepPath;
			bool bLoop;
			bool bCapped;
			float StartScale;
			float EndScale;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonVertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygonVertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PolygonVertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SweepPath;
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
		static void NewProp_bCapped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCapped;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartScale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndScale;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleSweptPolygon_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleSweptPolygon_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(nullptr, 0) }; // 3989445202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleSweptPolygon_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_PolygonVertices_Inner = { "PolygonVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_PolygonVertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_PolygonVertices = { "PolygonVertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleSweptPolygon_Parms, PolygonVertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_PolygonVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_PolygonVertices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_SweepPath_Inner = { "SweepPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_SweepPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_SweepPath = { "SweepPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleSweptPolygon_Parms, SweepPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_SweepPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_SweepPath_MetaData)) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleSweptPolygon_Parms*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleSweptPolygon_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_bCapped_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleSweptPolygon_Parms*)Obj)->bCapped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_bCapped = { "bCapped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleSweptPolygon_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_bCapped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_StartScale = { "StartScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleSweptPolygon_Parms, StartScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_EndScale = { "EndScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleSweptPolygon_Parms, EndScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleSweptPolygon_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleSweptPolygon_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_PrimitiveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_PolygonVertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_PolygonVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_SweepPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_SweepPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_bLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_bCapped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_StartScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_EndScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "CPP_Default_bCapped", "true" },
		{ "CPP_Default_bLoop", "false" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_EndScale", "1.000000" },
		{ "CPP_Default_StartScale", "1.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, nullptr, "AppendSimpleSweptPolygon", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSimpleSweptPolygon_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics
	{
		struct GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSphereBox_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPrimitiveOptions PrimitiveOptions;
			FTransform Transform;
			float Radius;
			int32 StepsX;
			int32 StepsY;
			int32 StepsZ;
			EGeometryScriptPrimitiveOriginMode Origin;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepsX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepsY;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepsZ;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSphereBox_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSphereBox_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(nullptr, 0) }; // 3989445202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSphereBox_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSphereBox_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_StepsX = { "StepsX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSphereBox_Parms, StepsX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_StepsY = { "StepsY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSphereBox_Parms, StepsY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_StepsZ = { "StepsZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSphereBox_Parms, StepsZ), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSphereBox_Parms, Origin), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode, METADATA_PARAMS(nullptr, 0) }; // 2167989438
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSphereBox_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSphereBox_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_PrimitiveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_StepsX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_StepsY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_StepsZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_Origin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_Origin", "Center" },
		{ "CPP_Default_Radius", "50.000000" },
		{ "CPP_Default_StepsX", "6" },
		{ "CPP_Default_StepsY", "6" },
		{ "CPP_Default_StepsZ", "6" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, nullptr, "AppendSphereBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSphereBox_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics
	{
		struct GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSphereLatLong_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPrimitiveOptions PrimitiveOptions;
			FTransform Transform;
			float Radius;
			int32 StepsPhi;
			int32 StepsTheta;
			EGeometryScriptPrimitiveOriginMode Origin;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepsPhi;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepsTheta;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSphereLatLong_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSphereLatLong_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(nullptr, 0) }; // 3989445202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSphereLatLong_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSphereLatLong_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::NewProp_StepsPhi = { "StepsPhi", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSphereLatLong_Parms, StepsPhi), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::NewProp_StepsTheta = { "StepsTheta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSphereLatLong_Parms, StepsTheta), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSphereLatLong_Parms, Origin), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode, METADATA_PARAMS(nullptr, 0) }; // 2167989438
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSphereLatLong_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSphereLatLong_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::NewProp_PrimitiveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::NewProp_StepsPhi,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::NewProp_StepsTheta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::NewProp_Origin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_Origin", "Center" },
		{ "CPP_Default_Radius", "50.000000" },
		{ "CPP_Default_StepsPhi", "10" },
		{ "CPP_Default_StepsTheta", "16" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, nullptr, "AppendSphereLatLong", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSphereLatLong_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics
	{
		struct GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSpiralRevolvePolygon_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPrimitiveOptions PrimitiveOptions;
			FTransform Transform;
			TArray<FVector2D> PolygonVertices;
			FGeometryScriptRevolveOptions RevolveOptions;
			float Radius;
			int32 Steps;
			float RisePerRevolution;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonVertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygonVertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PolygonVertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RevolveOptions;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Steps;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RisePerRevolution;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSpiralRevolvePolygon_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSpiralRevolvePolygon_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(nullptr, 0) }; // 3989445202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSpiralRevolvePolygon_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_PolygonVertices_Inner = { "PolygonVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_PolygonVertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_PolygonVertices = { "PolygonVertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSpiralRevolvePolygon_Parms, PolygonVertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_PolygonVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_PolygonVertices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_RevolveOptions = { "RevolveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSpiralRevolvePolygon_Parms, RevolveOptions), Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions, METADATA_PARAMS(nullptr, 0) }; // 2427785201
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSpiralRevolvePolygon_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_Steps = { "Steps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSpiralRevolvePolygon_Parms, Steps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_RisePerRevolution = { "RisePerRevolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSpiralRevolvePolygon_Parms, RisePerRevolution), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSpiralRevolvePolygon_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSpiralRevolvePolygon_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_PrimitiveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_PolygonVertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_PolygonVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_RevolveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_Steps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_RisePerRevolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_Radius", "100.000000" },
		{ "CPP_Default_RisePerRevolution", "50.000000" },
		{ "CPP_Default_Steps", "18" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, nullptr, "AppendSpiralRevolvePolygon", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSpiralRevolvePolygon_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics
	{
		struct GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolygon_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPrimitiveOptions PrimitiveOptions;
			FTransform Transform;
			TArray<FVector2D> PolygonVertices;
			TArray<FTransform> SweepPath;
			bool bLoop;
			bool bCapped;
			float StartScale;
			float EndScale;
			float RotationAngleDeg;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonVertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygonVertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PolygonVertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SweepPath;
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
		static void NewProp_bCapped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCapped;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartScale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndScale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAngleDeg;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolygon_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolygon_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(nullptr, 0) }; // 3989445202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolygon_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_PolygonVertices_Inner = { "PolygonVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_PolygonVertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_PolygonVertices = { "PolygonVertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolygon_Parms, PolygonVertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_PolygonVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_PolygonVertices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_SweepPath_Inner = { "SweepPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_SweepPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_SweepPath = { "SweepPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolygon_Parms, SweepPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_SweepPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_SweepPath_MetaData)) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolygon_Parms*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolygon_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_bCapped_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolygon_Parms*)Obj)->bCapped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_bCapped = { "bCapped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolygon_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_bCapped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_StartScale = { "StartScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolygon_Parms, StartScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_EndScale = { "EndScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolygon_Parms, EndScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_RotationAngleDeg = { "RotationAngleDeg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolygon_Parms, RotationAngleDeg), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolygon_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolygon_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_PrimitiveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_PolygonVertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_PolygonVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_SweepPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_SweepPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_bLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_bCapped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_StartScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_EndScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_RotationAngleDeg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "Comment", "/**\n\x09 * Sweep the given 2D PolygonVertices along the SweepPath specified as a set of FTransforms\n\x09 * If the 2D vertices are (U,V), then in the coordinate space of the FTransform, X points \"along\" the path,\n\x09 * Y points \"right\" (U) and Z points \"up\" (V).\n\x09 * @param PolygonVertices vertices of the closed 2D polyon that will be swept along the SweepPath\n\x09 * @param SweepPath defines the 3D sweep path curve as a 3D poly-path, with rotation and scaling at each polypath vertex taken from the Transform\n\x09 * @param bLoop if true, SweepPath is considered to be a Loop and a section connecting the end and start of the path is added (bCapped is ignored)\n\x09 * @param bCapped if true the open ends of the swept generalized cylinder are triangulated\n\x09 * @param StartScale uniform scaling applied to the 2D polygon at the start of the path. Interpolated via arc length to EndScale at the end of the path.\n\x09 * @param EndScale uniform scaling applied to the 2D polygon at the end of the path\n\x09 * @param RotationAngleDeg Rotation applied to the 2D Polygon. Positive rotation rotates clockwise, ie Up/+Z/+V towards Right/+Y/+U\n\x09 */" },
		{ "CPP_Default_bCapped", "true" },
		{ "CPP_Default_bLoop", "false" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_EndScale", "1.000000" },
		{ "CPP_Default_RotationAngleDeg", "0.000000" },
		{ "CPP_Default_StartScale", "1.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Sweep the given 2D PolygonVertices along the SweepPath specified as a set of FTransforms\nIf the 2D vertices are (U,V), then in the coordinate space of the FTransform, X points \"along\" the path,\nY points \"right\" (U) and Z points \"up\" (V).\n@param PolygonVertices vertices of the closed 2D polyon that will be swept along the SweepPath\n@param SweepPath defines the 3D sweep path curve as a 3D poly-path, with rotation and scaling at each polypath vertex taken from the Transform\n@param bLoop if true, SweepPath is considered to be a Loop and a section connecting the end and start of the path is added (bCapped is ignored)\n@param bCapped if true the open ends of the swept generalized cylinder are triangulated\n@param StartScale uniform scaling applied to the 2D polygon at the start of the path. Interpolated via arc length to EndScale at the end of the path.\n@param EndScale uniform scaling applied to the 2D polygon at the end of the path\n@param RotationAngleDeg Rotation applied to the 2D Polygon. Positive rotation rotates clockwise, ie Up/+Z/+V towards Right/+Y/+U" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, nullptr, "AppendSweepPolygon", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolygon_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics
	{
		struct GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolyline_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPrimitiveOptions PrimitiveOptions;
			FTransform Transform;
			TArray<FVector2D> PolylineVertices;
			TArray<FTransform> SweepPath;
			TArray<float> PolylineTexParamU;
			TArray<float> SweepPathTexParamV;
			bool bLoop;
			float StartScale;
			float EndScale;
			float RotationAngleDeg;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolylineVertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolylineVertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PolylineVertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SweepPath;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PolylineTexParamU_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolylineTexParamU_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PolylineTexParamU;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SweepPathTexParamV_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepPathTexParamV_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SweepPathTexParamV;
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartScale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndScale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAngleDeg;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolyline_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolyline_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(nullptr, 0) }; // 3989445202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolyline_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_PolylineVertices_Inner = { "PolylineVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_PolylineVertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_PolylineVertices = { "PolylineVertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolyline_Parms, PolylineVertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_PolylineVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_PolylineVertices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_SweepPath_Inner = { "SweepPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_SweepPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_SweepPath = { "SweepPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolyline_Parms, SweepPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_SweepPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_SweepPath_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_PolylineTexParamU_Inner = { "PolylineTexParamU", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_PolylineTexParamU_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_PolylineTexParamU = { "PolylineTexParamU", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolyline_Parms, PolylineTexParamU), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_PolylineTexParamU_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_PolylineTexParamU_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_SweepPathTexParamV_Inner = { "SweepPathTexParamV", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_SweepPathTexParamV_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_SweepPathTexParamV = { "SweepPathTexParamV", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolyline_Parms, SweepPathTexParamV), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_SweepPathTexParamV_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_SweepPathTexParamV_MetaData)) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolyline_Parms*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolyline_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_StartScale = { "StartScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolyline_Parms, StartScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_EndScale = { "EndScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolyline_Parms, EndScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_RotationAngleDeg = { "RotationAngleDeg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolyline_Parms, RotationAngleDeg), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolyline_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolyline_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_PrimitiveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_PolylineVertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_PolylineVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_SweepPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_SweepPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_PolylineTexParamU_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_PolylineTexParamU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_SweepPathTexParamV_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_SweepPathTexParamV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_bLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_StartScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_EndScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_RotationAngleDeg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "PolylineTexParamU, SweepPathTexParamV" },
		{ "Category", "GeometryScript|Primitives" },
		{ "Comment", "/**\n\x09 * Sweep the given 2D PolylineVertices along the SweepPath specified as a set of FTransforms\n\x09 * If the 2D vertices are (U,V), then in the coordinate space of the FTransform, X points \"along\" the path,\n\x09 * Y points \"right\" (U) and Z points \"up\" (V).\n\x09 * @param PolylineVertices vertices of the open 2D path that will be swept along the SweepPath\n\x09 * @param SweepPath defines the 3D sweep path curve as a 3D poly-path, with rotation and scaling at each polypath vertex taken from the Transform\n\x09 * @param PolylineTexParamU defines U coordinate value for each element in PolylineVertices. Must be same length as PolylineVertices (ignored if length=0).\n\x09 * @param SweepPathTexParamV defines V coordinate value for each element in SweepPath. Must be same length as PolylineVertices if bLoop=false, length+1 if bLoop=true, and ignored if length=0.\n\x09 * @param bLoop if true, SweepPath is considered to be a Loop and a section connecting the end and start of the path is added (bCapped is ignored)\n\x09 * @param StartScale uniform scaling applied to the 2D polygon at the start of the path. Interpolated via arc length to EndScale at the end of the path.\n\x09 * @param EndScale uniform scaling applied to the 2D polygon at the end of the path\n\x09 * @param RotationAngleDeg Rotation applied to the 2D Polygon. Positive rotation rotates clockwise, ie Up/+Z/+V towards Right/+Y/+U. This Rotation is applied before any rotation in the SweepPath Transforms.\n\x09 */" },
		{ "CPP_Default_bLoop", "false" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_EndScale", "1.000000" },
		{ "CPP_Default_RotationAngleDeg", "0.000000" },
		{ "CPP_Default_StartScale", "1.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Sweep the given 2D PolylineVertices along the SweepPath specified as a set of FTransforms\nIf the 2D vertices are (U,V), then in the coordinate space of the FTransform, X points \"along\" the path,\nY points \"right\" (U) and Z points \"up\" (V).\n@param PolylineVertices vertices of the open 2D path that will be swept along the SweepPath\n@param SweepPath defines the 3D sweep path curve as a 3D poly-path, with rotation and scaling at each polypath vertex taken from the Transform\n@param PolylineTexParamU defines U coordinate value for each element in PolylineVertices. Must be same length as PolylineVertices (ignored if length=0).\n@param SweepPathTexParamV defines V coordinate value for each element in SweepPath. Must be same length as PolylineVertices if bLoop=false, length+1 if bLoop=true, and ignored if length=0.\n@param bLoop if true, SweepPath is considered to be a Loop and a section connecting the end and start of the path is added (bCapped is ignored)\n@param StartScale uniform scaling applied to the 2D polygon at the start of the path. Interpolated via arc length to EndScale at the end of the path.\n@param EndScale uniform scaling applied to the 2D polygon at the end of the path\n@param RotationAngleDeg Rotation applied to the 2D Polygon. Positive rotation rotates clockwise, ie Up/+Z/+V towards Right/+Y/+U. This Rotation is applied before any rotation in the SweepPath Transforms." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, nullptr, "AppendSweepPolyline", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendSweepPolyline_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics
	{
		struct GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendTorus_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPrimitiveOptions PrimitiveOptions;
			FTransform Transform;
			FGeometryScriptRevolveOptions RevolveOptions;
			float MajorRadius;
			float MinorRadius;
			int32 MajorSteps;
			int32 MinorSteps;
			EGeometryScriptPrimitiveOriginMode Origin;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RevolveOptions;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MajorRadius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinorRadius;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MajorSteps;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinorSteps;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendTorus_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendTorus_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(nullptr, 0) }; // 3989445202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendTorus_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_RevolveOptions = { "RevolveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendTorus_Parms, RevolveOptions), Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions, METADATA_PARAMS(nullptr, 0) }; // 2427785201
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_MajorRadius = { "MajorRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendTorus_Parms, MajorRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_MinorRadius = { "MinorRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendTorus_Parms, MinorRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_MajorSteps = { "MajorSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendTorus_Parms, MajorSteps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_MinorSteps = { "MinorSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendTorus_Parms, MinorSteps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendTorus_Parms, Origin), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode, METADATA_PARAMS(nullptr, 0) }; // 2167989438
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendTorus_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendTorus_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_PrimitiveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_RevolveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_MajorRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_MinorRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_MajorSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_MinorSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_Origin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_MajorRadius", "50.000000" },
		{ "CPP_Default_MajorSteps", "16" },
		{ "CPP_Default_MinorRadius", "25.000000" },
		{ "CPP_Default_MinorSteps", "8" },
		{ "CPP_Default_Origin", "Base" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, nullptr, "AppendTorus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendTorus_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics
	{
		struct GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendTriangulatedPolygon_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPrimitiveOptions PrimitiveOptions;
			FTransform Transform;
			TArray<FVector2D> PolygonVertices;
			bool bAllowSelfIntersections;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonVertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygonVertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PolygonVertices;
		static void NewProp_bAllowSelfIntersections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSelfIntersections;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendTriangulatedPolygon_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendTriangulatedPolygon_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(nullptr, 0) }; // 3989445202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendTriangulatedPolygon_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_PolygonVertices_Inner = { "PolygonVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_PolygonVertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_PolygonVertices = { "PolygonVertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendTriangulatedPolygon_Parms, PolygonVertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_PolygonVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_PolygonVertices_MetaData)) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_bAllowSelfIntersections_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendTriangulatedPolygon_Parms*)Obj)->bAllowSelfIntersections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_bAllowSelfIntersections = { "bAllowSelfIntersections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendTriangulatedPolygon_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_bAllowSelfIntersections_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendTriangulatedPolygon_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendTriangulatedPolygon_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_PrimitiveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_PolygonVertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_PolygonVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_bAllowSelfIntersections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "Comment", "/**\n\x09* Polygon should be oriented counter-clockwise to produce a correctly-oriented shape, otherwise it will be inside-out\n\x09* Polygon endpoint is not repeated.\n\x09*/" },
		{ "CPP_Default_bAllowSelfIntersections", "true" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Polygon should be oriented counter-clockwise to produce a correctly-oriented shape, otherwise it will be inside-out\nPolygon endpoint is not repeated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, nullptr, "AppendTriangulatedPolygon", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendTriangulatedPolygon_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics
	{
		struct GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendVoronoiDiagram2D_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPrimitiveOptions PrimitiveOptions;
			FTransform Transform;
			TArray<FVector2D> VoronoiSites;
			FGeometryScriptVoronoiOptions VoronoiOptions;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VoronoiSites_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoronoiSites_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VoronoiSites;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VoronoiOptions;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendVoronoiDiagram2D_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendVoronoiDiagram2D_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(nullptr, 0) }; // 3989445202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendVoronoiDiagram2D_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::NewProp_VoronoiSites_Inner = { "VoronoiSites", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::NewProp_VoronoiSites_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::NewProp_VoronoiSites = { "VoronoiSites", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendVoronoiDiagram2D_Parms, VoronoiSites), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::NewProp_VoronoiSites_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::NewProp_VoronoiSites_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::NewProp_VoronoiOptions = { "VoronoiOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendVoronoiDiagram2D_Parms, VoronoiOptions), Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions, METADATA_PARAMS(nullptr, 0) }; // 2863605482
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendVoronoiDiagram2D_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendVoronoiDiagram2D_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::NewProp_PrimitiveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::NewProp_VoronoiSites_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::NewProp_VoronoiSites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::NewProp_VoronoiOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, nullptr, "AppendVoronoiDiagram2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::GeometryScriptLibrary_MeshPrimitiveFunctions_eventAppendVoronoiDiagram2D_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshPrimitiveFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshPrimitiveFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox, "AppendBox" }, // 4287819393
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule, "AppendCapsule" }, // 2406638742
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone, "AppendCone" }, // 1878550781
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs, "AppendCurvedStairs" }, // 3679390965
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder, "AppendCylinder" }, // 384017452
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc, "AppendDisc" }, // 75933819
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs, "AppendLinearStairs" }, // 4138709328
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0, "AppendRectangle_Compatibility_5_0" }, // 2987920710
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY, "AppendRectangleXY" }, // 260831387
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath, "AppendRevolvePath" }, // 4087527308
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon, "AppendRevolvePolygon" }, // 3657596788
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0, "AppendRoundRectangle_Compatibility_5_0" }, // 809624839
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY, "AppendRoundRectangleXY" }, // 3849491581
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon, "AppendSimpleExtrudePolygon" }, // 3829125491
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon, "AppendSimpleSweptPolygon" }, // 1894894409
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox, "AppendSphereBox" }, // 1645181952
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong, "AppendSphereLatLong" }, // 3081848807
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon, "AppendSpiralRevolvePolygon" }, // 4260326609
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon, "AppendSweepPolygon" }, // 2850332279
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline, "AppendSweepPolyline" }, // 4022392856
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus, "AppendTorus" }, // 4115322819
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon, "AppendTriangulatedPolygon" }, // 1680593124
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D, "AppendVoronoiDiagram2D" }, // 2597785118
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPrimitiveFunctions.h" },
		{ "ScriptName", "GeometryScript_Primitives" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshPrimitiveFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshPrimitiveFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshPrimitiveFunctions>()
	{
		return UGeometryScriptLibrary_MeshPrimitiveFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshPrimitiveFunctions::UGeometryScriptLibrary_MeshPrimitiveFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshPrimitiveFunctions);
	UGeometryScriptLibrary_MeshPrimitiveFunctions::~UGeometryScriptLibrary_MeshPrimitiveFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_Statics::EnumInfo[] = {
		{ EGeometryScriptPrimitivePolygroupMode_StaticEnum, TEXT("EGeometryScriptPrimitivePolygroupMode"), &Z_Registration_Info_UEnum_EGeometryScriptPrimitivePolygroupMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2278437824U) },
		{ EGeometryScriptPrimitiveOriginMode_StaticEnum, TEXT("EGeometryScriptPrimitiveOriginMode"), &Z_Registration_Info_UEnum_EGeometryScriptPrimitiveOriginMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2167989438U) },
		{ EGeometryScriptPrimitiveUVMode_StaticEnum, TEXT("EGeometryScriptPrimitiveUVMode"), &Z_Registration_Info_UEnum_EGeometryScriptPrimitiveUVMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2932896547U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptPrimitiveOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewStructOps, TEXT("GeometryScriptPrimitiveOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptPrimitiveOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptPrimitiveOptions), 3989445202U) },
		{ FGeometryScriptRevolveOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewStructOps, TEXT("GeometryScriptRevolveOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptRevolveOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptRevolveOptions), 2427785201U) },
		{ FGeometryScriptVoronoiOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewStructOps, TEXT("GeometryScriptVoronoiOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptVoronoiOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptVoronoiOptions), 2863605482U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, UGeometryScriptLibrary_MeshPrimitiveFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshPrimitiveFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshPrimitiveFunctions), 3646446230U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_2613297877(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
