// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PropertySets/AxisFilterPropertyType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxisFilterPropertyType() {}
// Cross Module References
	MODELINGCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FModelingToolsAxisFilter();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModelingToolsAxisFilter;
class UScriptStruct* FModelingToolsAxisFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModelingToolsAxisFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModelingToolsAxisFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModelingToolsAxisFilter, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("ModelingToolsAxisFilter"));
	}
	return Z_Registration_Info_UScriptStruct_ModelingToolsAxisFilter.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<FModelingToolsAxisFilter>()
{
	return FModelingToolsAxisFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAxisX_MetaData[];
#endif
		static void NewProp_bAxisX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAxisX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAxisY_MetaData[];
#endif
		static void NewProp_bAxisY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAxisY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAxisZ_MetaData[];
#endif
		static void NewProp_bAxisZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAxisZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PropertySets/AxisFilterPropertyType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModelingToolsAxisFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisX_MetaData[] = {
		{ "Category", "AxisFilters" },
		{ "Comment", "/** X Axis */" },
		{ "DisplayName", "X" },
		{ "ModuleRelativePath", "Public/PropertySets/AxisFilterPropertyType.h" },
		{ "ToolTip", "X Axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisX_SetBit(void* Obj)
	{
		((FModelingToolsAxisFilter*)Obj)->bAxisX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisX = { "bAxisX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FModelingToolsAxisFilter), &Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisY_MetaData[] = {
		{ "Category", "AxisFilters" },
		{ "Comment", "/** Y Axis */" },
		{ "DisplayName", "Y" },
		{ "ModuleRelativePath", "Public/PropertySets/AxisFilterPropertyType.h" },
		{ "ToolTip", "Y Axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisY_SetBit(void* Obj)
	{
		((FModelingToolsAxisFilter*)Obj)->bAxisY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisY = { "bAxisY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FModelingToolsAxisFilter), &Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisZ_MetaData[] = {
		{ "Category", "AxisFilters" },
		{ "Comment", "/** Z Axis */" },
		{ "DisplayName", "Z" },
		{ "ModuleRelativePath", "Public/PropertySets/AxisFilterPropertyType.h" },
		{ "ToolTip", "Z Axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisZ_SetBit(void* Obj)
	{
		((FModelingToolsAxisFilter*)Obj)->bAxisZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisZ = { "bAxisZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FModelingToolsAxisFilter), &Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisZ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
		nullptr,
		&NewStructOps,
		"ModelingToolsAxisFilter",
		sizeof(FModelingToolsAxisFilter),
		alignof(FModelingToolsAxisFilter),
		Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModelingToolsAxisFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_ModelingToolsAxisFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModelingToolsAxisFilter.InnerSingleton, Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ModelingToolsAxisFilter.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_AxisFilterPropertyType_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_AxisFilterPropertyType_h_Statics::ScriptStructInfo[] = {
		{ FModelingToolsAxisFilter::StaticStruct, Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewStructOps, TEXT("ModelingToolsAxisFilter"), &Z_Registration_Info_UScriptStruct_ModelingToolsAxisFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModelingToolsAxisFilter), 1834689654U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_AxisFilterPropertyType_h_2086389374(TEXT("/Script/ModelingComponents"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_AxisFilterPropertyType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_AxisFilterPropertyType_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
