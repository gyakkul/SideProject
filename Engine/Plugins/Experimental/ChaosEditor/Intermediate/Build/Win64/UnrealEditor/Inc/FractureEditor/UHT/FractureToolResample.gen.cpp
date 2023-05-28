// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolResample.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolResample() {}
// Cross Module References
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureResampleSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureResampleSettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolCutterBase();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolResample();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolResample_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	void UFractureResampleSettings::StaticRegisterNativesUFractureResampleSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureResampleSettings);
	UClass* Z_Construct_UClass_UFractureResampleSettings_NoRegister()
	{
		return UFractureResampleSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureResampleSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyShowAddedPoints_MetaData[];
#endif
		static void NewProp_bOnlyShowAddedPoints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyShowAddedPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureResampleSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureResampleSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings giving additional control over geometry resampling + related visualization */" },
		{ "IncludePath", "FractureToolResample.h" },
		{ "ModuleRelativePath", "Private/FractureToolResample.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Settings giving additional control over geometry resampling + related visualization" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureResampleSettings_Statics::NewProp_bOnlyShowAddedPoints_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "Comment", "/** Whether to visualize all mesh vertices or only the ones added by resampling */" },
		{ "ModuleRelativePath", "Private/FractureToolResample.h" },
		{ "ToolTip", "Whether to visualize all mesh vertices or only the ones added by resampling" },
	};
#endif
	void Z_Construct_UClass_UFractureResampleSettings_Statics::NewProp_bOnlyShowAddedPoints_SetBit(void* Obj)
	{
		((UFractureResampleSettings*)Obj)->bOnlyShowAddedPoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureResampleSettings_Statics::NewProp_bOnlyShowAddedPoints = { "bOnlyShowAddedPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureResampleSettings), &Z_Construct_UClass_UFractureResampleSettings_Statics::NewProp_bOnlyShowAddedPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureResampleSettings_Statics::NewProp_bOnlyShowAddedPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureResampleSettings_Statics::NewProp_bOnlyShowAddedPoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureResampleSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureResampleSettings_Statics::NewProp_bOnlyShowAddedPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureResampleSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureResampleSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureResampleSettings_Statics::ClassParams = {
		&UFractureResampleSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureResampleSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureResampleSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureResampleSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureResampleSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureResampleSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureResampleSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureResampleSettings.OuterSingleton, Z_Construct_UClass_UFractureResampleSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureResampleSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureResampleSettings>()
	{
		return UFractureResampleSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureResampleSettings);
	UFractureResampleSettings::~UFractureResampleSettings() {}
	void UFractureToolResample::StaticRegisterNativesUFractureToolResample()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolResample);
	UClass* Z_Construct_UClass_UFractureToolResample_NoRegister()
	{
		return UFractureToolResample::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolResample_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResampleSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ResampleSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolResample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolCutterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolResample_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "Comment", "// Note this tool doesn't actually fracture, but it does remake pieces of geometry and shares a lot of machinery with the fracture tools\n" },
		{ "DisplayName", "Resample Tool" },
		{ "IncludePath", "FractureToolResample.h" },
		{ "ModuleRelativePath", "Private/FractureToolResample.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Note this tool doesn't actually fracture, but it does remake pieces of geometry and shares a lot of machinery with the fracture tools" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolResample_Statics::NewProp_ResampleSettings_MetaData[] = {
		{ "Category", "FixGeo" },
		{ "ModuleRelativePath", "Private/FractureToolResample.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolResample_Statics::NewProp_ResampleSettings = { "ResampleSettings", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolResample, ResampleSettings), Z_Construct_UClass_UFractureResampleSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolResample_Statics::NewProp_ResampleSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolResample_Statics::NewProp_ResampleSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolResample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolResample_Statics::NewProp_ResampleSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolResample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolResample>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolResample_Statics::ClassParams = {
		&UFractureToolResample::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolResample_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolResample_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolResample_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolResample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolResample()
	{
		if (!Z_Registration_Info_UClass_UFractureToolResample.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolResample.OuterSingleton, Z_Construct_UClass_UFractureToolResample_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolResample.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolResample>()
	{
		return UFractureToolResample::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolResample);
	UFractureToolResample::~UFractureToolResample() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolResample_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolResample_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureResampleSettings, UFractureResampleSettings::StaticClass, TEXT("UFractureResampleSettings"), &Z_Registration_Info_UClass_UFractureResampleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureResampleSettings), 3730243888U) },
		{ Z_Construct_UClass_UFractureToolResample, UFractureToolResample::StaticClass, TEXT("UFractureToolResample"), &Z_Registration_Info_UClass_UFractureToolResample, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolResample), 1726434402U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolResample_h_2220899729(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolResample_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolResample_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
