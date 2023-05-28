// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialPropertyHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialPropertyHelpers() {}
// Cross Module References
	MATERIALEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSortedParamData();
	MATERIALEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FUnsortedParamData();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorParameterValue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MaterialEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SortedParamData;
class UScriptStruct* FSortedParamData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SortedParamData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SortedParamData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSortedParamData, (UObject*)Z_Construct_UPackage__Script_MaterialEditor(), TEXT("SortedParamData"));
	}
	return Z_Registration_Info_UScriptStruct_SortedParamData.OuterSingleton;
}
template<> MATERIALEDITOR_API UScriptStruct* StaticStruct<FSortedParamData>()
{
	return FSortedParamData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSortedParamData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parameter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSortedParamData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialPropertyHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSortedParamData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSortedParamData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSortedParamData_Statics::NewProp_Parameter_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialPropertyHelpers.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSortedParamData_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSortedParamData, Parameter), Z_Construct_UClass_UDEditorParameterValue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSortedParamData_Statics::NewProp_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSortedParamData_Statics::NewProp_Parameter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSortedParamData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSortedParamData_Statics::NewProp_Parameter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSortedParamData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialEditor,
		nullptr,
		&NewStructOps,
		"SortedParamData",
		sizeof(FSortedParamData),
		alignof(FSortedParamData),
		Z_Construct_UScriptStruct_FSortedParamData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSortedParamData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSortedParamData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSortedParamData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSortedParamData()
	{
		if (!Z_Registration_Info_UScriptStruct_SortedParamData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SortedParamData.InnerSingleton, Z_Construct_UScriptStruct_FSortedParamData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SortedParamData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UnsortedParamData;
class UScriptStruct* FUnsortedParamData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UnsortedParamData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UnsortedParamData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnsortedParamData, (UObject*)Z_Construct_UPackage__Script_MaterialEditor(), TEXT("UnsortedParamData"));
	}
	return Z_Registration_Info_UScriptStruct_UnsortedParamData.OuterSingleton;
}
template<> MATERIALEDITOR_API UScriptStruct* StaticStruct<FUnsortedParamData>()
{
	return FUnsortedParamData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUnsortedParamData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parameter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnsortedParamData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialPropertyHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUnsortedParamData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnsortedParamData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnsortedParamData_Statics::NewProp_Parameter_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialPropertyHelpers.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUnsortedParamData_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUnsortedParamData, Parameter), Z_Construct_UClass_UDEditorParameterValue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnsortedParamData_Statics::NewProp_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnsortedParamData_Statics::NewProp_Parameter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUnsortedParamData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnsortedParamData_Statics::NewProp_Parameter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnsortedParamData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialEditor,
		nullptr,
		&NewStructOps,
		"UnsortedParamData",
		sizeof(FUnsortedParamData),
		alignof(FUnsortedParamData),
		Z_Construct_UScriptStruct_FUnsortedParamData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnsortedParamData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUnsortedParamData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnsortedParamData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUnsortedParamData()
	{
		if (!Z_Registration_Info_UScriptStruct_UnsortedParamData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UnsortedParamData.InnerSingleton, Z_Construct_UScriptStruct_FUnsortedParamData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UnsortedParamData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialPropertyHelpers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialPropertyHelpers_h_Statics::ScriptStructInfo[] = {
		{ FSortedParamData::StaticStruct, Z_Construct_UScriptStruct_FSortedParamData_Statics::NewStructOps, TEXT("SortedParamData"), &Z_Registration_Info_UScriptStruct_SortedParamData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSortedParamData), 1703194081U) },
		{ FUnsortedParamData::StaticStruct, Z_Construct_UScriptStruct_FUnsortedParamData_Statics::NewStructOps, TEXT("UnsortedParamData"), &Z_Registration_Info_UScriptStruct_UnsortedParamData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUnsortedParamData), 2961112154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialPropertyHelpers_h_153703754(TEXT("/Script/MaterialEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialPropertyHelpers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialPropertyHelpers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
