// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/MVVMViewModelContextInstance.h"
#include "Types/MVVMViewModelContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMViewModelContextInstance() {}
// Cross Module References
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelBase_NoRegister();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewModelContext();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewModelContextInstance();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModel();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMViewModelContextInstance;
class UScriptStruct* FMVVMViewModelContextInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMViewModelContextInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMViewModelContextInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMViewModelContextInstance, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModel(), TEXT("MVVMViewModelContextInstance"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMViewModelContextInstance.OuterSingleton;
}
template<> MODELVIEWVIEWMODEL_API UScriptStruct* StaticStruct<FMVVMViewModelContextInstance>()
{
	return FMVVMViewModelContextInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMViewModelContextInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewModelContextInstance_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Types/MVVMViewModelContextInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMViewModelContextInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMViewModelContextInstance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewModelContextInstance_Statics::NewProp_Context_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/MVVMViewModelContextInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewModelContextInstance_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMViewModelContextInstance, Context), Z_Construct_UScriptStruct_FMVVMViewModelContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMViewModelContextInstance_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelContextInstance_Statics::NewProp_Context_MetaData)) }; // 919489008
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewModelContextInstance_Statics::NewProp_Instance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/MVVMViewModelContextInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMVVMViewModelContextInstance_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMViewModelContextInstance, Instance), Z_Construct_UClass_UMVVMViewModelBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMViewModelContextInstance_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelContextInstance_Statics::NewProp_Instance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMViewModelContextInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewModelContextInstance_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewModelContextInstance_Statics::NewProp_Instance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMViewModelContextInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
		nullptr,
		&NewStructOps,
		"MVVMViewModelContextInstance",
		sizeof(FMVVMViewModelContextInstance),
		alignof(FMVVMViewModelContextInstance),
		Z_Construct_UScriptStruct_FMVVMViewModelContextInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelContextInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMViewModelContextInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelContextInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewModelContextInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMViewModelContextInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMViewModelContextInstance.InnerSingleton, Z_Construct_UScriptStruct_FMVVMViewModelContextInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMViewModelContextInstance.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelContextInstance_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelContextInstance_h_Statics::ScriptStructInfo[] = {
		{ FMVVMViewModelContextInstance::StaticStruct, Z_Construct_UScriptStruct_FMVVMViewModelContextInstance_Statics::NewStructOps, TEXT("MVVMViewModelContextInstance"), &Z_Registration_Info_UScriptStruct_MVVMViewModelContextInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMViewModelContextInstance), 467013587U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelContextInstance_h_1562105942(TEXT("/Script/ModelViewViewModel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelContextInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelContextInstance_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
