// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/MVVMAvailableBinding.h"
#include "Types/MVVMBindingName.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMAvailableBinding() {}
// Cross Module References
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMAvailableBinding();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMBindingName();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModel();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMAvailableBinding;
class UScriptStruct* FMVVMAvailableBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMAvailableBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMAvailableBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMAvailableBinding, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModel(), TEXT("MVVMAvailableBinding"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMAvailableBinding.OuterSingleton;
}
template<> MODELVIEWVIEWMODEL_API UScriptStruct* StaticStruct<FMVVMAvailableBinding>()
{
	return FMVVMAvailableBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsReadable_MetaData[];
#endif
		static void NewProp_bIsReadable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWritable_MetaData[];
#endif
		static void NewProp_bIsWritable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWritable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasNotify_MetaData[];
#endif
		static void NewProp_bHasNotify_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasNotify;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/MVVMAvailableBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMAvailableBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_BindingName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/MVVMAvailableBinding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_BindingName = { "BindingName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMAvailableBinding, BindingName), Z_Construct_UScriptStruct_FMVVMBindingName, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_BindingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_BindingName_MetaData)) }; // 4182072837
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bIsReadable_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/MVVMAvailableBinding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bIsReadable_SetBit(void* Obj)
	{
		((FMVVMAvailableBinding*)Obj)->bIsReadable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bIsReadable = { "bIsReadable", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMVVMAvailableBinding), &Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bIsReadable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bIsReadable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bIsReadable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bIsWritable_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/MVVMAvailableBinding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bIsWritable_SetBit(void* Obj)
	{
		((FMVVMAvailableBinding*)Obj)->bIsWritable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bIsWritable = { "bIsWritable", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMVVMAvailableBinding), &Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bIsWritable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bIsWritable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bIsWritable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bHasNotify_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/MVVMAvailableBinding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bHasNotify_SetBit(void* Obj)
	{
		((FMVVMAvailableBinding*)Obj)->bHasNotify = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bHasNotify = { "bHasNotify", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMVVMAvailableBinding), &Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bHasNotify_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bHasNotify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bHasNotify_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_BindingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bIsReadable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bIsWritable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bHasNotify,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
		nullptr,
		&NewStructOps,
		"MVVMAvailableBinding",
		sizeof(FMVVMAvailableBinding),
		alignof(FMVVMAvailableBinding),
		Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMAvailableBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMAvailableBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMAvailableBinding.InnerSingleton, Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMAvailableBinding.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMAvailableBinding_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMAvailableBinding_h_Statics::ScriptStructInfo[] = {
		{ FMVVMAvailableBinding::StaticStruct, Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewStructOps, TEXT("MVVMAvailableBinding"), &Z_Registration_Info_UScriptStruct_MVVMAvailableBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMAvailableBinding), 1827510724U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMAvailableBinding_h_847032124(TEXT("/Script/ModelViewViewModel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMAvailableBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMAvailableBinding_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
