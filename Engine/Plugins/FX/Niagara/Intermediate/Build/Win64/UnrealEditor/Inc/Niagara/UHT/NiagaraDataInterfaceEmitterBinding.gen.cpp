// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraDataInterfaceEmitterBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceEmitterBinding() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode;
	static UEnum* ENiagaraDataInterfaceEmitterBindingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDataInterfaceEmitterBindingMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDataInterfaceEmitterBindingMode>()
	{
		return ENiagaraDataInterfaceEmitterBindingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode_Statics::Enumerators[] = {
		{ "ENiagaraDataInterfaceEmitterBindingMode::Self", (int64)ENiagaraDataInterfaceEmitterBindingMode::Self },
		{ "ENiagaraDataInterfaceEmitterBindingMode::Other", (int64)ENiagaraDataInterfaceEmitterBindingMode::Other },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceEmitterBinding.h" },
		{ "Other.Comment", "/** Attempt to bind to an emitter using it's name. */" },
		{ "Other.Name", "ENiagaraDataInterfaceEmitterBindingMode::Other" },
		{ "Other.ToolTip", "Attempt to bind to an emitter using it's name." },
		{ "Self.Comment", "/** Attempt to bind to the emitter the data interface is used with, this may not be possible in all situations (i.e. user parameter). */" },
		{ "Self.Name", "ENiagaraDataInterfaceEmitterBindingMode::Self" },
		{ "Self.ToolTip", "Attempt to bind to the emitter the data interface is used with, this may not be possible in all situations (i.e. user parameter)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraDataInterfaceEmitterBindingMode",
		"ENiagaraDataInterfaceEmitterBindingMode",
		Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceEmitterBinding;
class UScriptStruct* FNiagaraDataInterfaceEmitterBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceEmitterBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceEmitterBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDataInterfaceEmitterBinding"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceEmitterBinding.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDataInterfaceEmitterBinding>()
{
	return FNiagaraDataInterfaceEmitterBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BindingMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BindingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EmitterName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceEmitterBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataInterfaceEmitterBinding>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::NewProp_BindingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::NewProp_BindingMode_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceEmitterBinding.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::NewProp_BindingMode = { "BindingMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDataInterfaceEmitterBinding, BindingMode), Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::NewProp_BindingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::NewProp_BindingMode_MetaData)) }; // 1993332694
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::NewProp_EmitterName_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceEmitterBinding.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDataInterfaceEmitterBinding, EmitterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::NewProp_EmitterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::NewProp_EmitterName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::NewProp_BindingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::NewProp_BindingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::NewProp_EmitterName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDataInterfaceEmitterBinding",
		sizeof(FNiagaraDataInterfaceEmitterBinding),
		alignof(FNiagaraDataInterfaceEmitterBinding),
		Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceEmitterBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceEmitterBinding.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceEmitterBinding.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceEmitterBinding_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceEmitterBinding_h_Statics::EnumInfo[] = {
		{ ENiagaraDataInterfaceEmitterBindingMode_StaticEnum, TEXT("ENiagaraDataInterfaceEmitterBindingMode"), &Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1993332694U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceEmitterBinding_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraDataInterfaceEmitterBinding::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::NewStructOps, TEXT("NiagaraDataInterfaceEmitterBinding"), &Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceEmitterBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDataInterfaceEmitterBinding), 3553360873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceEmitterBinding_h_3177109380(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceEmitterBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceEmitterBinding_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceEmitterBinding_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceEmitterBinding_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
