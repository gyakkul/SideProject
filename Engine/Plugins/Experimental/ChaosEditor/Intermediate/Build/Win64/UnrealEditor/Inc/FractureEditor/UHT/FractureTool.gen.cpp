// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FractureTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureTool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureActionTool();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureActionTool_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureInteractiveTool();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureInteractiveTool_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureModalTool();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureModalTool_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	void UFractureToolSettings::StaticRegisterNativesUFractureToolSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolSettings);
	UClass* Z_Construct_UClass_UFractureToolSettings_NoRegister()
	{
		return UFractureToolSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerTool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwnerTool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FractureTool.h" },
		{ "ModuleRelativePath", "Public/FractureTool.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolSettings_Statics::NewProp_OwnerTool_MetaData[] = {
		{ "ModuleRelativePath", "Public/FractureTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolSettings_Statics::NewProp_OwnerTool = { "OwnerTool", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolSettings, OwnerTool), Z_Construct_UClass_UFractureModalTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolSettings_Statics::NewProp_OwnerTool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolSettings_Statics::NewProp_OwnerTool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolSettings_Statics::NewProp_OwnerTool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolSettings_Statics::ClassParams = {
		&UFractureToolSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolSettings_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureToolSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolSettings.OuterSingleton, Z_Construct_UClass_UFractureToolSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolSettings>()
	{
		return UFractureToolSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolSettings);
	UFractureToolSettings::~UFractureToolSettings() {}
	void UFractureActionTool::StaticRegisterNativesUFractureActionTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureActionTool);
	UClass* Z_Construct_UClass_UFractureActionTool_NoRegister()
	{
		return UFractureActionTool::StaticClass();
	}
	struct Z_Construct_UClass_UFractureActionTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureActionTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureActionTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Tools derived from this class should require parameter inputs from the user, only the bone selection. */" },
		{ "IncludePath", "FractureTool.h" },
		{ "ModuleRelativePath", "Public/FractureTool.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Tools derived from this class should require parameter inputs from the user, only the bone selection." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureActionTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureActionTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureActionTool_Statics::ClassParams = {
		&UFractureActionTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureActionTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureActionTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureActionTool()
	{
		if (!Z_Registration_Info_UClass_UFractureActionTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureActionTool.OuterSingleton, Z_Construct_UClass_UFractureActionTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureActionTool.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureActionTool>()
	{
		return UFractureActionTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureActionTool);
	UFractureActionTool::~UFractureActionTool() {}
	void UFractureModalTool::StaticRegisterNativesUFractureModalTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureModalTool);
	UClass* Z_Construct_UClass_UFractureModalTool_NoRegister()
	{
		return UFractureModalTool::StaticClass();
	}
	struct Z_Construct_UClass_UFractureModalTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VisualizedCollections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizedCollections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VisualizedCollections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureModalTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureActionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureModalTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Tools derived from this class provide parameter details and operate modally. */" },
		{ "IncludePath", "FractureTool.h" },
		{ "ModuleRelativePath", "Public/FractureTool.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Tools derived from this class provide parameter details and operate modally." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureModalTool_Statics::NewProp_VisualizedCollections_Inner = { "VisualizedCollections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGeometryCollectionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureModalTool_Statics::NewProp_VisualizedCollections_MetaData[] = {
		{ "Comment", "// Geometry collection components referenced by visualizations\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FractureTool.h" },
		{ "ToolTip", "Geometry collection components referenced by visualizations" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFractureModalTool_Statics::NewProp_VisualizedCollections = { "VisualizedCollections", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureModalTool, VisualizedCollections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFractureModalTool_Statics::NewProp_VisualizedCollections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureModalTool_Statics::NewProp_VisualizedCollections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureModalTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureModalTool_Statics::NewProp_VisualizedCollections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureModalTool_Statics::NewProp_VisualizedCollections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureModalTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureModalTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureModalTool_Statics::ClassParams = {
		&UFractureModalTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureModalTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureModalTool_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureModalTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureModalTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureModalTool()
	{
		if (!Z_Registration_Info_UClass_UFractureModalTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureModalTool.OuterSingleton, Z_Construct_UClass_UFractureModalTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureModalTool.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureModalTool>()
	{
		return UFractureModalTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureModalTool);
	UFractureModalTool::~UFractureModalTool() {}
	void UFractureInteractiveTool::StaticRegisterNativesUFractureInteractiveTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureInteractiveTool);
	UClass* Z_Construct_UClass_UFractureInteractiveTool_NoRegister()
	{
		return UFractureInteractiveTool::StaticClass();
	}
	struct Z_Construct_UClass_UFractureInteractiveTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureInteractiveTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureModalTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureInteractiveTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Tools derived from this class provide parameter details, operate modally and use a viewport manipulator to set certain parameters. */" },
		{ "IncludePath", "FractureTool.h" },
		{ "ModuleRelativePath", "Public/FractureTool.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Tools derived from this class provide parameter details, operate modally and use a viewport manipulator to set certain parameters." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureInteractiveTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureInteractiveTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureInteractiveTool_Statics::ClassParams = {
		&UFractureInteractiveTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureInteractiveTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureInteractiveTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureInteractiveTool()
	{
		if (!Z_Registration_Info_UClass_UFractureInteractiveTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureInteractiveTool.OuterSingleton, Z_Construct_UClass_UFractureInteractiveTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureInteractiveTool.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureInteractiveTool>()
	{
		return UFractureInteractiveTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureInteractiveTool);
	UFractureInteractiveTool::~UFractureInteractiveTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureToolSettings, UFractureToolSettings::StaticClass, TEXT("UFractureToolSettings"), &Z_Registration_Info_UClass_UFractureToolSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolSettings), 1219038716U) },
		{ Z_Construct_UClass_UFractureActionTool, UFractureActionTool::StaticClass, TEXT("UFractureActionTool"), &Z_Registration_Info_UClass_UFractureActionTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureActionTool), 646120922U) },
		{ Z_Construct_UClass_UFractureModalTool, UFractureModalTool::StaticClass, TEXT("UFractureModalTool"), &Z_Registration_Info_UClass_UFractureModalTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureModalTool), 3240359510U) },
		{ Z_Construct_UClass_UFractureInteractiveTool, UFractureInteractiveTool::StaticClass, TEXT("UFractureInteractiveTool"), &Z_Registration_Info_UClass_UFractureInteractiveTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureInteractiveTool), 129568638U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureTool_h_1332841828(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
