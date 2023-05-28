// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DestructibleFractureSettings.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestructibleFractureSettings() {}
// Cross Module References
	APEXDESTRUCTION_API UClass* Z_Construct_UClass_UDestructibleFractureSettings();
	APEXDESTRUCTION_API UClass* Z_Construct_UClass_UDestructibleFractureSettings_NoRegister();
	APEXDESTRUCTION_API UScriptStruct* Z_Construct_UScriptStruct_FDestructibleChunkParameters();
	APEXDESTRUCTION_API UScriptStruct* Z_Construct_UScriptStruct_FFractureMaterial();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ApexDestruction();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FractureMaterial;
class UScriptStruct* FFractureMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FractureMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FractureMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFractureMaterial, (UObject*)Z_Construct_UPackage__Script_ApexDestruction(), TEXT("FractureMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_FractureMaterial.OuterSingleton;
}
template<> APEXDESTRUCTION_API UScriptStruct* StaticStruct<FFractureMaterial>()
{
	return FFractureMaterial::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFractureMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteriorElementIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InteriorElementIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFractureMaterial_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DestructibleFractureSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFractureMaterial>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_UVScale_MetaData[] = {
		{ "Category", "FractureMaterial" },
		{ "Comment", "/**\n\x09 * The UV scale (geometric distance/unit texture distance) for interior materials.\n\x09 * Default = (100.0f,100.0f).\n\x09 */" },
		{ "ModuleRelativePath", "Public/DestructibleFractureSettings.h" },
		{ "ToolTip", "The UV scale (geometric distance/unit texture distance) for interior materials.\nDefault = (100.0f,100.0f)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFractureMaterial, UVScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_UVScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_UVScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_UVOffset_MetaData[] = {
		{ "Category", "FractureMaterial" },
		{ "Comment", "/**\n\x09 * A UV origin offset for interior materials.\n\x09 * Default = (0.0f,0.0f).\n\x09 */" },
		{ "ModuleRelativePath", "Public/DestructibleFractureSettings.h" },
		{ "ToolTip", "A UV origin offset for interior materials.\nDefault = (0.0f,0.0f)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_UVOffset = { "UVOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFractureMaterial, UVOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_UVOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_UVOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_Tangent_MetaData[] = {
		{ "Category", "FractureMaterial" },
		{ "Comment", "/**\n\x09 * Object-space vector specifying surface tangent direction.  If this vector is (0.0f,0.0f,0.0f), then an arbitrary direction will be chosen.\n\x09 * Default = (0.0f,0.0f,0.0f).\n\x09 */" },
		{ "ModuleRelativePath", "Public/DestructibleFractureSettings.h" },
		{ "ToolTip", "Object-space vector specifying surface tangent direction.  If this vector is (0.0f,0.0f,0.0f), then an arbitrary direction will be chosen.\nDefault = (0.0f,0.0f,0.0f)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFractureMaterial, Tangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_Tangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_Tangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_UAngle_MetaData[] = {
		{ "Category", "FractureMaterial" },
		{ "Comment", "/**\n\x09 * Angle from tangent direction for the u coordinate axis.\n\x09 * Default = 0.0f.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DestructibleFractureSettings.h" },
		{ "ToolTip", "Angle from tangent direction for the u coordinate axis.\nDefault = 0.0f." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_UAngle = { "UAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFractureMaterial, UAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_UAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_UAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_InteriorElementIndex_MetaData[] = {
		{ "Category", "FractureMaterial" },
		{ "Comment", "/**\n\x09 * The element index to use for the newly-created triangles.\n\x09 * If a negative index is given, a new element will be created for interior triangles.\n\x09 * Default = -1\n\x09 */" },
		{ "ModuleRelativePath", "Public/DestructibleFractureSettings.h" },
		{ "ToolTip", "The element index to use for the newly-created triangles.\nIf a negative index is given, a new element will be created for interior triangles.\nDefault = -1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_InteriorElementIndex = { "InteriorElementIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFractureMaterial, InteriorElementIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_InteriorElementIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_InteriorElementIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFractureMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_UVScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_UVOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_Tangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_UAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewProp_InteriorElementIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFractureMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ApexDestruction,
		nullptr,
		&NewStructOps,
		"FractureMaterial",
		sizeof(FFractureMaterial),
		alignof(FFractureMaterial),
		Z_Construct_UScriptStruct_FFractureMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFractureMaterial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFractureMaterial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFractureMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFractureMaterial()
	{
		if (!Z_Registration_Info_UScriptStruct_FractureMaterial.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FractureMaterial.InnerSingleton, Z_Construct_UScriptStruct_FFractureMaterial_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FractureMaterial.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DestructibleChunkParameters;
class UScriptStruct* FDestructibleChunkParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DestructibleChunkParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DestructibleChunkParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDestructibleChunkParameters, (UObject*)Z_Construct_UPackage__Script_ApexDestruction(), TEXT("DestructibleChunkParameters"));
	}
	return Z_Registration_Info_UScriptStruct_DestructibleChunkParameters.OuterSingleton;
}
template<> APEXDESTRUCTION_API UScriptStruct* StaticStruct<FDestructibleChunkParameters>()
{
	return FDestructibleChunkParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSupportChunk_MetaData[];
#endif
		static void NewProp_bIsSupportChunk_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSupportChunk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoNotFracture_MetaData[];
#endif
		static void NewProp_bDoNotFracture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoNotFracture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoNotDamage_MetaData[];
#endif
		static void NewProp_bDoNotDamage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoNotDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoNotCrumble_MetaData[];
#endif
		static void NewProp_bDoNotCrumble_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoNotCrumble;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Per-chunk authoring data. */" },
		{ "ModuleRelativePath", "Public/DestructibleFractureSettings.h" },
		{ "ToolTip", "Per-chunk authoring data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDestructibleChunkParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bIsSupportChunk_MetaData[] = {
		{ "Category", "DestructibleChunkParameters" },
		{ "Comment", "/**\n\x09\x09""Defines the chunk to be environmentally supported, if the appropriate NxDestructibleParametersFlag flags\n\x09\x09""are set in NxDestructibleParameters.\n\x09\x09""Default = false.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleFractureSettings.h" },
		{ "ToolTip", "Defines the chunk to be environmentally supported, if the appropriate NxDestructibleParametersFlag flags\nare set in NxDestructibleParameters.\nDefault = false." },
	};
#endif
	void Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bIsSupportChunk_SetBit(void* Obj)
	{
		((FDestructibleChunkParameters*)Obj)->bIsSupportChunk = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bIsSupportChunk = { "bIsSupportChunk", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDestructibleChunkParameters), &Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bIsSupportChunk_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bIsSupportChunk_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bIsSupportChunk_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bDoNotFracture_MetaData[] = {
		{ "Category", "DestructibleChunkParameters" },
		{ "Comment", "/**\n\x09\x09""Defines the chunk to be unfractureable.  If this is true, then none of its children will be fractureable.\n\x09\x09""Default = false.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleFractureSettings.h" },
		{ "ToolTip", "Defines the chunk to be unfractureable.  If this is true, then none of its children will be fractureable.\nDefault = false." },
	};
#endif
	void Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bDoNotFracture_SetBit(void* Obj)
	{
		((FDestructibleChunkParameters*)Obj)->bDoNotFracture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bDoNotFracture = { "bDoNotFracture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDestructibleChunkParameters), &Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bDoNotFracture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bDoNotFracture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bDoNotFracture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bDoNotDamage_MetaData[] = {
		{ "Category", "DestructibleChunkParameters" },
		{ "Comment", "/**\n\x09\x09""Defines the chunk to be undamageable.  This means this chunk will not fracture, but its children might.\n\x09\x09""Default = false.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleFractureSettings.h" },
		{ "ToolTip", "Defines the chunk to be undamageable.  This means this chunk will not fracture, but its children might.\nDefault = false." },
	};
#endif
	void Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bDoNotDamage_SetBit(void* Obj)
	{
		((FDestructibleChunkParameters*)Obj)->bDoNotDamage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bDoNotDamage = { "bDoNotDamage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDestructibleChunkParameters), &Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bDoNotDamage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bDoNotDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bDoNotDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bDoNotCrumble_MetaData[] = {
		{ "Category", "DestructibleChunkParameters" },
		{ "Comment", "/**\n\x09\x09""Defines the chunk to be uncrumbleable.  This means this chunk will not be broken down into fluid mesh particles\n\x09\x09no matter how much damage it takes.  Note: this only applies to chunks with no children.  For a chunk with\n\x09\x09""children, then:\n\x09\x09""1) The chunk may be broken down into its children, and then its children may be crumbled, if the doNotCrumble flag\n\x09\x09is not set on them.\n\x09\x09""2) If the Destructible module's chunk depth offset LOD may be set such that this chunk effectively has no children.\n\x09\x09In this case, the doNotCrumble flag will apply to it.\n\x09\x09""Default = false.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleFractureSettings.h" },
		{ "ToolTip", "Defines the chunk to be uncrumbleable.  This means this chunk will not be broken down into fluid mesh particles\nno matter how much damage it takes.  Note: this only applies to chunks with no children.  For a chunk with\nchildren, then:\n1) The chunk may be broken down into its children, and then its children may be crumbled, if the doNotCrumble flag\nis not set on them.\n2) If the Destructible module's chunk depth offset LOD may be set such that this chunk effectively has no children.\nIn this case, the doNotCrumble flag will apply to it.\nDefault = false." },
	};
#endif
	void Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bDoNotCrumble_SetBit(void* Obj)
	{
		((FDestructibleChunkParameters*)Obj)->bDoNotCrumble = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bDoNotCrumble = { "bDoNotCrumble", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDestructibleChunkParameters), &Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bDoNotCrumble_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bDoNotCrumble_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bDoNotCrumble_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bIsSupportChunk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bDoNotFracture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bDoNotDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewProp_bDoNotCrumble,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ApexDestruction,
		nullptr,
		&NewStructOps,
		"DestructibleChunkParameters",
		sizeof(FDestructibleChunkParameters),
		alignof(FDestructibleChunkParameters),
		Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDestructibleChunkParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_DestructibleChunkParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DestructibleChunkParameters.InnerSingleton, Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DestructibleChunkParameters.InnerSingleton;
	}
	void UDestructibleFractureSettings::StaticRegisterNativesUDestructibleFractureSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDestructibleFractureSettings);
	UClass* Z_Construct_UClass_UDestructibleFractureSettings_NoRegister()
	{
		return UDestructibleFractureSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDestructibleFractureSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellSiteCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellSiteCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FractureMaterialDesc_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FractureMaterialDesc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VoronoiSites_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoronoiSites_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VoronoiSites;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalSubmeshCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OriginalSubmeshCount;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunkParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChunkParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDestructibleFractureSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ApexDestruction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleFractureSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Information to create an NxDestructibleAsset */" },
		{ "IncludePath", "DestructibleFractureSettings.h" },
		{ "ModuleRelativePath", "Public/DestructibleFractureSettings.h" },
		{ "ToolTip", "Information to create an NxDestructibleAsset" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_CellSiteCount_MetaData[] = {
		{ "Category", "Voronoi" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of voronoi cell sites. */" },
		{ "ModuleRelativePath", "Public/DestructibleFractureSettings.h" },
		{ "ToolTip", "The number of voronoi cell sites." },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_CellSiteCount = { "CellSiteCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDestructibleFractureSettings, CellSiteCount), METADATA_PARAMS(Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_CellSiteCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_CellSiteCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_FractureMaterialDesc_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Stored interior material data.  Just need one as we only support Voronoi splitting. */" },
		{ "ModuleRelativePath", "Public/DestructibleFractureSettings.h" },
		{ "ToolTip", "Stored interior material data.  Just need one as we only support Voronoi splitting." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_FractureMaterialDesc = { "FractureMaterialDesc", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDestructibleFractureSettings, FractureMaterialDesc), Z_Construct_UScriptStruct_FFractureMaterial, METADATA_PARAMS(Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_FractureMaterialDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_FractureMaterialDesc_MetaData)) }; // 3059886294
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Random seed for reproducibility */" },
		{ "ModuleRelativePath", "Public/DestructibleFractureSettings.h" },
		{ "ToolTip", "Random seed for reproducibility" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDestructibleFractureSettings, RandomSeed), METADATA_PARAMS(Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_RandomSeed_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_VoronoiSites_Inner = { "VoronoiSites", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_VoronoiSites_MetaData[] = {
		{ "Comment", "/** Stored Voronoi sites */" },
		{ "ModuleRelativePath", "Public/DestructibleFractureSettings.h" },
		{ "ToolTip", "Stored Voronoi sites" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_VoronoiSites = { "VoronoiSites", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDestructibleFractureSettings, VoronoiSites), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_VoronoiSites_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_VoronoiSites_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_OriginalSubmeshCount_MetaData[] = {
		{ "Comment", "/** The mesh's original number of submeshes.  APEX needs to store this in the authoring. */" },
		{ "ModuleRelativePath", "Public/DestructibleFractureSettings.h" },
		{ "ToolTip", "The mesh's original number of submeshes.  APEX needs to store this in the authoring." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_OriginalSubmeshCount = { "OriginalSubmeshCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDestructibleFractureSettings, OriginalSubmeshCount), METADATA_PARAMS(Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_OriginalSubmeshCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_OriginalSubmeshCount_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_Materials_MetaData[] = {
		{ "Comment", "/** APEX references materials by name, but we'll bypass that mechanism and use of UE materials instead. */" },
		{ "ModuleRelativePath", "Public/DestructibleFractureSettings.h" },
		{ "ToolTip", "APEX references materials by name, but we'll bypass that mechanism and use of UE materials instead." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDestructibleFractureSettings, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_Materials_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_ChunkParameters_Inner = { "ChunkParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDestructibleChunkParameters, METADATA_PARAMS(nullptr, 0) }; // 905746916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_ChunkParameters_MetaData[] = {
		{ "Comment", "/** Per-chunk authoring parameters, which should be made writable when a chunk selection GUI is in place. */" },
		{ "ModuleRelativePath", "Public/DestructibleFractureSettings.h" },
		{ "ToolTip", "Per-chunk authoring parameters, which should be made writable when a chunk selection GUI is in place." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_ChunkParameters = { "ChunkParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDestructibleFractureSettings, ChunkParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_ChunkParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_ChunkParameters_MetaData)) }; // 905746916
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDestructibleFractureSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_CellSiteCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_FractureMaterialDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_RandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_VoronoiSites_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_VoronoiSites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_OriginalSubmeshCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_Materials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_ChunkParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleFractureSettings_Statics::NewProp_ChunkParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDestructibleFractureSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDestructibleFractureSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDestructibleFractureSettings_Statics::ClassParams = {
		&UDestructibleFractureSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDestructibleFractureSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleFractureSettings_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDestructibleFractureSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleFractureSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDestructibleFractureSettings()
	{
		if (!Z_Registration_Info_UClass_UDestructibleFractureSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDestructibleFractureSettings.OuterSingleton, Z_Construct_UClass_UDestructibleFractureSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDestructibleFractureSettings.OuterSingleton;
	}
	template<> APEXDESTRUCTION_API UClass* StaticClass<UDestructibleFractureSettings>()
	{
		return UDestructibleFractureSettings::StaticClass();
	}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDestructibleFractureSettings)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleFractureSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleFractureSettings_h_Statics::ScriptStructInfo[] = {
		{ FFractureMaterial::StaticStruct, Z_Construct_UScriptStruct_FFractureMaterial_Statics::NewStructOps, TEXT("FractureMaterial"), &Z_Registration_Info_UScriptStruct_FractureMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFractureMaterial), 3059886294U) },
		{ FDestructibleChunkParameters::StaticStruct, Z_Construct_UScriptStruct_FDestructibleChunkParameters_Statics::NewStructOps, TEXT("DestructibleChunkParameters"), &Z_Registration_Info_UScriptStruct_DestructibleChunkParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDestructibleChunkParameters), 905746916U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleFractureSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDestructibleFractureSettings, UDestructibleFractureSettings::StaticClass, TEXT("UDestructibleFractureSettings"), &Z_Registration_Info_UClass_UDestructibleFractureSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDestructibleFractureSettings), 3414790492U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleFractureSettings_h_501950998(TEXT("/Script/ApexDestruction"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleFractureSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleFractureSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleFractureSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleFractureSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
