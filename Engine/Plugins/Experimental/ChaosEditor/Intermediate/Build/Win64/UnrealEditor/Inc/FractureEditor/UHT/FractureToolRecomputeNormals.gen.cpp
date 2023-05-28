// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolRecomputeNormals.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolRecomputeNormals() {}
// Cross Module References
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureRecomputeNormalsSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureRecomputeNormalsSettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolCutterBase();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolRecomputeNormals();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolRecomputeNormals_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	void UFractureRecomputeNormalsSettings::StaticRegisterNativesUFractureRecomputeNormalsSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureRecomputeNormalsSettings);
	UClass* Z_Construct_UClass_UFractureRecomputeNormalsSettings_NoRegister()
	{
		return UFractureRecomputeNormalsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowNormals_MetaData[];
#endif
		static void NewProp_bShowNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowTangents_MetaData[];
#endif
		static void NewProp_bShowTangents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyTangents_MetaData[];
#endif
		static void NewProp_bOnlyTangents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyTangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecomputeSharpEdges_MetaData[];
#endif
		static void NewProp_bRecomputeSharpEdges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecomputeSharpEdges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharpEdgeAngleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SharpEdgeAngleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyInternalSurfaces_MetaData[];
#endif
		static void NewProp_bOnlyInternalSurfaces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyInternalSurfaces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings for visualizing and recomputing normals and tangents */" },
		{ "IncludePath", "FractureToolRecomputeNormals.h" },
		{ "ModuleRelativePath", "Private/FractureToolRecomputeNormals.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Settings for visualizing and recomputing normals and tangents" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bShowNormals_MetaData[] = {
		{ "Category", "DisplaySettings" },
		{ "Comment", "/** Whether to display normal vectors */" },
		{ "ModuleRelativePath", "Private/FractureToolRecomputeNormals.h" },
		{ "ToolTip", "Whether to display normal vectors" },
	};
#endif
	void Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bShowNormals_SetBit(void* Obj)
	{
		((UFractureRecomputeNormalsSettings*)Obj)->bShowNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bShowNormals = { "bShowNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureRecomputeNormalsSettings), &Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bShowNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bShowNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bShowNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bShowTangents_MetaData[] = {
		{ "Category", "DisplaySettings" },
		{ "Comment", "/** Whether to display tangent and bitangent vectors */" },
		{ "ModuleRelativePath", "Private/FractureToolRecomputeNormals.h" },
		{ "ToolTip", "Whether to display tangent and bitangent vectors" },
	};
#endif
	void Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bShowTangents_SetBit(void* Obj)
	{
		((UFractureRecomputeNormalsSettings*)Obj)->bShowTangents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bShowTangents = { "bShowTangents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureRecomputeNormalsSettings), &Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bShowTangents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bShowTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bShowTangents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "DisplaySettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", ".001" },
		{ "Comment", "/** Length of display normal and tangent vectors */" },
		{ "ModuleRelativePath", "Private/FractureToolRecomputeNormals.h" },
		{ "ToolTip", "Length of display normal and tangent vectors" },
		{ "UIMax", "10" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureRecomputeNormalsSettings, Length), METADATA_PARAMS(Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bOnlyTangents_MetaData[] = {
		{ "Category", "RecomputeSettings" },
		{ "Comment", "/** Whether to only recompute tangents, and leave normals as they were */" },
		{ "ModuleRelativePath", "Private/FractureToolRecomputeNormals.h" },
		{ "ToolTip", "Whether to only recompute tangents, and leave normals as they were" },
	};
#endif
	void Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bOnlyTangents_SetBit(void* Obj)
	{
		((UFractureRecomputeNormalsSettings*)Obj)->bOnlyTangents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bOnlyTangents = { "bOnlyTangents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureRecomputeNormalsSettings), &Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bOnlyTangents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bOnlyTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bOnlyTangents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bRecomputeSharpEdges_MetaData[] = {
		{ "Category", "RecomputeSettings" },
		{ "Comment", "/** If true, update where edges are 'sharp' by comparing adjacent triangle face normals vs the Sharp Edge Angle Threshold. */" },
		{ "EditCondition", "!bOnlyTangents" },
		{ "ModuleRelativePath", "Private/FractureToolRecomputeNormals.h" },
		{ "ToolTip", "If true, update where edges are 'sharp' by comparing adjacent triangle face normals vs the Sharp Edge Angle Threshold." },
	};
#endif
	void Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bRecomputeSharpEdges_SetBit(void* Obj)
	{
		((UFractureRecomputeNormalsSettings*)Obj)->bRecomputeSharpEdges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bRecomputeSharpEdges = { "bRecomputeSharpEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureRecomputeNormalsSettings), &Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bRecomputeSharpEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bRecomputeSharpEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bRecomputeSharpEdges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_SharpEdgeAngleThreshold_MetaData[] = {
		{ "Category", "RecomputeSettings" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Threshold on angle of change in face normals across an edge, above which we create a sharp edge if bRecomputeSharpEdges is true */" },
		{ "EditCondition", "bRecomputeSharpEdges && !bOnlyTangents" },
		{ "ModuleRelativePath", "Private/FractureToolRecomputeNormals.h" },
		{ "ToolTip", "Threshold on angle of change in face normals across an edge, above which we create a sharp edge if bRecomputeSharpEdges is true" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_SharpEdgeAngleThreshold = { "SharpEdgeAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureRecomputeNormalsSettings, SharpEdgeAngleThreshold), METADATA_PARAMS(Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_SharpEdgeAngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_SharpEdgeAngleThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bOnlyInternalSurfaces_MetaData[] = {
		{ "Category", "RecomputeSettings" },
		{ "Comment", "/** Whether to only change internal surface normals / tangents */" },
		{ "ModuleRelativePath", "Private/FractureToolRecomputeNormals.h" },
		{ "ToolTip", "Whether to only change internal surface normals / tangents" },
	};
#endif
	void Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bOnlyInternalSurfaces_SetBit(void* Obj)
	{
		((UFractureRecomputeNormalsSettings*)Obj)->bOnlyInternalSurfaces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bOnlyInternalSurfaces = { "bOnlyInternalSurfaces", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureRecomputeNormalsSettings), &Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bOnlyInternalSurfaces_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bOnlyInternalSurfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bOnlyInternalSurfaces_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bShowNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bShowTangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_Length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bOnlyTangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bRecomputeSharpEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_SharpEdgeAngleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::NewProp_bOnlyInternalSurfaces,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureRecomputeNormalsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::ClassParams = {
		&UFractureRecomputeNormalsSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureRecomputeNormalsSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureRecomputeNormalsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureRecomputeNormalsSettings.OuterSingleton, Z_Construct_UClass_UFractureRecomputeNormalsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureRecomputeNormalsSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureRecomputeNormalsSettings>()
	{
		return UFractureRecomputeNormalsSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureRecomputeNormalsSettings);
	UFractureRecomputeNormalsSettings::~UFractureRecomputeNormalsSettings() {}
	void UFractureToolRecomputeNormals::StaticRegisterNativesUFractureToolRecomputeNormals()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolRecomputeNormals);
	UClass* Z_Construct_UClass_UFractureToolRecomputeNormals_NoRegister()
	{
		return UFractureToolRecomputeNormals::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolRecomputeNormals_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalsSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NormalsSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolRecomputeNormals_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolCutterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolRecomputeNormals_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "Comment", "// Note this tool doesn't actually fracture, but it does remake pieces of geometry and shares a lot of machinery with the fracture tools\n" },
		{ "DisplayName", "Recompute Normals Tool" },
		{ "IncludePath", "FractureToolRecomputeNormals.h" },
		{ "ModuleRelativePath", "Private/FractureToolRecomputeNormals.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Note this tool doesn't actually fracture, but it does remake pieces of geometry and shares a lot of machinery with the fracture tools" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolRecomputeNormals_Statics::NewProp_NormalsSettings_MetaData[] = {
		{ "ModuleRelativePath", "Private/FractureToolRecomputeNormals.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolRecomputeNormals_Statics::NewProp_NormalsSettings = { "NormalsSettings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolRecomputeNormals, NormalsSettings), Z_Construct_UClass_UFractureRecomputeNormalsSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolRecomputeNormals_Statics::NewProp_NormalsSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolRecomputeNormals_Statics::NewProp_NormalsSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolRecomputeNormals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolRecomputeNormals_Statics::NewProp_NormalsSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolRecomputeNormals_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolRecomputeNormals>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolRecomputeNormals_Statics::ClassParams = {
		&UFractureToolRecomputeNormals::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolRecomputeNormals_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolRecomputeNormals_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolRecomputeNormals_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolRecomputeNormals_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolRecomputeNormals()
	{
		if (!Z_Registration_Info_UClass_UFractureToolRecomputeNormals.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolRecomputeNormals.OuterSingleton, Z_Construct_UClass_UFractureToolRecomputeNormals_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolRecomputeNormals.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolRecomputeNormals>()
	{
		return UFractureToolRecomputeNormals::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolRecomputeNormals);
	UFractureToolRecomputeNormals::~UFractureToolRecomputeNormals() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolRecomputeNormals_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolRecomputeNormals_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureRecomputeNormalsSettings, UFractureRecomputeNormalsSettings::StaticClass, TEXT("UFractureRecomputeNormalsSettings"), &Z_Registration_Info_UClass_UFractureRecomputeNormalsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureRecomputeNormalsSettings), 1146678466U) },
		{ Z_Construct_UClass_UFractureToolRecomputeNormals, UFractureToolRecomputeNormals::StaticClass, TEXT("UFractureToolRecomputeNormals"), &Z_Registration_Info_UClass_UFractureToolRecomputeNormals, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolRecomputeNormals), 145363897U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolRecomputeNormals_h_295819346(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolRecomputeNormals_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolRecomputeNormals_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
