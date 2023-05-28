// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshDeformFunctions.h"
#include "GeometryScript/GeometryScriptSelectionTypes.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshDeformFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptEmptySelectionBehavior();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFlareType();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMathWarpType();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshSelection();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptVectorList();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptBendWarpOptions;
class UScriptStruct* FGeometryScriptBendWarpOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptBendWarpOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptBendWarpOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptBendWarpOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptBendWarpOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptBendWarpOptions>()
{
	return FGeometryScriptBendWarpOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSymmetricExtents_MetaData[];
#endif
		static void NewProp_bSymmetricExtents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSymmetricExtents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerExtent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowerExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBidirectional_MetaData[];
#endif
		static void NewProp_bBidirectional_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBidirectional;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptBendWarpOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::NewProp_bSymmetricExtents_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Symmetric extents are [-BendExtent,BendExtent], if disabled, then [-LowerExtent,BendExtent] is used  */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
		{ "ToolTip", "Symmetric extents are [-BendExtent,BendExtent], if disabled, then [-LowerExtent,BendExtent] is used" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::NewProp_bSymmetricExtents_SetBit(void* Obj)
	{
		((FGeometryScriptBendWarpOptions*)Obj)->bSymmetricExtents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::NewProp_bSymmetricExtents = { "bSymmetricExtents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptBendWarpOptions), &Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::NewProp_bSymmetricExtents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::NewProp_bSymmetricExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::NewProp_bSymmetricExtents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::NewProp_LowerExtent_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Lower extent used when bSymmetricExtents = false */" },
		{ "EditCondition", "bSymmetricExtents == false" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
		{ "ToolTip", "Lower extent used when bSymmetricExtents = false" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::NewProp_LowerExtent = { "LowerExtent", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBendWarpOptions, LowerExtent), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::NewProp_LowerExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::NewProp_LowerExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::NewProp_bBidirectional_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, the Bend is \"centered\" at the Origin, ie the regions on either side of the extents are rigidly transformed. If false, the Bend begins at the start of the Lower Extents, and the \"lower\" region is not affected. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
		{ "ToolTip", "If true, the Bend is \"centered\" at the Origin, ie the regions on either side of the extents are rigidly transformed. If false, the Bend begins at the start of the Lower Extents, and the \"lower\" region is not affected." },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::NewProp_bBidirectional_SetBit(void* Obj)
	{
		((FGeometryScriptBendWarpOptions*)Obj)->bBidirectional = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::NewProp_bBidirectional = { "bBidirectional", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptBendWarpOptions), &Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::NewProp_bBidirectional_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::NewProp_bBidirectional_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::NewProp_bBidirectional_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::NewProp_bSymmetricExtents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::NewProp_LowerExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::NewProp_bBidirectional,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptBendWarpOptions",
		sizeof(FGeometryScriptBendWarpOptions),
		alignof(FGeometryScriptBendWarpOptions),
		Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptBendWarpOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptBendWarpOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptBendWarpOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptTwistWarpOptions;
class UScriptStruct* FGeometryScriptTwistWarpOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptTwistWarpOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptTwistWarpOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptTwistWarpOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptTwistWarpOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptTwistWarpOptions>()
{
	return FGeometryScriptTwistWarpOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSymmetricExtents_MetaData[];
#endif
		static void NewProp_bSymmetricExtents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSymmetricExtents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerExtent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowerExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBidirectional_MetaData[];
#endif
		static void NewProp_bBidirectional_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBidirectional;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptTwistWarpOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::NewProp_bSymmetricExtents_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Symmetric extents are [-BendExtent,BendExtent], if disabled, then [-LowerExtent,BendExtent] is used  */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
		{ "ToolTip", "Symmetric extents are [-BendExtent,BendExtent], if disabled, then [-LowerExtent,BendExtent] is used" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::NewProp_bSymmetricExtents_SetBit(void* Obj)
	{
		((FGeometryScriptTwistWarpOptions*)Obj)->bSymmetricExtents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::NewProp_bSymmetricExtents = { "bSymmetricExtents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptTwistWarpOptions), &Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::NewProp_bSymmetricExtents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::NewProp_bSymmetricExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::NewProp_bSymmetricExtents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::NewProp_LowerExtent_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Lower extent used when bSymmetricExtents = false */" },
		{ "EditCondition", "bSymmetricExtents == false" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
		{ "ToolTip", "Lower extent used when bSymmetricExtents = false" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::NewProp_LowerExtent = { "LowerExtent", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptTwistWarpOptions, LowerExtent), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::NewProp_LowerExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::NewProp_LowerExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::NewProp_bBidirectional_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, the Twist is \"centered\" at the Origin, ie the regions on either side of the extents are rigidly transformed. If false, the Twist begins at the start of the Lower Extents, and the \"lower\" region is not affected. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
		{ "ToolTip", "If true, the Twist is \"centered\" at the Origin, ie the regions on either side of the extents are rigidly transformed. If false, the Twist begins at the start of the Lower Extents, and the \"lower\" region is not affected." },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::NewProp_bBidirectional_SetBit(void* Obj)
	{
		((FGeometryScriptTwistWarpOptions*)Obj)->bBidirectional = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::NewProp_bBidirectional = { "bBidirectional", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptTwistWarpOptions), &Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::NewProp_bBidirectional_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::NewProp_bBidirectional_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::NewProp_bBidirectional_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::NewProp_bSymmetricExtents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::NewProp_LowerExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::NewProp_bBidirectional,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptTwistWarpOptions",
		sizeof(FGeometryScriptTwistWarpOptions),
		alignof(FGeometryScriptTwistWarpOptions),
		Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptTwistWarpOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptTwistWarpOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptTwistWarpOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptFlareType;
	static UEnum* EGeometryScriptFlareType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptFlareType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptFlareType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFlareType, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptFlareType"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptFlareType.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptFlareType>()
	{
		return EGeometryScriptFlareType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFlareType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFlareType_Statics::Enumerators[] = {
		{ "EGeometryScriptFlareType::SinMode", (int64)EGeometryScriptFlareType::SinMode },
		{ "EGeometryScriptFlareType::SinSquaredMode", (int64)EGeometryScriptFlareType::SinSquaredMode },
		{ "EGeometryScriptFlareType::TriangleMode", (int64)EGeometryScriptFlareType::TriangleMode },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFlareType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
		{ "SinMode.Comment", "//Displaced by sin(pi x) with x in 0 to 1\n" },
		{ "SinMode.Name", "EGeometryScriptFlareType::SinMode" },
		{ "SinMode.ToolTip", "Displaced by sin(pi x) with x in 0 to 1" },
		{ "SinSquaredMode.Comment", "//Displaced by sin(pi x)*sin(pi x) with x in 0 to 1. This provides a smooth normal transition.\n" },
		{ "SinSquaredMode.Name", "EGeometryScriptFlareType::SinSquaredMode" },
		{ "SinSquaredMode.ToolTip", "Displaced by sin(pi x)*sin(pi x) with x in 0 to 1. This provides a smooth normal transition." },
		{ "TriangleMode.Comment", "// Displaced by piecewise-linear trianglular mode\n" },
		{ "TriangleMode.Name", "EGeometryScriptFlareType::TriangleMode" },
		{ "TriangleMode.ToolTip", "Displaced by piecewise-linear trianglular mode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFlareType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptFlareType",
		"EGeometryScriptFlareType",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFlareType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFlareType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFlareType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFlareType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFlareType()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptFlareType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptFlareType.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFlareType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptFlareType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptFlareWarpOptions;
class UScriptStruct* FGeometryScriptFlareWarpOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptFlareWarpOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptFlareWarpOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptFlareWarpOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptFlareWarpOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptFlareWarpOptions>()
{
	return FGeometryScriptFlareWarpOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSymmetricExtents_MetaData[];
#endif
		static void NewProp_bSymmetricExtents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSymmetricExtents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerExtent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowerExtent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FlareType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlareType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FlareType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptFlareWarpOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::NewProp_bSymmetricExtents_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Symmetric extents are [-BendExtent,BendExtent], if disabled, then [-LowerExtent,BendExtent] is used  */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
		{ "ToolTip", "Symmetric extents are [-BendExtent,BendExtent], if disabled, then [-LowerExtent,BendExtent] is used" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::NewProp_bSymmetricExtents_SetBit(void* Obj)
	{
		((FGeometryScriptFlareWarpOptions*)Obj)->bSymmetricExtents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::NewProp_bSymmetricExtents = { "bSymmetricExtents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptFlareWarpOptions), &Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::NewProp_bSymmetricExtents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::NewProp_bSymmetricExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::NewProp_bSymmetricExtents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::NewProp_LowerExtent_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Lower extent used when bSymmetricExtents = false */" },
		{ "EditCondition", "bSymmetricExtents == false" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
		{ "ToolTip", "Lower extent used when bSymmetricExtents = false" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::NewProp_LowerExtent = { "LowerExtent", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptFlareWarpOptions, LowerExtent), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::NewProp_LowerExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::NewProp_LowerExtent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::NewProp_FlareType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::NewProp_FlareType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Determines the profile used as a displacement */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
		{ "ToolTip", "Determines the profile used as a displacement" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::NewProp_FlareType = { "FlareType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptFlareWarpOptions, FlareType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFlareType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::NewProp_FlareType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::NewProp_FlareType_MetaData)) }; // 1380385334
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::NewProp_bSymmetricExtents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::NewProp_LowerExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::NewProp_FlareType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::NewProp_FlareType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptFlareWarpOptions",
		sizeof(FGeometryScriptFlareWarpOptions),
		alignof(FGeometryScriptFlareWarpOptions),
		Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptFlareWarpOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptFlareWarpOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptFlareWarpOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptPerlinNoiseLayerOptions;
class UScriptStruct* FGeometryScriptPerlinNoiseLayerOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptPerlinNoiseLayerOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptPerlinNoiseLayerOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptPerlinNoiseLayerOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptPerlinNoiseLayerOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptPerlinNoiseLayerOptions>()
{
	return FGeometryScriptPerlinNoiseLayerOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrequencyShift_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrequencyShift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RandomSeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptPerlinNoiseLayerOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptPerlinNoiseLayerOptions, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptPerlinNoiseLayerOptions, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::NewProp_FrequencyShift_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::NewProp_FrequencyShift = { "FrequencyShift", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptPerlinNoiseLayerOptions, FrequencyShift), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::NewProp_FrequencyShift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::NewProp_FrequencyShift_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptPerlinNoiseLayerOptions, RandomSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::NewProp_RandomSeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::NewProp_FrequencyShift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::NewProp_RandomSeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptPerlinNoiseLayerOptions",
		sizeof(FGeometryScriptPerlinNoiseLayerOptions),
		alignof(FGeometryScriptPerlinNoiseLayerOptions),
		Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptPerlinNoiseLayerOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptPerlinNoiseLayerOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptPerlinNoiseLayerOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptMathWarpType;
	static UEnum* EGeometryScriptMathWarpType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptMathWarpType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptMathWarpType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMathWarpType, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptMathWarpType"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptMathWarpType.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptMathWarpType>()
	{
		return EGeometryScriptMathWarpType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMathWarpType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMathWarpType_Statics::Enumerators[] = {
		{ "EGeometryScriptMathWarpType::SinWave1D", (int64)EGeometryScriptMathWarpType::SinWave1D },
		{ "EGeometryScriptMathWarpType::SinWave2D", (int64)EGeometryScriptMathWarpType::SinWave2D },
		{ "EGeometryScriptMathWarpType::SinWave3D", (int64)EGeometryScriptMathWarpType::SinWave3D },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMathWarpType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
		{ "SinWave1D.Name", "EGeometryScriptMathWarpType::SinWave1D" },
		{ "SinWave2D.Name", "EGeometryScriptMathWarpType::SinWave2D" },
		{ "SinWave3D.Name", "EGeometryScriptMathWarpType::SinWave3D" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMathWarpType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptMathWarpType",
		"EGeometryScriptMathWarpType",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMathWarpType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMathWarpType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMathWarpType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMathWarpType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMathWarpType()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptMathWarpType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptMathWarpType.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMathWarpType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptMathWarpType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptMathWarpOptions;
class UScriptStruct* FGeometryScriptMathWarpOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptMathWarpOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptMathWarpOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptMathWarpOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptMathWarpOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptMathWarpOptions>()
{
	return FGeometryScriptMathWarpOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrequencyShift_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrequencyShift;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptMathWarpOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMathWarpOptions, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMathWarpOptions, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::NewProp_FrequencyShift_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::NewProp_FrequencyShift = { "FrequencyShift", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMathWarpOptions, FrequencyShift), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::NewProp_FrequencyShift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::NewProp_FrequencyShift_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::NewProp_FrequencyShift,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptMathWarpOptions",
		sizeof(FGeometryScriptMathWarpOptions),
		alignof(FGeometryScriptMathWarpOptions),
		Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptMathWarpOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptMathWarpOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptMathWarpOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptPerlinNoiseOptions;
class UScriptStruct* FGeometryScriptPerlinNoiseOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptPerlinNoiseOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptPerlinNoiseOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptPerlinNoiseOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptPerlinNoiseOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptPerlinNoiseOptions>()
{
	return FGeometryScriptPerlinNoiseOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyAlongNormal_MetaData[];
#endif
		static void NewProp_bApplyAlongNormal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyAlongNormal;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EmptyBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EmptyBehavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptPerlinNoiseOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::NewProp_BaseLayer_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::NewProp_BaseLayer = { "BaseLayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptPerlinNoiseOptions, BaseLayer), Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::NewProp_BaseLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::NewProp_BaseLayer_MetaData)) }; // 636215138
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::NewProp_bApplyAlongNormal_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::NewProp_bApplyAlongNormal_SetBit(void* Obj)
	{
		((FGeometryScriptPerlinNoiseOptions*)Obj)->bApplyAlongNormal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::NewProp_bApplyAlongNormal = { "bApplyAlongNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptPerlinNoiseOptions), &Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::NewProp_bApplyAlongNormal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::NewProp_bApplyAlongNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::NewProp_bApplyAlongNormal_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::NewProp_EmptyBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::NewProp_EmptyBehavior_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** EmptyBehavior Defines how an empty input selection should be interpreted */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
		{ "ToolTip", "EmptyBehavior Defines how an empty input selection should be interpreted" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::NewProp_EmptyBehavior = { "EmptyBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptPerlinNoiseOptions, EmptyBehavior), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptEmptySelectionBehavior, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::NewProp_EmptyBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::NewProp_EmptyBehavior_MetaData)) }; // 2116030996
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::NewProp_BaseLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::NewProp_bApplyAlongNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::NewProp_EmptyBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::NewProp_EmptyBehavior,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptPerlinNoiseOptions",
		sizeof(FGeometryScriptPerlinNoiseOptions),
		alignof(FGeometryScriptPerlinNoiseOptions),
		Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptPerlinNoiseOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptPerlinNoiseOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptPerlinNoiseOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptIterativeMeshSmoothingOptions;
class UScriptStruct* FGeometryScriptIterativeMeshSmoothingOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptIterativeMeshSmoothingOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptIterativeMeshSmoothingOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptIterativeMeshSmoothingOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptIterativeMeshSmoothingOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptIterativeMeshSmoothingOptions>()
{
	return FGeometryScriptIterativeMeshSmoothingOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumIterations_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EmptyBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EmptyBehavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptIterativeMeshSmoothingOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::NewProp_NumIterations_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptIterativeMeshSmoothingOptions, NumIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::NewProp_NumIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::NewProp_NumIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptIterativeMeshSmoothingOptions, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::NewProp_Alpha_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::NewProp_EmptyBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::NewProp_EmptyBehavior_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** EmptyBehavior Defines how an empty input selection should be interpreted */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
		{ "ToolTip", "EmptyBehavior Defines how an empty input selection should be interpreted" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::NewProp_EmptyBehavior = { "EmptyBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptIterativeMeshSmoothingOptions, EmptyBehavior), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptEmptySelectionBehavior, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::NewProp_EmptyBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::NewProp_EmptyBehavior_MetaData)) }; // 2116030996
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::NewProp_NumIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::NewProp_EmptyBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::NewProp_EmptyBehavior,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptIterativeMeshSmoothingOptions",
		sizeof(FGeometryScriptIterativeMeshSmoothingOptions),
		alignof(FGeometryScriptIterativeMeshSmoothingOptions),
		Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptIterativeMeshSmoothingOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptIterativeMeshSmoothingOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptIterativeMeshSmoothingOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptDisplaceFromTextureOptions;
class UScriptStruct* FGeometryScriptDisplaceFromTextureOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptDisplaceFromTextureOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptDisplaceFromTextureOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptDisplaceFromTextureOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptDisplaceFromTextureOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptDisplaceFromTextureOptions>()
{
	return FGeometryScriptDisplaceFromTextureOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageChannel_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ImageChannel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EmptyBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EmptyBehavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptDisplaceFromTextureOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptDisplaceFromTextureOptions, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_UVScale_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptDisplaceFromTextureOptions, UVScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_UVScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_UVScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_UVOffset_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_UVOffset = { "UVOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptDisplaceFromTextureOptions, UVOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_UVOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_UVOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptDisplaceFromTextureOptions, Center), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_ImageChannel_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_ImageChannel = { "ImageChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptDisplaceFromTextureOptions, ImageChannel), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_ImageChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_ImageChannel_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_EmptyBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_EmptyBehavior_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** EmptyBehavior Defines how an empty input selection should be interpreted */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
		{ "ToolTip", "EmptyBehavior Defines how an empty input selection should be interpreted" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_EmptyBehavior = { "EmptyBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptDisplaceFromTextureOptions, EmptyBehavior), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptEmptySelectionBehavior, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_EmptyBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_EmptyBehavior_MetaData)) }; // 2116030996
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_UVScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_UVOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_ImageChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_EmptyBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewProp_EmptyBehavior,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptDisplaceFromTextureOptions",
		sizeof(FGeometryScriptDisplaceFromTextureOptions),
		alignof(FGeometryScriptDisplaceFromTextureOptions),
		Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptDisplaceFromTextureOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptDisplaceFromTextureOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptDisplaceFromTextureOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshDeformFunctions::execApplyDisplaceFromPerVertexVectors)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_STRUCT_REF(FGeometryScriptVectorList,Z_Param_Out_VectorList);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshDeformFunctions::ApplyDisplaceFromPerVertexVectors(Z_Param_TargetMesh,Z_Param_Selection,Z_Param_Out_VectorList,Z_Param_Magnitude,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshDeformFunctions::execApplyDisplaceFromTextureMap)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_STRUCT(FGeometryScriptDisplaceFromTextureOptions,Z_Param_Options);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVLayer);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshDeformFunctions::ApplyDisplaceFromTextureMap(Z_Param_TargetMesh,Z_Param_Texture,Z_Param_Selection,Z_Param_Options,Z_Param_UVLayer,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshDeformFunctions::execApplyIterativeSmoothingToMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_STRUCT(FGeometryScriptIterativeMeshSmoothingOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshDeformFunctions::ApplyIterativeSmoothingToMesh(Z_Param_TargetMesh,Z_Param_Selection,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshDeformFunctions::execApplyPerlinNoiseToMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_STRUCT(FGeometryScriptPerlinNoiseOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshDeformFunctions::ApplyPerlinNoiseToMesh(Z_Param_TargetMesh,Z_Param_Selection,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshDeformFunctions::execApplyMathWarpToMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FTransform,Z_Param_WarpOrientation);
		P_GET_ENUM(EGeometryScriptMathWarpType,Z_Param_WarpType);
		P_GET_STRUCT(FGeometryScriptMathWarpOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshDeformFunctions::ApplyMathWarpToMesh(Z_Param_TargetMesh,Z_Param_WarpOrientation,EGeometryScriptMathWarpType(Z_Param_WarpType),Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshDeformFunctions::execApplyFlareWarpToMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptFlareWarpOptions,Z_Param_Options);
		P_GET_STRUCT(FTransform,Z_Param_FlareOrientation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FlarePercentX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FlarePercentY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FlareExtent);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshDeformFunctions::ApplyFlareWarpToMesh(Z_Param_TargetMesh,Z_Param_Options,Z_Param_FlareOrientation,Z_Param_FlarePercentX,Z_Param_FlarePercentY,Z_Param_FlareExtent,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshDeformFunctions::execApplyTwistWarpToMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptTwistWarpOptions,Z_Param_Options);
		P_GET_STRUCT(FTransform,Z_Param_TwistOrientation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TwistAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TwistExtent);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshDeformFunctions::ApplyTwistWarpToMesh(Z_Param_TargetMesh,Z_Param_Options,Z_Param_TwistOrientation,Z_Param_TwistAngle,Z_Param_TwistExtent,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshDeformFunctions::execApplyBendWarpToMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptBendWarpOptions,Z_Param_Options);
		P_GET_STRUCT(FTransform,Z_Param_BendOrientation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BendAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BendExtent);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshDeformFunctions::ApplyBendWarpToMesh(Z_Param_TargetMesh,Z_Param_Options,Z_Param_BendOrientation,Z_Param_BendAngle,Z_Param_BendExtent,Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshDeformFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshDeformFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshDeformFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyBendWarpToMesh", &UGeometryScriptLibrary_MeshDeformFunctions::execApplyBendWarpToMesh },
			{ "ApplyDisplaceFromPerVertexVectors", &UGeometryScriptLibrary_MeshDeformFunctions::execApplyDisplaceFromPerVertexVectors },
			{ "ApplyDisplaceFromTextureMap", &UGeometryScriptLibrary_MeshDeformFunctions::execApplyDisplaceFromTextureMap },
			{ "ApplyFlareWarpToMesh", &UGeometryScriptLibrary_MeshDeformFunctions::execApplyFlareWarpToMesh },
			{ "ApplyIterativeSmoothingToMesh", &UGeometryScriptLibrary_MeshDeformFunctions::execApplyIterativeSmoothingToMesh },
			{ "ApplyMathWarpToMesh", &UGeometryScriptLibrary_MeshDeformFunctions::execApplyMathWarpToMesh },
			{ "ApplyPerlinNoiseToMesh", &UGeometryScriptLibrary_MeshDeformFunctions::execApplyPerlinNoiseToMesh },
			{ "ApplyTwistWarpToMesh", &UGeometryScriptLibrary_MeshDeformFunctions::execApplyTwistWarpToMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics
	{
		struct GeometryScriptLibrary_MeshDeformFunctions_eventApplyBendWarpToMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptBendWarpOptions Options;
			FTransform BendOrientation;
			float BendAngle;
			float BendExtent;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BendOrientation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BendAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BendExtent;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyBendWarpToMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyBendWarpToMesh_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions, METADATA_PARAMS(nullptr, 0) }; // 2298344211
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::NewProp_BendOrientation = { "BendOrientation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyBendWarpToMesh_Parms, BendOrientation), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::NewProp_BendAngle = { "BendAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyBendWarpToMesh_Parms, BendAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::NewProp_BendExtent = { "BendExtent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyBendWarpToMesh_Parms, BendExtent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyBendWarpToMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyBendWarpToMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::NewProp_BendOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::NewProp_BendAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::NewProp_BendExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Deformations" },
		{ "CPP_Default_BendAngle", "45.000000" },
		{ "CPP_Default_BendExtent", "50.000000" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions, nullptr, "ApplyBendWarpToMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::GeometryScriptLibrary_MeshDeformFunctions_eventApplyBendWarpToMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics
	{
		struct GeometryScriptLibrary_MeshDeformFunctions_eventApplyDisplaceFromPerVertexVectors_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelection Selection;
			FGeometryScriptVectorList VectorList;
			float Magnitude;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyDisplaceFromPerVertexVectors_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyDisplaceFromPerVertexVectors_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::NewProp_VectorList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyDisplaceFromPerVertexVectors_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::NewProp_VectorList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::NewProp_VectorList_MetaData)) }; // 400507777
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyDisplaceFromPerVertexVectors_Parms, Magnitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyDisplaceFromPerVertexVectors_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyDisplaceFromPerVertexVectors_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Deformations" },
		{ "Comment", "/**\n\x09 * Add the vectors in VectorList, scaled by Magnitude, to the vertex positions in TargetMesh.\n\x09 * VectorList Length must be >= the as TargetMesh MaxVertexID.\n\x09 * @param Selection if non-empty, only the vertices identified by the selection will be displaced. The VectorList must still be the same size as the whole mesh, this is just a filter on which vertices are updated.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_Magnitude", "5.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Add the vectors in VectorList, scaled by Magnitude, to the vertex positions in TargetMesh.\nVectorList Length must be >= the as TargetMesh MaxVertexID.\n@param Selection if non-empty, only the vertices identified by the selection will be displaced. The VectorList must still be the same size as the whole mesh, this is just a filter on which vertices are updated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions, nullptr, "ApplyDisplaceFromPerVertexVectors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::GeometryScriptLibrary_MeshDeformFunctions_eventApplyDisplaceFromPerVertexVectors_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics
	{
		struct GeometryScriptLibrary_MeshDeformFunctions_eventApplyDisplaceFromTextureMap_Parms
		{
			UDynamicMesh* TargetMesh;
			UTexture2D* Texture;
			FGeometryScriptMeshSelection Selection;
			FGeometryScriptDisplaceFromTextureOptions Options;
			int32 UVLayer;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVLayer;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyDisplaceFromTextureMap_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyDisplaceFromTextureMap_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyDisplaceFromTextureMap_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyDisplaceFromTextureMap_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions, METADATA_PARAMS(nullptr, 0) }; // 3827349367
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::NewProp_UVLayer = { "UVLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyDisplaceFromTextureMap_Parms, UVLayer), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyDisplaceFromTextureMap_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyDisplaceFromTextureMap_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::NewProp_UVLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Deformations" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_UVLayer", "0" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions, nullptr, "ApplyDisplaceFromTextureMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::GeometryScriptLibrary_MeshDeformFunctions_eventApplyDisplaceFromTextureMap_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics
	{
		struct GeometryScriptLibrary_MeshDeformFunctions_eventApplyFlareWarpToMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptFlareWarpOptions Options;
			FTransform FlareOrientation;
			float FlarePercentX;
			float FlarePercentY;
			float FlareExtent;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FlareOrientation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlarePercentX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlarePercentY;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlareExtent;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyFlareWarpToMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyFlareWarpToMesh_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions, METADATA_PARAMS(nullptr, 0) }; // 3304467347
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::NewProp_FlareOrientation = { "FlareOrientation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyFlareWarpToMesh_Parms, FlareOrientation), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::NewProp_FlarePercentX = { "FlarePercentX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyFlareWarpToMesh_Parms, FlarePercentX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::NewProp_FlarePercentY = { "FlarePercentY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyFlareWarpToMesh_Parms, FlarePercentY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::NewProp_FlareExtent = { "FlareExtent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyFlareWarpToMesh_Parms, FlareExtent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyFlareWarpToMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyFlareWarpToMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::NewProp_FlareOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::NewProp_FlarePercentX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::NewProp_FlarePercentY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::NewProp_FlareExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Deformations" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_FlareExtent", "50.000000" },
		{ "CPP_Default_FlarePercentX", "0.000000" },
		{ "CPP_Default_FlarePercentY", "0.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions, nullptr, "ApplyFlareWarpToMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::GeometryScriptLibrary_MeshDeformFunctions_eventApplyFlareWarpToMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Statics
	{
		struct GeometryScriptLibrary_MeshDeformFunctions_eventApplyIterativeSmoothingToMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelection Selection;
			FGeometryScriptIterativeMeshSmoothingOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyIterativeSmoothingToMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyIterativeSmoothingToMesh_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyIterativeSmoothingToMesh_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions, METADATA_PARAMS(nullptr, 0) }; // 2594489819
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyIterativeSmoothingToMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyIterativeSmoothingToMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Deformations" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions, nullptr, "ApplyIterativeSmoothingToMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Statics::GeometryScriptLibrary_MeshDeformFunctions_eventApplyIterativeSmoothingToMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics
	{
		struct GeometryScriptLibrary_MeshDeformFunctions_eventApplyMathWarpToMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FTransform WarpOrientation;
			EGeometryScriptMathWarpType WarpType;
			FGeometryScriptMathWarpOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WarpOrientation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WarpType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WarpType;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyMathWarpToMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::NewProp_WarpOrientation = { "WarpOrientation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyMathWarpToMesh_Parms, WarpOrientation), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::NewProp_WarpType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::NewProp_WarpType = { "WarpType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyMathWarpToMesh_Parms, WarpType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMathWarpType, METADATA_PARAMS(nullptr, 0) }; // 2853936738
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyMathWarpToMesh_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions, METADATA_PARAMS(nullptr, 0) }; // 2247250686
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyMathWarpToMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyMathWarpToMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::NewProp_WarpOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::NewProp_WarpType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::NewProp_WarpType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Deformations" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions, nullptr, "ApplyMathWarpToMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::GeometryScriptLibrary_MeshDeformFunctions_eventApplyMathWarpToMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Statics
	{
		struct GeometryScriptLibrary_MeshDeformFunctions_eventApplyPerlinNoiseToMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelection Selection;
			FGeometryScriptPerlinNoiseOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyPerlinNoiseToMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyPerlinNoiseToMesh_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyPerlinNoiseToMesh_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions, METADATA_PARAMS(nullptr, 0) }; // 2715637817
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyPerlinNoiseToMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyPerlinNoiseToMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Deformations" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions, nullptr, "ApplyPerlinNoiseToMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Statics::GeometryScriptLibrary_MeshDeformFunctions_eventApplyPerlinNoiseToMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics
	{
		struct GeometryScriptLibrary_MeshDeformFunctions_eventApplyTwistWarpToMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptTwistWarpOptions Options;
			FTransform TwistOrientation;
			float TwistAngle;
			float TwistExtent;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TwistOrientation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistExtent;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyTwistWarpToMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyTwistWarpToMesh_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions, METADATA_PARAMS(nullptr, 0) }; // 1046001442
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::NewProp_TwistOrientation = { "TwistOrientation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyTwistWarpToMesh_Parms, TwistOrientation), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::NewProp_TwistAngle = { "TwistAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyTwistWarpToMesh_Parms, TwistAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::NewProp_TwistExtent = { "TwistExtent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyTwistWarpToMesh_Parms, TwistExtent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyTwistWarpToMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDeformFunctions_eventApplyTwistWarpToMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::NewProp_TwistOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::NewProp_TwistAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::NewProp_TwistExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Deformations" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_TwistAngle", "45.000000" },
		{ "CPP_Default_TwistExtent", "50.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions, nullptr, "ApplyTwistWarpToMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::GeometryScriptLibrary_MeshDeformFunctions_eventApplyTwistWarpToMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshDeformFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshDeformFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh, "ApplyBendWarpToMesh" }, // 1785843737
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors, "ApplyDisplaceFromPerVertexVectors" }, // 3897791870
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap, "ApplyDisplaceFromTextureMap" }, // 2419493433
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh, "ApplyFlareWarpToMesh" }, // 3203870523
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh, "ApplyIterativeSmoothingToMesh" }, // 2102761310
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh, "ApplyMathWarpToMesh" }, // 2195885820
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh, "ApplyPerlinNoiseToMesh" }, // 1583299067
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh, "ApplyTwistWarpToMesh" }, // 262861706
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshDeformFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDeformFunctions.h" },
		{ "ScriptName", "GeometryScript_MeshDeformers" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshDeformFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshDeformFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshDeformFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshDeformFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshDeformFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshDeformFunctions>()
	{
		return UGeometryScriptLibrary_MeshDeformFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshDeformFunctions::UGeometryScriptLibrary_MeshDeformFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshDeformFunctions);
	UGeometryScriptLibrary_MeshDeformFunctions::~UGeometryScriptLibrary_MeshDeformFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_Statics::EnumInfo[] = {
		{ EGeometryScriptFlareType_StaticEnum, TEXT("EGeometryScriptFlareType"), &Z_Registration_Info_UEnum_EGeometryScriptFlareType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1380385334U) },
		{ EGeometryScriptMathWarpType_StaticEnum, TEXT("EGeometryScriptMathWarpType"), &Z_Registration_Info_UEnum_EGeometryScriptMathWarpType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2853936738U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptBendWarpOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics::NewStructOps, TEXT("GeometryScriptBendWarpOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptBendWarpOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptBendWarpOptions), 2298344211U) },
		{ FGeometryScriptTwistWarpOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics::NewStructOps, TEXT("GeometryScriptTwistWarpOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptTwistWarpOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptTwistWarpOptions), 1046001442U) },
		{ FGeometryScriptFlareWarpOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics::NewStructOps, TEXT("GeometryScriptFlareWarpOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptFlareWarpOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptFlareWarpOptions), 3304467347U) },
		{ FGeometryScriptPerlinNoiseLayerOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics::NewStructOps, TEXT("GeometryScriptPerlinNoiseLayerOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptPerlinNoiseLayerOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptPerlinNoiseLayerOptions), 636215138U) },
		{ FGeometryScriptMathWarpOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics::NewStructOps, TEXT("GeometryScriptMathWarpOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptMathWarpOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptMathWarpOptions), 2247250686U) },
		{ FGeometryScriptPerlinNoiseOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics::NewStructOps, TEXT("GeometryScriptPerlinNoiseOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptPerlinNoiseOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptPerlinNoiseOptions), 2715637817U) },
		{ FGeometryScriptIterativeMeshSmoothingOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics::NewStructOps, TEXT("GeometryScriptIterativeMeshSmoothingOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptIterativeMeshSmoothingOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptIterativeMeshSmoothingOptions), 2594489819U) },
		{ FGeometryScriptDisplaceFromTextureOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics::NewStructOps, TEXT("GeometryScriptDisplaceFromTextureOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptDisplaceFromTextureOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptDisplaceFromTextureOptions), 3827349367U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions, UGeometryScriptLibrary_MeshDeformFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshDeformFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshDeformFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshDeformFunctions), 1083201322U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_1250144317(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
