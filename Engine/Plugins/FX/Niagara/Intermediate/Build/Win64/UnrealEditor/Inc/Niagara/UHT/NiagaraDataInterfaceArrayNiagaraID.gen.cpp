// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceArrayNiagaraID.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceArrayNiagaraID() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArray();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraID();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceArrayNiagaraID::StaticRegisterNativesUNiagaraDataInterfaceArrayNiagaraID()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceArrayNiagaraID);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_NoRegister()
	{
		return UNiagaraDataInterfaceArrayNiagaraID::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceArray,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Array" },
		{ "DisplayName", "NiagaraID Array" },
		{ "Experimental", "" },
		{ "IncludePath", "NiagaraDataInterfaceArrayNiagaraID.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayNiagaraID.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::NewProp_IntData_Inner = { "IntData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraID, METADATA_PARAMS(nullptr, 0) }; // 3662558792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::NewProp_IntData_MetaData[] = {
		{ "Category", "Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayNiagaraID.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::NewProp_IntData = { "IntData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceArrayNiagaraID, IntData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::NewProp_IntData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::NewProp_IntData_MetaData)) }; // 3662558792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::NewProp_IntData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::NewProp_IntData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceArrayNiagaraID>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::ClassParams = {
		&UNiagaraDataInterfaceArrayNiagaraID::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayNiagaraID.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayNiagaraID.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayNiagaraID.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceArrayNiagaraID>()
	{
		return UNiagaraDataInterfaceArrayNiagaraID::StaticClass();
	}
	UNiagaraDataInterfaceArrayNiagaraID::UNiagaraDataInterfaceArrayNiagaraID() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceArrayNiagaraID);
	UNiagaraDataInterfaceArrayNiagaraID::~UNiagaraDataInterfaceArrayNiagaraID() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayNiagaraID_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayNiagaraID_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID, UNiagaraDataInterfaceArrayNiagaraID::StaticClass, TEXT("UNiagaraDataInterfaceArrayNiagaraID"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayNiagaraID, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceArrayNiagaraID), 3186631477U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayNiagaraID_h_685944444(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayNiagaraID_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayNiagaraID_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
