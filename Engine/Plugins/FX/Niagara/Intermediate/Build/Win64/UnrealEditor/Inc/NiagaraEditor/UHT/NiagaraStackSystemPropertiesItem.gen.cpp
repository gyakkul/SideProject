// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackSystemPropertiesItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackSystemPropertiesItem() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItem();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackObject_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSystemPropertiesItem();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSystemPropertiesItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraStackSystemPropertiesItem::StaticRegisterNativesUNiagaraStackSystemPropertiesItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackSystemPropertiesItem);
	UClass* Z_Construct_UClass_UNiagaraStackSystemPropertiesItem_NoRegister()
	{
		return UNiagaraStackSystemPropertiesItem::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackSystemPropertiesItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SystemObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackSystemPropertiesItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackItem,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackSystemPropertiesItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackSystemPropertiesItem.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackSystemPropertiesItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackSystemPropertiesItem_Statics::NewProp_SystemObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackSystemPropertiesItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackSystemPropertiesItem_Statics::NewProp_SystemObject = { "SystemObject", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackSystemPropertiesItem, SystemObject), Z_Construct_UClass_UNiagaraStackObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackSystemPropertiesItem_Statics::NewProp_SystemObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackSystemPropertiesItem_Statics::NewProp_SystemObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStackSystemPropertiesItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackSystemPropertiesItem_Statics::NewProp_SystemObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackSystemPropertiesItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackSystemPropertiesItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackSystemPropertiesItem_Statics::ClassParams = {
		&UNiagaraStackSystemPropertiesItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraStackSystemPropertiesItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackSystemPropertiesItem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackSystemPropertiesItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackSystemPropertiesItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackSystemPropertiesItem()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackSystemPropertiesItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackSystemPropertiesItem.OuterSingleton, Z_Construct_UClass_UNiagaraStackSystemPropertiesItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackSystemPropertiesItem.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackSystemPropertiesItem>()
	{
		return UNiagaraStackSystemPropertiesItem::StaticClass();
	}
	UNiagaraStackSystemPropertiesItem::UNiagaraStackSystemPropertiesItem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackSystemPropertiesItem);
	UNiagaraStackSystemPropertiesItem::~UNiagaraStackSystemPropertiesItem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSystemPropertiesItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSystemPropertiesItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackSystemPropertiesItem, UNiagaraStackSystemPropertiesItem::StaticClass, TEXT("UNiagaraStackSystemPropertiesItem"), &Z_Registration_Info_UClass_UNiagaraStackSystemPropertiesItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackSystemPropertiesItem), 1897304995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSystemPropertiesItem_h_1653353308(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSystemPropertiesItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSystemPropertiesItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
