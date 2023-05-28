// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackEmitterSettingsGroup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackEmitterSettingsGroup() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEmitterPropertiesItem();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEmitterPropertiesItem_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEmitterSummaryGroup();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEmitterSummaryGroup_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEmitterSummaryItem();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEntry();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItem();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItemGroup();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackObject_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSummaryViewCollapseButton();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSummaryViewCollapseButton_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSummaryViewObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraStackEmitterPropertiesItem::StaticRegisterNativesUNiagaraStackEmitterPropertiesItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackEmitterPropertiesItem);
	UClass* Z_Construct_UClass_UNiagaraStackEmitterPropertiesItem_NoRegister()
	{
		return UNiagaraStackEmitterPropertiesItem::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackEmitterPropertiesItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmitterObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackEmitterPropertiesItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackItem,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEmitterPropertiesItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackEmitterSettingsGroup.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackEmitterSettingsGroup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEmitterPropertiesItem_Statics::NewProp_EmitterObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackEmitterSettingsGroup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackEmitterPropertiesItem_Statics::NewProp_EmitterObject = { "EmitterObject", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackEmitterPropertiesItem, EmitterObject), Z_Construct_UClass_UNiagaraStackObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEmitterPropertiesItem_Statics::NewProp_EmitterObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEmitterPropertiesItem_Statics::NewProp_EmitterObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStackEmitterPropertiesItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEmitterPropertiesItem_Statics::NewProp_EmitterObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackEmitterPropertiesItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackEmitterPropertiesItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackEmitterPropertiesItem_Statics::ClassParams = {
		&UNiagaraStackEmitterPropertiesItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraStackEmitterPropertiesItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEmitterPropertiesItem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEmitterPropertiesItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEmitterPropertiesItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackEmitterPropertiesItem()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackEmitterPropertiesItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackEmitterPropertiesItem.OuterSingleton, Z_Construct_UClass_UNiagaraStackEmitterPropertiesItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackEmitterPropertiesItem.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackEmitterPropertiesItem>()
	{
		return UNiagaraStackEmitterPropertiesItem::StaticClass();
	}
	UNiagaraStackEmitterPropertiesItem::UNiagaraStackEmitterPropertiesItem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackEmitterPropertiesItem);
	UNiagaraStackEmitterPropertiesItem::~UNiagaraStackEmitterPropertiesItem() {}
	void UNiagaraStackEmitterSummaryItem::StaticRegisterNativesUNiagaraStackEmitterSummaryItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackEmitterSummaryItem);
	UClass* Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_NoRegister()
	{
		return UNiagaraStackEmitterSummaryItem::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilteredObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FilteredObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SummaryEditorData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SummaryEditorData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackItem,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackEmitterSettingsGroup.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackEmitterSettingsGroup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_Statics::NewProp_FilteredObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackEmitterSettingsGroup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_Statics::NewProp_FilteredObject = { "FilteredObject", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackEmitterSummaryItem, FilteredObject), Z_Construct_UClass_UNiagaraStackSummaryViewObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_Statics::NewProp_FilteredObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_Statics::NewProp_FilteredObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_Statics::NewProp_SummaryEditorData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackEmitterSettingsGroup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_Statics::NewProp_SummaryEditorData = { "SummaryEditorData", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackEmitterSummaryItem, SummaryEditorData), Z_Construct_UClass_UNiagaraStackObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_Statics::NewProp_SummaryEditorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_Statics::NewProp_SummaryEditorData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_Statics::NewProp_FilteredObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_Statics::NewProp_SummaryEditorData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackEmitterSummaryItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_Statics::ClassParams = {
		&UNiagaraStackEmitterSummaryItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackEmitterSummaryItem()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackEmitterSummaryItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackEmitterSummaryItem.OuterSingleton, Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackEmitterSummaryItem.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackEmitterSummaryItem>()
	{
		return UNiagaraStackEmitterSummaryItem::StaticClass();
	}
	UNiagaraStackEmitterSummaryItem::UNiagaraStackEmitterSummaryItem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackEmitterSummaryItem);
	UNiagaraStackEmitterSummaryItem::~UNiagaraStackEmitterSummaryItem() {}
	void UNiagaraStackEmitterSummaryGroup::StaticRegisterNativesUNiagaraStackEmitterSummaryGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackEmitterSummaryGroup);
	UClass* Z_Construct_UClass_UNiagaraStackEmitterSummaryGroup_NoRegister()
	{
		return UNiagaraStackEmitterSummaryGroup::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackEmitterSummaryGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SummaryItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SummaryItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackEmitterSummaryGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackItemGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEmitterSummaryGroup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackEmitterSettingsGroup.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackEmitterSettingsGroup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEmitterSummaryGroup_Statics::NewProp_SummaryItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackEmitterSettingsGroup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackEmitterSummaryGroup_Statics::NewProp_SummaryItem = { "SummaryItem", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackEmitterSummaryGroup, SummaryItem), Z_Construct_UClass_UNiagaraStackEmitterSummaryItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEmitterSummaryGroup_Statics::NewProp_SummaryItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEmitterSummaryGroup_Statics::NewProp_SummaryItem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStackEmitterSummaryGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEmitterSummaryGroup_Statics::NewProp_SummaryItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackEmitterSummaryGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackEmitterSummaryGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackEmitterSummaryGroup_Statics::ClassParams = {
		&UNiagaraStackEmitterSummaryGroup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraStackEmitterSummaryGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEmitterSummaryGroup_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEmitterSummaryGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEmitterSummaryGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackEmitterSummaryGroup()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackEmitterSummaryGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackEmitterSummaryGroup.OuterSingleton, Z_Construct_UClass_UNiagaraStackEmitterSummaryGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackEmitterSummaryGroup.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackEmitterSummaryGroup>()
	{
		return UNiagaraStackEmitterSummaryGroup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackEmitterSummaryGroup);
	UNiagaraStackEmitterSummaryGroup::~UNiagaraStackEmitterSummaryGroup() {}
	void UNiagaraStackSummaryViewCollapseButton::StaticRegisterNativesUNiagaraStackSummaryViewCollapseButton()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackSummaryViewCollapseButton);
	UClass* Z_Construct_UClass_UNiagaraStackSummaryViewCollapseButton_NoRegister()
	{
		return UNiagaraStackSummaryViewCollapseButton::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackSummaryViewCollapseButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackSummaryViewCollapseButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackSummaryViewCollapseButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackEmitterSettingsGroup.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackEmitterSettingsGroup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackSummaryViewCollapseButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackSummaryViewCollapseButton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackSummaryViewCollapseButton_Statics::ClassParams = {
		&UNiagaraStackSummaryViewCollapseButton::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackSummaryViewCollapseButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackSummaryViewCollapseButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackSummaryViewCollapseButton()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackSummaryViewCollapseButton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackSummaryViewCollapseButton.OuterSingleton, Z_Construct_UClass_UNiagaraStackSummaryViewCollapseButton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackSummaryViewCollapseButton.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackSummaryViewCollapseButton>()
	{
		return UNiagaraStackSummaryViewCollapseButton::StaticClass();
	}
	UNiagaraStackSummaryViewCollapseButton::UNiagaraStackSummaryViewCollapseButton() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackSummaryViewCollapseButton);
	UNiagaraStackSummaryViewCollapseButton::~UNiagaraStackSummaryViewCollapseButton() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEmitterSettingsGroup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEmitterSettingsGroup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackEmitterPropertiesItem, UNiagaraStackEmitterPropertiesItem::StaticClass, TEXT("UNiagaraStackEmitterPropertiesItem"), &Z_Registration_Info_UClass_UNiagaraStackEmitterPropertiesItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackEmitterPropertiesItem), 2378071597U) },
		{ Z_Construct_UClass_UNiagaraStackEmitterSummaryItem, UNiagaraStackEmitterSummaryItem::StaticClass, TEXT("UNiagaraStackEmitterSummaryItem"), &Z_Registration_Info_UClass_UNiagaraStackEmitterSummaryItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackEmitterSummaryItem), 2752807874U) },
		{ Z_Construct_UClass_UNiagaraStackEmitterSummaryGroup, UNiagaraStackEmitterSummaryGroup::StaticClass, TEXT("UNiagaraStackEmitterSummaryGroup"), &Z_Registration_Info_UClass_UNiagaraStackEmitterSummaryGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackEmitterSummaryGroup), 4078951768U) },
		{ Z_Construct_UClass_UNiagaraStackSummaryViewCollapseButton, UNiagaraStackSummaryViewCollapseButton::StaticClass, TEXT("UNiagaraStackSummaryViewCollapseButton"), &Z_Registration_Info_UClass_UNiagaraStackSummaryViewCollapseButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackSummaryViewCollapseButton), 4126281542U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEmitterSettingsGroup_h_2878511287(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEmitterSettingsGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEmitterSettingsGroup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
