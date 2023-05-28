// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Editor/SRigHierarchy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSRigHierarchy() {}
// Cross Module References
	CONTROLRIGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchyImportSettings();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigHierarchyImportSettings;
class UScriptStruct* FRigHierarchyImportSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigHierarchyImportSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigHierarchyImportSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigHierarchyImportSettings, (UObject*)Z_Construct_UPackage__Script_ControlRigEditor(), TEXT("RigHierarchyImportSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigHierarchyImportSettings.OuterSingleton;
}
template<> CONTROLRIGEDITOR_API UScriptStruct* StaticStruct<FRigHierarchyImportSettings>()
{
	return FRigHierarchyImportSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigHierarchyImportSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchyImportSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Editor/SRigHierarchy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigHierarchyImportSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigHierarchyImportSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchyImportSettings_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Hierachy Import" },
		{ "ModuleRelativePath", "Private/Editor/SRigHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRigHierarchyImportSettings_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigHierarchyImportSettings, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchyImportSettings_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyImportSettings_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigHierarchyImportSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyImportSettings_Statics::NewProp_Mesh,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigHierarchyImportSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
		nullptr,
		&NewStructOps,
		"RigHierarchyImportSettings",
		sizeof(FRigHierarchyImportSettings),
		alignof(FRigHierarchyImportSettings),
		Z_Construct_UScriptStruct_FRigHierarchyImportSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyImportSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchyImportSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyImportSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchyImportSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RigHierarchyImportSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigHierarchyImportSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigHierarchyImportSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigHierarchyImportSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_SRigHierarchy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_SRigHierarchy_h_Statics::ScriptStructInfo[] = {
		{ FRigHierarchyImportSettings::StaticStruct, Z_Construct_UScriptStruct_FRigHierarchyImportSettings_Statics::NewStructOps, TEXT("RigHierarchyImportSettings"), &Z_Registration_Info_UScriptStruct_RigHierarchyImportSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigHierarchyImportSettings), 1145705005U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_SRigHierarchy_h_901276158(TEXT("/Script/ControlRigEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_SRigHierarchy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_SRigHierarchy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
