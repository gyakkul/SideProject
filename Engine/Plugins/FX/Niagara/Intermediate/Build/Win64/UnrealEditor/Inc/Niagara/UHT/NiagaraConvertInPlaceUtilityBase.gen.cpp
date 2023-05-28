// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraConvertInPlaceUtilityBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraConvertInPlaceUtilityBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraConvertInPlaceUtilityBase::StaticRegisterNativesUNiagaraConvertInPlaceUtilityBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraConvertInPlaceUtilityBase);
	UClass* Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_NoRegister()
	{
		return UNiagaraConvertInPlaceUtilityBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraConvertInPlaceUtilityBase.h" },
		{ "ModuleRelativePath", "Public/NiagaraConvertInPlaceUtilityBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraConvertInPlaceUtilityBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics::ClassParams = {
		&UNiagaraConvertInPlaceUtilityBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase()
	{
		if (!Z_Registration_Info_UClass_UNiagaraConvertInPlaceUtilityBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraConvertInPlaceUtilityBase.OuterSingleton, Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraConvertInPlaceUtilityBase.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraConvertInPlaceUtilityBase>()
	{
		return UNiagaraConvertInPlaceUtilityBase::StaticClass();
	}
	UNiagaraConvertInPlaceUtilityBase::UNiagaraConvertInPlaceUtilityBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraConvertInPlaceUtilityBase);
	UNiagaraConvertInPlaceUtilityBase::~UNiagaraConvertInPlaceUtilityBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraConvertInPlaceUtilityBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraConvertInPlaceUtilityBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase, UNiagaraConvertInPlaceUtilityBase::StaticClass, TEXT("UNiagaraConvertInPlaceUtilityBase"), &Z_Registration_Info_UClass_UNiagaraConvertInPlaceUtilityBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraConvertInPlaceUtilityBase), 1332901715U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraConvertInPlaceUtilityBase_h_363325757(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraConvertInPlaceUtilityBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraConvertInPlaceUtilityBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
