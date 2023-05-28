// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/MVVMViewModelContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMViewModelContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelBase_NoRegister();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewModelContext();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModel();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMViewModelContext;
class UScriptStruct* FMVVMViewModelContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMViewModelContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMViewModelContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMViewModelContext, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModel(), TEXT("MVVMViewModelContext"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMViewModelContext.OuterSingleton;
}
template<> MODELVIEWVIEWMODEL_API UScriptStruct* StaticStruct<FMVVMViewModelContext>()
{
	return FMVVMViewModelContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMViewModelContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ContextClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ContextName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewModelContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Types/MVVMViewModelContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMViewModelContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMViewModelContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewModelContext_Statics::NewProp_ContextClass_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/Types/MVVMViewModelContext.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMVVMViewModelContext_Statics::NewProp_ContextClass = { "ContextClass", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMViewModelContext, ContextClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMVVMViewModelBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMViewModelContext_Statics::NewProp_ContextClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelContext_Statics::NewProp_ContextClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewModelContext_Statics::NewProp_ContextName_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/Types/MVVMViewModelContext.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMViewModelContext_Statics::NewProp_ContextName = { "ContextName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMViewModelContext, ContextName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMViewModelContext_Statics::NewProp_ContextName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelContext_Statics::NewProp_ContextName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMViewModelContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewModelContext_Statics::NewProp_ContextClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewModelContext_Statics::NewProp_ContextName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMViewModelContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
		nullptr,
		&NewStructOps,
		"MVVMViewModelContext",
		sizeof(FMVVMViewModelContext),
		alignof(FMVVMViewModelContext),
		Z_Construct_UScriptStruct_FMVVMViewModelContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMViewModelContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewModelContext()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMViewModelContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMViewModelContext.InnerSingleton, Z_Construct_UScriptStruct_FMVVMViewModelContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMViewModelContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelContext_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelContext_h_Statics::ScriptStructInfo[] = {
		{ FMVVMViewModelContext::StaticStruct, Z_Construct_UScriptStruct_FMVVMViewModelContext_Statics::NewStructOps, TEXT("MVVMViewModelContext"), &Z_Registration_Info_UScriptStruct_MVVMViewModelContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMViewModelContext), 919489008U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelContext_h_194294484(TEXT("/Script/ModelViewViewModel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelContext_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
