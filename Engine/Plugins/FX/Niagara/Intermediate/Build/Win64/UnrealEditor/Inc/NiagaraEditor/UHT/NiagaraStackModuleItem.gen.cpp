// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackModuleItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackModuleItem() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackFunctionInputCollection_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItem();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackModuleItem();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackModuleItem_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackModuleItemLinkedInputCollection_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackModuleItemOutputCollection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraStackModuleItem::StaticRegisterNativesUNiagaraStackModuleItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackModuleItem);
	UClass* Z_Construct_UClass_UNiagaraStackModuleItem_NoRegister()
	{
		return UNiagaraStackModuleItem::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackModuleItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedInputCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LinkedInputCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackModuleItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackItem,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackModuleItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackModuleItem.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackModuleItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackModuleItem_Statics::NewProp_LinkedInputCollection_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackModuleItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackModuleItem_Statics::NewProp_LinkedInputCollection = { "LinkedInputCollection", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackModuleItem, LinkedInputCollection), Z_Construct_UClass_UNiagaraStackModuleItemLinkedInputCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackModuleItem_Statics::NewProp_LinkedInputCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackModuleItem_Statics::NewProp_LinkedInputCollection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackModuleItem_Statics::NewProp_InputCollection_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackModuleItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackModuleItem_Statics::NewProp_InputCollection = { "InputCollection", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackModuleItem, InputCollection), Z_Construct_UClass_UNiagaraStackFunctionInputCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackModuleItem_Statics::NewProp_InputCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackModuleItem_Statics::NewProp_InputCollection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackModuleItem_Statics::NewProp_OutputCollection_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackModuleItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackModuleItem_Statics::NewProp_OutputCollection = { "OutputCollection", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackModuleItem, OutputCollection), Z_Construct_UClass_UNiagaraStackModuleItemOutputCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackModuleItem_Statics::NewProp_OutputCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackModuleItem_Statics::NewProp_OutputCollection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStackModuleItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackModuleItem_Statics::NewProp_LinkedInputCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackModuleItem_Statics::NewProp_InputCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackModuleItem_Statics::NewProp_OutputCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackModuleItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackModuleItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackModuleItem_Statics::ClassParams = {
		&UNiagaraStackModuleItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraStackModuleItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackModuleItem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackModuleItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackModuleItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackModuleItem()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackModuleItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackModuleItem.OuterSingleton, Z_Construct_UClass_UNiagaraStackModuleItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackModuleItem.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackModuleItem>()
	{
		return UNiagaraStackModuleItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackModuleItem);
	UNiagaraStackModuleItem::~UNiagaraStackModuleItem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackModuleItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackModuleItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackModuleItem, UNiagaraStackModuleItem::StaticClass, TEXT("UNiagaraStackModuleItem"), &Z_Registration_Info_UClass_UNiagaraStackModuleItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackModuleItem), 398284783U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackModuleItem_h_628618650(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackModuleItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackModuleItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
