// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackItem() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEntry();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItem();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItem_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItemContent();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItemContent_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItemFooter_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItemTextContent();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItemTextContent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraStackItem::StaticRegisterNativesUNiagaraStackItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackItem);
	UClass* Z_Construct_UClass_UNiagaraStackItem_NoRegister()
	{
		return UNiagaraStackItem::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemFooter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ItemFooter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackItem.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackItem_Statics::NewProp_ItemFooter_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackItem_Statics::NewProp_ItemFooter = { "ItemFooter", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackItem, ItemFooter), Z_Construct_UClass_UNiagaraStackItemFooter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackItem_Statics::NewProp_ItemFooter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackItem_Statics::NewProp_ItemFooter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStackItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackItem_Statics::NewProp_ItemFooter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackItem_Statics::ClassParams = {
		&UNiagaraStackItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraStackItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackItem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackItem()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackItem.OuterSingleton, Z_Construct_UClass_UNiagaraStackItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackItem.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackItem>()
	{
		return UNiagaraStackItem::StaticClass();
	}
	UNiagaraStackItem::UNiagaraStackItem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackItem);
	UNiagaraStackItem::~UNiagaraStackItem() {}
	void UNiagaraStackItemContent::StaticRegisterNativesUNiagaraStackItemContent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackItemContent);
	UClass* Z_Construct_UClass_UNiagaraStackItemContent_NoRegister()
	{
		return UNiagaraStackItemContent::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackItemContent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackItemContent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackItemContent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackItem.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackItemContent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackItemContent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackItemContent_Statics::ClassParams = {
		&UNiagaraStackItemContent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackItemContent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackItemContent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackItemContent()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackItemContent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackItemContent.OuterSingleton, Z_Construct_UClass_UNiagaraStackItemContent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackItemContent.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackItemContent>()
	{
		return UNiagaraStackItemContent::StaticClass();
	}
	UNiagaraStackItemContent::UNiagaraStackItemContent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackItemContent);
	UNiagaraStackItemContent::~UNiagaraStackItemContent() {}
	void UNiagaraStackItemTextContent::StaticRegisterNativesUNiagaraStackItemTextContent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackItemTextContent);
	UClass* Z_Construct_UClass_UNiagaraStackItemTextContent_NoRegister()
	{
		return UNiagaraStackItemTextContent::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackItemTextContent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackItemTextContent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackItemContent,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackItemTextContent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackItem.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackItemTextContent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackItemTextContent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackItemTextContent_Statics::ClassParams = {
		&UNiagaraStackItemTextContent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackItemTextContent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackItemTextContent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackItemTextContent()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackItemTextContent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackItemTextContent.OuterSingleton, Z_Construct_UClass_UNiagaraStackItemTextContent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackItemTextContent.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackItemTextContent>()
	{
		return UNiagaraStackItemTextContent::StaticClass();
	}
	UNiagaraStackItemTextContent::UNiagaraStackItemTextContent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackItemTextContent);
	UNiagaraStackItemTextContent::~UNiagaraStackItemTextContent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackItem, UNiagaraStackItem::StaticClass, TEXT("UNiagaraStackItem"), &Z_Registration_Info_UClass_UNiagaraStackItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackItem), 2940744394U) },
		{ Z_Construct_UClass_UNiagaraStackItemContent, UNiagaraStackItemContent::StaticClass, TEXT("UNiagaraStackItemContent"), &Z_Registration_Info_UClass_UNiagaraStackItemContent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackItemContent), 2764421390U) },
		{ Z_Construct_UClass_UNiagaraStackItemTextContent, UNiagaraStackItemTextContent::StaticClass, TEXT("UNiagaraStackItemTextContent"), &Z_Registration_Info_UClass_UNiagaraStackItemTextContent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackItemTextContent), 794034528U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackItem_h_1577995749(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
