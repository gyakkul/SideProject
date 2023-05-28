// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MeshInstancingTool/MeshInstancingTool.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MeshMerging.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshInstancingTool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshInstancingSettings();
	MERGEACTORS_API UClass* Z_Construct_UClass_UMeshInstancingSettingsObject();
	MERGEACTORS_API UClass* Z_Construct_UClass_UMeshInstancingSettingsObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MergeActors();
// End Cross Module References
	void UMeshInstancingSettingsObject::StaticRegisterNativesUMeshInstancingSettingsObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshInstancingSettingsObject);
	UClass* Z_Construct_UClass_UMeshInstancingSettingsObject_NoRegister()
	{
		return UMeshInstancingSettingsObject::StaticClass();
	}
	struct Z_Construct_UClass_UMeshInstancingSettingsObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshInstancingSettingsObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MergeActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshInstancingSettingsObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Singleton wrapper to allow for using the setting structure in SSettingsView */" },
		{ "IncludePath", "MeshInstancingTool/MeshInstancingTool.h" },
		{ "ModuleRelativePath", "Private/MeshInstancingTool/MeshInstancingTool.h" },
		{ "ToolTip", "Singleton wrapper to allow for using the setting structure in SSettingsView" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshInstancingSettingsObject_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "MergeSettings" },
		{ "ModuleRelativePath", "Private/MeshInstancingTool/MeshInstancingTool.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshInstancingSettingsObject_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshInstancingSettingsObject, Settings), Z_Construct_UScriptStruct_FMeshInstancingSettings, METADATA_PARAMS(Z_Construct_UClass_UMeshInstancingSettingsObject_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshInstancingSettingsObject_Statics::NewProp_Settings_MetaData)) }; // 3591486318
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshInstancingSettingsObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshInstancingSettingsObject_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshInstancingSettingsObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshInstancingSettingsObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshInstancingSettingsObject_Statics::ClassParams = {
		&UMeshInstancingSettingsObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshInstancingSettingsObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshInstancingSettingsObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshInstancingSettingsObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshInstancingSettingsObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshInstancingSettingsObject()
	{
		if (!Z_Registration_Info_UClass_UMeshInstancingSettingsObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshInstancingSettingsObject.OuterSingleton, Z_Construct_UClass_UMeshInstancingSettingsObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshInstancingSettingsObject.OuterSingleton;
	}
	template<> MERGEACTORS_API UClass* StaticClass<UMeshInstancingSettingsObject>()
	{
		return UMeshInstancingSettingsObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshInstancingSettingsObject);
	UMeshInstancingSettingsObject::~UMeshInstancingSettingsObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_MergeActors_Private_MeshInstancingTool_MeshInstancingTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MergeActors_Private_MeshInstancingTool_MeshInstancingTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshInstancingSettingsObject, UMeshInstancingSettingsObject::StaticClass, TEXT("UMeshInstancingSettingsObject"), &Z_Registration_Info_UClass_UMeshInstancingSettingsObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshInstancingSettingsObject), 363432212U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MergeActors_Private_MeshInstancingTool_MeshInstancingTool_h_1688760331(TEXT("/Script/MergeActors"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MergeActors_Private_MeshInstancingTool_MeshInstancingTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MergeActors_Private_MeshInstancingTool_MeshInstancingTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
