// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackRendererItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackRendererItem() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItem();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackObject_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackRendererItem();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackRendererItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraStackRendererItem::StaticRegisterNativesUNiagaraStackRendererItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackRendererItem);
	UClass* Z_Construct_UClass_UNiagaraStackRendererItem_NoRegister()
	{
		return UNiagaraStackRendererItem::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackRendererItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RendererObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackRendererItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackItem,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackRendererItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackRendererItem.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackRendererItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackRendererItem_Statics::NewProp_RendererObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackRendererItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackRendererItem_Statics::NewProp_RendererObject = { "RendererObject", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackRendererItem, RendererObject), Z_Construct_UClass_UNiagaraStackObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackRendererItem_Statics::NewProp_RendererObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackRendererItem_Statics::NewProp_RendererObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStackRendererItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackRendererItem_Statics::NewProp_RendererObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackRendererItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackRendererItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackRendererItem_Statics::ClassParams = {
		&UNiagaraStackRendererItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraStackRendererItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackRendererItem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackRendererItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackRendererItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackRendererItem()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackRendererItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackRendererItem.OuterSingleton, Z_Construct_UClass_UNiagaraStackRendererItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackRendererItem.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackRendererItem>()
	{
		return UNiagaraStackRendererItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackRendererItem);
	UNiagaraStackRendererItem::~UNiagaraStackRendererItem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackRendererItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackRendererItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackRendererItem, UNiagaraStackRendererItem::StaticClass, TEXT("UNiagaraStackRendererItem"), &Z_Registration_Info_UClass_UNiagaraStackRendererItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackRendererItem), 2949227028U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackRendererItem_h_4062081810(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackRendererItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackRendererItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
