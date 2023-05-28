// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackModuleItemOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackModuleItemOutput() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEntry();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackModuleItemOutput();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackModuleItemOutput_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraStackModuleItemOutput::StaticRegisterNativesUNiagaraStackModuleItemOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackModuleItemOutput);
	UClass* Z_Construct_UClass_UNiagaraStackModuleItemOutput_NoRegister()
	{
		return UNiagaraStackModuleItemOutput::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackModuleItemOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackModuleItemOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackModuleItemOutput_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Represents a single module Output in the module stack view model. */" },
		{ "IncludePath", "ViewModels/Stack/NiagaraStackModuleItemOutput.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackModuleItemOutput.h" },
		{ "ToolTip", "Represents a single module Output in the module stack view model." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackModuleItemOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackModuleItemOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackModuleItemOutput_Statics::ClassParams = {
		&UNiagaraStackModuleItemOutput::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackModuleItemOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackModuleItemOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackModuleItemOutput()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackModuleItemOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackModuleItemOutput.OuterSingleton, Z_Construct_UClass_UNiagaraStackModuleItemOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackModuleItemOutput.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackModuleItemOutput>()
	{
		return UNiagaraStackModuleItemOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackModuleItemOutput);
	UNiagaraStackModuleItemOutput::~UNiagaraStackModuleItemOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackModuleItemOutput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackModuleItemOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackModuleItemOutput, UNiagaraStackModuleItemOutput::StaticClass, TEXT("UNiagaraStackModuleItemOutput"), &Z_Registration_Info_UClass_UNiagaraStackModuleItemOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackModuleItemOutput), 4203237592U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackModuleItemOutput_h_2557359718(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackModuleItemOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackModuleItemOutput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
