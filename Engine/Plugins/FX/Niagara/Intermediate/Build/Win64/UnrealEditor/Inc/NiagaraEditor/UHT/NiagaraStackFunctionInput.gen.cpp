// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackFunctionInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackFunctionInput() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackFunctionInput();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackFunctionInput_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItemContent();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraStackFunctionInput::StaticRegisterNativesUNiagaraStackFunctionInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackFunctionInput);
	UClass* Z_Construct_UClass_UNiagaraStackFunctionInput_NoRegister()
	{
		return UNiagaraStackFunctionInput::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackFunctionInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackFunctionInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackItemContent,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackFunctionInput_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Represents a single module input in the module stack view model. */" },
		{ "IncludePath", "ViewModels/Stack/NiagaraStackFunctionInput.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackFunctionInput.h" },
		{ "ToolTip", "Represents a single module input in the module stack view model." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackFunctionInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackFunctionInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackFunctionInput_Statics::ClassParams = {
		&UNiagaraStackFunctionInput::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackFunctionInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackFunctionInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackFunctionInput()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackFunctionInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackFunctionInput.OuterSingleton, Z_Construct_UClass_UNiagaraStackFunctionInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackFunctionInput.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackFunctionInput>()
	{
		return UNiagaraStackFunctionInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackFunctionInput);
	UNiagaraStackFunctionInput::~UNiagaraStackFunctionInput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackFunctionInput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackFunctionInput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackFunctionInput, UNiagaraStackFunctionInput::StaticClass, TEXT("UNiagaraStackFunctionInput"), &Z_Registration_Info_UClass_UNiagaraStackFunctionInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackFunctionInput), 358964611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackFunctionInput_h_1328978136(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackFunctionInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackFunctionInput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
