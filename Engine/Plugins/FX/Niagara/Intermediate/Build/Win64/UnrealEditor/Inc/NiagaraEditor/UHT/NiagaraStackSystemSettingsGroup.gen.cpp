// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackSystemSettingsGroup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackSystemSettingsGroup() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItem();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItemGroup();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackParameterStoreItem();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackParameterStoreItem_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSystemPropertiesGroup();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSystemPropertiesGroup_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSystemUserParametersGroup();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSystemUserParametersGroup_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraStackSystemPropertiesGroup::StaticRegisterNativesUNiagaraStackSystemPropertiesGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackSystemPropertiesGroup);
	UClass* Z_Construct_UClass_UNiagaraStackSystemPropertiesGroup_NoRegister()
	{
		return UNiagaraStackSystemPropertiesGroup::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackSystemPropertiesGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackSystemPropertiesGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackItemGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackSystemPropertiesGroup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackSystemSettingsGroup.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackSystemSettingsGroup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackSystemPropertiesGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackSystemPropertiesGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackSystemPropertiesGroup_Statics::ClassParams = {
		&UNiagaraStackSystemPropertiesGroup::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackSystemPropertiesGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackSystemPropertiesGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackSystemPropertiesGroup()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackSystemPropertiesGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackSystemPropertiesGroup.OuterSingleton, Z_Construct_UClass_UNiagaraStackSystemPropertiesGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackSystemPropertiesGroup.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackSystemPropertiesGroup>()
	{
		return UNiagaraStackSystemPropertiesGroup::StaticClass();
	}
	UNiagaraStackSystemPropertiesGroup::UNiagaraStackSystemPropertiesGroup() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackSystemPropertiesGroup);
	UNiagaraStackSystemPropertiesGroup::~UNiagaraStackSystemPropertiesGroup() {}
	void UNiagaraStackSystemUserParametersGroup::StaticRegisterNativesUNiagaraStackSystemUserParametersGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackSystemUserParametersGroup);
	UClass* Z_Construct_UClass_UNiagaraStackSystemUserParametersGroup_NoRegister()
	{
		return UNiagaraStackSystemUserParametersGroup::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackSystemUserParametersGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackSystemUserParametersGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackItemGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackSystemUserParametersGroup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackSystemSettingsGroup.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackSystemSettingsGroup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackSystemUserParametersGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackSystemUserParametersGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackSystemUserParametersGroup_Statics::ClassParams = {
		&UNiagaraStackSystemUserParametersGroup::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackSystemUserParametersGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackSystemUserParametersGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackSystemUserParametersGroup()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackSystemUserParametersGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackSystemUserParametersGroup.OuterSingleton, Z_Construct_UClass_UNiagaraStackSystemUserParametersGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackSystemUserParametersGroup.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackSystemUserParametersGroup>()
	{
		return UNiagaraStackSystemUserParametersGroup::StaticClass();
	}
	UNiagaraStackSystemUserParametersGroup::UNiagaraStackSystemUserParametersGroup() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackSystemUserParametersGroup);
	UNiagaraStackSystemUserParametersGroup::~UNiagaraStackSystemUserParametersGroup() {}
	void UNiagaraStackParameterStoreItem::StaticRegisterNativesUNiagaraStackParameterStoreItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackParameterStoreItem);
	UClass* Z_Construct_UClass_UNiagaraStackParameterStoreItem_NoRegister()
	{
		return UNiagaraStackParameterStoreItem::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackParameterStoreItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackParameterStoreItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackItem,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackParameterStoreItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackSystemSettingsGroup.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackSystemSettingsGroup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackParameterStoreItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackParameterStoreItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackParameterStoreItem_Statics::ClassParams = {
		&UNiagaraStackParameterStoreItem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackParameterStoreItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackParameterStoreItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackParameterStoreItem()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackParameterStoreItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackParameterStoreItem.OuterSingleton, Z_Construct_UClass_UNiagaraStackParameterStoreItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackParameterStoreItem.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackParameterStoreItem>()
	{
		return UNiagaraStackParameterStoreItem::StaticClass();
	}
	UNiagaraStackParameterStoreItem::UNiagaraStackParameterStoreItem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackParameterStoreItem);
	UNiagaraStackParameterStoreItem::~UNiagaraStackParameterStoreItem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSystemSettingsGroup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSystemSettingsGroup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackSystemPropertiesGroup, UNiagaraStackSystemPropertiesGroup::StaticClass, TEXT("UNiagaraStackSystemPropertiesGroup"), &Z_Registration_Info_UClass_UNiagaraStackSystemPropertiesGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackSystemPropertiesGroup), 2033078486U) },
		{ Z_Construct_UClass_UNiagaraStackSystemUserParametersGroup, UNiagaraStackSystemUserParametersGroup::StaticClass, TEXT("UNiagaraStackSystemUserParametersGroup"), &Z_Registration_Info_UClass_UNiagaraStackSystemUserParametersGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackSystemUserParametersGroup), 2160298732U) },
		{ Z_Construct_UClass_UNiagaraStackParameterStoreItem, UNiagaraStackParameterStoreItem::StaticClass, TEXT("UNiagaraStackParameterStoreItem"), &Z_Registration_Info_UClass_UNiagaraStackParameterStoreItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackParameterStoreItem), 1369408970U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSystemSettingsGroup_h_3739420672(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSystemSettingsGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSystemSettingsGroup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
