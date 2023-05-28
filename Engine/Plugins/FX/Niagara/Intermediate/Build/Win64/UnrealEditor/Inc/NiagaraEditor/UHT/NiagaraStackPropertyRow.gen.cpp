// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackPropertyRow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackPropertyRow() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItemContent();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackPropertyRow();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackPropertyRow_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSpacer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraStackPropertyRow::StaticRegisterNativesUNiagaraStackPropertyRow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackPropertyRow);
	UClass* Z_Construct_UClass_UNiagaraStackPropertyRow_NoRegister()
	{
		return UNiagaraStackPropertyRow::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackPropertyRow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategorySpacer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CategorySpacer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackPropertyRow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackItemContent,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackPropertyRow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackPropertyRow.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackPropertyRow.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackPropertyRow_Statics::NewProp_CategorySpacer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackPropertyRow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackPropertyRow_Statics::NewProp_CategorySpacer = { "CategorySpacer", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackPropertyRow, CategorySpacer), Z_Construct_UClass_UNiagaraStackSpacer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackPropertyRow_Statics::NewProp_CategorySpacer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackPropertyRow_Statics::NewProp_CategorySpacer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStackPropertyRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackPropertyRow_Statics::NewProp_CategorySpacer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackPropertyRow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackPropertyRow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackPropertyRow_Statics::ClassParams = {
		&UNiagaraStackPropertyRow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraStackPropertyRow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackPropertyRow_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackPropertyRow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackPropertyRow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackPropertyRow()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackPropertyRow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackPropertyRow.OuterSingleton, Z_Construct_UClass_UNiagaraStackPropertyRow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackPropertyRow.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackPropertyRow>()
	{
		return UNiagaraStackPropertyRow::StaticClass();
	}
	UNiagaraStackPropertyRow::UNiagaraStackPropertyRow() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackPropertyRow);
	UNiagaraStackPropertyRow::~UNiagaraStackPropertyRow() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackPropertyRow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackPropertyRow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackPropertyRow, UNiagaraStackPropertyRow::StaticClass, TEXT("UNiagaraStackPropertyRow"), &Z_Registration_Info_UClass_UNiagaraStackPropertyRow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackPropertyRow), 1706930369U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackPropertyRow_h_1651722880(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackPropertyRow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackPropertyRow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
