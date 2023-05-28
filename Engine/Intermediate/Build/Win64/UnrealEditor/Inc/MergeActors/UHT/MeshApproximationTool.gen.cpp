// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MeshApproximationTool/MeshApproximationTool.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MeshMerging.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshApproximationTool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshApproximationSettings();
	MERGEACTORS_API UClass* Z_Construct_UClass_UMeshApproximationSettingsObject();
	MERGEACTORS_API UClass* Z_Construct_UClass_UMeshApproximationSettingsObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MergeActors();
// End Cross Module References
	void UMeshApproximationSettingsObject::StaticRegisterNativesUMeshApproximationSettingsObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshApproximationSettingsObject);
	UClass* Z_Construct_UClass_UMeshApproximationSettingsObject_NoRegister()
	{
		return UMeshApproximationSettingsObject::StaticClass();
	}
	struct Z_Construct_UClass_UMeshApproximationSettingsObject_Statics
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
	UObject* (*const Z_Construct_UClass_UMeshApproximationSettingsObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MergeActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshApproximationSettingsObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Singleton wrapper to allow for using the setting structure in SSettingsView */" },
		{ "IncludePath", "MeshApproximationTool/MeshApproximationTool.h" },
		{ "ModuleRelativePath", "Private/MeshApproximationTool/MeshApproximationTool.h" },
		{ "ToolTip", "Singleton wrapper to allow for using the setting structure in SSettingsView" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshApproximationSettingsObject_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "ApproximationSettings" },
		{ "ModuleRelativePath", "Private/MeshApproximationTool/MeshApproximationTool.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshApproximationSettingsObject_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshApproximationSettingsObject, Settings), Z_Construct_UScriptStruct_FMeshApproximationSettings, METADATA_PARAMS(Z_Construct_UClass_UMeshApproximationSettingsObject_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshApproximationSettingsObject_Statics::NewProp_Settings_MetaData)) }; // 1720125939
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshApproximationSettingsObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshApproximationSettingsObject_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshApproximationSettingsObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshApproximationSettingsObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshApproximationSettingsObject_Statics::ClassParams = {
		&UMeshApproximationSettingsObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshApproximationSettingsObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshApproximationSettingsObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshApproximationSettingsObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshApproximationSettingsObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshApproximationSettingsObject()
	{
		if (!Z_Registration_Info_UClass_UMeshApproximationSettingsObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshApproximationSettingsObject.OuterSingleton, Z_Construct_UClass_UMeshApproximationSettingsObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshApproximationSettingsObject.OuterSingleton;
	}
	template<> MERGEACTORS_API UClass* StaticClass<UMeshApproximationSettingsObject>()
	{
		return UMeshApproximationSettingsObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshApproximationSettingsObject);
	UMeshApproximationSettingsObject::~UMeshApproximationSettingsObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_MergeActors_Private_MeshApproximationTool_MeshApproximationTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MergeActors_Private_MeshApproximationTool_MeshApproximationTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshApproximationSettingsObject, UMeshApproximationSettingsObject::StaticClass, TEXT("UMeshApproximationSettingsObject"), &Z_Registration_Info_UClass_UMeshApproximationSettingsObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshApproximationSettingsObject), 3936588265U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MergeActors_Private_MeshApproximationTool_MeshApproximationTool_h_1744965954(TEXT("/Script/MergeActors"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MergeActors_Private_MeshApproximationTool_MeshApproximationTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MergeActors_Private_MeshApproximationTool_MeshApproximationTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
