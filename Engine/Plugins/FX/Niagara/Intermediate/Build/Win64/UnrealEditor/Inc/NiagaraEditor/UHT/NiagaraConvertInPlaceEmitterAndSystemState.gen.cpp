// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NiagaraConvertInPlaceEmitterAndSystemState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraConvertInPlaceEmitterAndSystemState() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraConvertInPlaceEmitterAndSystemState();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraConvertInPlaceEmitterAndSystemState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraConvertInPlaceEmitterAndSystemState::StaticRegisterNativesUNiagaraConvertInPlaceEmitterAndSystemState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraConvertInPlaceEmitterAndSystemState);
	UClass* Z_Construct_UClass_UNiagaraConvertInPlaceEmitterAndSystemState_NoRegister()
	{
		return UNiagaraConvertInPlaceEmitterAndSystemState::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraConvertInPlaceEmitterAndSystemState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraConvertInPlaceEmitterAndSystemState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraConvertInPlaceEmitterAndSystemState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraConvertInPlaceEmitterAndSystemState.h" },
		{ "ModuleRelativePath", "Private/NiagaraConvertInPlaceEmitterAndSystemState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraConvertInPlaceEmitterAndSystemState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraConvertInPlaceEmitterAndSystemState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraConvertInPlaceEmitterAndSystemState_Statics::ClassParams = {
		&UNiagaraConvertInPlaceEmitterAndSystemState::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraConvertInPlaceEmitterAndSystemState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraConvertInPlaceEmitterAndSystemState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraConvertInPlaceEmitterAndSystemState()
	{
		if (!Z_Registration_Info_UClass_UNiagaraConvertInPlaceEmitterAndSystemState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraConvertInPlaceEmitterAndSystemState.OuterSingleton, Z_Construct_UClass_UNiagaraConvertInPlaceEmitterAndSystemState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraConvertInPlaceEmitterAndSystemState.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraConvertInPlaceEmitterAndSystemState>()
	{
		return UNiagaraConvertInPlaceEmitterAndSystemState::StaticClass();
	}
	UNiagaraConvertInPlaceEmitterAndSystemState::UNiagaraConvertInPlaceEmitterAndSystemState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraConvertInPlaceEmitterAndSystemState);
	UNiagaraConvertInPlaceEmitterAndSystemState::~UNiagaraConvertInPlaceEmitterAndSystemState() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraConvertInPlaceEmitterAndSystemState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraConvertInPlaceEmitterAndSystemState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraConvertInPlaceEmitterAndSystemState, UNiagaraConvertInPlaceEmitterAndSystemState::StaticClass, TEXT("UNiagaraConvertInPlaceEmitterAndSystemState"), &Z_Registration_Info_UClass_UNiagaraConvertInPlaceEmitterAndSystemState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraConvertInPlaceEmitterAndSystemState), 3497311399U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraConvertInPlaceEmitterAndSystemState_h_4158125980(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraConvertInPlaceEmitterAndSystemState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraConvertInPlaceEmitterAndSystemState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
