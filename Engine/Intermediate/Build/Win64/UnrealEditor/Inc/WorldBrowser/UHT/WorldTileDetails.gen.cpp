// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tiles/WorldTileDetails.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Level.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldTileDetails() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSimplificationDetails();
	UPackage* Z_Construct_UPackage__Script_WorldBrowser();
	WORLDBROWSER_API UClass* Z_Construct_UClass_UWorldTileDetails();
	WORLDBROWSER_API UClass* Z_Construct_UClass_UWorldTileDetails_NoRegister();
	WORLDBROWSER_API UScriptStruct* Z_Construct_UScriptStruct_FTileLODEntryDetails();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TileLODEntryDetails;
class UScriptStruct* FTileLODEntryDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TileLODEntryDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TileLODEntryDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTileLODEntryDetails, (UObject*)Z_Construct_UPackage__Script_WorldBrowser(), TEXT("TileLODEntryDetails"));
	}
	return Z_Registration_Info_UScriptStruct_TileLODEntryDetails.OuterSingleton;
}
template<> WORLDBROWSER_API UScriptStruct* StaticStruct<FTileLODEntryDetails>()
{
	return FTileLODEntryDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeDistance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RelativeDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplificationDetails_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SimplificationDetails;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////\n// FTileLODEntryDetails\n//\n// Helper class to hold tile LOD level description\n//\n" },
		{ "ModuleRelativePath", "Private/Tiles/WorldTileDetails.h" },
		{ "ToolTip", "FTileLODEntryDetails\n\nHelper class to hold tile LOD level description" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTileLODEntryDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::NewProp_LODIndex_MetaData[] = {
		{ "Category", "LODDetails" },
		{ "Comment", "// Maximum deviation of details percentage\n" },
		{ "ModuleRelativePath", "Private/Tiles/WorldTileDetails.h" },
		{ "ToolTip", "Maximum deviation of details percentage" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTileLODEntryDetails, LODIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::NewProp_RelativeDistance_MetaData[] = {
		{ "Category", "LODDetails" },
		{ "ClampMax", "10000000" },
		{ "ClampMin", "10" },
		{ "Comment", "// Relative to original tile streaming distance (Absolute Distance = Layer Streaming Distance + Relative Distance)\n" },
		{ "ModuleRelativePath", "Private/Tiles/WorldTileDetails.h" },
		{ "ToolTip", "Relative to original tile streaming distance (Absolute Distance = Layer Streaming Distance + Relative Distance)" },
		{ "UIMax", "500000" },
		{ "UIMin", "10" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::NewProp_RelativeDistance = { "RelativeDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTileLODEntryDetails, RelativeDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::NewProp_RelativeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::NewProp_RelativeDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::NewProp_SimplificationDetails_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Private/Tiles/WorldTileDetails.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::NewProp_SimplificationDetails = { "SimplificationDetails", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTileLODEntryDetails, SimplificationDetails), Z_Construct_UScriptStruct_FLevelSimplificationDetails, METADATA_PARAMS(Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::NewProp_SimplificationDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::NewProp_SimplificationDetails_MetaData)) }; // 2261177661
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::NewProp_RelativeDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::NewProp_SimplificationDetails,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldBrowser,
		nullptr,
		&NewStructOps,
		"TileLODEntryDetails",
		sizeof(FTileLODEntryDetails),
		alignof(FTileLODEntryDetails),
		Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTileLODEntryDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_TileLODEntryDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TileLODEntryDetails.InnerSingleton, Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TileLODEntryDetails.InnerSingleton;
	}
	void UWorldTileDetails::StaticRegisterNativesUWorldTileDetails()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldTileDetails);
	UClass* Z_Construct_UClass_UWorldTileDetails_NoRegister()
	{
		return UWorldTileDetails::StaticClass();
	}
	struct Z_Construct_UClass_UWorldTileDetails_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTileEditable_MetaData[];
#endif
		static void NewProp_bTileEditable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileEditable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentPackageName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParentPackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsolutePosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbsolutePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideInTileView_MetaData[];
#endif
		static void NewProp_bHideInTileView_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideInTileView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LOD1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LOD2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LOD3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD4_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LOD4;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldTileDetails_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldBrowser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldTileDetails_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////\n// UWorldTileDetails\n// \n// Helper class to hold world tile information\n// Holding this information in UObject gives us ability to use property editors and support undo operations\n// \n" },
		{ "IncludePath", "Tiles/WorldTileDetails.h" },
		{ "ModuleRelativePath", "Private/Tiles/WorldTileDetails.h" },
		{ "ToolTip", "UWorldTileDetails\n\nHelper class to hold world tile information\nHolding this information in UObject gives us ability to use property editors and support undo operations" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_bTileEditable_MetaData[] = {
		{ "Category", "Tile" },
		{ "Comment", "// Whether this tile properties can be edited via details panel\n" },
		{ "ModuleRelativePath", "Private/Tiles/WorldTileDetails.h" },
		{ "ToolTip", "Whether this tile properties can be edited via details panel" },
	};
#endif
	void Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_bTileEditable_SetBit(void* Obj)
	{
		((UWorldTileDetails*)Obj)->bTileEditable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_bTileEditable = { "bTileEditable", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldTileDetails), &Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_bTileEditable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_bTileEditable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_bTileEditable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_PackageName_MetaData[] = {
		{ "Category", "Tile" },
		{ "Comment", "// Tile long package name (readonly)\x09\n" },
		{ "ModuleRelativePath", "Private/Tiles/WorldTileDetails.h" },
		{ "ToolTip", "Tile long package name (readonly)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldTileDetails, PackageName), METADATA_PARAMS(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_PackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_PackageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_ParentPackageName_MetaData[] = {
		{ "Category", "Tile" },
		{ "Comment", "// Parent tile long package name\x09\n" },
		{ "ModuleRelativePath", "Private/Tiles/WorldTileDetails.h" },
		{ "ToolTip", "Parent tile long package name" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_ParentPackageName = { "ParentPackageName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldTileDetails, ParentPackageName), METADATA_PARAMS(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_ParentPackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_ParentPackageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Tile" },
		{ "Comment", "// Tile position in the world, relative to parent \n" },
		{ "ModuleRelativePath", "Private/Tiles/WorldTileDetails.h" },
		{ "ToolTip", "Tile position in the world, relative to parent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldTileDetails, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_AbsolutePosition_MetaData[] = {
		{ "Category", "Tile" },
		{ "Comment", "// Tile absolute position in the world (readonly)\n" },
		{ "ModuleRelativePath", "Private/Tiles/WorldTileDetails.h" },
		{ "ToolTip", "Tile absolute position in the world (readonly)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_AbsolutePosition = { "AbsolutePosition", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldTileDetails, AbsolutePosition), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_AbsolutePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_AbsolutePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_ZOrder_MetaData[] = {
		{ "Category", "Tile" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "-1000" },
		{ "Comment", "// Tile sorting order\n" },
		{ "ModuleRelativePath", "Private/Tiles/WorldTileDetails.h" },
		{ "ToolTip", "Tile sorting order" },
		{ "UIMax", "1000" },
		{ "UIMin", "-1000" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldTileDetails, ZOrder), METADATA_PARAMS(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_ZOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_ZOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_bHideInTileView_MetaData[] = {
		{ "Category", "Tile" },
		{ "Comment", "// Whether to hide tile in the world composition tile view\n" },
		{ "ModuleRelativePath", "Private/Tiles/WorldTileDetails.h" },
		{ "ToolTip", "Whether to hide tile in the world composition tile view" },
	};
#endif
	void Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_bHideInTileView_SetBit(void* Obj)
	{
		((UWorldTileDetails*)Obj)->bHideInTileView = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_bHideInTileView = { "bHideInTileView", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldTileDetails), &Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_bHideInTileView_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_bHideInTileView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_bHideInTileView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_NumLOD_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "Comment", "// LOD entries number\n" },
		{ "ModuleRelativePath", "Private/Tiles/WorldTileDetails.h" },
		{ "ToolTip", "LOD entries number" },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_NumLOD = { "NumLOD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldTileDetails, NumLOD), METADATA_PARAMS(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_NumLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_NumLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_LOD1_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "ModuleRelativePath", "Private/Tiles/WorldTileDetails.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_LOD1 = { "LOD1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldTileDetails, LOD1), Z_Construct_UScriptStruct_FTileLODEntryDetails, METADATA_PARAMS(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_LOD1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_LOD1_MetaData)) }; // 3369514309
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_LOD2_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "ModuleRelativePath", "Private/Tiles/WorldTileDetails.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_LOD2 = { "LOD2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldTileDetails, LOD2), Z_Construct_UScriptStruct_FTileLODEntryDetails, METADATA_PARAMS(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_LOD2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_LOD2_MetaData)) }; // 3369514309
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_LOD3_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "ModuleRelativePath", "Private/Tiles/WorldTileDetails.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_LOD3 = { "LOD3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldTileDetails, LOD3), Z_Construct_UScriptStruct_FTileLODEntryDetails, METADATA_PARAMS(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_LOD3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_LOD3_MetaData)) }; // 3369514309
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_LOD4_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "ModuleRelativePath", "Private/Tiles/WorldTileDetails.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_LOD4 = { "LOD4", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldTileDetails, LOD4), Z_Construct_UScriptStruct_FTileLODEntryDetails, METADATA_PARAMS(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_LOD4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_LOD4_MetaData)) }; // 3369514309
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldTileDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_bTileEditable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_PackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_ParentPackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_AbsolutePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_ZOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_bHideInTileView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_NumLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_LOD1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_LOD2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_LOD3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldTileDetails_Statics::NewProp_LOD4,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldTileDetails_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldTileDetails>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldTileDetails_Statics::ClassParams = {
		&UWorldTileDetails::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldTileDetails_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldTileDetails_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldTileDetails_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldTileDetails_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldTileDetails()
	{
		if (!Z_Registration_Info_UClass_UWorldTileDetails.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldTileDetails.OuterSingleton, Z_Construct_UClass_UWorldTileDetails_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldTileDetails.OuterSingleton;
	}
	template<> WORLDBROWSER_API UClass* StaticClass<UWorldTileDetails>()
	{
		return UWorldTileDetails::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldTileDetails);
	UWorldTileDetails::~UWorldTileDetails() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_Statics::ScriptStructInfo[] = {
		{ FTileLODEntryDetails::StaticStruct, Z_Construct_UScriptStruct_FTileLODEntryDetails_Statics::NewStructOps, TEXT("TileLODEntryDetails"), &Z_Registration_Info_UScriptStruct_TileLODEntryDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTileLODEntryDetails), 3369514309U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldTileDetails, UWorldTileDetails::StaticClass, TEXT("UWorldTileDetails"), &Z_Registration_Info_UClass_UWorldTileDetails, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldTileDetails), 1911046472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_870617852(TEXT("/Script/WorldBrowser"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
