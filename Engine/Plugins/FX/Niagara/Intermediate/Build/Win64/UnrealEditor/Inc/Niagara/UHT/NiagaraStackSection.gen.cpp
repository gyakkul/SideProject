// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraStackSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackSection() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStackSection();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraStackSection;
class UScriptStruct* FNiagaraStackSection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraStackSection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraStackSection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStackSection, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraStackSection"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraStackSection.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraStackSection>()
{
	return FNiagaraStackSection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraStackSection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_SectionDisplayName;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Categories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Categories;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/* Defines data for sections visible in the stack view. */" },
		{ "ModuleRelativePath", "Public/NiagaraStackSection.h" },
		{ "ToolTip", "Defines data for sections visible in the stack view." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraStackSection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_SectionIdentifier_MetaData[] = {
		{ "Category", "Section" },
		{ "ModuleRelativePath", "Public/NiagaraStackSection.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_SectionIdentifier = { "SectionIdentifier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraStackSection, SectionIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_SectionIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_SectionIdentifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_SectionDisplayName_MetaData[] = {
		{ "Category", "Section" },
		{ "ModuleRelativePath", "Public/NiagaraStackSection.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_SectionDisplayName = { "SectionDisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraStackSection, SectionDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_SectionDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_SectionDisplayName_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_Categories_MetaData[] = {
		{ "Category", "Section" },
		{ "ModuleRelativePath", "Public/NiagaraStackSection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraStackSection, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_Categories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_Categories_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Section" },
		{ "ModuleRelativePath", "Public/NiagaraStackSection.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FNiagaraStackSection*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraStackSection), &Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_SectionIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_SectionDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_Categories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_Categories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraStackSection",
		sizeof(FNiagaraStackSection),
		alignof(FNiagaraStackSection),
		Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStackSection()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraStackSection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraStackSection.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraStackSection.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraStackSection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraStackSection_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraStackSection::StaticStruct, Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewStructOps, TEXT("NiagaraStackSection"), &Z_Registration_Info_UScriptStruct_NiagaraStackSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraStackSection), 672969363U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraStackSection_h_3496736221(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraStackSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraStackSection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
