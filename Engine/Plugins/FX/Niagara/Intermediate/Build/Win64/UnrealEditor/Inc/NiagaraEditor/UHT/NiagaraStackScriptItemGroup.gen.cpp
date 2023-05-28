// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackScriptItemGroup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackScriptItemGroup() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItemGroup();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackScriptItemGroup();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackScriptItemGroup_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraStackScriptItemGroup::StaticRegisterNativesUNiagaraStackScriptItemGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackScriptItemGroup);
	UClass* Z_Construct_UClass_UNiagaraStackScriptItemGroup_NoRegister()
	{
		return UNiagaraStackScriptItemGroup::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackScriptItemGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackScriptItemGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackItemGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackScriptItemGroup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackScriptItemGroup.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackScriptItemGroup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackScriptItemGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackScriptItemGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackScriptItemGroup_Statics::ClassParams = {
		&UNiagaraStackScriptItemGroup::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackScriptItemGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackScriptItemGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackScriptItemGroup()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackScriptItemGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackScriptItemGroup.OuterSingleton, Z_Construct_UClass_UNiagaraStackScriptItemGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackScriptItemGroup.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackScriptItemGroup>()
	{
		return UNiagaraStackScriptItemGroup::StaticClass();
	}
	UNiagaraStackScriptItemGroup::UNiagaraStackScriptItemGroup() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackScriptItemGroup);
	UNiagaraStackScriptItemGroup::~UNiagaraStackScriptItemGroup() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackScriptItemGroup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackScriptItemGroup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackScriptItemGroup, UNiagaraStackScriptItemGroup::StaticClass, TEXT("UNiagaraStackScriptItemGroup"), &Z_Registration_Info_UClass_UNiagaraStackScriptItemGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackScriptItemGroup), 3631438247U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackScriptItemGroup_h_3961203981(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackScriptItemGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackScriptItemGroup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
