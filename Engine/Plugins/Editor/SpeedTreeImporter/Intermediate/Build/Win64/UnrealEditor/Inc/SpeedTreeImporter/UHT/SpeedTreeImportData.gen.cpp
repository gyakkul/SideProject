// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpeedTreeImportData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeedTreeImportData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData();
	SPEEDTREEIMPORTER_API UClass* Z_Construct_UClass_USpeedTreeImportData();
	SPEEDTREEIMPORTER_API UClass* Z_Construct_UClass_USpeedTreeImportData_NoRegister();
	SPEEDTREEIMPORTER_API UEnum* Z_Construct_UEnum_SpeedTreeImporter_EImportGeometryType();
	SPEEDTREEIMPORTER_API UEnum* Z_Construct_UEnum_SpeedTreeImporter_EImportLODType();
	UPackage* Z_Construct_UPackage__Script_SpeedTreeImporter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EImportGeometryType;
	static UEnum* EImportGeometryType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EImportGeometryType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EImportGeometryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SpeedTreeImporter_EImportGeometryType, (UObject*)Z_Construct_UPackage__Script_SpeedTreeImporter(), TEXT("EImportGeometryType"));
		}
		return Z_Registration_Info_UEnum_EImportGeometryType.OuterSingleton;
	}
	template<> SPEEDTREEIMPORTER_API UEnum* StaticEnum<EImportGeometryType>()
	{
		return EImportGeometryType_StaticEnum();
	}
	struct Z_Construct_UEnum_SpeedTreeImporter_EImportGeometryType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SpeedTreeImporter_EImportGeometryType_Statics::Enumerators[] = {
		{ "IGT_3D", (int64)IGT_3D },
		{ "IGT_Billboards", (int64)IGT_Billboards },
		{ "IGT_Both", (int64)IGT_Both },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SpeedTreeImporter_EImportGeometryType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Geometry import type */" },
		{ "IGT_3D.DisplayName", "3D LODs" },
		{ "IGT_3D.Name", "IGT_3D" },
		{ "IGT_Billboards.DisplayName", "Billboards" },
		{ "IGT_Billboards.Name", "IGT_Billboards" },
		{ "IGT_Both.DisplayName", "Both" },
		{ "IGT_Both.Name", "IGT_Both" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
		{ "ToolTip", "Geometry import type" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SpeedTreeImporter_EImportGeometryType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SpeedTreeImporter,
		nullptr,
		"EImportGeometryType",
		"EImportGeometryType",
		Z_Construct_UEnum_SpeedTreeImporter_EImportGeometryType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SpeedTreeImporter_EImportGeometryType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_SpeedTreeImporter_EImportGeometryType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SpeedTreeImporter_EImportGeometryType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SpeedTreeImporter_EImportGeometryType()
	{
		if (!Z_Registration_Info_UEnum_EImportGeometryType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EImportGeometryType.InnerSingleton, Z_Construct_UEnum_SpeedTreeImporter_EImportGeometryType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EImportGeometryType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EImportLODType;
	static UEnum* EImportLODType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EImportLODType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EImportLODType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SpeedTreeImporter_EImportLODType, (UObject*)Z_Construct_UPackage__Script_SpeedTreeImporter(), TEXT("EImportLODType"));
		}
		return Z_Registration_Info_UEnum_EImportLODType.OuterSingleton;
	}
	template<> SPEEDTREEIMPORTER_API UEnum* StaticEnum<EImportLODType>()
	{
		return EImportLODType_StaticEnum();
	}
	struct Z_Construct_UEnum_SpeedTreeImporter_EImportLODType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SpeedTreeImporter_EImportLODType_Statics::Enumerators[] = {
		{ "ILT_PaintedFoliage", (int64)ILT_PaintedFoliage },
		{ "ILT_IndividualActors", (int64)ILT_IndividualActors },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SpeedTreeImporter_EImportLODType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** LOD type **/" },
		{ "ILT_IndividualActors.DisplayName", "Individual Actors" },
		{ "ILT_IndividualActors.Name", "ILT_IndividualActors" },
		{ "ILT_PaintedFoliage.DisplayName", "Painted Foliage" },
		{ "ILT_PaintedFoliage.Name", "ILT_PaintedFoliage" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
		{ "ToolTip", "LOD type *" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SpeedTreeImporter_EImportLODType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SpeedTreeImporter,
		nullptr,
		"EImportLODType",
		"EImportLODType",
		Z_Construct_UEnum_SpeedTreeImporter_EImportLODType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SpeedTreeImporter_EImportLODType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_SpeedTreeImporter_EImportLODType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SpeedTreeImporter_EImportLODType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SpeedTreeImporter_EImportLODType()
	{
		if (!Z_Registration_Info_UEnum_EImportLODType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EImportLODType.InnerSingleton, Z_Construct_UEnum_SpeedTreeImporter_EImportLODType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EImportLODType.InnerSingleton;
	}
	void USpeedTreeImportData::StaticRegisterNativesUSpeedTreeImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpeedTreeImportData);
	UClass* Z_Construct_UClass_USpeedTreeImportData_NoRegister()
	{
		return USpeedTreeImportData::StaticClass();
	}
	struct Z_Construct_UClass_USpeedTreeImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TreeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportGeometryType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImportGeometryType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LODType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeCollision_MetaData[];
#endif
		static void NewProp_IncludeCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MakeMaterialsCheck_MetaData[];
#endif
		static void NewProp_MakeMaterialsCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MakeMaterialsCheck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeNormalMapCheck_MetaData[];
#endif
		static void NewProp_IncludeNormalMapCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeNormalMapCheck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeDetailMapCheck_MetaData[];
#endif
		static void NewProp_IncludeDetailMapCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeDetailMapCheck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeSpecularMapCheck_MetaData[];
#endif
		static void NewProp_IncludeSpecularMapCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeSpecularMapCheck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeBranchSeamSmoothing_MetaData[];
#endif
		static void NewProp_IncludeBranchSeamSmoothing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeBranchSeamSmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeSpeedTreeAO_MetaData[];
#endif
		static void NewProp_IncludeSpeedTreeAO_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeSpeedTreeAO;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeColorAdjustment_MetaData[];
#endif
		static void NewProp_IncludeColorAdjustment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeColorAdjustment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeSubsurface_MetaData[];
#endif
		static void NewProp_IncludeSubsurface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeSubsurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeVertexProcessingCheck_MetaData[];
#endif
		static void NewProp_IncludeVertexProcessingCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeVertexProcessingCheck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeWindCheck_MetaData[];
#endif
		static void NewProp_IncludeWindCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeWindCheck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeSmoothLODCheck_MetaData[];
#endif
		static void NewProp_IncludeSmoothLODCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeSmoothLODCheck;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpeedTreeImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_SpeedTreeImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SpeedTreeImportData.h" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_TreeScale_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Specify the tree scale */" },
		{ "DisplayName", "Tree Scale" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
		{ "ToolTip", "Specify the tree scale" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_TreeScale = { "TreeScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpeedTreeImportData, TreeScale), METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_TreeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_TreeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_ImportGeometryType_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Choose whether to import as a 3D asset, billboard or both */" },
		{ "DisplayName", "Geometry" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
		{ "ToolTip", "Choose whether to import as a 3D asset, billboard or both" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_ImportGeometryType = { "ImportGeometryType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpeedTreeImportData, ImportGeometryType), Z_Construct_UEnum_SpeedTreeImporter_EImportGeometryType, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_ImportGeometryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_ImportGeometryType_MetaData)) }; // 1650687990
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_LODType_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Choose whether painted foliage or individual actor */" },
		{ "DisplayName", "LOD Setup" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
		{ "SpeedTreeVersion", "8" },
		{ "ToolTip", "Choose whether painted foliage or individual actor" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_LODType = { "LODType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpeedTreeImportData, LODType), Z_Construct_UEnum_SpeedTreeImporter_EImportLODType, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_LODType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_LODType_MetaData)) }; // 2562121248
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeCollision_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Include Collision" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
		{ "SpeedTreeVersion", "8" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeCollision_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->IncludeCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeCollision = { "IncludeCollision", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_MakeMaterialsCheck_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Create Materials" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
		{ "SpeedTreeVersion", "8" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_MakeMaterialsCheck_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->MakeMaterialsCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_MakeMaterialsCheck = { "MakeMaterialsCheck", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_MakeMaterialsCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_MakeMaterialsCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_MakeMaterialsCheck_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeNormalMapCheck_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Include Normal Maps" },
		{ "EditCondition", "MakeMaterialsCheck" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeNormalMapCheck_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->IncludeNormalMapCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeNormalMapCheck = { "IncludeNormalMapCheck", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeNormalMapCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeNormalMapCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeNormalMapCheck_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeDetailMapCheck_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Include Detail Maps" },
		{ "EditCondition", "MakeMaterialsCheck" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeDetailMapCheck_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->IncludeDetailMapCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeDetailMapCheck = { "IncludeDetailMapCheck", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeDetailMapCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeDetailMapCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeDetailMapCheck_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpecularMapCheck_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Include Specular Maps" },
		{ "EditCondition", "MakeMaterialsCheck" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpecularMapCheck_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->IncludeSpecularMapCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpecularMapCheck = { "IncludeSpecularMapCheck", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpecularMapCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpecularMapCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpecularMapCheck_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeBranchSeamSmoothing_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Include Branch Seam Smoothing" },
		{ "EditCondition", "MakeMaterialsCheck" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeBranchSeamSmoothing_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->IncludeBranchSeamSmoothing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeBranchSeamSmoothing = { "IncludeBranchSeamSmoothing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeBranchSeamSmoothing_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeBranchSeamSmoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeBranchSeamSmoothing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpeedTreeAO_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Include SpeedTree AO" },
		{ "EditCondition", "MakeMaterialsCheck" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpeedTreeAO_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->IncludeSpeedTreeAO = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpeedTreeAO = { "IncludeSpeedTreeAO", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpeedTreeAO_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpeedTreeAO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpeedTreeAO_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeColorAdjustment_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Include Random Color Variation" },
		{ "EditCondition", "MakeMaterialsCheck" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeColorAdjustment_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->IncludeColorAdjustment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeColorAdjustment = { "IncludeColorAdjustment", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeColorAdjustment_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeColorAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeColorAdjustment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSubsurface_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Include Subsurface" },
		{ "EditCondition", "MakeMaterialsCheck" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
		{ "SpeedTreeVersion", "8" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSubsurface_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->IncludeSubsurface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSubsurface = { "IncludeSubsurface", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSubsurface_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSubsurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSubsurface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeVertexProcessingCheck_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Include Vertex Processing" },
		{ "EditCondition", "MakeMaterialsCheck" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
		{ "SpeedTreeVersion", "8" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeVertexProcessingCheck_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->IncludeVertexProcessingCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeVertexProcessingCheck = { "IncludeVertexProcessingCheck", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeVertexProcessingCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeVertexProcessingCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeVertexProcessingCheck_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeWindCheck_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Include Wind" },
		{ "EditCondition", "IncludeVertexProcessingCheck" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeWindCheck_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->IncludeWindCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeWindCheck = { "IncludeWindCheck", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeWindCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeWindCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeWindCheck_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSmoothLODCheck_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Include Smooth LOD" },
		{ "EditCondition", "IncludeVertexProcessingCheck" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSmoothLODCheck_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->IncludeSmoothLODCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSmoothLODCheck = { "IncludeSmoothLODCheck", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSmoothLODCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSmoothLODCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSmoothLODCheck_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpeedTreeImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_TreeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_ImportGeometryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_LODType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_MakeMaterialsCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeNormalMapCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeDetailMapCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpecularMapCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeBranchSeamSmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpeedTreeAO,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeColorAdjustment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSubsurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeVertexProcessingCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeWindCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSmoothLODCheck,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpeedTreeImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpeedTreeImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpeedTreeImportData_Statics::ClassParams = {
		&USpeedTreeImportData::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpeedTreeImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::PropPointers),
		0,
		0x000814A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpeedTreeImportData()
	{
		if (!Z_Registration_Info_UClass_USpeedTreeImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpeedTreeImportData.OuterSingleton, Z_Construct_UClass_USpeedTreeImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpeedTreeImportData.OuterSingleton;
	}
	template<> SPEEDTREEIMPORTER_API UClass* StaticClass<USpeedTreeImportData>()
	{
		return USpeedTreeImportData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpeedTreeImportData);
	USpeedTreeImportData::~USpeedTreeImportData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportData_h_Statics::EnumInfo[] = {
		{ EImportGeometryType_StaticEnum, TEXT("EImportGeometryType"), &Z_Registration_Info_UEnum_EImportGeometryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1650687990U) },
		{ EImportLODType_StaticEnum, TEXT("EImportLODType"), &Z_Registration_Info_UEnum_EImportLODType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2562121248U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpeedTreeImportData, USpeedTreeImportData::StaticClass, TEXT("USpeedTreeImportData"), &Z_Registration_Info_UClass_USpeedTreeImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpeedTreeImportData), 2344993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportData_h_4211857323(TEXT("/Script/SpeedTreeImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportData_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
