// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/FbxImportUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxImportUI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxAnimSequenceImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxImportUI();
	UNREALED_API UClass* Z_Construct_UClass_UFbxImportUI_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSkeletalMeshImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxStaticMeshImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxTextureImportData_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFBXImportType();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFBXImportType;
	static UEnum* EFBXImportType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFBXImportType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFBXImportType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFBXImportType, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFBXImportType"));
		}
		return Z_Registration_Info_UEnum_EFBXImportType.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFBXImportType>()
	{
		return EFBXImportType_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EFBXImportType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EFBXImportType_Statics::Enumerators[] = {
		{ "FBXIT_StaticMesh", (int64)FBXIT_StaticMesh },
		{ "FBXIT_SkeletalMesh", (int64)FBXIT_SkeletalMesh },
		{ "FBXIT_Animation", (int64)FBXIT_Animation },
		{ "FBXIT_MAX", (int64)FBXIT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EFBXImportType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Import mesh type */" },
		{ "FBXIT_Animation.Comment", "/** Select Animation if you'd like to import only animation. */" },
		{ "FBXIT_Animation.DisplayName", "Animation" },
		{ "FBXIT_Animation.Name", "FBXIT_Animation" },
		{ "FBXIT_Animation.ToolTip", "Select Animation if you'd like to import only animation." },
		{ "FBXIT_MAX.Name", "FBXIT_MAX" },
		{ "FBXIT_SkeletalMesh.Comment", "/** Select Skeletal Mesh if you'd like to import skeletal mesh. */" },
		{ "FBXIT_SkeletalMesh.DisplayName", "Skeletal Mesh" },
		{ "FBXIT_SkeletalMesh.Name", "FBXIT_SkeletalMesh" },
		{ "FBXIT_SkeletalMesh.ToolTip", "Select Skeletal Mesh if you'd like to import skeletal mesh." },
		{ "FBXIT_StaticMesh.Comment", "/** Select Static Mesh if you'd like to import static mesh. */" },
		{ "FBXIT_StaticMesh.DisplayName", "Static Mesh" },
		{ "FBXIT_StaticMesh.Name", "FBXIT_StaticMesh" },
		{ "FBXIT_StaticMesh.ToolTip", "Select Static Mesh if you'd like to import static mesh." },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Import mesh type" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EFBXImportType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EFBXImportType",
		"EFBXImportType",
		Z_Construct_UEnum_UnrealEd_EFBXImportType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFBXImportType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EFBXImportType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFBXImportType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EFBXImportType()
	{
		if (!Z_Registration_Info_UEnum_EFBXImportType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFBXImportType.InnerSingleton, Z_Construct_UEnum_UnrealEd_EFBXImportType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFBXImportType.InnerSingleton;
	}
	DEFINE_FUNCTION(UFbxImportUI::execResetToDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetToDefault();
		P_NATIVE_END;
	}
	void UFbxImportUI::StaticRegisterNativesUFbxImportUI()
	{
		UClass* Class = UFbxImportUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetToDefault", &UFbxImportUI::execResetToDefault },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFbxImportUI_ResetToDefault_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFbxImportUI_ResetToDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFbxImportUI_ResetToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFbxImportUI, nullptr, "ResetToDefault", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFbxImportUI_ResetToDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFbxImportUI_ResetToDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFbxImportUI_ResetToDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFbxImportUI_ResetToDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFbxImportUI);
	UClass* Z_Construct_UClass_UFbxImportUI_NoRegister()
	{
		return UFbxImportUI::StaticClass();
	}
	struct Z_Construct_UClass_UFbxImportUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsObjImport_MetaData[];
#endif
		static void NewProp_bIsObjImport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsObjImport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalImportType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OriginalImportType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshTypeToImport_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MeshTypeToImport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideFullName_MetaData[];
#endif
		static void NewProp_bOverrideFullName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideFullName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsSkeletal_MetaData[];
#endif
		static void NewProp_bImportAsSkeletal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsSkeletal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportMesh_MetaData[];
#endif
		static void NewProp_bImportMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreatePhysicsAsset_MetaData[];
#endif
		static void NewProp_bCreatePhysicsAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreatePhysicsAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysicsAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoComputeLodDistances_MetaData[];
#endif
		static void NewProp_bAutoComputeLodDistances_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoComputeLodDistances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodDistance0_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LodDistance0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodDistance1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LodDistance1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodDistance2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LodDistance2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodDistance3_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LodDistance3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodDistance4_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LodDistance4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodDistance5_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LodDistance5;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodDistance6_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LodDistance6;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodDistance7_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LodDistance7;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumLodNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumLodNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportAnimations_MetaData[];
#endif
		static void NewProp_bImportAnimations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAnimations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideAnimationName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OverrideAnimationName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportRigidMesh_MetaData[];
#endif
		static void NewProp_bImportRigidMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportRigidMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportMaterials_MetaData[];
#endif
		static void NewProp_bImportMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportTextures_MetaData[];
#endif
		static void NewProp_bImportTextures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetToFbxOnMaterialConflict_MetaData[];
#endif
		static void NewProp_bResetToFbxOnMaterialConflict_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetToFbxOnMaterialConflict;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMeshImportData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMeshImportData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequenceImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimSequenceImportData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextureImportData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutomatedImportShouldDetectType_MetaData[];
#endif
		static void NewProp_bAutomatedImportShouldDetectType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomatedImportShouldDetectType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileCreator_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileCreator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileCreatorApplication_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileCreatorApplication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileUnits_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileUnits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileAxisDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileAxisDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileSampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileSampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimStartFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnimStartFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimEndFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnimEndFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxImportUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFbxImportUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFbxImportUI_ResetToDefault, "ResetToDefault" }, // 3137910638
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "FTransform" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FbxImportUI.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bIsObjImport_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/** Whether or not the imported file is in OBJ format */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Whether or not the imported file is in OBJ format" },
	};
#endif
	void Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bIsObjImport_SetBit(void* Obj)
	{
		((UFbxImportUI*)Obj)->bIsObjImport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bIsObjImport = { "bIsObjImport", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxImportUI), &Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bIsObjImport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bIsObjImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bIsObjImport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_OriginalImportType_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/** The original detected type of this import */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "The original detected type of this import" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_OriginalImportType = { "OriginalImportType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, OriginalImportType), Z_Construct_UEnum_UnrealEd_EFBXImportType, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_OriginalImportType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_OriginalImportType_MetaData)) }; // 591291805
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_MeshTypeToImport_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/** Type of asset to import from the FBX file */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Type of asset to import from the FBX file" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_MeshTypeToImport = { "MeshTypeToImport", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, MeshTypeToImport), Z_Construct_UEnum_UnrealEd_EFBXImportType, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_MeshTypeToImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_MeshTypeToImport_MetaData)) }; // 591291805
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bOverrideFullName_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/** Use the string in \"Name\" field as full name of mesh. The option only works when the scene contains one mesh. */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "Use the string in \"Name\" field as full name of mesh. The option only works when the scene contains one mesh." },
	};
#endif
	void Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bOverrideFullName_SetBit(void* Obj)
	{
		((UFbxImportUI*)Obj)->bOverrideFullName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bOverrideFullName = { "bOverrideFullName", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxImportUI), &Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bOverrideFullName_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bOverrideFullName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bOverrideFullName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAsSkeletal_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Whether to import the incoming FBX as a skeletal object */" },
		{ "DisplayName", "Skeletal Mesh" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Whether to import the incoming FBX as a skeletal object" },
	};
#endif
	void Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAsSkeletal_SetBit(void* Obj)
	{
		((UFbxImportUI*)Obj)->bImportAsSkeletal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAsSkeletal = { "bImportAsSkeletal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxImportUI), &Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAsSkeletal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAsSkeletal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAsSkeletal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Whether to import the mesh. Allows animation only import when importing a skeletal mesh. */" },
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Whether to import the mesh. Allows animation only import when importing a skeletal mesh." },
	};
#endif
	void Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMesh_SetBit(void* Obj)
	{
		((UFbxImportUI*)Obj)->bImportMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMesh = { "bImportMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxImportUI), &Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Skeleton to use for imported asset. When importing a mesh, leaving this as \"None\" will create a new skeleton. When importing an animation this MUST be specified to import the asset. */" },
		{ "ImportType", "SkeletalMesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Skeleton to use for imported asset. When importing a mesh, leaving this as \"None\" will create a new skeleton. When importing an animation this MUST be specified to import the asset." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_Skeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bCreatePhysicsAsset_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If checked, create new PhysicsAsset if it doesn't have it */" },
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "If checked, create new PhysicsAsset if it doesn't have it" },
	};
#endif
	void Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bCreatePhysicsAsset_SetBit(void* Obj)
	{
		((UFbxImportUI*)Obj)->bCreatePhysicsAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bCreatePhysicsAsset = { "bCreatePhysicsAsset", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxImportUI), &Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bCreatePhysicsAsset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bCreatePhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bCreatePhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_PhysicsAsset_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If this is set, use this PhysicsAsset. It is possible bCreatePhysicsAsset == false, and PhysicsAsset == NULL. It is possible they do not like to create anything. */" },
		{ "editcondition", "!bCreatePhysicsAsset" },
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "If this is set, use this PhysicsAsset. It is possible bCreatePhysicsAsset == false, and PhysicsAsset == NULL. It is possible they do not like to create anything." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_PhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_PhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutoComputeLodDistances_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "Comment", "/** If checked, the editor will automatically compute screen size values for the static mesh's LODs. If unchecked, the user can enter custom screen size values for each LOD. */" },
		{ "DisplayName", "Auto Compute LOD Screen Size" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "If checked, the editor will automatically compute screen size values for the static mesh's LODs. If unchecked, the user can enter custom screen size values for each LOD." },
	};
#endif
	void Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutoComputeLodDistances_SetBit(void* Obj)
	{
		((UFbxImportUI*)Obj)->bAutoComputeLodDistances = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutoComputeLodDistances = { "bAutoComputeLodDistances", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxImportUI), &Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutoComputeLodDistances_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutoComputeLodDistances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutoComputeLodDistances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance0_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "Comment", "/** Set a screen size value for LOD 0*/" },
		{ "DisplayName", "LOD 0 Screen Size" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Set a screen size value for LOD 0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance0 = { "LodDistance0", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, LodDistance0), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance1_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "Comment", "/** Set a screen size value for LOD 1*/" },
		{ "DisplayName", "LOD 1 Screen Size" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Set a screen size value for LOD 1" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance1 = { "LodDistance1", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, LodDistance1), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance2_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "Comment", "/** Set a screen size value for LOD 2*/" },
		{ "DisplayName", "LOD 2 Screen Size" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Set a screen size value for LOD 2" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance2 = { "LodDistance2", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, LodDistance2), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance3_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "Comment", "/** Set a screen size value for LOD 3*/" },
		{ "DisplayName", "LOD 3 Screen Size" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Set a screen size value for LOD 3" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance3 = { "LodDistance3", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, LodDistance3), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance4_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "Comment", "/** Set a screen size value for LOD 4*/" },
		{ "DisplayName", "LOD 4 Screen Size" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Set a screen size value for LOD 4" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance4 = { "LodDistance4", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, LodDistance4), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance5_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "Comment", "/** Set a screen size value for LOD 5*/" },
		{ "DisplayName", "LOD 5 Screen Size" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Set a screen size value for LOD 5" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance5 = { "LodDistance5", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, LodDistance5), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance5_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance5_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance6_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "Comment", "/** Set a screen size value for LOD 6*/" },
		{ "DisplayName", "LOD 6 Screen Size" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Set a screen size value for LOD 6" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance6 = { "LodDistance6", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, LodDistance6), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance6_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance6_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance7_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "Comment", "/** Set a screen size value for LOD 7*/" },
		{ "DisplayName", "LOD 7 Screen Size" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Set a screen size value for LOD 7" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance7 = { "LodDistance7", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, LodDistance7), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance7_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance7_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_MinimumLodNumber_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "Comment", "/** Set the minimum LOD used for rendering. Setting the value to 0 will use the default value of LOD0. */" },
		{ "DisplayName", "Minimum LOD" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Set the minimum LOD used for rendering. Setting the value to 0 will use the default value of LOD0." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_MinimumLodNumber = { "MinimumLodNumber", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, MinimumLodNumber), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_MinimumLodNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_MinimumLodNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodNumber_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "Comment", "/** Set the number of LODs for the editor to import. Setting the value to 0 imports the number of LODs found in the file (up to the maximum). */" },
		{ "DisplayName", "Number of LODs" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Set the number of LODs for the editor to import. Setting the value to 0 imports the number of LODs found in the file (up to the maximum)." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodNumber = { "LodNumber", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, LodNumber), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAnimations_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** True to import animations from the FBX File */" },
		{ "ImportType", "SkeletalMesh|Animation|RigOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "True to import animations from the FBX File" },
	};
#endif
	void Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAnimations_SetBit(void* Obj)
	{
		((UFbxImportUI*)Obj)->bImportAnimations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAnimations = { "bImportAnimations", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxImportUI), &Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAnimations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAnimations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_OverrideAnimationName_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Override for the name of the animation to import. By default, it will be the name of FBX **/" },
		{ "editcondition", "bImportAnimations" },
		{ "ImportType", "SkeletalMesh|RigOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Override for the name of the animation to import. By default, it will be the name of FBX *" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_OverrideAnimationName = { "OverrideAnimationName", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, OverrideAnimationName), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_OverrideAnimationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_OverrideAnimationName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportRigidMesh_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/** Enables importing of 'rigid skeletalmesh' (unskinned, hierarchy-based animation) from this FBX file, no longer shown, used behind the scenes */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Enables importing of 'rigid skeletalmesh' (unskinned, hierarchy-based animation) from this FBX file, no longer shown, used behind the scenes" },
	};
#endif
	void Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportRigidMesh_SetBit(void* Obj)
	{
		((UFbxImportUI*)Obj)->bImportRigidMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportRigidMesh = { "bImportRigidMesh", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxImportUI), &Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportRigidMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportRigidMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportRigidMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMaterials_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If no existing materials are found, whether to automatically create Unreal materials for materials found in the FBX scene */" },
		{ "ImportType", "GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "If no existing materials are found, whether to automatically create Unreal materials for materials found in the FBX scene" },
	};
#endif
	void Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMaterials_SetBit(void* Obj)
	{
		((UFbxImportUI*)Obj)->bImportMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMaterials = { "bImportMaterials", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxImportUI), &Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportTextures_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Whether or not we should import textures. This option is disabled when we are importing materials because textures are always imported in that case. */" },
		{ "EditCondition", "!bImportMaterials" },
		{ "ImportType", "GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Whether or not we should import textures. This option is disabled when we are importing materials because textures are always imported in that case." },
	};
#endif
	void Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportTextures_SetBit(void* Obj)
	{
		((UFbxImportUI*)Obj)->bImportTextures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportTextures = { "bImportTextures", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxImportUI), &Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportTextures_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportTextures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bResetToFbxOnMaterialConflict_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If true, the imported material sections will automatically be reset to the imported data in case of a reimport conflict. */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "If true, the imported material sections will automatically be reset to the imported data in case of a reimport conflict." },
	};
#endif
	void Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bResetToFbxOnMaterialConflict_SetBit(void* Obj)
	{
		((UFbxImportUI*)Obj)->bResetToFbxOnMaterialConflict = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bResetToFbxOnMaterialConflict = { "bResetToFbxOnMaterialConflict", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxImportUI), &Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bResetToFbxOnMaterialConflict_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bResetToFbxOnMaterialConflict_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bResetToFbxOnMaterialConflict_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_StaticMeshImportData_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Import data used when importing static meshes */" },
		{ "EditInline", "true" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Import data used when importing static meshes" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_StaticMeshImportData = { "StaticMeshImportData", nullptr, (EPropertyFlags)0x001600000008200d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, StaticMeshImportData), Z_Construct_UClass_UFbxStaticMeshImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_StaticMeshImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_StaticMeshImportData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_SkeletalMeshImportData_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Import data used when importing skeletal meshes */" },
		{ "EditInline", "true" },
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Import data used when importing skeletal meshes" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_SkeletalMeshImportData = { "SkeletalMeshImportData", nullptr, (EPropertyFlags)0x001600000008200d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, SkeletalMeshImportData), Z_Construct_UClass_UFbxSkeletalMeshImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_SkeletalMeshImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_SkeletalMeshImportData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimSequenceImportData_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Import data used when importing animations */" },
		{ "editcondition", "bImportAnimations" },
		{ "EditInline", "true" },
		{ "ImportType", "Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Import data used when importing animations" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimSequenceImportData = { "AnimSequenceImportData", nullptr, (EPropertyFlags)0x001600000008200d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, AnimSequenceImportData), Z_Construct_UClass_UFbxAnimSequenceImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimSequenceImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimSequenceImportData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_TextureImportData_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Import data used when importing textures */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Import data used when importing textures" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_TextureImportData = { "TextureImportData", nullptr, (EPropertyFlags)0x001600000008200d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, TextureImportData), Z_Construct_UClass_UFbxTextureImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_TextureImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_TextureImportData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutomatedImportShouldDetectType_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/** If true the automated import path should detect the import type.  If false the import type was specified by the user */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "If true the automated import path should detect the import type.  If false the import type was specified by the user" },
	};
#endif
	void Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutomatedImportShouldDetectType_SetBit(void* Obj)
	{
		((UFbxImportUI*)Obj)->bAutomatedImportShouldDetectType = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutomatedImportShouldDetectType = { "bAutomatedImportShouldDetectType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxImportUI), &Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutomatedImportShouldDetectType_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutomatedImportShouldDetectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutomatedImportShouldDetectType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileVersion_MetaData[] = {
		{ "Category", "FbxFileInformation" },
		{ "Comment", "/* The fbx file version */" },
		{ "DisplayName", "File Version" },
		{ "ImportType", "Mesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "The fbx file version" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileVersion = { "FileVersion", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, FileVersion), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileCreator_MetaData[] = {
		{ "Category", "FbxFileInformation" },
		{ "Comment", "/* The file creator information */" },
		{ "DisplayName", "File Creator" },
		{ "ImportType", "Mesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "The file creator information" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileCreator = { "FileCreator", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, FileCreator), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileCreator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileCreator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileCreatorApplication_MetaData[] = {
		{ "Category", "FbxFileInformation" },
		{ "Comment", "/* The file vendor information, software name and version that was use to create the file */" },
		{ "DisplayName", "File Creator Application" },
		{ "ImportType", "Mesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "The file vendor information, software name and version that was use to create the file" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileCreatorApplication = { "FileCreatorApplication", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, FileCreatorApplication), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileCreatorApplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileCreatorApplication_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileUnits_MetaData[] = {
		{ "Category", "FbxFileInformation" },
		{ "Comment", "/* The file units */" },
		{ "DisplayName", "File Units" },
		{ "ImportType", "Mesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "The file units" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileUnits = { "FileUnits", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, FileUnits), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileUnits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileAxisDirection_MetaData[] = {
		{ "Category", "FbxFileInformation" },
		{ "Comment", "/* The file axis direction, up vector and hand */" },
		{ "DisplayName", "File Axis Direction" },
		{ "ImportType", "Mesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "The file axis direction, up vector and hand" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileAxisDirection = { "FileAxisDirection", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, FileAxisDirection), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileAxisDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileAxisDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileSampleRate_MetaData[] = {
		{ "Category", "FbxFileInformation" },
		{ "Comment", "/* The fbx animation frame rate */" },
		{ "DisplayName", "File Frame Rate" },
		{ "ImportType", "SkeletalMesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "The fbx animation frame rate" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileSampleRate = { "FileSampleRate", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, FileSampleRate), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileSampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimStartFrame_MetaData[] = {
		{ "Category", "FbxFileInformation" },
		{ "Comment", "/* The fbx animation start frame */" },
		{ "DisplayName", "Animation Start Frame" },
		{ "ImportType", "SkeletalMesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "The fbx animation start frame" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimStartFrame = { "AnimStartFrame", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, AnimStartFrame), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimStartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimStartFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimEndFrame_MetaData[] = {
		{ "Category", "FbxFileInformation" },
		{ "Comment", "/* The fbx animation end frame */" },
		{ "DisplayName", "Animation End Frame" },
		{ "ImportType", "SkeletalMesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "The fbx animation end frame" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimEndFrame = { "AnimEndFrame", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxImportUI, AnimEndFrame), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimEndFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimEndFrame_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxImportUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bIsObjImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_OriginalImportType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_MeshTypeToImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bOverrideFullName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAsSkeletal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bCreatePhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_PhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutoComputeLodDistances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance6,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance7,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_MinimumLodNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAnimations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_OverrideAnimationName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportRigidMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bResetToFbxOnMaterialConflict,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_StaticMeshImportData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_SkeletalMeshImportData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimSequenceImportData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_TextureImportData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutomatedImportShouldDetectType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileCreator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileCreatorApplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileAxisDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimStartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimEndFrame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxImportUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxImportUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFbxImportUI_Statics::ClassParams = {
		&UFbxImportUI::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFbxImportUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxImportUI()
	{
		if (!Z_Registration_Info_UClass_UFbxImportUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFbxImportUI.OuterSingleton, Z_Construct_UClass_UFbxImportUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFbxImportUI.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UFbxImportUI>()
	{
		return UFbxImportUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxImportUI);
	UFbxImportUI::~UFbxImportUI() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_Statics::EnumInfo[] = {
		{ EFBXImportType_StaticEnum, TEXT("EFBXImportType"), &Z_Registration_Info_UEnum_EFBXImportType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 591291805U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFbxImportUI, UFbxImportUI::StaticClass, TEXT("UFbxImportUI"), &Z_Registration_Info_UClass_UFbxImportUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFbxImportUI), 2295507327U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_3359622373(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
