// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraCore() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NIAGARACORE_API UEnum* Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource();
	NIAGARACORE_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableCommonReference();
	UPackage* Z_Construct_UPackage__Script_NiagaraCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraIterationSource;
	static UEnum* ENiagaraIterationSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraIterationSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraIterationSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource, (UObject*)Z_Construct_UPackage__Script_NiagaraCore(), TEXT("ENiagaraIterationSource"));
		}
		return Z_Registration_Info_UEnum_ENiagaraIterationSource.OuterSingleton;
	}
	template<> NIAGARACORE_API UEnum* StaticEnum<ENiagaraIterationSource>()
	{
		return ENiagaraIterationSource_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource_Statics::Enumerators[] = {
		{ "ENiagaraIterationSource::Particles", (int64)ENiagaraIterationSource::Particles },
		{ "ENiagaraIterationSource::DataInterface", (int64)ENiagaraIterationSource::DataInterface },
		{ "ENiagaraIterationSource::DirectSet", (int64)ENiagaraIterationSource::DirectSet },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource_Statics::Enum_MetaDataParams[] = {
		{ "DataInterface.Comment", "/** Iterate over all elements in the data interface. */" },
		{ "DataInterface.Name", "ENiagaraIterationSource::DataInterface" },
		{ "DataInterface.ToolTip", "Iterate over all elements in the data interface." },
		{ "DirectSet.Comment", "/** Iterate over a user provided number of elements. */" },
		{ "DirectSet.Name", "ENiagaraIterationSource::DirectSet" },
		{ "DirectSet.ToolTip", "Iterate over a user provided number of elements." },
		{ "ModuleRelativePath", "Public/NiagaraCore.h" },
		{ "Particles.Comment", "/** Iterate over all active particles. */" },
		{ "Particles.Name", "ENiagaraIterationSource::Particles" },
		{ "Particles.ToolTip", "Iterate over all active particles." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraCore,
		nullptr,
		"ENiagaraIterationSource",
		"ENiagaraIterationSource",
		Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraIterationSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraIterationSource.InnerSingleton, Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraIterationSource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraVariableCommonReference;
class UScriptStruct* FNiagaraVariableCommonReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVariableCommonReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraVariableCommonReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableCommonReference, (UObject*)Z_Construct_UPackage__Script_NiagaraCore(), TEXT("NiagaraVariableCommonReference"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVariableCommonReference.OuterSingleton;
}
template<> NIAGARACORE_API UScriptStruct* StaticStruct<FNiagaraVariableCommonReference>()
{
	return FNiagaraVariableCommonReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnderlyingType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnderlyingType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A utility class allowing for references to FNiagaraVariableBase outside of the Niagara module. */" },
		{ "ModuleRelativePath", "Public/NiagaraCore.h" },
		{ "ToolTip", "A utility class allowing for references to FNiagaraVariableBase outside of the Niagara module." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableCommonReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCore.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableCommonReference, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::NewProp_UnderlyingType_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCore.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::NewProp_UnderlyingType = { "UnderlyingType", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableCommonReference, UnderlyingType), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::NewProp_UnderlyingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::NewProp_UnderlyingType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::NewProp_UnderlyingType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraCore,
		nullptr,
		&NewStructOps,
		"NiagaraVariableCommonReference",
		sizeof(FNiagaraVariableCommonReference),
		alignof(FNiagaraVariableCommonReference),
		Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableCommonReference()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraVariableCommonReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraVariableCommonReference.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraVariableCommonReference.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCore_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCore_h_Statics::EnumInfo[] = {
		{ ENiagaraIterationSource_StaticEnum, TEXT("ENiagaraIterationSource"), &Z_Registration_Info_UEnum_ENiagaraIterationSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 229667017U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCore_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraVariableCommonReference::StaticStruct, Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::NewStructOps, TEXT("NiagaraVariableCommonReference"), &Z_Registration_Info_UScriptStruct_NiagaraVariableCommonReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraVariableCommonReference), 2674908012U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCore_h_2204187493(TEXT("/Script/NiagaraCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCore_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCore_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCore_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCore_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
