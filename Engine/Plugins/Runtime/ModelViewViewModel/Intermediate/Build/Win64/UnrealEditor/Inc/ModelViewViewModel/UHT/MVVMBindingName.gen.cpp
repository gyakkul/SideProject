// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/MVVMBindingName.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMBindingName() {}
// Cross Module References
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMBindingName();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModel();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMBindingName;
class UScriptStruct* FMVVMBindingName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMBindingName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMBindingName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMBindingName, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModel(), TEXT("MVVMBindingName"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMBindingName.OuterSingleton;
}
template<> MODELVIEWVIEWMODEL_API UScriptStruct* StaticStruct<FMVVMBindingName>()
{
	return FMVVMBindingName::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMBindingName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BindingName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBindingName_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/MVVMBindingName.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMBindingName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMBindingName>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBindingName_Statics::NewProp_BindingName_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "//todo this should be and make helper function to build the name in BP with a picker\n" },
		{ "ModuleRelativePath", "Public/Types/MVVMBindingName.h" },
		{ "ToolTip", "todo this should be and make helper function to build the name in BP with a picker" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMBindingName_Statics::NewProp_BindingName = { "BindingName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMBindingName, BindingName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMBindingName_Statics::NewProp_BindingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBindingName_Statics::NewProp_BindingName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMBindingName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBindingName_Statics::NewProp_BindingName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMBindingName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
		nullptr,
		&NewStructOps,
		"MVVMBindingName",
		sizeof(FMVVMBindingName),
		alignof(FMVVMBindingName),
		Z_Construct_UScriptStruct_FMVVMBindingName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBindingName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMBindingName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBindingName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMBindingName()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMBindingName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMBindingName.InnerSingleton, Z_Construct_UScriptStruct_FMVVMBindingName_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMBindingName.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMBindingName_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMBindingName_h_Statics::ScriptStructInfo[] = {
		{ FMVVMBindingName::StaticStruct, Z_Construct_UScriptStruct_FMVVMBindingName_Statics::NewStructOps, TEXT("MVVMBindingName"), &Z_Registration_Info_UScriptStruct_MVVMBindingName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMBindingName), 4182072837U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMBindingName_h_1459439878(TEXT("/Script/ModelViewViewModel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMBindingName_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMBindingName_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
