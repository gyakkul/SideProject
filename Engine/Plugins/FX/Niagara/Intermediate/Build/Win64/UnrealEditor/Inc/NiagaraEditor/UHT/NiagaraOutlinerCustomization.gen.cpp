// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Customizations/NiagaraOutlinerCustomization.h"
#include "../Public/NiagaraDebuggerCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraOutlinerCustomization() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldDataCustomizationWrapper;
class UScriptStruct* FNiagaraOutlinerWorldDataCustomizationWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldDataCustomizationWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldDataCustomizationWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraOutlinerWorldDataCustomizationWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldDataCustomizationWrapper.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraOutlinerWorldDataCustomizationWrapper>()
{
	return FNiagaraOutlinerWorldDataCustomizationWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Due to limitations of the structure details view, we need to wrap up structs we wish to customize. */" },
		{ "ModuleRelativePath", "Private/Customizations/NiagaraOutlinerCustomization.h" },
		{ "ToolTip", "Due to limitations of the structure details view, we need to wrap up structs we wish to customize." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerWorldDataCustomizationWrapper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Private/Customizations/NiagaraOutlinerCustomization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerWorldDataCustomizationWrapper, Data), Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::NewProp_Data_MetaData)) }; // 2975294628
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerWorldDataCustomizationWrapper",
		sizeof(FNiagaraOutlinerWorldDataCustomizationWrapper),
		alignof(FNiagaraOutlinerWorldDataCustomizationWrapper),
		Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldDataCustomizationWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldDataCustomizationWrapper.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldDataCustomizationWrapper.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemDataCustomizationWrapper;
class UScriptStruct* FNiagaraOutlinerSystemDataCustomizationWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemDataCustomizationWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemDataCustomizationWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraOutlinerSystemDataCustomizationWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemDataCustomizationWrapper.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraOutlinerSystemDataCustomizationWrapper>()
{
	return FNiagaraOutlinerSystemDataCustomizationWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Customizations/NiagaraOutlinerCustomization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerSystemDataCustomizationWrapper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "System" },
		{ "ModuleRelativePath", "Private/Customizations/NiagaraOutlinerCustomization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerSystemDataCustomizationWrapper, Data), Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::NewProp_Data_MetaData)) }; // 3532953236
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerSystemDataCustomizationWrapper",
		sizeof(FNiagaraOutlinerSystemDataCustomizationWrapper),
		alignof(FNiagaraOutlinerSystemDataCustomizationWrapper),
		Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemDataCustomizationWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemDataCustomizationWrapper.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemDataCustomizationWrapper.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceDataCustomizationWrapper;
class UScriptStruct* FNiagaraOutlinerSystemInstanceDataCustomizationWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceDataCustomizationWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceDataCustomizationWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraOutlinerSystemInstanceDataCustomizationWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceDataCustomizationWrapper.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraOutlinerSystemInstanceDataCustomizationWrapper>()
{
	return FNiagaraOutlinerSystemInstanceDataCustomizationWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Customizations/NiagaraOutlinerCustomization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerSystemInstanceDataCustomizationWrapper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Instance" },
		{ "ModuleRelativePath", "Private/Customizations/NiagaraOutlinerCustomization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerSystemInstanceDataCustomizationWrapper, Data), Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::NewProp_Data_MetaData)) }; // 2634148200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerSystemInstanceDataCustomizationWrapper",
		sizeof(FNiagaraOutlinerSystemInstanceDataCustomizationWrapper),
		alignof(FNiagaraOutlinerSystemInstanceDataCustomizationWrapper),
		Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceDataCustomizationWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceDataCustomizationWrapper.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceDataCustomizationWrapper.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceDataCustomizationWrapper;
class UScriptStruct* FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceDataCustomizationWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceDataCustomizationWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraOutlinerEmitterInstanceDataCustomizationWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceDataCustomizationWrapper.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper>()
{
	return FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Customizations/NiagaraOutlinerCustomization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Private/Customizations/NiagaraOutlinerCustomization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper, Data), Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::NewProp_Data_MetaData)) }; // 2004544238
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerEmitterInstanceDataCustomizationWrapper",
		sizeof(FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper),
		alignof(FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper),
		Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceDataCustomizationWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceDataCustomizationWrapper.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceDataCustomizationWrapper.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraOutlinerCustomization_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraOutlinerCustomization_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraOutlinerWorldDataCustomizationWrapper::StaticStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::NewStructOps, TEXT("NiagaraOutlinerWorldDataCustomizationWrapper"), &Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldDataCustomizationWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraOutlinerWorldDataCustomizationWrapper), 1074719579U) },
		{ FNiagaraOutlinerSystemDataCustomizationWrapper::StaticStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::NewStructOps, TEXT("NiagaraOutlinerSystemDataCustomizationWrapper"), &Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemDataCustomizationWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraOutlinerSystemDataCustomizationWrapper), 3619918472U) },
		{ FNiagaraOutlinerSystemInstanceDataCustomizationWrapper::StaticStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::NewStructOps, TEXT("NiagaraOutlinerSystemInstanceDataCustomizationWrapper"), &Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceDataCustomizationWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraOutlinerSystemInstanceDataCustomizationWrapper), 2140564435U) },
		{ FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper::StaticStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::NewStructOps, TEXT("NiagaraOutlinerEmitterInstanceDataCustomizationWrapper"), &Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceDataCustomizationWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper), 970831481U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraOutlinerCustomization_h_3825210800(TEXT("/Script/NiagaraEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraOutlinerCustomization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraOutlinerCustomization_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
