// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Text3DEngineSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeText3DEngineSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DEngineSubsystem();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DEngineSubsystem_NoRegister();
	TEXT3D_API UEnum* Z_Construct_UEnum_Text3D_EText3DBevelType();
	TEXT3D_API UScriptStruct* Z_Construct_UScriptStruct_FCachedFontData();
	TEXT3D_API UScriptStruct* Z_Construct_UScriptStruct_FCachedFontMeshes();
	TEXT3D_API UScriptStruct* Z_Construct_UScriptStruct_FGlyphMeshParameters();
	UPackage* Z_Construct_UPackage__Script_Text3D();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GlyphMeshParameters;
class UScriptStruct* FGlyphMeshParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GlyphMeshParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GlyphMeshParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlyphMeshParameters, (UObject*)Z_Construct_UPackage__Script_Text3D(), TEXT("GlyphMeshParameters"));
	}
	return Z_Registration_Info_UScriptStruct_GlyphMeshParameters.OuterSingleton;
}
template<> TEXT3D_API UScriptStruct* StaticStruct<FGlyphMeshParameters>()
{
	return FGlyphMeshParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extrude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Extrude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bevel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BevelType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BevelType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BevelType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BevelSegments_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BevelSegments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOutline_MetaData[];
#endif
		static void NewProp_bOutline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutlineExpand_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutlineExpand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Text3DEngineSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlyphMeshParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_Extrude_MetaData[] = {
		{ "ModuleRelativePath", "Private/Text3DEngineSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_Extrude = { "Extrude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGlyphMeshParameters, Extrude), METADATA_PARAMS(Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_Extrude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_Extrude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_Bevel_MetaData[] = {
		{ "ModuleRelativePath", "Private/Text3DEngineSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_Bevel = { "Bevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGlyphMeshParameters, Bevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_Bevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_Bevel_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_BevelType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_BevelType_MetaData[] = {
		{ "ModuleRelativePath", "Private/Text3DEngineSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_BevelType = { "BevelType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGlyphMeshParameters, BevelType), Z_Construct_UEnum_Text3D_EText3DBevelType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_BevelType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_BevelType_MetaData)) }; // 1380692899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_BevelSegments_MetaData[] = {
		{ "ModuleRelativePath", "Private/Text3DEngineSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_BevelSegments = { "BevelSegments", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGlyphMeshParameters, BevelSegments), METADATA_PARAMS(Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_BevelSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_BevelSegments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_bOutline_MetaData[] = {
		{ "ModuleRelativePath", "Private/Text3DEngineSubsystem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_bOutline_SetBit(void* Obj)
	{
		((FGlyphMeshParameters*)Obj)->bOutline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_bOutline = { "bOutline", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGlyphMeshParameters), &Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_bOutline_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_bOutline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_bOutline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_OutlineExpand_MetaData[] = {
		{ "ModuleRelativePath", "Private/Text3DEngineSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_OutlineExpand = { "OutlineExpand", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGlyphMeshParameters, OutlineExpand), METADATA_PARAMS(Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_OutlineExpand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_OutlineExpand_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_Extrude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_Bevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_BevelType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_BevelType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_BevelSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_bOutline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewProp_OutlineExpand,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Text3D,
		nullptr,
		&NewStructOps,
		"GlyphMeshParameters",
		sizeof(FGlyphMeshParameters),
		alignof(FGlyphMeshParameters),
		Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGlyphMeshParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_GlyphMeshParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GlyphMeshParameters.InnerSingleton, Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GlyphMeshParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedFontMeshes;
class UScriptStruct* FCachedFontMeshes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedFontMeshes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedFontMeshes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedFontMeshes, (UObject*)Z_Construct_UPackage__Script_Text3D(), TEXT("CachedFontMeshes"));
	}
	return Z_Registration_Info_UScriptStruct_CachedFontMeshes.OuterSingleton;
}
template<> TEXT3D_API UScriptStruct* StaticStruct<FCachedFontMeshes>()
{
	return FCachedFontMeshes::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCachedFontMeshes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Glyphs_ValueProp;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Glyphs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Glyphs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Glyphs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedFontMeshes_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Text3DEngineSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedFontMeshes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedFontMeshes>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCachedFontMeshes_Statics::NewProp_Glyphs_ValueProp = { "Glyphs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FCachedFontMeshes_Statics::NewProp_Glyphs_Key_KeyProp = { "Glyphs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedFontMeshes_Statics::NewProp_Glyphs_MetaData[] = {
		{ "ModuleRelativePath", "Private/Text3DEngineSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCachedFontMeshes_Statics::NewProp_Glyphs = { "Glyphs", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedFontMeshes, Glyphs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedFontMeshes_Statics::NewProp_Glyphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedFontMeshes_Statics::NewProp_Glyphs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedFontMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedFontMeshes_Statics::NewProp_Glyphs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedFontMeshes_Statics::NewProp_Glyphs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedFontMeshes_Statics::NewProp_Glyphs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedFontMeshes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Text3D,
		nullptr,
		&NewStructOps,
		"CachedFontMeshes",
		sizeof(FCachedFontMeshes),
		alignof(FCachedFontMeshes),
		Z_Construct_UScriptStruct_FCachedFontMeshes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedFontMeshes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedFontMeshes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedFontMeshes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedFontMeshes()
	{
		if (!Z_Registration_Info_UScriptStruct_CachedFontMeshes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedFontMeshes.InnerSingleton, Z_Construct_UScriptStruct_FCachedFontMeshes_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CachedFontMeshes.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedFontData;
class UScriptStruct* FCachedFontData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedFontData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedFontData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedFontData, (UObject*)Z_Construct_UPackage__Script_Text3D(), TEXT("CachedFontData"));
	}
	return Z_Registration_Info_UScriptStruct_CachedFontData.OuterSingleton;
}
template<> TEXT3D_API UScriptStruct* StaticStruct<FCachedFontData>()
{
	return FCachedFontData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCachedFontData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Font;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Meshes_ValueProp;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Meshes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Meshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedFontData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Text3DEngineSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedFontData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedFontData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedFontData_Statics::NewProp_Font_MetaData[] = {
		{ "ModuleRelativePath", "Private/Text3DEngineSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCachedFontData_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedFontData, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedFontData_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedFontData_Statics::NewProp_Font_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCachedFontData_Statics::NewProp_Meshes_ValueProp = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FCachedFontMeshes, METADATA_PARAMS(nullptr, 0) }; // 2241534931
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FCachedFontData_Statics::NewProp_Meshes_Key_KeyProp = { "Meshes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedFontData_Statics::NewProp_Meshes_MetaData[] = {
		{ "ModuleRelativePath", "Private/Text3DEngineSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCachedFontData_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedFontData, Meshes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedFontData_Statics::NewProp_Meshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedFontData_Statics::NewProp_Meshes_MetaData)) }; // 2241534931
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedFontData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedFontData_Statics::NewProp_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedFontData_Statics::NewProp_Meshes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedFontData_Statics::NewProp_Meshes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedFontData_Statics::NewProp_Meshes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedFontData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Text3D,
		nullptr,
		&NewStructOps,
		"CachedFontData",
		sizeof(FCachedFontData),
		alignof(FCachedFontData),
		Z_Construct_UScriptStruct_FCachedFontData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedFontData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedFontData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedFontData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedFontData()
	{
		if (!Z_Registration_Info_UScriptStruct_CachedFontData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedFontData.InnerSingleton, Z_Construct_UScriptStruct_FCachedFontData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CachedFontData.InnerSingleton;
	}
	void UText3DEngineSubsystem::StaticRegisterNativesUText3DEngineSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UText3DEngineSubsystem);
	UClass* Z_Construct_UClass_UText3DEngineSubsystem_NoRegister()
	{
		return UText3DEngineSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UText3DEngineSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultMaterial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedFonts_ValueProp;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_CachedFonts_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedFonts_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CachedFonts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UText3DEngineSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Text3D,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DEngineSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Text3DEngineSubsystem.h" },
		{ "ModuleRelativePath", "Private/Text3DEngineSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DEngineSubsystem_Statics::NewProp_DefaultMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/Text3DEngineSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UText3DEngineSubsystem_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DEngineSubsystem, DefaultMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UText3DEngineSubsystem_Statics::NewProp_DefaultMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DEngineSubsystem_Statics::NewProp_DefaultMaterial_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UText3DEngineSubsystem_Statics::NewProp_CachedFonts_ValueProp = { "CachedFonts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FCachedFontData, METADATA_PARAMS(nullptr, 0) }; // 1292908672
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UText3DEngineSubsystem_Statics::NewProp_CachedFonts_Key_KeyProp = { "CachedFonts_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DEngineSubsystem_Statics::NewProp_CachedFonts_MetaData[] = {
		{ "ModuleRelativePath", "Private/Text3DEngineSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UText3DEngineSubsystem_Statics::NewProp_CachedFonts = { "CachedFonts", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DEngineSubsystem, CachedFonts), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UText3DEngineSubsystem_Statics::NewProp_CachedFonts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DEngineSubsystem_Statics::NewProp_CachedFonts_MetaData)) }; // 1292908672
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UText3DEngineSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DEngineSubsystem_Statics::NewProp_DefaultMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DEngineSubsystem_Statics::NewProp_CachedFonts_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DEngineSubsystem_Statics::NewProp_CachedFonts_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DEngineSubsystem_Statics::NewProp_CachedFonts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UText3DEngineSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UText3DEngineSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UText3DEngineSubsystem_Statics::ClassParams = {
		&UText3DEngineSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UText3DEngineSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UText3DEngineSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UText3DEngineSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DEngineSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UText3DEngineSubsystem()
	{
		if (!Z_Registration_Info_UClass_UText3DEngineSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UText3DEngineSubsystem.OuterSingleton, Z_Construct_UClass_UText3DEngineSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UText3DEngineSubsystem.OuterSingleton;
	}
	template<> TEXT3D_API UClass* StaticClass<UText3DEngineSubsystem>()
	{
		return UText3DEngineSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UText3DEngineSubsystem);
	UText3DEngineSubsystem::~UText3DEngineSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Private_Text3DEngineSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Private_Text3DEngineSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FGlyphMeshParameters::StaticStruct, Z_Construct_UScriptStruct_FGlyphMeshParameters_Statics::NewStructOps, TEXT("GlyphMeshParameters"), &Z_Registration_Info_UScriptStruct_GlyphMeshParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGlyphMeshParameters), 2193463157U) },
		{ FCachedFontMeshes::StaticStruct, Z_Construct_UScriptStruct_FCachedFontMeshes_Statics::NewStructOps, TEXT("CachedFontMeshes"), &Z_Registration_Info_UScriptStruct_CachedFontMeshes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedFontMeshes), 2241534931U) },
		{ FCachedFontData::StaticStruct, Z_Construct_UScriptStruct_FCachedFontData_Statics::NewStructOps, TEXT("CachedFontData"), &Z_Registration_Info_UScriptStruct_CachedFontData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedFontData), 1292908672U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Private_Text3DEngineSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UText3DEngineSubsystem, UText3DEngineSubsystem::StaticClass, TEXT("UText3DEngineSubsystem"), &Z_Registration_Info_UClass_UText3DEngineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UText3DEngineSubsystem), 3474352378U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Private_Text3DEngineSubsystem_h_3639011187(TEXT("/Script/Text3D"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Private_Text3DEngineSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Private_Text3DEngineSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Private_Text3DEngineSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Private_Text3DEngineSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
