// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackSelection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackSelection() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEntry();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSelection();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSelection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraStackSelection::StaticRegisterNativesUNiagaraStackSelection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackSelection);
	UClass* Z_Construct_UClass_UNiagaraStackSelection_NoRegister()
	{
		return UNiagaraStackSelection::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackSelection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackSelection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackSelection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackSelection.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackSelection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackSelection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackSelection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackSelection_Statics::ClassParams = {
		&UNiagaraStackSelection::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackSelection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackSelection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackSelection()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackSelection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackSelection.OuterSingleton, Z_Construct_UClass_UNiagaraStackSelection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackSelection.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackSelection>()
	{
		return UNiagaraStackSelection::StaticClass();
	}
	UNiagaraStackSelection::UNiagaraStackSelection() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackSelection);
	UNiagaraStackSelection::~UNiagaraStackSelection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSelection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSelection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackSelection, UNiagaraStackSelection::StaticClass, TEXT("UNiagaraStackSelection"), &Z_Registration_Info_UClass_UNiagaraStackSelection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackSelection), 2159449372U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSelection_h_1844891090(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSelection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSelection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
