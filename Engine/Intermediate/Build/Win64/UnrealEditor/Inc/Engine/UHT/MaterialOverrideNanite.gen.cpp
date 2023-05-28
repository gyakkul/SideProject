// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialOverrideNanite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialOverrideNanite() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialOverrideNanite();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialOverrideNanite;
class UScriptStruct* FMaterialOverrideNanite::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialOverrideNanite.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialOverrideNanite.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialOverrideNanite, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialOverrideNanite"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialOverrideNanite.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialOverrideNanite>()
{
	return FMaterialOverrideNanite::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterialRef_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OverrideMaterialRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOverride_MetaData[];
#endif
		static void NewProp_bEnableOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverrideMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Storage for nanite material override.\n * An override material can be selected, and the override material can be used according to the current settings.\n * We handle removing the override material and its dependencies from the cook on platforms where we can determine \n * that the override material can never be used.\n */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialOverrideNanite.h" },
		{ "ToolTip", "Storage for nanite material override.\nAn override material can be selected, and the override material can be used according to the current settings.\nWe handle removing the override material and its dependencies from the cook on platforms where we can determine\nthat the override material can never be used." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialOverrideNanite>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_OverrideMaterialRef_MetaData[] = {
		{ "Category", "Nanite" },
		{ "Comment", "/** An override material which will be used when rendering with nanite. */" },
		{ "DisplayName", "Nanite Override Material" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialOverrideNanite.h" },
		{ "ToolTip", "An override material which will be used when rendering with nanite." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_OverrideMaterialRef = { "OverrideMaterialRef", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialOverrideNanite, OverrideMaterialRef), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_OverrideMaterialRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_OverrideMaterialRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_bEnableOverride_MetaData[] = {
		{ "Comment", "/** \n\x09 * Stored flag to set whether we apply this override.  \n\x09 * This is useful when evaluating an override along a hierachy of settings.\n\x09 * We default to true to always override.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialOverrideNanite.h" },
		{ "ToolTip", "Stored flag to set whether we apply this override.\nThis is useful when evaluating an override along a hierachy of settings.\nWe default to true to always override." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_bEnableOverride_SetBit(void* Obj)
	{
		((FMaterialOverrideNanite*)Obj)->bEnableOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_bEnableOverride = { "bEnableOverride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMaterialOverrideNanite), &Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_bEnableOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_bEnableOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_bEnableOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_OverrideMaterial_MetaData[] = {
		{ "Comment", "/** Cached hard reference to override material which is only created if necessary. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialOverrideNanite.h" },
		{ "ToolTip", "Cached hard reference to override material which is only created if necessary." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_OverrideMaterial = { "OverrideMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialOverrideNanite, OverrideMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_OverrideMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_OverrideMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_OverrideMaterialRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_bEnableOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_OverrideMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialOverrideNanite",
		sizeof(FMaterialOverrideNanite),
		alignof(FMaterialOverrideNanite),
		Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialOverrideNanite()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialOverrideNanite.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialOverrideNanite.InnerSingleton, Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialOverrideNanite.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialOverrideNanite_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialOverrideNanite_h_Statics::ScriptStructInfo[] = {
		{ FMaterialOverrideNanite::StaticStruct, Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewStructOps, TEXT("MaterialOverrideNanite"), &Z_Registration_Info_UScriptStruct_MaterialOverrideNanite, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialOverrideNanite), 1228649317U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialOverrideNanite_h_1553168902(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialOverrideNanite_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialOverrideNanite_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
