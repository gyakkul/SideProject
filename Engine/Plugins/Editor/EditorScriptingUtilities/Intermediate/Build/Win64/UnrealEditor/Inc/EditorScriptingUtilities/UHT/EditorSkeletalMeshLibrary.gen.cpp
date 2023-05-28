// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorSkeletalMeshLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorSkeletalMeshLibrary() {}
// Cross Module References
	EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary();
	EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshBuildSettings();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingUtilities();
// End Cross Module References
	DEFINE_FUNCTION(UDEPRECATED_EditorSkeletalMeshLibrary::execCreatePhysicsAsset)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhysicsAsset**)Z_Param__Result=UDEPRECATED_EditorSkeletalMeshLibrary::CreatePhysicsAsset(Z_Param_SkeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorSkeletalMeshLibrary::execStripLODGeometry)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_OBJECT(UTexture2D,Z_Param_TextureMask);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Threshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_EditorSkeletalMeshLibrary::StripLODGeometry(Z_Param_SkeletalMesh,Z_Param_LODIndex,Z_Param_TextureMask,Z_Param_Threshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorSkeletalMeshLibrary::execRemoveLODs)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_TARRAY(int32,Z_Param_ToRemoveLODs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_EditorSkeletalMeshLibrary::RemoveLODs(Z_Param_SkeletalMesh,Z_Param_ToRemoveLODs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorSkeletalMeshLibrary::execSetLodBuildSettings)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_STRUCT_REF(FSkeletalMeshBuildSettings,Z_Param_Out_BuildOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_EditorSkeletalMeshLibrary::SetLodBuildSettings(Z_Param_SkeletalMesh,Z_Param_LodIndex,Z_Param_Out_BuildOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorSkeletalMeshLibrary::execGetLodBuildSettings)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_STRUCT_REF(FSkeletalMeshBuildSettings,Z_Param_Out_OutBuildOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_EditorSkeletalMeshLibrary::GetLodBuildSettings(Z_Param_SkeletalMesh,Z_Param_LodIndex,Z_Param_Out_OutBuildOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorSkeletalMeshLibrary::execReimportAllCustomLODs)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_EditorSkeletalMeshLibrary::ReimportAllCustomLODs(Z_Param_SkeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorSkeletalMeshLibrary::execImportLOD)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_BaseMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_SourceFilename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDEPRECATED_EditorSkeletalMeshLibrary::ImportLOD(Z_Param_BaseMesh,Z_Param_LODIndex,Z_Param_SourceFilename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorSkeletalMeshLibrary::execGetLODCount)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDEPRECATED_EditorSkeletalMeshLibrary::GetLODCount(Z_Param_SkeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorSkeletalMeshLibrary::execRenameSocket)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FNameProperty,Z_Param_OldName);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_EditorSkeletalMeshLibrary::RenameSocket(Z_Param_SkeletalMesh,Z_Param_OldName,Z_Param_NewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorSkeletalMeshLibrary::execGetNumVerts)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDEPRECATED_EditorSkeletalMeshLibrary::GetNumVerts(Z_Param_SkeletalMesh,Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorSkeletalMeshLibrary::execRegenerateLOD)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewLODCount);
		P_GET_UBOOL(Z_Param_bRegenerateEvenIfImported);
		P_GET_UBOOL(Z_Param_bGenerateBaseLOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_EditorSkeletalMeshLibrary::RegenerateLOD(Z_Param_SkeletalMesh,Z_Param_NewLODCount,Z_Param_bRegenerateEvenIfImported,Z_Param_bGenerateBaseLOD);
		P_NATIVE_END;
	}
	void UDEPRECATED_EditorSkeletalMeshLibrary::StaticRegisterNativesUDEPRECATED_EditorSkeletalMeshLibrary()
	{
		UClass* Class = UDEPRECATED_EditorSkeletalMeshLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreatePhysicsAsset", &UDEPRECATED_EditorSkeletalMeshLibrary::execCreatePhysicsAsset },
			{ "GetLodBuildSettings", &UDEPRECATED_EditorSkeletalMeshLibrary::execGetLodBuildSettings },
			{ "GetLODCount", &UDEPRECATED_EditorSkeletalMeshLibrary::execGetLODCount },
			{ "GetNumVerts", &UDEPRECATED_EditorSkeletalMeshLibrary::execGetNumVerts },
			{ "ImportLOD", &UDEPRECATED_EditorSkeletalMeshLibrary::execImportLOD },
			{ "RegenerateLOD", &UDEPRECATED_EditorSkeletalMeshLibrary::execRegenerateLOD },
			{ "ReimportAllCustomLODs", &UDEPRECATED_EditorSkeletalMeshLibrary::execReimportAllCustomLODs },
			{ "RemoveLODs", &UDEPRECATED_EditorSkeletalMeshLibrary::execRemoveLODs },
			{ "RenameSocket", &UDEPRECATED_EditorSkeletalMeshLibrary::execRenameSocket },
			{ "SetLodBuildSettings", &UDEPRECATED_EditorSkeletalMeshLibrary::execSetLodBuildSettings },
			{ "StripLODGeometry", &UDEPRECATED_EditorSkeletalMeshLibrary::execStripLODGeometry },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_CreatePhysicsAsset_Statics
	{
		struct EditorSkeletalMeshLibrary_eventCreatePhysicsAsset_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_CreatePhysicsAsset_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventCreatePhysicsAsset_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_CreatePhysicsAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventCreatePhysicsAsset_Parms, ReturnValue), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_CreatePhysicsAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_CreatePhysicsAsset_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_CreatePhysicsAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_CreatePhysicsAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | SkeletalMesh" },
		{ "Comment", "/**\n\x09 * This function creates a PhysicsAsset for the given SkeletalMesh with the same settings as if it were created through FBX import\n\x09 *\n\x09 * @Param SkeletalMesh: The SkeletalMesh we want to create the PhysicsAsset for\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorSkeletalMeshLibrary.h" },
		{ "ToolTip", "This function creates a PhysicsAsset for the given SkeletalMesh with the same settings as if it were created through FBX import\n\n@Param SkeletalMesh: The SkeletalMesh we want to create the PhysicsAsset for" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_CreatePhysicsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary, nullptr, "CreatePhysicsAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_CreatePhysicsAsset_Statics::EditorSkeletalMeshLibrary_eventCreatePhysicsAsset_Parms), Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_CreatePhysicsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_CreatePhysicsAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_CreatePhysicsAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_CreatePhysicsAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_CreatePhysicsAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_CreatePhysicsAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings_Statics
	{
		struct EditorSkeletalMeshLibrary_eventGetLodBuildSettings_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventGetLodBuildSettings_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings_Statics::NewProp_LodIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventGetLodBuildSettings_Parms, LodIndex), METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings_Statics::NewProp_LodIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings_Statics::NewProp_LodIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings_Statics::NewProp_OutBuildOptions = { "OutBuildOptions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventGetLodBuildSettings_Parms, OutBuildOptions), Z_Construct_UScriptStruct_FSkeletalMeshBuildSettings, METADATA_PARAMS(nullptr, 0) }; // 2087068264
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings_Statics::NewProp_OutBuildOptions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | SkeletalMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Skeletal Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorSkeletalMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary, nullptr, "GetLodBuildSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings_Statics::EditorSkeletalMeshLibrary_eventGetLodBuildSettings_Parms), Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLODCount_Statics
	{
		struct EditorSkeletalMeshLibrary_eventGetLODCount_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLODCount_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventGetLODCount_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLODCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventGetLODCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLODCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLODCount_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLODCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLODCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | SkeletalMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Skeletal Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorSkeletalMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLODCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary, nullptr, "GetLODCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLODCount_Statics::EditorSkeletalMeshLibrary_eventGetLODCount_Parms), Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLODCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLODCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLODCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLODCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLODCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLODCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetNumVerts_Statics
	{
		struct EditorSkeletalMeshLibrary_eventGetNumVerts_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetNumVerts_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventGetNumVerts_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetNumVerts_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventGetNumVerts_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetNumVerts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventGetNumVerts_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetNumVerts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetNumVerts_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetNumVerts_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetNumVerts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetNumVerts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | SkeletalMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Skeletal Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorSkeletalMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetNumVerts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary, nullptr, "GetNumVerts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetNumVerts_Statics::EditorSkeletalMeshLibrary_eventGetNumVerts_Parms), Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetNumVerts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetNumVerts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetNumVerts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetNumVerts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetNumVerts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetNumVerts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics
	{
		struct EditorSkeletalMeshLibrary_eventImportLOD_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventImportLOD_Parms, BaseMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics::NewProp_LODIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventImportLOD_Parms, LODIndex), METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics::NewProp_SourceFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics::NewProp_SourceFilename = { "SourceFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventImportLOD_Parms, SourceFilename), METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics::NewProp_SourceFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics::NewProp_SourceFilename_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventImportLOD_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics::NewProp_BaseMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics::NewProp_SourceFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | SkeletalMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Skeletal Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorSkeletalMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary, nullptr, "ImportLOD", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics::EditorSkeletalMeshLibrary_eventImportLOD_Parms), Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics
	{
		struct EditorSkeletalMeshLibrary_eventRegenerateLOD_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventRegenerateLOD_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_NewLODCount = { "NewLODCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventRegenerateLOD_Parms, NewLODCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_bRegenerateEvenIfImported_SetBit(void* Obj)
	{
		((EditorSkeletalMeshLibrary_eventRegenerateLOD_Parms*)Obj)->bRegenerateEvenIfImported = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_bRegenerateEvenIfImported = { "bRegenerateEvenIfImported", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorSkeletalMeshLibrary_eventRegenerateLOD_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_bRegenerateEvenIfImported_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_bGenerateBaseLOD_SetBit(void* Obj)
	{
		((EditorSkeletalMeshLibrary_eventRegenerateLOD_Parms*)Obj)->bGenerateBaseLOD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_bGenerateBaseLOD = { "bGenerateBaseLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorSkeletalMeshLibrary_eventRegenerateLOD_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_bGenerateBaseLOD_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorSkeletalMeshLibrary_eventRegenerateLOD_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorSkeletalMeshLibrary_eventRegenerateLOD_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_NewLODCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_bRegenerateEvenIfImported,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_bGenerateBaseLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | SkeletalMesh" },
		{ "CPP_Default_bGenerateBaseLOD", "false" },
		{ "CPP_Default_bRegenerateEvenIfImported", "false" },
		{ "CPP_Default_NewLODCount", "0" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Skeletal Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorSkeletalMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary, nullptr, "RegenerateLOD", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::EditorSkeletalMeshLibrary_eventRegenerateLOD_Parms), Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ReimportAllCustomLODs_Statics
	{
		struct EditorSkeletalMeshLibrary_eventReimportAllCustomLODs_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ReimportAllCustomLODs_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventReimportAllCustomLODs_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ReimportAllCustomLODs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorSkeletalMeshLibrary_eventReimportAllCustomLODs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ReimportAllCustomLODs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorSkeletalMeshLibrary_eventReimportAllCustomLODs_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ReimportAllCustomLODs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ReimportAllCustomLODs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ReimportAllCustomLODs_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ReimportAllCustomLODs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ReimportAllCustomLODs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | SkeletalMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Skeletal Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorSkeletalMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ReimportAllCustomLODs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary, nullptr, "ReimportAllCustomLODs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ReimportAllCustomLODs_Statics::EditorSkeletalMeshLibrary_eventReimportAllCustomLODs_Parms), Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ReimportAllCustomLODs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ReimportAllCustomLODs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ReimportAllCustomLODs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ReimportAllCustomLODs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ReimportAllCustomLODs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ReimportAllCustomLODs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RemoveLODs_Statics
	{
		struct EditorSkeletalMeshLibrary_eventRemoveLODs_Parms
		{
			USkeletalMesh* SkeletalMesh;
			TArray<int32> ToRemoveLODs;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ToRemoveLODs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ToRemoveLODs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RemoveLODs_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventRemoveLODs_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RemoveLODs_Statics::NewProp_ToRemoveLODs_Inner = { "ToRemoveLODs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RemoveLODs_Statics::NewProp_ToRemoveLODs = { "ToRemoveLODs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventRemoveLODs_Parms, ToRemoveLODs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RemoveLODs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorSkeletalMeshLibrary_eventRemoveLODs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RemoveLODs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorSkeletalMeshLibrary_eventRemoveLODs_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RemoveLODs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RemoveLODs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RemoveLODs_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RemoveLODs_Statics::NewProp_ToRemoveLODs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RemoveLODs_Statics::NewProp_ToRemoveLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RemoveLODs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RemoveLODs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | SkeletalMesh" },
		{ "Comment", "/** Remove all the specified LODs. This function will remove all the valid LODs in the list.\n\x09 * Valid LOD is any LOD greater then 0 that exist in the skeletalmesh. We cannot remove the base LOD 0.\n\x09 *\n\x09 * @param SkeletalMesh\x09The mesh inside which we are renaming a socket\n\x09 * @param ToRemoveLODs\x09The LODs we need to remove\n\x09 * @return true if the successfully remove all the LODs. False otherwise, but evedn if it return false it\n\x09 * will have removed all valid LODs.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorSkeletalMeshLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Remove all the specified LODs. This function will remove all the valid LODs in the list.\nValid LOD is any LOD greater then 0 that exist in the skeletalmesh. We cannot remove the base LOD 0.\n\n@param SkeletalMesh  The mesh inside which we are renaming a socket\n@param ToRemoveLODs  The LODs we need to remove\n@return true if the successfully remove all the LODs. False otherwise, but evedn if it return false it\nwill have removed all valid LODs." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RemoveLODs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary, nullptr, "RemoveLODs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RemoveLODs_Statics::EditorSkeletalMeshLibrary_eventRemoveLODs_Parms), Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RemoveLODs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RemoveLODs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RemoveLODs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RemoveLODs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RemoveLODs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RemoveLODs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RenameSocket_Statics
	{
		struct EditorSkeletalMeshLibrary_eventRenameSocket_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RenameSocket_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventRenameSocket_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RenameSocket_Statics::NewProp_OldName = { "OldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventRenameSocket_Parms, OldName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RenameSocket_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventRenameSocket_Parms, NewName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RenameSocket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorSkeletalMeshLibrary_eventRenameSocket_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RenameSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorSkeletalMeshLibrary_eventRenameSocket_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RenameSocket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RenameSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RenameSocket_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RenameSocket_Statics::NewProp_OldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RenameSocket_Statics::NewProp_NewName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RenameSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RenameSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | SkeletalMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Skeletal Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorSkeletalMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RenameSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary, nullptr, "RenameSocket", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RenameSocket_Statics::EditorSkeletalMeshLibrary_eventRenameSocket_Parms), Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RenameSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RenameSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RenameSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RenameSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RenameSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RenameSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings_Statics
	{
		struct EditorSkeletalMeshLibrary_eventSetLodBuildSettings_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventSetLodBuildSettings_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings_Statics::NewProp_LodIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventSetLodBuildSettings_Parms, LodIndex), METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings_Statics::NewProp_LodIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings_Statics::NewProp_LodIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings_Statics::NewProp_BuildOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings_Statics::NewProp_BuildOptions = { "BuildOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventSetLodBuildSettings_Parms, BuildOptions), Z_Construct_UScriptStruct_FSkeletalMeshBuildSettings, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings_Statics::NewProp_BuildOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings_Statics::NewProp_BuildOptions_MetaData)) }; // 2087068264
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings_Statics::NewProp_BuildOptions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | SkeletalMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Skeletal Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorSkeletalMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary, nullptr, "SetLodBuildSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings_Statics::EditorSkeletalMeshLibrary_eventSetLodBuildSettings_Parms), Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics
	{
		struct EditorSkeletalMeshLibrary_eventStripLODGeometry_Parms
		{
			USkeletalMesh* SkeletalMesh;
			int32 LODIndex;
			UTexture2D* TextureMask;
			float Threshold;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventStripLODGeometry_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::NewProp_LODIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventStripLODGeometry_Parms, LODIndex), METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::NewProp_LODIndex_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::NewProp_TextureMask = { "TextureMask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventStripLODGeometry_Parms, TextureMask), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::NewProp_Threshold_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventStripLODGeometry_Parms, Threshold), METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::NewProp_Threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::NewProp_Threshold_MetaData)) };
	void Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorSkeletalMeshLibrary_eventStripLODGeometry_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorSkeletalMeshLibrary_eventStripLODGeometry_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::NewProp_TextureMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::NewProp_Threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | SkeletalMesh" },
		{ "Comment", "/**\n\x09 * This function will strip all triangle in the specified LOD that don't have any UV area pointing on a black pixel in the TextureMask.\n\x09 * We use the UVChannel 0 to find the pixels in the texture.\n\x09 *\n\x09 * @Param SkeletalMesh: The skeletalmesh we want to optimize\n\x09 * @Param LODIndex: The LOD we want to optimize\n\x09 * @Param TextureMask: The texture containing the stripping mask. non black pixel strip triangle, black pixel keep them.\n\x09 * @Param Threshold: The threshold we want when comparing the texture value with zero.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorSkeletalMeshLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "This function will strip all triangle in the specified LOD that don't have any UV area pointing on a black pixel in the TextureMask.\nWe use the UVChannel 0 to find the pixels in the texture.\n\n@Param SkeletalMesh: The skeletalmesh we want to optimize\n@Param LODIndex: The LOD we want to optimize\n@Param TextureMask: The texture containing the stripping mask. non black pixel strip triangle, black pixel keep them.\n@Param Threshold: The threshold we want when comparing the texture value with zero." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary, nullptr, "StripLODGeometry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::EditorSkeletalMeshLibrary_eventStripLODGeometry_Parms), Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_EditorSkeletalMeshLibrary);
	UClass* Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary_NoRegister()
	{
		return UDEPRECATED_EditorSkeletalMeshLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_CreatePhysicsAsset, "CreatePhysicsAsset" }, // 3530209758
		{ &Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLodBuildSettings, "GetLodBuildSettings" }, // 3797447032
		{ &Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetLODCount, "GetLODCount" }, // 523938546
		{ &Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_GetNumVerts, "GetNumVerts" }, // 3704322322
		{ &Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ImportLOD, "ImportLOD" }, // 3100362729
		{ &Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RegenerateLOD, "RegenerateLOD" }, // 2338227426
		{ &Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_ReimportAllCustomLODs, "ReimportAllCustomLODs" }, // 3822153591
		{ &Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RemoveLODs, "RemoveLODs" }, // 2620919672
		{ &Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_RenameSocket, "RenameSocket" }, // 2609184260
		{ &Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_SetLodBuildSettings, "SetLodBuildSettings" }, // 1346502100
		{ &Z_Construct_UFunction_UDEPRECATED_EditorSkeletalMeshLibrary_StripLODGeometry, "StripLODGeometry" }, // 2457508012
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Utility class to altering and analyzing a SkeletalMesh and use the common functionalities of the SkeletalMesh Editor.\n* The editor should not be in play in editor mode.\n */" },
		{ "IncludePath", "EditorSkeletalMeshLibrary.h" },
		{ "ModuleRelativePath", "Public/EditorSkeletalMeshLibrary.h" },
		{ "ToolTip", "Utility class to altering and analyzing a SkeletalMesh and use the common functionalities of the SkeletalMesh Editor.\nThe editor should not be in play in editor mode." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_EditorSkeletalMeshLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary_Statics::ClassParams = {
		&UDEPRECATED_EditorSkeletalMeshLibrary::StaticClass,
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
		0x021002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_EditorSkeletalMeshLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_EditorSkeletalMeshLibrary.OuterSingleton, Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_EditorSkeletalMeshLibrary.OuterSingleton;
	}
	template<> EDITORSCRIPTINGUTILITIES_API UClass* StaticClass<UDEPRECATED_EditorSkeletalMeshLibrary>()
	{
		return UDEPRECATED_EditorSkeletalMeshLibrary::StaticClass();
	}
	UDEPRECATED_EditorSkeletalMeshLibrary::UDEPRECATED_EditorSkeletalMeshLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_EditorSkeletalMeshLibrary);
	UDEPRECATED_EditorSkeletalMeshLibrary::~UDEPRECATED_EditorSkeletalMeshLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary, UDEPRECATED_EditorSkeletalMeshLibrary::StaticClass, TEXT("UDEPRECATED_EditorSkeletalMeshLibrary"), &Z_Registration_Info_UClass_UDEPRECATED_EditorSkeletalMeshLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_EditorSkeletalMeshLibrary), 3928360410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_2792520176(TEXT("/Script/EditorScriptingUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
