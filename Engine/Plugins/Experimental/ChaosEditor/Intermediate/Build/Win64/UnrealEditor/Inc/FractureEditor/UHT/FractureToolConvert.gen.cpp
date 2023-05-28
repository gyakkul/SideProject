// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolConvert.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolConvert() {}
// Cross Module References
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureConvertSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureConvertSettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureModalTool();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolConvert();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolConvert_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	void UFractureConvertSettings::StaticRegisterNativesUFractureConvertSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureConvertSettings);
	UClass* Z_Construct_UClass_UFractureConvertSettings_NoRegister()
	{
		return UFractureConvertSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureConvertSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPromptForBaseName_MetaData[];
#endif
		static void NewProp_bPromptForBaseName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPromptForBaseName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPerBone_MetaData[];
#endif
		static void NewProp_bPerBone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCenterPivots_MetaData[];
#endif
		static void NewProp_bCenterPivots_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterPivots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlaceInWorld_MetaData[];
#endif
		static void NewProp_bPlaceInWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaceInWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectNewActors_MetaData[];
#endif
		static void NewProp_bSelectNewActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectNewActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureConvertSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureConvertSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings related to geometry collection -> static mesh conversion **/" },
		{ "IncludePath", "FractureToolConvert.h" },
		{ "ModuleRelativePath", "Private/FractureToolConvert.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Settings related to geometry collection -> static mesh conversion *" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPromptForBaseName_MetaData[] = {
		{ "Category", "AssetSettings" },
		{ "Comment", "/** Whether to prompt user for a location and base name for the generated meshes, or automatically place them next to the source geometry collections */" },
		{ "ModuleRelativePath", "Private/FractureToolConvert.h" },
		{ "ToolTip", "Whether to prompt user for a location and base name for the generated meshes, or automatically place them next to the source geometry collections" },
	};
#endif
	void Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPromptForBaseName_SetBit(void* Obj)
	{
		((UFractureConvertSettings*)Obj)->bPromptForBaseName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPromptForBaseName = { "bPromptForBaseName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureConvertSettings), &Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPromptForBaseName_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPromptForBaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPromptForBaseName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPerBone_MetaData[] = {
		{ "Category", "AssetSettings" },
		{ "Comment", "/** Whether to generate a separate mesh for each bone, or one combined mesh */" },
		{ "ModuleRelativePath", "Private/FractureToolConvert.h" },
		{ "ToolTip", "Whether to generate a separate mesh for each bone, or one combined mesh" },
	};
#endif
	void Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPerBone_SetBit(void* Obj)
	{
		((UFractureConvertSettings*)Obj)->bPerBone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPerBone = { "bPerBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureConvertSettings), &Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPerBone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPerBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPerBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bCenterPivots_MetaData[] = {
		{ "Category", "GeometrySettings" },
		{ "Comment", "/** Whether to center the pivot for each mesh, or use the pivot from the geometry collection */" },
		{ "ModuleRelativePath", "Private/FractureToolConvert.h" },
		{ "ToolTip", "Whether to center the pivot for each mesh, or use the pivot from the geometry collection" },
	};
#endif
	void Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bCenterPivots_SetBit(void* Obj)
	{
		((UFractureConvertSettings*)Obj)->bCenterPivots = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bCenterPivots = { "bCenterPivots", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureConvertSettings), &Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bCenterPivots_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bCenterPivots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bCenterPivots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPlaceInWorld_MetaData[] = {
		{ "Category", "ActorSettings" },
		{ "Comment", "/** Whether to place new static mesh actors in the level */" },
		{ "ModuleRelativePath", "Private/FractureToolConvert.h" },
		{ "ToolTip", "Whether to place new static mesh actors in the level" },
	};
#endif
	void Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPlaceInWorld_SetBit(void* Obj)
	{
		((UFractureConvertSettings*)Obj)->bPlaceInWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPlaceInWorld = { "bPlaceInWorld", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureConvertSettings), &Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPlaceInWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPlaceInWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPlaceInWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bSelectNewActors_MetaData[] = {
		{ "Category", "ActorSettings" },
		{ "Comment", "/** Whether to select new static mesh actors */" },
		{ "EditCondition", "bPlaceInWorld" },
		{ "ModuleRelativePath", "Private/FractureToolConvert.h" },
		{ "ToolTip", "Whether to select new static mesh actors" },
	};
#endif
	void Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bSelectNewActors_SetBit(void* Obj)
	{
		((UFractureConvertSettings*)Obj)->bSelectNewActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bSelectNewActors = { "bSelectNewActors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureConvertSettings), &Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bSelectNewActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bSelectNewActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bSelectNewActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureConvertSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPromptForBaseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPerBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bCenterPivots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPlaceInWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bSelectNewActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureConvertSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureConvertSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureConvertSettings_Statics::ClassParams = {
		&UFractureConvertSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureConvertSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvertSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureConvertSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvertSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureConvertSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureConvertSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureConvertSettings.OuterSingleton, Z_Construct_UClass_UFractureConvertSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureConvertSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureConvertSettings>()
	{
		return UFractureConvertSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureConvertSettings);
	UFractureConvertSettings::~UFractureConvertSettings() {}
	void UFractureToolConvert::StaticRegisterNativesUFractureToolConvert()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolConvert);
	UClass* Z_Construct_UClass_UFractureToolConvert_NoRegister()
	{
		return UFractureToolConvert::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolConvert_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvertSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConvertSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolConvert_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureModalTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolConvert_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Convert Tool" },
		{ "IncludePath", "FractureToolConvert.h" },
		{ "ModuleRelativePath", "Private/FractureToolConvert.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolConvert_Statics::NewProp_ConvertSettings_MetaData[] = {
		{ "Category", "Slicing" },
		{ "ModuleRelativePath", "Private/FractureToolConvert.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolConvert_Statics::NewProp_ConvertSettings = { "ConvertSettings", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolConvert, ConvertSettings), Z_Construct_UClass_UFractureConvertSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolConvert_Statics::NewProp_ConvertSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolConvert_Statics::NewProp_ConvertSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolConvert_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolConvert_Statics::NewProp_ConvertSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolConvert_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolConvert>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolConvert_Statics::ClassParams = {
		&UFractureToolConvert::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolConvert_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolConvert_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolConvert_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolConvert_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolConvert()
	{
		if (!Z_Registration_Info_UClass_UFractureToolConvert.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolConvert.OuterSingleton, Z_Construct_UClass_UFractureToolConvert_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolConvert.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolConvert>()
	{
		return UFractureToolConvert::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolConvert);
	UFractureToolConvert::~UFractureToolConvert() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureConvertSettings, UFractureConvertSettings::StaticClass, TEXT("UFractureConvertSettings"), &Z_Registration_Info_UClass_UFractureConvertSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureConvertSettings), 4239395391U) },
		{ Z_Construct_UClass_UFractureToolConvert, UFractureToolConvert::StaticClass, TEXT("UFractureToolConvert"), &Z_Registration_Info_UClass_UFractureToolConvert, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolConvert), 1321921175U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_959632446(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
