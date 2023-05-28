// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackItemFooter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackItemFooter() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEntry();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItemFooter();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItemFooter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraStackItemFooter::StaticRegisterNativesUNiagaraStackItemFooter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackItemFooter);
	UClass* Z_Construct_UClass_UNiagaraStackItemFooter_NoRegister()
	{
		return UNiagaraStackItemFooter::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackItemFooter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackItemFooter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackItemFooter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackItemFooter.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackItemFooter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackItemFooter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackItemFooter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackItemFooter_Statics::ClassParams = {
		&UNiagaraStackItemFooter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackItemFooter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackItemFooter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackItemFooter()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackItemFooter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackItemFooter.OuterSingleton, Z_Construct_UClass_UNiagaraStackItemFooter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackItemFooter.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackItemFooter>()
	{
		return UNiagaraStackItemFooter::StaticClass();
	}
	UNiagaraStackItemFooter::UNiagaraStackItemFooter() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackItemFooter);
	UNiagaraStackItemFooter::~UNiagaraStackItemFooter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackItemFooter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackItemFooter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackItemFooter, UNiagaraStackItemFooter::StaticClass, TEXT("UNiagaraStackItemFooter"), &Z_Registration_Info_UClass_UNiagaraStackItemFooter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackItemFooter), 471747317U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackItemFooter_h_2942878617(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackItemFooter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackItemFooter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
