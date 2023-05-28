// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Exporters/FbxExportOption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxExportOption() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UFbxExportOption();
	UNREALED_API UClass* Z_Construct_UClass_UFbxExportOption_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFbxExportCompatibility();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFbxExportCompatibility;
	static UEnum* EFbxExportCompatibility_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFbxExportCompatibility.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFbxExportCompatibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFbxExportCompatibility, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFbxExportCompatibility"));
		}
		return Z_Registration_Info_UEnum_EFbxExportCompatibility.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFbxExportCompatibility>()
	{
		return EFbxExportCompatibility_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EFbxExportCompatibility_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EFbxExportCompatibility_Statics::Enumerators[] = {
		{ "EFbxExportCompatibility::FBX_2011", (int64)EFbxExportCompatibility::FBX_2011 },
		{ "EFbxExportCompatibility::FBX_2012", (int64)EFbxExportCompatibility::FBX_2012 },
		{ "EFbxExportCompatibility::FBX_2013", (int64)EFbxExportCompatibility::FBX_2013 },
		{ "EFbxExportCompatibility::FBX_2014", (int64)EFbxExportCompatibility::FBX_2014 },
		{ "EFbxExportCompatibility::FBX_2016", (int64)EFbxExportCompatibility::FBX_2016 },
		{ "EFbxExportCompatibility::FBX_2018", (int64)EFbxExportCompatibility::FBX_2018 },
		{ "EFbxExportCompatibility::FBX_2019", (int64)EFbxExportCompatibility::FBX_2019 },
		{ "EFbxExportCompatibility::FBX_2020", (int64)EFbxExportCompatibility::FBX_2020 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EFbxExportCompatibility_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Fbx export compatibility\n" },
		{ "FBX_2011.Name", "EFbxExportCompatibility::FBX_2011" },
		{ "FBX_2012.Name", "EFbxExportCompatibility::FBX_2012" },
		{ "FBX_2013.Name", "EFbxExportCompatibility::FBX_2013" },
		{ "FBX_2014.Name", "EFbxExportCompatibility::FBX_2014" },
		{ "FBX_2016.Name", "EFbxExportCompatibility::FBX_2016" },
		{ "FBX_2018.Name", "EFbxExportCompatibility::FBX_2018" },
		{ "FBX_2019.Name", "EFbxExportCompatibility::FBX_2019" },
		{ "FBX_2020.Name", "EFbxExportCompatibility::FBX_2020" },
		{ "ModuleRelativePath", "Classes/Exporters/FbxExportOption.h" },
		{ "ToolTip", "Fbx export compatibility" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EFbxExportCompatibility_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EFbxExportCompatibility",
		"EFbxExportCompatibility",
		Z_Construct_UEnum_UnrealEd_EFbxExportCompatibility_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFbxExportCompatibility_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EFbxExportCompatibility_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFbxExportCompatibility_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EFbxExportCompatibility()
	{
		if (!Z_Registration_Info_UEnum_EFbxExportCompatibility.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFbxExportCompatibility.InnerSingleton, Z_Construct_UEnum_UnrealEd_EFbxExportCompatibility_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFbxExportCompatibility.InnerSingleton;
	}
	void UFbxExportOption::StaticRegisterNativesUFbxExportOption()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFbxExportOption);
	UClass* Z_Construct_UClass_UFbxExportOption_NoRegister()
	{
		return UFbxExportOption::StaticClass();
	}
	struct Z_Construct_UClass_UFbxExportOption_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FbxExportCompatibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FbxExportCompatibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FbxExportCompatibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bASCII_MetaData[];
#endif
		static void NewProp_bASCII_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bASCII;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceFrontXAxis_MetaData[];
#endif
		static void NewProp_bForceFrontXAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFrontXAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColor_MetaData[];
#endif
		static void NewProp_VertexColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_VertexColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelOfDetail_MetaData[];
#endif
		static void NewProp_LevelOfDetail_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LevelOfDetail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[];
#endif
		static void NewProp_Collision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Collision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportMorphTargets_MetaData[];
#endif
		static void NewProp_bExportMorphTargets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportMorphTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportPreviewMesh_MetaData[];
#endif
		static void NewProp_bExportPreviewMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportPreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapSkeletalMotionToRoot_MetaData[];
#endif
		static void NewProp_MapSkeletalMotionToRoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MapSkeletalMotionToRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportLocalTime_MetaData[];
#endif
		static void NewProp_bExportLocalTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportLocalTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxExportOption_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxExportOption_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Exporters/FbxExportOption.h" },
		{ "ModuleRelativePath", "Classes/Exporters/FbxExportOption.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxExportOption_Statics::NewProp_FbxExportCompatibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxExportOption_Statics::NewProp_FbxExportCompatibility_MetaData[] = {
		{ "Category", "Exporter" },
		{ "Comment", "/** This will set the fbx sdk compatibility when exporting to fbx file. The default value is 2013 */" },
		{ "ModuleRelativePath", "Classes/Exporters/FbxExportOption.h" },
		{ "ToolTip", "This will set the fbx sdk compatibility when exporting to fbx file. The default value is 2013" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFbxExportOption_Statics::NewProp_FbxExportCompatibility = { "FbxExportCompatibility", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxExportOption, FbxExportCompatibility), Z_Construct_UEnum_UnrealEd_EFbxExportCompatibility, METADATA_PARAMS(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_FbxExportCompatibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_FbxExportCompatibility_MetaData)) }; // 987389426
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bASCII_MetaData[] = {
		{ "Category", "Exporter" },
		{ "Comment", "/** If enabled, save as ascii instead of binary */" },
		{ "ModuleRelativePath", "Classes/Exporters/FbxExportOption.h" },
		{ "ToolTip", "If enabled, save as ascii instead of binary" },
	};
#endif
	void Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bASCII_SetBit(void* Obj)
	{
		((UFbxExportOption*)Obj)->bASCII = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bASCII = { "bASCII", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxExportOption), &Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bASCII_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bASCII_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bASCII_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bForceFrontXAxis_MetaData[] = {
		{ "Category", "Exporter" },
		{ "Comment", "/** If enabled, export with X axis as the front axis instead of default -Y */" },
		{ "ModuleRelativePath", "Classes/Exporters/FbxExportOption.h" },
		{ "ToolTip", "If enabled, export with X axis as the front axis instead of default -Y" },
	};
#endif
	void Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bForceFrontXAxis_SetBit(void* Obj)
	{
		((UFbxExportOption*)Obj)->bForceFrontXAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bForceFrontXAxis = { "bForceFrontXAxis", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxExportOption), &Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bForceFrontXAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bForceFrontXAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bForceFrontXAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxExportOption_Statics::NewProp_VertexColor_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If enabled, export vertex color */" },
		{ "ModuleRelativePath", "Classes/Exporters/FbxExportOption.h" },
		{ "ToolTip", "If enabled, export vertex color" },
	};
#endif
	void Z_Construct_UClass_UFbxExportOption_Statics::NewProp_VertexColor_SetBit(void* Obj)
	{
		((UFbxExportOption*)Obj)->VertexColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxExportOption_Statics::NewProp_VertexColor = { "VertexColor", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxExportOption), &Z_Construct_UClass_UFbxExportOption_Statics::NewProp_VertexColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_VertexColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_VertexColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxExportOption_Statics::NewProp_LevelOfDetail_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If enabled, export the level of detail */" },
		{ "ModuleRelativePath", "Classes/Exporters/FbxExportOption.h" },
		{ "ToolTip", "If enabled, export the level of detail" },
	};
#endif
	void Z_Construct_UClass_UFbxExportOption_Statics::NewProp_LevelOfDetail_SetBit(void* Obj)
	{
		((UFbxExportOption*)Obj)->LevelOfDetail = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxExportOption_Statics::NewProp_LevelOfDetail = { "LevelOfDetail", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxExportOption), &Z_Construct_UClass_UFbxExportOption_Statics::NewProp_LevelOfDetail_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_LevelOfDetail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_LevelOfDetail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxExportOption_Statics::NewProp_Collision_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** If enabled, export collision */" },
		{ "ModuleRelativePath", "Classes/Exporters/FbxExportOption.h" },
		{ "ToolTip", "If enabled, export collision" },
	};
#endif
	void Z_Construct_UClass_UFbxExportOption_Statics::NewProp_Collision_SetBit(void* Obj)
	{
		((UFbxExportOption*)Obj)->Collision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxExportOption_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxExportOption), &Z_Construct_UClass_UFbxExportOption_Statics::NewProp_Collision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_Collision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_Collision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportMorphTargets_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** If enabled, export the morph targets */" },
		{ "ModuleRelativePath", "Classes/Exporters/FbxExportOption.h" },
		{ "ToolTip", "If enabled, export the morph targets" },
	};
#endif
	void Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportMorphTargets_SetBit(void* Obj)
	{
		((UFbxExportOption*)Obj)->bExportMorphTargets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportMorphTargets = { "bExportMorphTargets", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxExportOption), &Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportMorphTargets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportMorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportMorphTargets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportPreviewMesh_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** If enable, the preview mesh link to the exported animations will be also exported. */" },
		{ "ModuleRelativePath", "Classes/Exporters/FbxExportOption.h" },
		{ "ToolTip", "If enable, the preview mesh link to the exported animations will be also exported." },
	};
#endif
	void Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportPreviewMesh_SetBit(void* Obj)
	{
		((UFbxExportOption*)Obj)->bExportPreviewMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportPreviewMesh = { "bExportPreviewMesh", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxExportOption), &Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportPreviewMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportPreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportPreviewMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxExportOption_Statics::NewProp_MapSkeletalMotionToRoot_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** If enable, Map skeletal actor motion to the root bone of the skeleton. */" },
		{ "ModuleRelativePath", "Classes/Exporters/FbxExportOption.h" },
		{ "ToolTip", "If enable, Map skeletal actor motion to the root bone of the skeleton." },
	};
#endif
	void Z_Construct_UClass_UFbxExportOption_Statics::NewProp_MapSkeletalMotionToRoot_SetBit(void* Obj)
	{
		((UFbxExportOption*)Obj)->MapSkeletalMotionToRoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxExportOption_Statics::NewProp_MapSkeletalMotionToRoot = { "MapSkeletalMotionToRoot", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxExportOption), &Z_Construct_UClass_UFbxExportOption_Statics::NewProp_MapSkeletalMotionToRoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_MapSkeletalMotionToRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_MapSkeletalMotionToRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportLocalTime_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** If enabled, export sequencer animation in its local time, relative to its sequence. */" },
		{ "ModuleRelativePath", "Classes/Exporters/FbxExportOption.h" },
		{ "ToolTip", "If enabled, export sequencer animation in its local time, relative to its sequence." },
	};
#endif
	void Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportLocalTime_SetBit(void* Obj)
	{
		((UFbxExportOption*)Obj)->bExportLocalTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportLocalTime = { "bExportLocalTime", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxExportOption), &Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportLocalTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportLocalTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportLocalTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxExportOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxExportOption_Statics::NewProp_FbxExportCompatibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxExportOption_Statics::NewProp_FbxExportCompatibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bASCII,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bForceFrontXAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxExportOption_Statics::NewProp_VertexColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxExportOption_Statics::NewProp_LevelOfDetail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxExportOption_Statics::NewProp_Collision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportMorphTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportPreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxExportOption_Statics::NewProp_MapSkeletalMotionToRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportLocalTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxExportOption_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxExportOption>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFbxExportOption_Statics::ClassParams = {
		&UFbxExportOption::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxExportOption_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFbxExportOption_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxExportOption_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxExportOption_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxExportOption()
	{
		if (!Z_Registration_Info_UClass_UFbxExportOption.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFbxExportOption.OuterSingleton, Z_Construct_UClass_UFbxExportOption_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFbxExportOption.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UFbxExportOption>()
	{
		return UFbxExportOption::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxExportOption);
	UFbxExportOption::~UFbxExportOption() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_FbxExportOption_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_FbxExportOption_h_Statics::EnumInfo[] = {
		{ EFbxExportCompatibility_StaticEnum, TEXT("EFbxExportCompatibility"), &Z_Registration_Info_UEnum_EFbxExportCompatibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 987389426U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_FbxExportOption_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFbxExportOption, UFbxExportOption::StaticClass, TEXT("UFbxExportOption"), &Z_Registration_Info_UClass_UFbxExportOption, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFbxExportOption), 2363066272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_FbxExportOption_h_1897246171(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_FbxExportOption_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_FbxExportOption_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_FbxExportOption_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_FbxExportOption_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
