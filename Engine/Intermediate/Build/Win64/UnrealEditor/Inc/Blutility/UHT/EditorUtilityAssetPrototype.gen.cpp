// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/EditorUtilityAssetPrototype.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorUtilityAssetPrototype() {}
// Cross Module References
	BLUTILITY_API UScriptStruct* Z_Construct_UScriptStruct_FBlutilityFunctionData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_Blutility();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlutilityFunctionData;
class UScriptStruct* FBlutilityFunctionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlutilityFunctionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlutilityFunctionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlutilityFunctionData, (UObject*)Z_Construct_UPackage__Script_Blutility(), TEXT("BlutilityFunctionData"));
	}
	return Z_Registration_Info_UScriptStruct_BlutilityFunctionData.OuterSingleton;
}
template<> BLUTILITY_API UScriptStruct* StaticStruct<FBlutilityFunctionData>()
{
	return FBlutilityFunctionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NameText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TooltipText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TooltipText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditorUtilityAssetPrototype.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlutilityFunctionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_Class_MetaData[] = {
		{ "ModuleRelativePath", "Private/EditorUtilityAssetPrototype.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlutilityFunctionData, Class), Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/EditorUtilityAssetPrototype.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlutilityFunctionData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_NameText_MetaData[] = {
		{ "ModuleRelativePath", "Private/EditorUtilityAssetPrototype.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_NameText = { "NameText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlutilityFunctionData, NameText), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_NameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_NameText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_Category_MetaData[] = {
		{ "ModuleRelativePath", "Private/EditorUtilityAssetPrototype.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlutilityFunctionData, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_TooltipText_MetaData[] = {
		{ "ModuleRelativePath", "Private/EditorUtilityAssetPrototype.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_TooltipText = { "TooltipText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlutilityFunctionData, TooltipText), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_TooltipText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_TooltipText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_NameText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewProp_TooltipText,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
		nullptr,
		&NewStructOps,
		"BlutilityFunctionData",
		sizeof(FBlutilityFunctionData),
		alignof(FBlutilityFunctionData),
		Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlutilityFunctionData()
	{
		if (!Z_Registration_Info_UScriptStruct_BlutilityFunctionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlutilityFunctionData.InnerSingleton, Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlutilityFunctionData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Private_EditorUtilityAssetPrototype_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Private_EditorUtilityAssetPrototype_h_Statics::ScriptStructInfo[] = {
		{ FBlutilityFunctionData::StaticStruct, Z_Construct_UScriptStruct_FBlutilityFunctionData_Statics::NewStructOps, TEXT("BlutilityFunctionData"), &Z_Registration_Info_UScriptStruct_BlutilityFunctionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlutilityFunctionData), 2936565984U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Private_EditorUtilityAssetPrototype_h_3076125351(TEXT("/Script/Blutility"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Private_EditorUtilityAssetPrototype_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Private_EditorUtilityAssetPrototype_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
