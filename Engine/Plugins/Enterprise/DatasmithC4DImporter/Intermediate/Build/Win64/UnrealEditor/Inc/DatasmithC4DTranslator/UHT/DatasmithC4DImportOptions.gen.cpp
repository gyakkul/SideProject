// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DatasmithC4DImportOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithC4DImportOptions() {}
// Cross Module References
	DATASMITHC4DTRANSLATOR_API UClass* Z_Construct_UClass_UDatasmithC4DImportOptions();
	DATASMITHC4DTRANSLATOR_API UClass* Z_Construct_UClass_UDatasmithC4DImportOptions_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithOptionsBase();
	UPackage* Z_Construct_UPackage__Script_DatasmithC4DTranslator();
// End Cross Module References
	void UDatasmithC4DImportOptions::StaticRegisterNativesUDatasmithC4DImportOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithC4DImportOptions);
	UClass* Z_Construct_UClass_UDatasmithC4DImportOptions_NoRegister()
	{
		return UDatasmithC4DImportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithC4DImportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportEmptyMesh_MetaData[];
#endif
		static void NewProp_bImportEmptyMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportEmptyMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizeEmptySingleChildActors_MetaData[];
#endif
		static void NewProp_bOptimizeEmptySingleChildActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizeEmptySingleChildActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysGenerateNormals_MetaData[];
#endif
		static void NewProp_bAlwaysGenerateNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysGenerateNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleVertices_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleVertices;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportToUDatasmith_MetaData[];
#endif
		static void NewProp_bExportToUDatasmith_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportToUDatasmith;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithOptionsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithC4DTranslator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*UENUM()\nenum class EC4DUVGeneration : uint8\n{\n\x09Keep,\n\x09Missing,\n\x09""Always,\n};*/" },
		{ "HideCategories", "DebugProperty" },
		{ "IncludePath", "DatasmithC4DImportOptions.h" },
		{ "ModuleRelativePath", "Private/DatasmithC4DImportOptions.h" },
		{ "ToolTip", "UENUM()\nenum class EC4DUVGeneration : uint8\n{\n       Keep,\n       Missing,\n       Always,\n};" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bImportEmptyMesh_MetaData[] = {
		{ "Category", "DebugProperty" },
		{ "Comment", "/**\n\x09 * Import Mesh With No Vertex, false by default\n\x09 */" },
		{ "DisplayName", "Import Mesh With No Vertex" },
		{ "ModuleRelativePath", "Private/DatasmithC4DImportOptions.h" },
		{ "ToolTip", "Import Mesh With No Vertex, false by default" },
	};
#endif
	void Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bImportEmptyMesh_SetBit(void* Obj)
	{
		((UDatasmithC4DImportOptions*)Obj)->bImportEmptyMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bImportEmptyMesh = { "bImportEmptyMesh", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithC4DImportOptions), &Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bImportEmptyMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bImportEmptyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bImportEmptyMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bOptimizeEmptySingleChildActors_MetaData[] = {
		{ "Category", "DebugProperty" },
		{ "Comment", "/**\n\x09 * Remove empty actors that have only one child, false by default\n\x09 */" },
		{ "DisplayName", "Clean the Scene of Empty Actors With Only One Child" },
		{ "ModuleRelativePath", "Private/DatasmithC4DImportOptions.h" },
		{ "ToolTip", "Remove empty actors that have only one child, false by default" },
	};
#endif
	void Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bOptimizeEmptySingleChildActors_SetBit(void* Obj)
	{
		((UDatasmithC4DImportOptions*)Obj)->bOptimizeEmptySingleChildActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bOptimizeEmptySingleChildActors = { "bOptimizeEmptySingleChildActors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithC4DImportOptions), &Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bOptimizeEmptySingleChildActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bOptimizeEmptySingleChildActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bOptimizeEmptySingleChildActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bAlwaysGenerateNormals_MetaData[] = {
		{ "Category", "DebugProperty" },
		{ "Comment", "/**\n\x09* Ignore the normals provided by Melange and let Datasmith generate them\n\x09* The \"if (RawNormal.SizeSquared() < SMALL_NUMBER)\" check in see FDatasmithMeshUtils::ToMeshDescription is preventing some meshes to load\n\x09*/" },
		{ "DisplayName", "Generate the Normals" },
		{ "ModuleRelativePath", "Private/DatasmithC4DImportOptions.h" },
		{ "ToolTip", "Ignore the normals provided by Melange and let Datasmith generate them\nThe \"if (RawNormal.SizeSquared() < SMALL_NUMBER)\" check in see FDatasmithMeshUtils::ToMeshDescription is preventing some meshes to load" },
	};
#endif
	void Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bAlwaysGenerateNormals_SetBit(void* Obj)
	{
		((UDatasmithC4DImportOptions*)Obj)->bAlwaysGenerateNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bAlwaysGenerateNormals = { "bAlwaysGenerateNormals", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithC4DImportOptions), &Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bAlwaysGenerateNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bAlwaysGenerateNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bAlwaysGenerateNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_ScaleVertices_MetaData[] = {
		{ "Category", "DebugProperty" },
		{ "Comment", "/**\n\x09* Scale all position and vertices by this value.\n\x09* It is needed when scene has too precise meshes because the conversion from double (C4D) to float (UnrealEditor)\n\x09* can \"degenerate\" the faces\n\x09*/" },
		{ "DisplayName", "Scale the Entire Scene" },
		{ "ModuleRelativePath", "Private/DatasmithC4DImportOptions.h" },
		{ "ToolTip", "Scale all position and vertices by this value.\nIt is needed when scene has too precise meshes because the conversion from double (C4D) to float (UnrealEditor)\ncan \"degenerate\" the faces" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_ScaleVertices = { "ScaleVertices", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithC4DImportOptions, ScaleVertices), METADATA_PARAMS(Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_ScaleVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_ScaleVertices_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bExportToUDatasmith_MetaData[] = {
		{ "Category", "DebugProperty" },
		{ "Comment", "/**\n\x09* Export the imported scene as a .datasmith file, next to the .c4d file.\n\x09*/" },
		{ "DisplayName", "Export to .udatasmith" },
		{ "ModuleRelativePath", "Private/DatasmithC4DImportOptions.h" },
		{ "ToolTip", "Export the imported scene as a .datasmith file, next to the .c4d file." },
	};
#endif
	void Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bExportToUDatasmith_SetBit(void* Obj)
	{
		((UDatasmithC4DImportOptions*)Obj)->bExportToUDatasmith = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bExportToUDatasmith = { "bExportToUDatasmith", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithC4DImportOptions), &Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bExportToUDatasmith_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bExportToUDatasmith_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bExportToUDatasmith_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bImportEmptyMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bOptimizeEmptySingleChildActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bAlwaysGenerateNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_ScaleVertices,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::NewProp_bExportToUDatasmith,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithC4DImportOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::ClassParams = {
		&UDatasmithC4DImportOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithC4DImportOptions()
	{
		if (!Z_Registration_Info_UClass_UDatasmithC4DImportOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithC4DImportOptions.OuterSingleton, Z_Construct_UClass_UDatasmithC4DImportOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithC4DImportOptions.OuterSingleton;
	}
	template<> DATASMITHC4DTRANSLATOR_API UClass* StaticClass<UDatasmithC4DImportOptions>()
	{
		return UDatasmithC4DImportOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithC4DImportOptions);
	UDatasmithC4DImportOptions::~UDatasmithC4DImportOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithC4DImporter_Source_DatasmithC4DTranslator_Private_DatasmithC4DImportOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithC4DImporter_Source_DatasmithC4DTranslator_Private_DatasmithC4DImportOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithC4DImportOptions, UDatasmithC4DImportOptions::StaticClass, TEXT("UDatasmithC4DImportOptions"), &Z_Registration_Info_UClass_UDatasmithC4DImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithC4DImportOptions), 1542849854U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithC4DImporter_Source_DatasmithC4DTranslator_Private_DatasmithC4DImportOptions_h_3050291293(TEXT("/Script/DatasmithC4DTranslator"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithC4DImporter_Source_DatasmithC4DTranslator_Private_DatasmithC4DImportOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithC4DImporter_Source_DatasmithC4DTranslator_Private_DatasmithC4DImportOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
