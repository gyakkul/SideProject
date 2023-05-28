// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraParameterBinding.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraParameterBinding() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraParameterBinding;
class UScriptStruct* FNiagaraParameterBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraParameterBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraParameterBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraParameterBinding, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraParameterBinding"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraParameterBinding.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraParameterBinding>()
{
	return FNiagaraParameterBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AliasedParameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AliasedParameter;
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_AllowedDataInterfaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedDataInterfaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedDataInterfaces;
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_AllowedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedObjects;
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_AllowedInterfaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedInterfaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedInterfaces;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraParameterBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_Parameter_MetaData[] = {
		{ "Category", "Parameter Binding" },
		{ "Comment", "/** Parameter binding used by the runtime fully resolved, contains a fallback value, i.e. NamedEmitter.Parameter */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterBinding.h" },
		{ "ToolTip", "Parameter binding used by the runtime fully resolved, contains a fallback value, i.e. NamedEmitter.Parameter" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraParameterBinding, Parameter), Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_Parameter_MetaData)) }; // 1114376608
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AliasedParameter_MetaData[] = {
		{ "Category", "Parameter Binding" },
		{ "Comment", "/** Parameter binding used in the UI, i.e. Emitter.Parameter */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterBinding.h" },
		{ "ToolTip", "Parameter binding used in the UI, i.e. Emitter.Parameter" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AliasedParameter = { "AliasedParameter", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraParameterBinding, AliasedParameter), Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AliasedParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AliasedParameter_MetaData)) }; // 1114376608
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedDataInterfaces_Inner = { "AllowedDataInterfaces", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedDataInterfaces_MetaData[] = {
		{ "Comment", "/** List of data interfaces we can bind to, matches with a valid Cast<>. */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterBinding.h" },
		{ "ToolTip", "List of data interfaces we can bind to, matches with a valid Cast<>." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedDataInterfaces = { "AllowedDataInterfaces", nullptr, (EPropertyFlags)0x0024080800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraParameterBinding, AllowedDataInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedDataInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedDataInterfaces_MetaData)) };
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedObjects_Inner = { "AllowedObjects", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedObjects_MetaData[] = {
		{ "Comment", "/** List of UObject types we can bind to, matches with a valid Cast<>. */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterBinding.h" },
		{ "ToolTip", "List of UObject types we can bind to, matches with a valid Cast<>." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedObjects = { "AllowedObjects", nullptr, (EPropertyFlags)0x0024080800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraParameterBinding, AllowedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedObjects_MetaData)) };
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedInterfaces_Inner = { "AllowedInterfaces", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedInterfaces_MetaData[] = {
		{ "Comment", "/** List of Interfaces to look for on Object & DataInterfaces */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterBinding.h" },
		{ "ToolTip", "List of Interfaces to look for on Object & DataInterfaces" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedInterfaces = { "AllowedInterfaces", nullptr, (EPropertyFlags)0x0024080800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraParameterBinding, AllowedInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedInterfaces_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_Parameter,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AliasedParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedDataInterfaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedDataInterfaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedInterfaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedInterfaces,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraParameterBinding",
		sizeof(FNiagaraParameterBinding),
		alignof(FNiagaraParameterBinding),
		Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraParameterBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraParameterBinding.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraParameterBinding.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameterBinding_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameterBinding_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraParameterBinding::StaticStruct, Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewStructOps, TEXT("NiagaraParameterBinding"), &Z_Registration_Info_UScriptStruct_NiagaraParameterBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraParameterBinding), 3357512247U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameterBinding_h_4224777009(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameterBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameterBinding_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
