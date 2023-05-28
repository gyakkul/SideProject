// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/FbxAnimSequenceImportData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxAnimSequenceImportData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Interval();
	UNREALED_API UClass* Z_Construct_UClass_UFbxAnimSequenceImportData();
	UNREALED_API UClass* Z_Construct_UClass_UFbxAnimSequenceImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxAssetImportData();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFBXAnimationLengthImportType();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFBXAnimationLengthImportType;
	static UEnum* EFBXAnimationLengthImportType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFBXAnimationLengthImportType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFBXAnimationLengthImportType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFBXAnimationLengthImportType, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFBXAnimationLengthImportType"));
		}
		return Z_Registration_Info_UEnum_EFBXAnimationLengthImportType.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFBXAnimationLengthImportType>()
	{
		return EFBXAnimationLengthImportType_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EFBXAnimationLengthImportType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EFBXAnimationLengthImportType_Statics::Enumerators[] = {
		{ "FBXALIT_ExportedTime", (int64)FBXALIT_ExportedTime },
		{ "FBXALIT_AnimatedKey", (int64)FBXALIT_AnimatedKey },
		{ "FBXALIT_SetRange", (int64)FBXALIT_SetRange },
		{ "FBXALIT_MAX", (int64)FBXALIT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EFBXAnimationLengthImportType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Animation length type when importing */" },
		{ "FBXALIT_AnimatedKey.Comment", "/** Will import the range of frames that have animation. Can be useful if the exported range is longer than the actual animation in the FBX file */" },
		{ "FBXALIT_AnimatedKey.DisplayName", "Animated Time" },
		{ "FBXALIT_AnimatedKey.Name", "FBXALIT_AnimatedKey" },
		{ "FBXALIT_AnimatedKey.ToolTip", "Will import the range of frames that have animation. Can be useful if the exported range is longer than the actual animation in the FBX file" },
		{ "FBXALIT_ExportedTime.Comment", "/** This option imports animation frames based on what is defined at the time of export */" },
		{ "FBXALIT_ExportedTime.DisplayName", "Exported Time" },
		{ "FBXALIT_ExportedTime.Name", "FBXALIT_ExportedTime" },
		{ "FBXALIT_ExportedTime.ToolTip", "This option imports animation frames based on what is defined at the time of export" },
		{ "FBXALIT_MAX.Name", "FBXALIT_MAX" },
		{ "FBXALIT_SetRange.Comment", "/** This will enable the Start Frame and End Frame properties for you to define the frames of animation to import */" },
		{ "FBXALIT_SetRange.DisplayName", "Set Range" },
		{ "FBXALIT_SetRange.Name", "FBXALIT_SetRange" },
		{ "FBXALIT_SetRange.ToolTip", "This will enable the Start Frame and End Frame properties for you to define the frames of animation to import" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "Animation length type when importing" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EFBXAnimationLengthImportType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EFBXAnimationLengthImportType",
		"EFBXAnimationLengthImportType",
		Z_Construct_UEnum_UnrealEd_EFBXAnimationLengthImportType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFBXAnimationLengthImportType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EFBXAnimationLengthImportType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFBXAnimationLengthImportType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EFBXAnimationLengthImportType()
	{
		if (!Z_Registration_Info_UEnum_EFBXAnimationLengthImportType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFBXAnimationLengthImportType.InnerSingleton, Z_Construct_UEnum_UnrealEd_EFBXAnimationLengthImportType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFBXAnimationLengthImportType.InnerSingleton;
	}
	void UFbxAnimSequenceImportData::StaticRegisterNativesUFbxAnimSequenceImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFbxAnimSequenceImportData);
	UClass* Z_Construct_UClass_UFbxAnimSequenceImportData_NoRegister()
	{
		return UFbxAnimSequenceImportData::StaticClass();
	}
	struct Z_Construct_UClass_UFbxAnimSequenceImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportMeshesInBoneHierarchy_MetaData[];
#endif
		static void NewProp_bImportMeshesInBoneHierarchy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportMeshesInBoneHierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationLength_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameImportRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameImportRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultSampleRate_MetaData[];
#endif
		static void NewProp_bUseDefaultSampleRate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultSampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomSampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CustomSampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToClosestFrameBoundary_MetaData[];
#endif
		static void NewProp_bSnapToClosestFrameBoundary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToClosestFrameBoundary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAnimationName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceAnimationName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportCustomAttribute_MetaData[];
#endif
		static void NewProp_bImportCustomAttribute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportCustomAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteExistingCustomAttributeCurves_MetaData[];
#endif
		static void NewProp_bDeleteExistingCustomAttributeCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteExistingCustomAttributeCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteExistingNonCurveCustomAttributes_MetaData[];
#endif
		static void NewProp_bDeleteExistingNonCurveCustomAttributes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteExistingNonCurveCustomAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportBoneTracks_MetaData[];
#endif
		static void NewProp_bImportBoneTracks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportBoneTracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetMaterialDriveParameterOnCustomAttribute_MetaData[];
#endif
		static void NewProp_bSetMaterialDriveParameterOnCustomAttribute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetMaterialDriveParameterOnCustomAttribute;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialCurveSuffixes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialCurveSuffixes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialCurveSuffixes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveRedundantKeys_MetaData[];
#endif
		static void NewProp_bRemoveRedundantKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveRedundantKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteExistingMorphTargetCurves_MetaData[];
#endif
		static void NewProp_bDeleteExistingMorphTargetCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteExistingMorphTargetCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoNotImportCurveWithZero_MetaData[];
#endif
		static void NewProp_bDoNotImportCurveWithZero_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoNotImportCurveWithZero;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveLocalTransform_MetaData[];
#endif
		static void NewProp_bPreserveLocalTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveLocalTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFbxAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Import data and options used when importing any mesh from FBX\n*/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FbxAnimSequenceImportData.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "Import data and options used when importing any mesh from FBX" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** If checked, meshes nested in bone hierarchies will be imported instead of being converted to bones. */" },
		{ "ImportType", "Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "If checked, meshes nested in bone hierarchies will be imported instead of being converted to bones." },
	};
#endif
	void Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_SetBit(void* Obj)
	{
		((UFbxAnimSequenceImportData*)Obj)->bImportMeshesInBoneHierarchy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportMeshesInBoneHierarchy = { "bImportMeshesInBoneHierarchy", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxAnimSequenceImportData), &Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_AnimationLength_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Which animation range to import. The one defined at Exported, at Animated time or define a range manually */" },
		{ "DisplayName", "Animation Length" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "Which animation range to import. The one defined at Exported, at Animated time or define a range manually" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_AnimationLength = { "AnimationLength", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxAnimSequenceImportData, AnimationLength), Z_Construct_UEnum_UnrealEd_EFBXAnimationLengthImportType, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_AnimationLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_AnimationLength_MetaData)) }; // 1214527955
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_StartFrame_MetaData[] = {
		{ "Comment", "/** Start frame when Set Range is used in Animation Length */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "Start frame when Set Range is used in Animation Length" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxAnimSequenceImportData, StartFrame_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_StartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_StartFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_EndFrame_MetaData[] = {
		{ "Comment", "/** End frame when Set Range is used in Animation Length  */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "End frame when Set Range is used in Animation Length" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_EndFrame = { "EndFrame", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxAnimSequenceImportData, EndFrame_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_EndFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_EndFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_FrameImportRange_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Frame range used when Set Range is used in Animation Length */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "Frame range used when Set Range is used in Animation Length" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_FrameImportRange = { "FrameImportRange", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxAnimSequenceImportData, FrameImportRange), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_FrameImportRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_FrameImportRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bUseDefaultSampleRate_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "If enabled, samples all animation curves to 30 FPS" },
	};
#endif
	void Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bUseDefaultSampleRate_SetBit(void* Obj)
	{
		((UFbxAnimSequenceImportData*)Obj)->bUseDefaultSampleRate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bUseDefaultSampleRate = { "bUseDefaultSampleRate", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxAnimSequenceImportData), &Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bUseDefaultSampleRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bUseDefaultSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bUseDefaultSampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_CustomSampleRate_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ClampMax", "48000" },
		{ "ClampMin", "0" },
		{ "EditCondition", "!bUseDefaultSampleRate" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "Sample fbx animation data at the specified sample rate, 0 find automaticaly the best sample rate" },
		{ "UIMax", "60" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_CustomSampleRate = { "CustomSampleRate", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxAnimSequenceImportData, CustomSampleRate), METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_CustomSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_CustomSampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bSnapToClosestFrameBoundary_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "If enabled, snaps the animation to the closest frame boundary using the import sampling rate" },
	};
#endif
	void Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bSnapToClosestFrameBoundary_SetBit(void* Obj)
	{
		((UFbxAnimSequenceImportData*)Obj)->bSnapToClosestFrameBoundary = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bSnapToClosestFrameBoundary = { "bSnapToClosestFrameBoundary", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxAnimSequenceImportData), &Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bSnapToClosestFrameBoundary_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bSnapToClosestFrameBoundary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bSnapToClosestFrameBoundary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_SourceAnimationName_MetaData[] = {
		{ "Comment", "/** Name of source animation that was imported, used to reimport correct animation from the FBX file */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "Name of source animation that was imported, used to reimport correct animation from the FBX file" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_SourceAnimationName = { "SourceAnimationName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxAnimSequenceImportData, SourceAnimationName), METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_SourceAnimationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_SourceAnimationName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportCustomAttribute_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** If true, import node attributes as either Animation Curves or Animation Attributes */" },
		{ "DisplayName", "Import Attributes as Curves or Animation Attributes" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "If true, import node attributes as either Animation Curves or Animation Attributes" },
	};
#endif
	void Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportCustomAttribute_SetBit(void* Obj)
	{
		((UFbxAnimSequenceImportData*)Obj)->bImportCustomAttribute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportCustomAttribute = { "bImportCustomAttribute", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxAnimSequenceImportData), &Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportCustomAttribute_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportCustomAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportCustomAttribute_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingCustomAttributeCurves_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** If true, all previous node attributes imported as Animation Curves will be deleted when doing a re-import. */" },
		{ "DisplayName", "Delete existing Animation Curves" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "If true, all previous node attributes imported as Animation Curves will be deleted when doing a re-import." },
	};
#endif
	void Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingCustomAttributeCurves_SetBit(void* Obj)
	{
		((UFbxAnimSequenceImportData*)Obj)->bDeleteExistingCustomAttributeCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingCustomAttributeCurves = { "bDeleteExistingCustomAttributeCurves", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxAnimSequenceImportData), &Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingCustomAttributeCurves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingCustomAttributeCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingCustomAttributeCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingNonCurveCustomAttributes_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** If true, all previous node attributes imported as Animation Attributes will be deleted when doing a re-import. */" },
		{ "DisplayName", "Delete existing Animation Attributes" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "If true, all previous node attributes imported as Animation Attributes will be deleted when doing a re-import." },
	};
#endif
	void Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingNonCurveCustomAttributes_SetBit(void* Obj)
	{
		((UFbxAnimSequenceImportData*)Obj)->bDeleteExistingNonCurveCustomAttributes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingNonCurveCustomAttributes = { "bDeleteExistingNonCurveCustomAttributes", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxAnimSequenceImportData), &Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingNonCurveCustomAttributes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingNonCurveCustomAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingNonCurveCustomAttributes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportBoneTracks_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Import bone transform tracks. If false, this will discard any bone transform tracks. (useful for curves only animations)*/" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "Import bone transform tracks. If false, this will discard any bone transform tracks. (useful for curves only animations)" },
	};
#endif
	void Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportBoneTracks_SetBit(void* Obj)
	{
		((UFbxAnimSequenceImportData*)Obj)->bImportBoneTracks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportBoneTracks = { "bImportBoneTracks", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxAnimSequenceImportData), &Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportBoneTracks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportBoneTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportBoneTracks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Set Material Curve Type for all custom attributes that exists */" },
		{ "DisplayName", "Set Material Curve Type" },
		{ "EditCondition", "bImportCustomAttribute" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "Set Material Curve Type for all custom attributes that exists" },
	};
#endif
	void Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute_SetBit(void* Obj)
	{
		((UFbxAnimSequenceImportData*)Obj)->bSetMaterialDriveParameterOnCustomAttribute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute = { "bSetMaterialDriveParameterOnCustomAttribute", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxAnimSequenceImportData), &Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_MaterialCurveSuffixes_Inner = { "MaterialCurveSuffixes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_MaterialCurveSuffixes_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Set Material Curve Type for the custom attribute with the following suffixes. This doesn't matter if Set Material Curve Type is true  */" },
		{ "DisplayName", "Material Curve Suffixes" },
		{ "EditCondition", "bImportCustomAttribute" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "Set Material Curve Type for the custom attribute with the following suffixes. This doesn't matter if Set Material Curve Type is true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_MaterialCurveSuffixes = { "MaterialCurveSuffixes", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxAnimSequenceImportData, MaterialCurveSuffixes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_MaterialCurveSuffixes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_MaterialCurveSuffixes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bRemoveRedundantKeys_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** When importing custom attribute as curve, remove redundant keys */" },
		{ "DisplayName", "Remove Redundant Keys" },
		{ "EditCondition", "bImportCustomAttribute" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "When importing custom attribute as curve, remove redundant keys" },
	};
#endif
	void Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bRemoveRedundantKeys_SetBit(void* Obj)
	{
		((UFbxAnimSequenceImportData*)Obj)->bRemoveRedundantKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bRemoveRedundantKeys = { "bRemoveRedundantKeys", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxAnimSequenceImportData), &Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bRemoveRedundantKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bRemoveRedundantKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bRemoveRedundantKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingMorphTargetCurves_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** If enabled, this will delete this type of asset from the FBX */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "If enabled, this will delete this type of asset from the FBX" },
	};
#endif
	void Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingMorphTargetCurves_SetBit(void* Obj)
	{
		((UFbxAnimSequenceImportData*)Obj)->bDeleteExistingMorphTargetCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingMorphTargetCurves = { "bDeleteExistingMorphTargetCurves", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxAnimSequenceImportData), &Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingMorphTargetCurves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingMorphTargetCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingMorphTargetCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDoNotImportCurveWithZero_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** When importing custom attribute or morphtarget as curve, do not import if it doesn't have any value other than zero. This is to avoid adding extra curves to evaluate */" },
		{ "DisplayName", "Do not import curves with only 0 values" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "When importing custom attribute or morphtarget as curve, do not import if it doesn't have any value other than zero. This is to avoid adding extra curves to evaluate" },
	};
#endif
	void Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDoNotImportCurveWithZero_SetBit(void* Obj)
	{
		((UFbxAnimSequenceImportData*)Obj)->bDoNotImportCurveWithZero = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDoNotImportCurveWithZero = { "bDoNotImportCurveWithZero", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxAnimSequenceImportData), &Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDoNotImportCurveWithZero_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDoNotImportCurveWithZero_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDoNotImportCurveWithZero_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bPreserveLocalTransform_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** If enabled, this will import a curve within the animation */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "If enabled, this will import a curve within the animation" },
	};
#endif
	void Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bPreserveLocalTransform_SetBit(void* Obj)
	{
		((UFbxAnimSequenceImportData*)Obj)->bPreserveLocalTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bPreserveLocalTransform = { "bPreserveLocalTransform", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxAnimSequenceImportData), &Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bPreserveLocalTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bPreserveLocalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bPreserveLocalTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportMeshesInBoneHierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_AnimationLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_StartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_EndFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_FrameImportRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bUseDefaultSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_CustomSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bSnapToClosestFrameBoundary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_SourceAnimationName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportCustomAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingCustomAttributeCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingNonCurveCustomAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportBoneTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_MaterialCurveSuffixes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_MaterialCurveSuffixes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bRemoveRedundantKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingMorphTargetCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDoNotImportCurveWithZero,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bPreserveLocalTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxAnimSequenceImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::ClassParams = {
		&UFbxAnimSequenceImportData::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::PropPointers),
		0,
		0x401010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxAnimSequenceImportData()
	{
		if (!Z_Registration_Info_UClass_UFbxAnimSequenceImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFbxAnimSequenceImportData.OuterSingleton, Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFbxAnimSequenceImportData.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UFbxAnimSequenceImportData>()
	{
		return UFbxAnimSequenceImportData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxAnimSequenceImportData);
	UFbxAnimSequenceImportData::~UFbxAnimSequenceImportData() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFbxAnimSequenceImportData)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_Statics::EnumInfo[] = {
		{ EFBXAnimationLengthImportType_StaticEnum, TEXT("EFBXAnimationLengthImportType"), &Z_Registration_Info_UEnum_EFBXAnimationLengthImportType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1214527955U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFbxAnimSequenceImportData, UFbxAnimSequenceImportData::StaticClass, TEXT("UFbxAnimSequenceImportData"), &Z_Registration_Info_UClass_UFbxAnimSequenceImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFbxAnimSequenceImportData), 4163898462U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_4290954987(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
