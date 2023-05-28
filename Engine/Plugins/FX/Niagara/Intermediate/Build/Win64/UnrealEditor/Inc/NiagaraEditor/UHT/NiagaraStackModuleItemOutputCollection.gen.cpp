// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackModuleItemOutputCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackModuleItemOutputCollection() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEntry();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackModuleItemOutputCollection();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackModuleItemOutputCollection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraStackModuleItemOutputCollection::StaticRegisterNativesUNiagaraStackModuleItemOutputCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackModuleItemOutputCollection);
	UClass* Z_Construct_UClass_UNiagaraStackModuleItemOutputCollection_NoRegister()
	{
		return UNiagaraStackModuleItemOutputCollection::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackModuleItemOutputCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackModuleItemOutputCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackModuleItemOutputCollection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackModuleItemOutputCollection.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackModuleItemOutputCollection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackModuleItemOutputCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackModuleItemOutputCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackModuleItemOutputCollection_Statics::ClassParams = {
		&UNiagaraStackModuleItemOutputCollection::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackModuleItemOutputCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackModuleItemOutputCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackModuleItemOutputCollection()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackModuleItemOutputCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackModuleItemOutputCollection.OuterSingleton, Z_Construct_UClass_UNiagaraStackModuleItemOutputCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackModuleItemOutputCollection.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackModuleItemOutputCollection>()
	{
		return UNiagaraStackModuleItemOutputCollection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackModuleItemOutputCollection);
	UNiagaraStackModuleItemOutputCollection::~UNiagaraStackModuleItemOutputCollection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackModuleItemOutputCollection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackModuleItemOutputCollection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackModuleItemOutputCollection, UNiagaraStackModuleItemOutputCollection::StaticClass, TEXT("UNiagaraStackModuleItemOutputCollection"), &Z_Registration_Info_UClass_UNiagaraStackModuleItemOutputCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackModuleItemOutputCollection), 3469243679U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackModuleItemOutputCollection_h_1298248522(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackModuleItemOutputCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackModuleItemOutputCollection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
