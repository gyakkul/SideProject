// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ControlRigDrawingDetails.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigDrawingDetails() {}
// Cross Module References
	CONTROLRIGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigDrawContainerImportFbxSettings;
class UScriptStruct* FControlRigDrawContainerImportFbxSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigDrawContainerImportFbxSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigDrawContainerImportFbxSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings, (UObject*)Z_Construct_UPackage__Script_ControlRigEditor(), TEXT("ControlRigDrawContainerImportFbxSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigDrawContainerImportFbxSettings.OuterSingleton;
}
template<> CONTROLRIGEDITOR_API UScriptStruct* StaticStruct<FControlRigDrawContainerImportFbxSettings>()
{
	return FControlRigDrawContainerImportFbxSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Detail_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Detail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergeCurves_MetaData[];
#endif
		static void NewProp_bMergeCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeCurves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ControlRigDrawingDetails.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigDrawContainerImportFbxSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Fbx Import" },
		{ "ModuleRelativePath", "Private/ControlRigDrawingDetails.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigDrawContainerImportFbxSettings, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::NewProp_Detail_MetaData[] = {
		{ "Category", "Fbx Import" },
		{ "ModuleRelativePath", "Private/ControlRigDrawingDetails.h" },
		{ "UIMax", "8" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::NewProp_Detail = { "Detail", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigDrawContainerImportFbxSettings, Detail), METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::NewProp_Detail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::NewProp_Detail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::NewProp_bMergeCurves_MetaData[] = {
		{ "Category", "Fbx Import" },
		{ "ModuleRelativePath", "Private/ControlRigDrawingDetails.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::NewProp_bMergeCurves_SetBit(void* Obj)
	{
		((FControlRigDrawContainerImportFbxSettings*)Obj)->bMergeCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::NewProp_bMergeCurves = { "bMergeCurves", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FControlRigDrawContainerImportFbxSettings), &Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::NewProp_bMergeCurves_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::NewProp_bMergeCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::NewProp_bMergeCurves_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::NewProp_Detail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::NewProp_bMergeCurves,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
		nullptr,
		&NewStructOps,
		"ControlRigDrawContainerImportFbxSettings",
		sizeof(FControlRigDrawContainerImportFbxSettings),
		alignof(FControlRigDrawContainerImportFbxSettings),
		Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigDrawContainerImportFbxSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigDrawContainerImportFbxSettings.InnerSingleton, Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigDrawContainerImportFbxSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_ControlRigDrawingDetails_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_ControlRigDrawingDetails_h_Statics::ScriptStructInfo[] = {
		{ FControlRigDrawContainerImportFbxSettings::StaticStruct, Z_Construct_UScriptStruct_FControlRigDrawContainerImportFbxSettings_Statics::NewStructOps, TEXT("ControlRigDrawContainerImportFbxSettings"), &Z_Registration_Info_UScriptStruct_ControlRigDrawContainerImportFbxSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigDrawContainerImportFbxSettings), 2984361736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_ControlRigDrawingDetails_h_3298335335(TEXT("/Script/ControlRigEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_ControlRigDrawingDetails_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_ControlRigDrawingDetails_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
