// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkeletalMeshEditorSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshEditorSubsystem() {}
// Cross Module References
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshBuildSettings();
	SKELETALMESHEDITOR_API UClass* Z_Construct_UClass_USkeletalMeshEditorSubsystem();
	SKELETALMESHEDITOR_API UClass* Z_Construct_UClass_USkeletalMeshEditorSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SkeletalMeshEditor();
// End Cross Module References
	DEFINE_FUNCTION(USkeletalMeshEditorSubsystem::execCreatePhysicsAsset)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhysicsAsset**)Z_Param__Result=USkeletalMeshEditorSubsystem::CreatePhysicsAsset(Z_Param_SkeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshEditorSubsystem::execSetLodBuildSettings)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_STRUCT_REF(FSkeletalMeshBuildSettings,Z_Param_Out_BuildOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkeletalMeshEditorSubsystem::SetLodBuildSettings(Z_Param_SkeletalMesh,Z_Param_LodIndex,Z_Param_Out_BuildOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshEditorSubsystem::execGetLodBuildSettings)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_STRUCT_REF(FSkeletalMeshBuildSettings,Z_Param_Out_OutBuildOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkeletalMeshEditorSubsystem::GetLodBuildSettings(Z_Param_SkeletalMesh,Z_Param_LodIndex,Z_Param_Out_OutBuildOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshEditorSubsystem::execReimportAllCustomLODs)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USkeletalMeshEditorSubsystem::ReimportAllCustomLODs(Z_Param_SkeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshEditorSubsystem::execImportLOD)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_BaseMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_SourceFilename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USkeletalMeshEditorSubsystem::ImportLOD(Z_Param_BaseMesh,Z_Param_LODIndex,Z_Param_SourceFilename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshEditorSubsystem::execGetLODCount)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USkeletalMeshEditorSubsystem::GetLODCount(Z_Param_SkeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshEditorSubsystem::execRenameSocket)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FNameProperty,Z_Param_OldName);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USkeletalMeshEditorSubsystem::RenameSocket(Z_Param_SkeletalMesh,Z_Param_OldName,Z_Param_NewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshEditorSubsystem::execGetLODMaterialSlot)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLODMaterialSlot(Z_Param_SkeletalMesh,Z_Param_LODIndex,Z_Param_SectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshEditorSubsystem::execSetSectionVisibleInRayTracing)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_UBOOL(Z_Param_bVisibleInRayTracing);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSectionVisibleInRayTracing(Z_Param_SkeletalMesh,Z_Param_LODIndex,Z_Param_SectionIndex,Z_Param_bVisibleInRayTracing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshEditorSubsystem::execGetSectionVisibleInRayTracing)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_UBOOL_REF(Z_Param_Out_bOutVisibleInRayTracing);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSectionVisibleInRayTracing(Z_Param_SkeletalMesh,Z_Param_LODIndex,Z_Param_SectionIndex,Z_Param_Out_bOutVisibleInRayTracing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshEditorSubsystem::execSetSectionCastShadow)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_UBOOL(Z_Param_bCastShadow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSectionCastShadow(Z_Param_SkeletalMesh,Z_Param_LODIndex,Z_Param_SectionIndex,Z_Param_bCastShadow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshEditorSubsystem::execGetSectionCastShadow)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_UBOOL_REF(Z_Param_Out_bOutCastShadow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSectionCastShadow(Z_Param_SkeletalMesh,Z_Param_LODIndex,Z_Param_SectionIndex,Z_Param_Out_bOutCastShadow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshEditorSubsystem::execSetSectionRecomputeTangentsVertexMaskChannel)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_RecomputeTangentsVertexMaskChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSectionRecomputeTangentsVertexMaskChannel(Z_Param_SkeletalMesh,Z_Param_LODIndex,Z_Param_SectionIndex,Z_Param_RecomputeTangentsVertexMaskChannel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshEditorSubsystem::execGetSectionRecomputeTangentsVertexMaskChannel)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutRecomputeTangentsVertexMaskChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSectionRecomputeTangentsVertexMaskChannel(Z_Param_SkeletalMesh,Z_Param_LODIndex,Z_Param_SectionIndex,Z_Param_Out_OutRecomputeTangentsVertexMaskChannel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshEditorSubsystem::execSetSectionRecomputeTangent)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_UBOOL(Z_Param_bRecomputeTangent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSectionRecomputeTangent(Z_Param_SkeletalMesh,Z_Param_LODIndex,Z_Param_SectionIndex,Z_Param_bRecomputeTangent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshEditorSubsystem::execGetSectionRecomputeTangent)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_UBOOL_REF(Z_Param_Out_bOutRecomputeTangent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSectionRecomputeTangent(Z_Param_SkeletalMesh,Z_Param_LODIndex,Z_Param_SectionIndex,Z_Param_Out_bOutRecomputeTangent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshEditorSubsystem::execGetNumSections)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumSections(Z_Param_SkeletalMesh,Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshEditorSubsystem::execGetNumVerts)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumVerts(Z_Param_SkeletalMesh,Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshEditorSubsystem::execRegenerateLOD)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewLODCount);
		P_GET_UBOOL(Z_Param_bRegenerateEvenIfImported);
		P_GET_UBOOL(Z_Param_bGenerateBaseLOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USkeletalMeshEditorSubsystem::RegenerateLOD(Z_Param_SkeletalMesh,Z_Param_NewLODCount,Z_Param_bRegenerateEvenIfImported,Z_Param_bGenerateBaseLOD);
		P_NATIVE_END;
	}
	void USkeletalMeshEditorSubsystem::StaticRegisterNativesUSkeletalMeshEditorSubsystem()
	{
		UClass* Class = USkeletalMeshEditorSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreatePhysicsAsset", &USkeletalMeshEditorSubsystem::execCreatePhysicsAsset },
			{ "GetLodBuildSettings", &USkeletalMeshEditorSubsystem::execGetLodBuildSettings },
			{ "GetLODCount", &USkeletalMeshEditorSubsystem::execGetLODCount },
			{ "GetLODMaterialSlot", &USkeletalMeshEditorSubsystem::execGetLODMaterialSlot },
			{ "GetNumSections", &USkeletalMeshEditorSubsystem::execGetNumSections },
			{ "GetNumVerts", &USkeletalMeshEditorSubsystem::execGetNumVerts },
			{ "GetSectionCastShadow", &USkeletalMeshEditorSubsystem::execGetSectionCastShadow },
			{ "GetSectionRecomputeTangent", &USkeletalMeshEditorSubsystem::execGetSectionRecomputeTangent },
			{ "GetSectionRecomputeTangentsVertexMaskChannel", &USkeletalMeshEditorSubsystem::execGetSectionRecomputeTangentsVertexMaskChannel },
			{ "GetSectionVisibleInRayTracing", &USkeletalMeshEditorSubsystem::execGetSectionVisibleInRayTracing },
			{ "ImportLOD", &USkeletalMeshEditorSubsystem::execImportLOD },
			{ "RegenerateLOD", &USkeletalMeshEditorSubsystem::execRegenerateLOD },
			{ "ReimportAllCustomLODs", &USkeletalMeshEditorSubsystem::execReimportAllCustomLODs },
			{ "RenameSocket", &USkeletalMeshEditorSubsystem::execRenameSocket },
			{ "SetLodBuildSettings", &USkeletalMeshEditorSubsystem::execSetLodBuildSettings },
			{ "SetSectionCastShadow", &USkeletalMeshEditorSubsystem::execSetSectionCastShadow },
			{ "SetSectionRecomputeTangent", &USkeletalMeshEditorSubsystem::execSetSectionRecomputeTangent },
			{ "SetSectionRecomputeTangentsVertexMaskChannel", &USkeletalMeshEditorSubsystem::execSetSectionRecomputeTangentsVertexMaskChannel },
			{ "SetSectionVisibleInRayTracing", &USkeletalMeshEditorSubsystem::execSetSectionVisibleInRayTracing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkeletalMeshEditorSubsystem_CreatePhysicsAsset_Statics
	{
		struct SkeletalMeshEditorSubsystem_eventCreatePhysicsAsset_Parms
		{
			USkeletalMesh* SkeletalMesh;
			UPhysicsAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_CreatePhysicsAsset_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventCreatePhysicsAsset_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_CreatePhysicsAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventCreatePhysicsAsset_Parms, ReturnValue), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshEditorSubsystem_CreatePhysicsAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_CreatePhysicsAsset_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_CreatePhysicsAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_CreatePhysicsAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | SkeletalMesh" },
		{ "Comment", "/**\n\x09 * This function creates a PhysicsAsset for the given SkeletalMesh with the same settings as if it were created through FBX import\n\x09 *\n\x09 * @Param SkeletalMesh: The SkeletalMesh we want to create the PhysicsAsset for\n\x09 */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshEditorSubsystem.h" },
		{ "ToolTip", "This function creates a PhysicsAsset for the given SkeletalMesh with the same settings as if it were created through FBX import\n\n@Param SkeletalMesh: The SkeletalMesh we want to create the PhysicsAsset for" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_CreatePhysicsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshEditorSubsystem, nullptr, "CreatePhysicsAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_CreatePhysicsAsset_Statics::SkeletalMeshEditorSubsystem_eventCreatePhysicsAsset_Parms), Z_Construct_UFunction_USkeletalMeshEditorSubsystem_CreatePhysicsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_CreatePhysicsAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_CreatePhysicsAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_CreatePhysicsAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshEditorSubsystem_CreatePhysicsAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshEditorSubsystem_CreatePhysicsAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings_Statics
	{
		struct SkeletalMeshEditorSubsystem_eventGetLodBuildSettings_Parms
		{
			const USkeletalMesh* SkeletalMesh;
			int32 LodIndex;
			FSkeletalMeshBuildSettings OutBuildOptions;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutBuildOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetLodBuildSettings_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_LodIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetLodBuildSettings_Parms, LodIndex), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_LodIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_LodIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_OutBuildOptions = { "OutBuildOptions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetLodBuildSettings_Parms, OutBuildOptions), Z_Construct_UScriptStruct_FSkeletalMeshBuildSettings, METADATA_PARAMS(nullptr, 0) }; // 2087068264
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_OutBuildOptions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Copy the build options with the specified LOD build settings.\n\x09 * @param SkeletalMesh - Mesh to process.\n\x09 * @param LodIndex - The LOD we get the reduction settings.\n\x09 * @param OutBuildOptions - The build settings where we copy the build options.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshEditorSubsystem.h" },
		{ "ToolTip", "Copy the build options with the specified LOD build settings.\n@param SkeletalMesh - Mesh to process.\n@param LodIndex - The LOD we get the reduction settings.\n@param OutBuildOptions - The build settings where we copy the build options." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshEditorSubsystem, nullptr, "GetLodBuildSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings_Statics::SkeletalMeshEditorSubsystem_eventGetLodBuildSettings_Parms), Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODCount_Statics
	{
		struct SkeletalMeshEditorSubsystem_eventGetLODCount_Parms
		{
			USkeletalMesh* SkeletalMesh;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODCount_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetLODCount_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetLODCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODCount_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Retrieve the number of LOD contain in the specified skeletal mesh.\n\x09 *\n\x09 * @param SkeletalMesh: The static mesh we import or re-import a LOD.\n\x09 *\n\x09 * @return The LOD number.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshEditorSubsystem.h" },
		{ "ToolTip", "Retrieve the number of LOD contain in the specified skeletal mesh.\n\n@param SkeletalMesh: The static mesh we import or re-import a LOD.\n\n@return The LOD number." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshEditorSubsystem, nullptr, "GetLODCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODCount_Statics::SkeletalMeshEditorSubsystem_eventGetLODCount_Parms), Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODMaterialSlot_Statics
	{
		struct SkeletalMeshEditorSubsystem_eventGetLODMaterialSlot_Parms
		{
			USkeletalMesh* SkeletalMesh;
			int32 LODIndex;
			int32 SectionIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODMaterialSlot_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetLODMaterialSlot_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODMaterialSlot_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetLODMaterialSlot_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODMaterialSlot_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetLODMaterialSlot_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODMaterialSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetLODMaterialSlot_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODMaterialSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODMaterialSlot_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODMaterialSlot_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODMaterialSlot_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODMaterialSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODMaterialSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Skeletal Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Gets the material slot used for a specific LOD section.\n\x09 * @param\x09SkeletalMesh\x09\x09SkeletalMesh to get the material index from.\n\x09 * @param\x09LODIndex\x09\x09\x09Index of the StaticMesh LOD.\n\x09 * @param\x09SectionIndex\x09\x09Index of the StaticMesh Section.\n\x09 * @return  MaterialSlotIndex\x09Index of the material slot used by the section or INDEX_NONE in case of error.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshEditorSubsystem.h" },
		{ "ToolTip", "Gets the material slot used for a specific LOD section.\n@param       SkeletalMesh            SkeletalMesh to get the material index from.\n@param       LODIndex                        Index of the StaticMesh LOD.\n@param       SectionIndex            Index of the StaticMesh Section.\n@return  MaterialSlotIndex   Index of the material slot used by the section or INDEX_NONE in case of error." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODMaterialSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshEditorSubsystem, nullptr, "GetLODMaterialSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODMaterialSlot_Statics::SkeletalMeshEditorSubsystem_eventGetLODMaterialSlot_Parms), Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODMaterialSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODMaterialSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODMaterialSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODMaterialSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODMaterialSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODMaterialSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumSections_Statics
	{
		struct SkeletalMeshEditorSubsystem_eventGetNumSections_Parms
		{
			USkeletalMesh* SkeletalMesh;
			int32 LODIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumSections_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetNumSections_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumSections_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetNumSections_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumSections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetNumSections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumSections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumSections_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumSections_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumSections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumSections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Skeletal Mesh Utilities" },
		{ "Comment", "/** Get number of sections for a LOD of a Skeletal Mesh\n\x09 *\n\x09 * @param SkeletalMesh\x09\x09Mesh to get number of vertices from.\n\x09 * @param LODIndex\x09\x09\x09Index of the mesh LOD.\n\x09 * @return Number of sections. Returns INDEX_NONE if invalid mesh or LOD index.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshEditorSubsystem.h" },
		{ "ToolTip", "Get number of sections for a LOD of a Skeletal Mesh\n\n@param SkeletalMesh          Mesh to get number of vertices from.\n@param LODIndex                      Index of the mesh LOD.\n@return Number of sections. Returns INDEX_NONE if invalid mesh or LOD index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshEditorSubsystem, nullptr, "GetNumSections", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumSections_Statics::SkeletalMeshEditorSubsystem_eventGetNumSections_Parms), Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumSections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumSections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumSections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumSections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumVerts_Statics
	{
		struct SkeletalMeshEditorSubsystem_eventGetNumVerts_Parms
		{
			USkeletalMesh* SkeletalMesh;
			int32 LODIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumVerts_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetNumVerts_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumVerts_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetNumVerts_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumVerts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetNumVerts_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumVerts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumVerts_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumVerts_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumVerts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumVerts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Skeletal Mesh Utilities" },
		{ "Comment", "/** Get number of mesh vertices for an LOD of a Skeletal Mesh\n\x09 *\n\x09 * @param SkeletalMesh\x09\x09Mesh to get number of vertices from.\n\x09 * @param LODIndex\x09\x09\x09Index of the mesh LOD.\n\x09 * @return Number of vertices. Returns 0 if invalid mesh or LOD index.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshEditorSubsystem.h" },
		{ "ToolTip", "Get number of mesh vertices for an LOD of a Skeletal Mesh\n\n@param SkeletalMesh          Mesh to get number of vertices from.\n@param LODIndex                      Index of the mesh LOD.\n@return Number of vertices. Returns 0 if invalid mesh or LOD index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumVerts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshEditorSubsystem, nullptr, "GetNumVerts", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumVerts_Statics::SkeletalMeshEditorSubsystem_eventGetNumVerts_Parms), Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumVerts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumVerts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumVerts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumVerts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumVerts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumVerts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics
	{
		struct SkeletalMeshEditorSubsystem_eventGetSectionCastShadow_Parms
		{
			const USkeletalMesh* SkeletalMesh;
			int32 LODIndex;
			int32 SectionIndex;
			bool bOutCastShadow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static void NewProp_bOutCastShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutCastShadow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetSectionCastShadow_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::NewProp_LODIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetSectionCastShadow_Parms, LODIndex), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::NewProp_SectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetSectionCastShadow_Parms, SectionIndex), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::NewProp_SectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::NewProp_SectionIndex_MetaData)) };
	void Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::NewProp_bOutCastShadow_SetBit(void* Obj)
	{
		((SkeletalMeshEditorSubsystem_eventGetSectionCastShadow_Parms*)Obj)->bOutCastShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::NewProp_bOutCastShadow = { "bOutCastShadow", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshEditorSubsystem_eventGetSectionCastShadow_Parms), &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::NewProp_bOutCastShadow_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshEditorSubsystem_eventGetSectionCastShadow_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshEditorSubsystem_eventGetSectionCastShadow_Parms), &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::NewProp_bOutCastShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Skeletal Mesh Utilities" },
		{ "Comment", "/** Get bCastShadow from a section of a LOD of a Skeletal Mesh\n\x09 *\n\x09 * @param SkeletalMesh\x09\x09\x09Mesh to get number of vertices from.\n\x09 * @param LodIndex\x09\x09\x09\x09Index of the mesh LOD.\n\x09 * @param SectionIndex\x09\x09\x09Index of the LOD section.\n\x09 * @param bOutCastShadow\x09The function will set the bCastShadow used by the section\n\x09 * @return false if invalid mesh or LOD index or section index.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshEditorSubsystem.h" },
		{ "ToolTip", "Get bCastShadow from a section of a LOD of a Skeletal Mesh\n\n@param SkeletalMesh                  Mesh to get number of vertices from.\n@param LodIndex                              Index of the mesh LOD.\n@param SectionIndex                  Index of the LOD section.\n@param bOutCastShadow        The function will set the bCastShadow used by the section\n@return false if invalid mesh or LOD index or section index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshEditorSubsystem, nullptr, "GetSectionCastShadow", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::SkeletalMeshEditorSubsystem_eventGetSectionCastShadow_Parms), Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics
	{
		struct SkeletalMeshEditorSubsystem_eventGetSectionRecomputeTangent_Parms
		{
			const USkeletalMesh* SkeletalMesh;
			int32 LODIndex;
			int32 SectionIndex;
			bool bOutRecomputeTangent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static void NewProp_bOutRecomputeTangent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutRecomputeTangent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetSectionRecomputeTangent_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::NewProp_LODIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetSectionRecomputeTangent_Parms, LODIndex), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::NewProp_SectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetSectionRecomputeTangent_Parms, SectionIndex), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::NewProp_SectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::NewProp_SectionIndex_MetaData)) };
	void Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::NewProp_bOutRecomputeTangent_SetBit(void* Obj)
	{
		((SkeletalMeshEditorSubsystem_eventGetSectionRecomputeTangent_Parms*)Obj)->bOutRecomputeTangent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::NewProp_bOutRecomputeTangent = { "bOutRecomputeTangent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshEditorSubsystem_eventGetSectionRecomputeTangent_Parms), &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::NewProp_bOutRecomputeTangent_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshEditorSubsystem_eventGetSectionRecomputeTangent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshEditorSubsystem_eventGetSectionRecomputeTangent_Parms), &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::NewProp_bOutRecomputeTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Skeletal Mesh Utilities" },
		{ "Comment", "/** Get bRecomputeTangent from a section of a LOD of a Skeletal Mesh\n\x09 *\n\x09 * @param SkeletalMesh\x09\x09\x09Mesh to get number of vertices from.\n\x09 * @param LodIndex\x09\x09\x09\x09Index of the mesh LOD.\n\x09 * @param SectionIndex\x09\x09\x09Index of the LOD section.\n\x09 * @param bOutRecomputeTangent\x09The function will set the bRecomputeTangent used by the section\n\x09 * @return false if invalid mesh or LOD index or section index.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshEditorSubsystem.h" },
		{ "ToolTip", "Get bRecomputeTangent from a section of a LOD of a Skeletal Mesh\n\n@param SkeletalMesh                  Mesh to get number of vertices from.\n@param LodIndex                              Index of the mesh LOD.\n@param SectionIndex                  Index of the LOD section.\n@param bOutRecomputeTangent  The function will set the bRecomputeTangent used by the section\n@return false if invalid mesh or LOD index or section index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshEditorSubsystem, nullptr, "GetSectionRecomputeTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::SkeletalMeshEditorSubsystem_eventGetSectionRecomputeTangent_Parms), Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics
	{
		struct SkeletalMeshEditorSubsystem_eventGetSectionRecomputeTangentsVertexMaskChannel_Parms
		{
			const USkeletalMesh* SkeletalMesh;
			int32 LODIndex;
			int32 SectionIndex;
			uint8 OutRecomputeTangentsVertexMaskChannel;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutRecomputeTangentsVertexMaskChannel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetSectionRecomputeTangentsVertexMaskChannel_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_LODIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetSectionRecomputeTangentsVertexMaskChannel_Parms, LODIndex), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_SectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetSectionRecomputeTangentsVertexMaskChannel_Parms, SectionIndex), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_SectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_SectionIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_OutRecomputeTangentsVertexMaskChannel = { "OutRecomputeTangentsVertexMaskChannel", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetSectionRecomputeTangentsVertexMaskChannel_Parms, OutRecomputeTangentsVertexMaskChannel), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshEditorSubsystem_eventGetSectionRecomputeTangentsVertexMaskChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshEditorSubsystem_eventGetSectionRecomputeTangentsVertexMaskChannel_Parms), &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_OutRecomputeTangentsVertexMaskChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Skeletal Mesh Utilities" },
		{ "Comment", "/** Get RecomputeTangentsVertexMaskChannel from a section of a LOD of a Skeletal Mesh\n\x09 *\n\x09 * @param SkeletalMesh\x09\x09\x09Mesh to get number of vertices from.\n\x09 * @param LodIndex\x09\x09\x09\x09Index of the mesh LOD.\n\x09 * @param SectionIndex\x09\x09\x09Index of the LOD section.\n\x09 * @param OutRecomputeTangentsVertexMaskChannel\x09The function will set the RecomputeTangentsVertexMaskChannel used by the section\n\x09 * @return false if invalid mesh or LOD index or section index.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshEditorSubsystem.h" },
		{ "ToolTip", "Get RecomputeTangentsVertexMaskChannel from a section of a LOD of a Skeletal Mesh\n\n@param SkeletalMesh                  Mesh to get number of vertices from.\n@param LodIndex                              Index of the mesh LOD.\n@param SectionIndex                  Index of the LOD section.\n@param OutRecomputeTangentsVertexMaskChannel The function will set the RecomputeTangentsVertexMaskChannel used by the section\n@return false if invalid mesh or LOD index or section index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshEditorSubsystem, nullptr, "GetSectionRecomputeTangentsVertexMaskChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::SkeletalMeshEditorSubsystem_eventGetSectionRecomputeTangentsVertexMaskChannel_Parms), Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics
	{
		struct SkeletalMeshEditorSubsystem_eventGetSectionVisibleInRayTracing_Parms
		{
			const USkeletalMesh* SkeletalMesh;
			int32 LODIndex;
			int32 SectionIndex;
			bool bOutVisibleInRayTracing;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static void NewProp_bOutVisibleInRayTracing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutVisibleInRayTracing;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetSectionVisibleInRayTracing_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::NewProp_LODIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetSectionVisibleInRayTracing_Parms, LODIndex), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::NewProp_SectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventGetSectionVisibleInRayTracing_Parms, SectionIndex), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::NewProp_SectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::NewProp_SectionIndex_MetaData)) };
	void Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::NewProp_bOutVisibleInRayTracing_SetBit(void* Obj)
	{
		((SkeletalMeshEditorSubsystem_eventGetSectionVisibleInRayTracing_Parms*)Obj)->bOutVisibleInRayTracing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::NewProp_bOutVisibleInRayTracing = { "bOutVisibleInRayTracing", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshEditorSubsystem_eventGetSectionVisibleInRayTracing_Parms), &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::NewProp_bOutVisibleInRayTracing_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshEditorSubsystem_eventGetSectionVisibleInRayTracing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshEditorSubsystem_eventGetSectionVisibleInRayTracing_Parms), &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::NewProp_bOutVisibleInRayTracing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Skeletal Mesh Utilities" },
		{ "Comment", "/** Get bVisibleInRayTracing from a section of a LOD of a Skeletal Mesh\n\x09 *\n\x09 * @param SkeletalMesh\x09\x09\x09Mesh to get number of vertices from.\n\x09 * @param LodIndex\x09\x09\x09\x09Index of the mesh LOD.\n\x09 * @param SectionIndex\x09\x09\x09Index of the LOD section.\n\x09 * @param bOutVisibleInRayTracing\x09The function will set the bVisibleInRayTracing used by the section\n\x09 * @return false if invalid mesh or LOD index or section index.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshEditorSubsystem.h" },
		{ "ToolTip", "Get bVisibleInRayTracing from a section of a LOD of a Skeletal Mesh\n\n@param SkeletalMesh                  Mesh to get number of vertices from.\n@param LodIndex                              Index of the mesh LOD.\n@param SectionIndex                  Index of the LOD section.\n@param bOutVisibleInRayTracing       The function will set the bVisibleInRayTracing used by the section\n@return false if invalid mesh or LOD index or section index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshEditorSubsystem, nullptr, "GetSectionVisibleInRayTracing", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::SkeletalMeshEditorSubsystem_eventGetSectionVisibleInRayTracing_Parms), Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics
	{
		struct SkeletalMeshEditorSubsystem_eventImportLOD_Parms
		{
			USkeletalMesh* BaseMesh;
			int32 LODIndex;
			FString SourceFilename;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFilename;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventImportLOD_Parms, BaseMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics::NewProp_LODIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventImportLOD_Parms, LODIndex), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics::NewProp_SourceFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics::NewProp_SourceFilename = { "SourceFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventImportLOD_Parms, SourceFilename), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics::NewProp_SourceFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics::NewProp_SourceFilename_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventImportLOD_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics::NewProp_BaseMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics::NewProp_SourceFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Import or re-import a LOD into the specified base mesh. If the LOD do not exist it will import it and add it to the base static mesh. If the LOD already exist it will re-import the specified LOD.\n\x09 *\n\x09 * @param BaseSkeletalMesh: The static mesh we import or re-import a LOD.\n\x09 * @param LODIndex: The index of the LOD to import or re-import. Valid value should be between 0 and the base skeletal mesh LOD number. Invalid value will return INDEX_NONE\n\x09 * @param SourceFilename: The fbx source filename. If we are re-importing an existing LOD, it can be empty in this case it will use the last import file. Otherwise it must be an existing fbx file.\n\x09 *\n\x09 * @return The index of the LOD that was imported or re-imported. Will return INDEX_NONE if anything goes bad.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshEditorSubsystem.h" },
		{ "ToolTip", "Import or re-import a LOD into the specified base mesh. If the LOD do not exist it will import it and add it to the base static mesh. If the LOD already exist it will re-import the specified LOD.\n\n@param BaseSkeletalMesh: The static mesh we import or re-import a LOD.\n@param LODIndex: The index of the LOD to import or re-import. Valid value should be between 0 and the base skeletal mesh LOD number. Invalid value will return INDEX_NONE\n@param SourceFilename: The fbx source filename. If we are re-importing an existing LOD, it can be empty in this case it will use the last import file. Otherwise it must be an existing fbx file.\n\n@return The index of the LOD that was imported or re-imported. Will return INDEX_NONE if anything goes bad." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshEditorSubsystem, nullptr, "ImportLOD", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics::SkeletalMeshEditorSubsystem_eventImportLOD_Parms), Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics
	{
		struct SkeletalMeshEditorSubsystem_eventRegenerateLOD_Parms
		{
			USkeletalMesh* SkeletalMesh;
			int32 NewLODCount;
			bool bRegenerateEvenIfImported;
			bool bGenerateBaseLOD;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewLODCount;
		static void NewProp_bRegenerateEvenIfImported_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegenerateEvenIfImported;
		static void NewProp_bGenerateBaseLOD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateBaseLOD;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventRegenerateLOD_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::NewProp_NewLODCount = { "NewLODCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventRegenerateLOD_Parms, NewLODCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::NewProp_bRegenerateEvenIfImported_SetBit(void* Obj)
	{
		((SkeletalMeshEditorSubsystem_eventRegenerateLOD_Parms*)Obj)->bRegenerateEvenIfImported = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::NewProp_bRegenerateEvenIfImported = { "bRegenerateEvenIfImported", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshEditorSubsystem_eventRegenerateLOD_Parms), &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::NewProp_bRegenerateEvenIfImported_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::NewProp_bGenerateBaseLOD_SetBit(void* Obj)
	{
		((SkeletalMeshEditorSubsystem_eventRegenerateLOD_Parms*)Obj)->bGenerateBaseLOD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::NewProp_bGenerateBaseLOD = { "bGenerateBaseLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshEditorSubsystem_eventRegenerateLOD_Parms), &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::NewProp_bGenerateBaseLOD_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshEditorSubsystem_eventRegenerateLOD_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshEditorSubsystem_eventRegenerateLOD_Parms), &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::NewProp_NewLODCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::NewProp_bRegenerateEvenIfImported,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::NewProp_bGenerateBaseLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Skeletal Mesh Utilities" },
		{ "Comment", "/** Regenerate LODs of the mesh\n\x09 *\n\x09 * @param SkeletalMesh\x09The mesh that will regenerate LOD\n\x09 * @param NewLODCount\x09Set valid value (>0) if you want to change LOD count.\n\x09 *\x09\x09\x09\x09\x09\x09Otherwise, it will use the current LOD and regenerate\n\x09 * @param bRegenerateEvenIfImported\x09If this is true, it only regenerate even if this LOD was imported before\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09If false, it will regenerate for only previously auto generated ones\n\x09 * @param bGenerateBaseLOD If this is true and there is some reduction data, the base LOD will be reduce according to the settings\n\x09 * @return\x09true if succeed. If mesh reduction is not available this will return false.\n\x09 */" },
		{ "CPP_Default_bGenerateBaseLOD", "false" },
		{ "CPP_Default_bRegenerateEvenIfImported", "false" },
		{ "CPP_Default_NewLODCount", "0" },
		{ "ModuleRelativePath", "Public/SkeletalMeshEditorSubsystem.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Regenerate LODs of the mesh\n\n@param SkeletalMesh  The mesh that will regenerate LOD\n@param NewLODCount   Set valid value (>0) if you want to change LOD count.\n                                            Otherwise, it will use the current LOD and regenerate\n@param bRegenerateEvenIfImported     If this is true, it only regenerate even if this LOD was imported before\n                                                                    If false, it will regenerate for only previously auto generated ones\n@param bGenerateBaseLOD If this is true and there is some reduction data, the base LOD will be reduce according to the settings\n@return      true if succeed. If mesh reduction is not available this will return false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshEditorSubsystem, nullptr, "RegenerateLOD", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::SkeletalMeshEditorSubsystem_eventRegenerateLOD_Parms), Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ReimportAllCustomLODs_Statics
	{
		struct SkeletalMeshEditorSubsystem_eventReimportAllCustomLODs_Parms
		{
			USkeletalMesh* SkeletalMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ReimportAllCustomLODs_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventReimportAllCustomLODs_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ReimportAllCustomLODs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshEditorSubsystem_eventReimportAllCustomLODs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ReimportAllCustomLODs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshEditorSubsystem_eventReimportAllCustomLODs_Parms), &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ReimportAllCustomLODs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ReimportAllCustomLODs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ReimportAllCustomLODs_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ReimportAllCustomLODs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ReimportAllCustomLODs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Re-import the specified skeletal mesh and all the custom LODs.\n\x09 *\n\x09 * @param SkeletalMesh: is the skeletal mesh we import or re-import a LOD.\n\x09 *\n\x09 * @return true if re-import works, false otherwise see log for explanation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshEditorSubsystem.h" },
		{ "ToolTip", "Re-import the specified skeletal mesh and all the custom LODs.\n\n@param SkeletalMesh: is the skeletal mesh we import or re-import a LOD.\n\n@return true if re-import works, false otherwise see log for explanation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ReimportAllCustomLODs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshEditorSubsystem, nullptr, "ReimportAllCustomLODs", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ReimportAllCustomLODs_Statics::SkeletalMeshEditorSubsystem_eventReimportAllCustomLODs_Parms), Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ReimportAllCustomLODs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ReimportAllCustomLODs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ReimportAllCustomLODs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ReimportAllCustomLODs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ReimportAllCustomLODs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ReimportAllCustomLODs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RenameSocket_Statics
	{
		struct SkeletalMeshEditorSubsystem_eventRenameSocket_Parms
		{
			USkeletalMesh* SkeletalMesh;
			FName OldName;
			FName NewName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OldName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RenameSocket_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventRenameSocket_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RenameSocket_Statics::NewProp_OldName = { "OldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventRenameSocket_Parms, OldName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RenameSocket_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventRenameSocket_Parms, NewName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RenameSocket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshEditorSubsystem_eventRenameSocket_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RenameSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshEditorSubsystem_eventRenameSocket_Parms), &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RenameSocket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RenameSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RenameSocket_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RenameSocket_Statics::NewProp_OldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RenameSocket_Statics::NewProp_NewName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RenameSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RenameSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "Skeletal Mesh Utilities" },
		{ "Comment", "/** Rename a socket within a skeleton\n\x09 * @param SkeletalMesh\x09The mesh inside which we are renaming a socket\n\x09 * @param OldName       The old name of the socket\n\x09 * @param NewName\x09\x09The new name of the socket\n\x09 * @return true if the renaming succeeded.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshEditorSubsystem.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Rename a socket within a skeleton\n@param SkeletalMesh  The mesh inside which we are renaming a socket\n@param OldName       The old name of the socket\n@param NewName               The new name of the socket\n@return true if the renaming succeeded." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RenameSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshEditorSubsystem, nullptr, "RenameSocket", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RenameSocket_Statics::SkeletalMeshEditorSubsystem_eventRenameSocket_Parms), Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RenameSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RenameSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RenameSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RenameSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RenameSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RenameSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings_Statics
	{
		struct SkeletalMeshEditorSubsystem_eventSetLodBuildSettings_Parms
		{
			USkeletalMesh* SkeletalMesh;
			int32 LodIndex;
			FSkeletalMeshBuildSettings BuildOptions;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BuildOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventSetLodBuildSettings_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_LodIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventSetLodBuildSettings_Parms, LodIndex), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_LodIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_LodIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_BuildOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_BuildOptions = { "BuildOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventSetLodBuildSettings_Parms, BuildOptions), Z_Construct_UScriptStruct_FSkeletalMeshBuildSettings, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_BuildOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_BuildOptions_MetaData)) }; // 2087068264
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_BuildOptions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Set the LOD build options for the specified LOD index.\n\x09 * @param SkeletalMesh - Mesh to process.\n\x09 * @param LodIndex - The LOD we will apply the build settings.\n\x09 * @param BuildOptions - The build settings we want to apply to the LOD.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshEditorSubsystem.h" },
		{ "ToolTip", "Set the LOD build options for the specified LOD index.\n@param SkeletalMesh - Mesh to process.\n@param LodIndex - The LOD we will apply the build settings.\n@param BuildOptions - The build settings we want to apply to the LOD." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshEditorSubsystem, nullptr, "SetLodBuildSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings_Statics::SkeletalMeshEditorSubsystem_eventSetLodBuildSettings_Parms), Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics
	{
		struct SkeletalMeshEditorSubsystem_eventSetSectionCastShadow_Parms
		{
			USkeletalMesh* SkeletalMesh;
			int32 LODIndex;
			int32 SectionIndex;
			bool bCastShadow;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[];
#endif
		static void NewProp_bCastShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventSetSectionCastShadow_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::NewProp_LODIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventSetSectionCastShadow_Parms, LODIndex), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::NewProp_SectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventSetSectionCastShadow_Parms, SectionIndex), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::NewProp_SectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::NewProp_SectionIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::NewProp_bCastShadow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::NewProp_bCastShadow_SetBit(void* Obj)
	{
		((SkeletalMeshEditorSubsystem_eventSetSectionCastShadow_Parms*)Obj)->bCastShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshEditorSubsystem_eventSetSectionCastShadow_Parms), &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::NewProp_bCastShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::NewProp_bCastShadow_MetaData)) };
	void Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshEditorSubsystem_eventSetSectionCastShadow_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshEditorSubsystem_eventSetSectionCastShadow_Parms), &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::NewProp_bCastShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Skeletal Mesh Utilities" },
		{ "Comment", "/** Set bCastShadow for a section of a LOD of a Skeletal Mesh.\n\x09 *\n\x09 * @param SkeletalMesh\x09\x09\x09Mesh to get number of vertices from.\n\x09 * @param LodIndex\x09\x09\x09\x09Index of the mesh LOD.\n\x09 * @param SectionIndex\x09\x09\x09Index of the LOD section.\n\x09 * @param bCastShadow\x09The function will set the bCastShadow used by the section\n\x09 * @return false if invalid mesh or LOD index or section index.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshEditorSubsystem.h" },
		{ "ToolTip", "Set bCastShadow for a section of a LOD of a Skeletal Mesh.\n\n@param SkeletalMesh                  Mesh to get number of vertices from.\n@param LodIndex                              Index of the mesh LOD.\n@param SectionIndex                  Index of the LOD section.\n@param bCastShadow   The function will set the bCastShadow used by the section\n@return false if invalid mesh or LOD index or section index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshEditorSubsystem, nullptr, "SetSectionCastShadow", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::SkeletalMeshEditorSubsystem_eventSetSectionCastShadow_Parms), Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics
	{
		struct SkeletalMeshEditorSubsystem_eventSetSectionRecomputeTangent_Parms
		{
			USkeletalMesh* SkeletalMesh;
			int32 LODIndex;
			int32 SectionIndex;
			bool bRecomputeTangent;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecomputeTangent_MetaData[];
#endif
		static void NewProp_bRecomputeTangent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecomputeTangent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventSetSectionRecomputeTangent_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::NewProp_LODIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventSetSectionRecomputeTangent_Parms, LODIndex), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::NewProp_SectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventSetSectionRecomputeTangent_Parms, SectionIndex), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::NewProp_SectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::NewProp_SectionIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::NewProp_bRecomputeTangent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::NewProp_bRecomputeTangent_SetBit(void* Obj)
	{
		((SkeletalMeshEditorSubsystem_eventSetSectionRecomputeTangent_Parms*)Obj)->bRecomputeTangent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::NewProp_bRecomputeTangent = { "bRecomputeTangent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshEditorSubsystem_eventSetSectionRecomputeTangent_Parms), &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::NewProp_bRecomputeTangent_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::NewProp_bRecomputeTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::NewProp_bRecomputeTangent_MetaData)) };
	void Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshEditorSubsystem_eventSetSectionRecomputeTangent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshEditorSubsystem_eventSetSectionRecomputeTangent_Parms), &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::NewProp_bRecomputeTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Skeletal Mesh Utilities" },
		{ "Comment", "/** Set bRecomputeTangent for a section of a LOD of a Skeletal Mesh.\n\x09 *\n\x09 * @param SkeletalMesh\x09\x09\x09Mesh to get number of vertices from.\n\x09 * @param LodIndex\x09\x09\x09\x09Index of the mesh LOD.\n\x09 * @param SectionIndex\x09\x09\x09Index of the LOD section.\n\x09 * @param bRecomputeTangent\x09The function will set the bRecomputeTangent used by the section\n\x09 * @return false if invalid mesh or LOD index or section index.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshEditorSubsystem.h" },
		{ "ToolTip", "Set bRecomputeTangent for a section of a LOD of a Skeletal Mesh.\n\n@param SkeletalMesh                  Mesh to get number of vertices from.\n@param LodIndex                              Index of the mesh LOD.\n@param SectionIndex                  Index of the LOD section.\n@param bRecomputeTangent     The function will set the bRecomputeTangent used by the section\n@return false if invalid mesh or LOD index or section index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshEditorSubsystem, nullptr, "SetSectionRecomputeTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::SkeletalMeshEditorSubsystem_eventSetSectionRecomputeTangent_Parms), Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics
	{
		struct SkeletalMeshEditorSubsystem_eventSetSectionRecomputeTangentsVertexMaskChannel_Parms
		{
			USkeletalMesh* SkeletalMesh;
			int32 LODIndex;
			int32 SectionIndex;
			uint8 RecomputeTangentsVertexMaskChannel;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecomputeTangentsVertexMaskChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RecomputeTangentsVertexMaskChannel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventSetSectionRecomputeTangentsVertexMaskChannel_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_LODIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventSetSectionRecomputeTangentsVertexMaskChannel_Parms, LODIndex), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_SectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventSetSectionRecomputeTangentsVertexMaskChannel_Parms, SectionIndex), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_SectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_SectionIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_RecomputeTangentsVertexMaskChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_RecomputeTangentsVertexMaskChannel = { "RecomputeTangentsVertexMaskChannel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventSetSectionRecomputeTangentsVertexMaskChannel_Parms, RecomputeTangentsVertexMaskChannel), nullptr, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_RecomputeTangentsVertexMaskChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_RecomputeTangentsVertexMaskChannel_MetaData)) };
	void Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshEditorSubsystem_eventSetSectionRecomputeTangentsVertexMaskChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshEditorSubsystem_eventSetSectionRecomputeTangentsVertexMaskChannel_Parms), &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_RecomputeTangentsVertexMaskChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Skeletal Mesh Utilities" },
		{ "Comment", "/** Set RecomputeTangentsVertexMaskChannel for a section of a LOD of a Skeletal Mesh.\n\x09 *\n\x09 * @param SkeletalMesh\x09\x09\x09Mesh to get number of vertices from.\n\x09 * @param LodIndex\x09\x09\x09\x09Index of the mesh LOD.\n\x09 * @param SectionIndex\x09\x09\x09Index of the LOD section.\n\x09 * @param RecomputeTangentsVertexMaskChannel\x09The function will set the RecomputeTangentsVertexMaskChannel used by the section\n\x09 * @return false if invalid mesh or LOD index or section index.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshEditorSubsystem.h" },
		{ "ToolTip", "Set RecomputeTangentsVertexMaskChannel for a section of a LOD of a Skeletal Mesh.\n\n@param SkeletalMesh                  Mesh to get number of vertices from.\n@param LodIndex                              Index of the mesh LOD.\n@param SectionIndex                  Index of the LOD section.\n@param RecomputeTangentsVertexMaskChannel    The function will set the RecomputeTangentsVertexMaskChannel used by the section\n@return false if invalid mesh or LOD index or section index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshEditorSubsystem, nullptr, "SetSectionRecomputeTangentsVertexMaskChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::SkeletalMeshEditorSubsystem_eventSetSectionRecomputeTangentsVertexMaskChannel_Parms), Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics
	{
		struct SkeletalMeshEditorSubsystem_eventSetSectionVisibleInRayTracing_Parms
		{
			USkeletalMesh* SkeletalMesh;
			int32 LODIndex;
			int32 SectionIndex;
			bool bVisibleInRayTracing;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisibleInRayTracing_MetaData[];
#endif
		static void NewProp_bVisibleInRayTracing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleInRayTracing;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventSetSectionVisibleInRayTracing_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::NewProp_LODIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventSetSectionVisibleInRayTracing_Parms, LODIndex), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::NewProp_SectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshEditorSubsystem_eventSetSectionVisibleInRayTracing_Parms, SectionIndex), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::NewProp_SectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::NewProp_SectionIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::NewProp_bVisibleInRayTracing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::NewProp_bVisibleInRayTracing_SetBit(void* Obj)
	{
		((SkeletalMeshEditorSubsystem_eventSetSectionVisibleInRayTracing_Parms*)Obj)->bVisibleInRayTracing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::NewProp_bVisibleInRayTracing = { "bVisibleInRayTracing", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshEditorSubsystem_eventSetSectionVisibleInRayTracing_Parms), &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::NewProp_bVisibleInRayTracing_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::NewProp_bVisibleInRayTracing_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::NewProp_bVisibleInRayTracing_MetaData)) };
	void Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshEditorSubsystem_eventSetSectionVisibleInRayTracing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshEditorSubsystem_eventSetSectionVisibleInRayTracing_Parms), &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::NewProp_bVisibleInRayTracing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Skeletal Mesh Utilities" },
		{ "Comment", "/** Set bVisibleInRayTracing for a section of a LOD of a Skeletal Mesh.\n\x09 *\n\x09 * @param SkeletalMesh\x09\x09\x09Mesh to get number of vertices from.\n\x09 * @param LodIndex\x09\x09\x09\x09Index of the mesh LOD.\n\x09 * @param SectionIndex\x09\x09\x09Index of the LOD section.\n\x09 * @param bVisibleInRayTracing\x09The function will set the bVisibleInRayTracing used by the section\n\x09 * @return false if invalid mesh or LOD index or section index.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshEditorSubsystem.h" },
		{ "ToolTip", "Set bVisibleInRayTracing for a section of a LOD of a Skeletal Mesh.\n\n@param SkeletalMesh                  Mesh to get number of vertices from.\n@param LodIndex                              Index of the mesh LOD.\n@param SectionIndex                  Index of the LOD section.\n@param bVisibleInRayTracing  The function will set the bVisibleInRayTracing used by the section\n@return false if invalid mesh or LOD index or section index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshEditorSubsystem, nullptr, "SetSectionVisibleInRayTracing", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::SkeletalMeshEditorSubsystem_eventSetSectionVisibleInRayTracing_Parms), Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshEditorSubsystem);
	UClass* Z_Construct_UClass_USkeletalMeshEditorSubsystem_NoRegister()
	{
		return USkeletalMeshEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SkeletalMeshEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkeletalMeshEditorSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_CreatePhysicsAsset, "CreatePhysicsAsset" }, // 2827533287
		{ &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLodBuildSettings, "GetLodBuildSettings" }, // 4088032256
		{ &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODCount, "GetLODCount" }, // 1046027451
		{ &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetLODMaterialSlot, "GetLODMaterialSlot" }, // 186124746
		{ &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumSections, "GetNumSections" }, // 1492986078
		{ &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetNumVerts, "GetNumVerts" }, // 3684109671
		{ &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionCastShadow, "GetSectionCastShadow" }, // 4115273029
		{ &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangent, "GetSectionRecomputeTangent" }, // 3670548039
		{ &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionRecomputeTangentsVertexMaskChannel, "GetSectionRecomputeTangentsVertexMaskChannel" }, // 4102536839
		{ &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_GetSectionVisibleInRayTracing, "GetSectionVisibleInRayTracing" }, // 2763640178
		{ &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ImportLOD, "ImportLOD" }, // 1571815154
		{ &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RegenerateLOD, "RegenerateLOD" }, // 2648226089
		{ &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_ReimportAllCustomLODs, "ReimportAllCustomLODs" }, // 2800704196
		{ &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_RenameSocket, "RenameSocket" }, // 2516637003
		{ &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetLodBuildSettings, "SetLodBuildSettings" }, // 3382592268
		{ &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionCastShadow, "SetSectionCastShadow" }, // 2034730164
		{ &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangent, "SetSectionRecomputeTangent" }, // 2161377441
		{ &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionRecomputeTangentsVertexMaskChannel, "SetSectionRecomputeTangentsVertexMaskChannel" }, // 530835519
		{ &Z_Construct_UFunction_USkeletalMeshEditorSubsystem_SetSectionVisibleInRayTracing, "SetSectionVisibleInRayTracing" }, // 854778196
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* USkeletalMeshEditorSubsystem\n* Subsystem for exposing skeletal mesh functionality to scripts\n*/" },
		{ "IncludePath", "SkeletalMeshEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/SkeletalMeshEditorSubsystem.h" },
		{ "ToolTip", "USkeletalMeshEditorSubsystem\nSubsystem for exposing skeletal mesh functionality to scripts" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshEditorSubsystem_Statics::ClassParams = {
		&USkeletalMeshEditorSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshEditorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_USkeletalMeshEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshEditorSubsystem.OuterSingleton, Z_Construct_UClass_USkeletalMeshEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalMeshEditorSubsystem.OuterSingleton;
	}
	template<> SKELETALMESHEDITOR_API UClass* StaticClass<USkeletalMeshEditorSubsystem>()
	{
		return USkeletalMeshEditorSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshEditorSubsystem);
	USkeletalMeshEditorSubsystem::~USkeletalMeshEditorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMeshEditorSubsystem, USkeletalMeshEditorSubsystem::StaticClass, TEXT("USkeletalMeshEditorSubsystem"), &Z_Registration_Info_UClass_USkeletalMeshEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshEditorSubsystem), 3235826413U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_3147185906(TEXT("/Script/SkeletalMeshEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
