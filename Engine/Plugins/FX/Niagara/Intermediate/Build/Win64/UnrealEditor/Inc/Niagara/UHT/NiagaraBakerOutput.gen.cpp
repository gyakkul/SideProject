// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraBakerOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraBakerOutput() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutput();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutput_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBakerTextureSource();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource;
class UScriptStruct* FNiagaraBakerTextureSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraBakerTextureSource"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraBakerTextureSource>()
{
	return FNiagaraBakerTextureSource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraBakerTextureSource>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_DisplayString_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutput.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_DisplayString = { "DisplayString", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraBakerTextureSource, DisplayString), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_DisplayString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_DisplayString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_SourceName_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutput.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraBakerTextureSource, SourceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_SourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_SourceName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_DisplayString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_SourceName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraBakerTextureSource",
		sizeof(FNiagaraBakerTextureSource),
		alignof(FNiagaraBakerTextureSource),
		Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBakerTextureSource()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource.InnerSingleton;
	}
	void UNiagaraBakerOutput::StaticRegisterNativesUNiagaraBakerOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraBakerOutput);
	UClass* Z_Construct_UClass_UNiagaraBakerOutput_NoRegister()
	{
		return UNiagaraBakerOutput::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraBakerOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraBakerOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraBakerOutput.h" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutput.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutput_Statics::NewProp_OutputName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Optional output name, useful when you have multiple outputs */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutput.h" },
		{ "ToolTip", "Optional output name, useful when you have multiple outputs" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraBakerOutput_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerOutput, OutputName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutput_Statics::NewProp_OutputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutput_Statics::NewProp_OutputName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraBakerOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutput_Statics::NewProp_OutputName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraBakerOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraBakerOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraBakerOutput_Statics::ClassParams = {
		&UNiagaraBakerOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraBakerOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutput_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraBakerOutput()
	{
		if (!Z_Registration_Info_UClass_UNiagaraBakerOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraBakerOutput.OuterSingleton, Z_Construct_UClass_UNiagaraBakerOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraBakerOutput.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraBakerOutput>()
	{
		return UNiagaraBakerOutput::StaticClass();
	}
	UNiagaraBakerOutput::UNiagaraBakerOutput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraBakerOutput);
	UNiagaraBakerOutput::~UNiagaraBakerOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraBakerTextureSource::StaticStruct, Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewStructOps, TEXT("NiagaraBakerTextureSource"), &Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraBakerTextureSource), 3396379681U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraBakerOutput, UNiagaraBakerOutput::StaticClass, TEXT("UNiagaraBakerOutput"), &Z_Registration_Info_UClass_UNiagaraBakerOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraBakerOutput), 3522774575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_3421129384(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
