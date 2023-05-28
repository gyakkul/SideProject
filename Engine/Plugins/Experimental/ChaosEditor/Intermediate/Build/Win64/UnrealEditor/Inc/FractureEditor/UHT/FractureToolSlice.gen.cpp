// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolSlice.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolSlice() {}
// Cross Module References
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureSliceSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureSliceSettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolCutterBase();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSlice();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSlice_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	void UFractureSliceSettings::StaticRegisterNativesUFractureSliceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureSliceSettings);
	UClass* Z_Construct_UClass_UFractureSliceSettings_NoRegister()
	{
		return UFractureSliceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureSliceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlicesX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlicesX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlicesY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlicesY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlicesZ_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlicesZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliceAngleVariation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SliceAngleVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliceOffsetVariation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SliceOffsetVariation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureSliceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureSliceSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FractureToolSlice.h" },
		{ "ModuleRelativePath", "Private/FractureToolSlice.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SlicesX_MetaData[] = {
		{ "Category", "Slicing" },
		{ "Comment", "/** Number of slices along the X axis */" },
		{ "ModuleRelativePath", "Private/FractureToolSlice.h" },
		{ "ToolTip", "Number of slices along the X axis" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SlicesX = { "SlicesX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureSliceSettings, SlicesX), METADATA_PARAMS(Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SlicesX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SlicesX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SlicesY_MetaData[] = {
		{ "Category", "Slicing" },
		{ "Comment", "/** Number of slices along the Y axis */" },
		{ "ModuleRelativePath", "Private/FractureToolSlice.h" },
		{ "ToolTip", "Number of slices along the Y axis" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SlicesY = { "SlicesY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureSliceSettings, SlicesY), METADATA_PARAMS(Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SlicesY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SlicesY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SlicesZ_MetaData[] = {
		{ "Category", "Slicing" },
		{ "Comment", "/** Number of slices along the Z axis */" },
		{ "ModuleRelativePath", "Private/FractureToolSlice.h" },
		{ "ToolTip", "Number of slices along the Z axis" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SlicesZ = { "SlicesZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureSliceSettings, SlicesZ), METADATA_PARAMS(Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SlicesZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SlicesZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SliceAngleVariation_MetaData[] = {
		{ "Category", "Slicing" },
		{ "Comment", "/** Maximum angle (in degrees) to randomly rotate each slicing plane */" },
		{ "DisplayName", "Random Angle Variation" },
		{ "ModuleRelativePath", "Private/FractureToolSlice.h" },
		{ "ToolTip", "Maximum angle (in degrees) to randomly rotate each slicing plane" },
		{ "UIMax", "90.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SliceAngleVariation = { "SliceAngleVariation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureSliceSettings, SliceAngleVariation), METADATA_PARAMS(Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SliceAngleVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SliceAngleVariation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SliceOffsetVariation_MetaData[] = {
		{ "Category", "Slicing" },
		{ "Comment", "/** Maximum distance (in cm) to randomly shift each slicing plane */" },
		{ "DisplayName", "Random Offset Variation" },
		{ "ModuleRelativePath", "Private/FractureToolSlice.h" },
		{ "ToolTip", "Maximum distance (in cm) to randomly shift each slicing plane" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SliceOffsetVariation = { "SliceOffsetVariation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureSliceSettings, SliceOffsetVariation), METADATA_PARAMS(Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SliceOffsetVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SliceOffsetVariation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureSliceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SlicesX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SlicesY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SlicesZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SliceAngleVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureSliceSettings_Statics::NewProp_SliceOffsetVariation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureSliceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureSliceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureSliceSettings_Statics::ClassParams = {
		&UFractureSliceSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureSliceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSliceSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureSliceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSliceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureSliceSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureSliceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureSliceSettings.OuterSingleton, Z_Construct_UClass_UFractureSliceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureSliceSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureSliceSettings>()
	{
		return UFractureSliceSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureSliceSettings);
	UFractureSliceSettings::~UFractureSliceSettings() {}
	void UFractureToolSlice::StaticRegisterNativesUFractureToolSlice()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolSlice);
	UClass* Z_Construct_UClass_UFractureToolSlice_NoRegister()
	{
		return UFractureToolSlice::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolSlice_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliceSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SliceSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolSlice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolCutterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolSlice_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Slice Tool" },
		{ "IncludePath", "FractureToolSlice.h" },
		{ "ModuleRelativePath", "Private/FractureToolSlice.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolSlice_Statics::NewProp_SliceSettings_MetaData[] = {
		{ "Category", "Slicing" },
		{ "Comment", "// Slicing\n" },
		{ "ModuleRelativePath", "Private/FractureToolSlice.h" },
		{ "ToolTip", "Slicing" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolSlice_Statics::NewProp_SliceSettings = { "SliceSettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolSlice, SliceSettings), Z_Construct_UClass_UFractureSliceSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolSlice_Statics::NewProp_SliceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolSlice_Statics::NewProp_SliceSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolSlice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolSlice_Statics::NewProp_SliceSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolSlice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolSlice>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolSlice_Statics::ClassParams = {
		&UFractureToolSlice::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolSlice_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolSlice_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolSlice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolSlice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolSlice()
	{
		if (!Z_Registration_Info_UClass_UFractureToolSlice.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolSlice.OuterSingleton, Z_Construct_UClass_UFractureToolSlice_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolSlice.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolSlice>()
	{
		return UFractureToolSlice::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolSlice);
	UFractureToolSlice::~UFractureToolSlice() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolSlice_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolSlice_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureSliceSettings, UFractureSliceSettings::StaticClass, TEXT("UFractureSliceSettings"), &Z_Registration_Info_UClass_UFractureSliceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureSliceSettings), 2882421525U) },
		{ Z_Construct_UClass_UFractureToolSlice, UFractureToolSlice::StaticClass, TEXT("UFractureToolSlice"), &Z_Registration_Info_UClass_UFractureToolSlice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolSlice), 1397673757U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolSlice_h_3256440677(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolSlice_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolSlice_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
