// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackSimulationStageGroup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackSimulationStageGroup() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItem();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackObject_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackScriptItemGroup();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSimulationStageGroup();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSimulationStageGroup_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSimulationStagePropertiesItem();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSimulationStagePropertiesItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraStackSimulationStagePropertiesItem::StaticRegisterNativesUNiagaraStackSimulationStagePropertiesItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackSimulationStagePropertiesItem);
	UClass* Z_Construct_UClass_UNiagaraStackSimulationStagePropertiesItem_NoRegister()
	{
		return UNiagaraStackSimulationStagePropertiesItem::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackSimulationStagePropertiesItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationStageObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SimulationStageObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackSimulationStagePropertiesItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackItem,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackSimulationStagePropertiesItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackSimulationStageGroup.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackSimulationStageGroup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackSimulationStagePropertiesItem_Statics::NewProp_SimulationStageObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackSimulationStageGroup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackSimulationStagePropertiesItem_Statics::NewProp_SimulationStageObject = { "SimulationStageObject", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackSimulationStagePropertiesItem, SimulationStageObject), Z_Construct_UClass_UNiagaraStackObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackSimulationStagePropertiesItem_Statics::NewProp_SimulationStageObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackSimulationStagePropertiesItem_Statics::NewProp_SimulationStageObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStackSimulationStagePropertiesItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackSimulationStagePropertiesItem_Statics::NewProp_SimulationStageObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackSimulationStagePropertiesItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackSimulationStagePropertiesItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackSimulationStagePropertiesItem_Statics::ClassParams = {
		&UNiagaraStackSimulationStagePropertiesItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraStackSimulationStagePropertiesItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackSimulationStagePropertiesItem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackSimulationStagePropertiesItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackSimulationStagePropertiesItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackSimulationStagePropertiesItem()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackSimulationStagePropertiesItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackSimulationStagePropertiesItem.OuterSingleton, Z_Construct_UClass_UNiagaraStackSimulationStagePropertiesItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackSimulationStagePropertiesItem.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackSimulationStagePropertiesItem>()
	{
		return UNiagaraStackSimulationStagePropertiesItem::StaticClass();
	}
	UNiagaraStackSimulationStagePropertiesItem::UNiagaraStackSimulationStagePropertiesItem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackSimulationStagePropertiesItem);
	UNiagaraStackSimulationStagePropertiesItem::~UNiagaraStackSimulationStagePropertiesItem() {}
	void UNiagaraStackSimulationStageGroup::StaticRegisterNativesUNiagaraStackSimulationStageGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackSimulationStageGroup);
	UClass* Z_Construct_UClass_UNiagaraStackSimulationStageGroup_NoRegister()
	{
		return UNiagaraStackSimulationStageGroup::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackSimulationStageGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationStageProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SimulationStageProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackSimulationStageGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackScriptItemGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackSimulationStageGroup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackSimulationStageGroup.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackSimulationStageGroup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackSimulationStageGroup_Statics::NewProp_SimulationStageProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackSimulationStageGroup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackSimulationStageGroup_Statics::NewProp_SimulationStageProperties = { "SimulationStageProperties", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackSimulationStageGroup, SimulationStageProperties), Z_Construct_UClass_UNiagaraStackSimulationStagePropertiesItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackSimulationStageGroup_Statics::NewProp_SimulationStageProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackSimulationStageGroup_Statics::NewProp_SimulationStageProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStackSimulationStageGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackSimulationStageGroup_Statics::NewProp_SimulationStageProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackSimulationStageGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackSimulationStageGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackSimulationStageGroup_Statics::ClassParams = {
		&UNiagaraStackSimulationStageGroup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraStackSimulationStageGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackSimulationStageGroup_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackSimulationStageGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackSimulationStageGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackSimulationStageGroup()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackSimulationStageGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackSimulationStageGroup.OuterSingleton, Z_Construct_UClass_UNiagaraStackSimulationStageGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackSimulationStageGroup.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackSimulationStageGroup>()
	{
		return UNiagaraStackSimulationStageGroup::StaticClass();
	}
	UNiagaraStackSimulationStageGroup::UNiagaraStackSimulationStageGroup() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackSimulationStageGroup);
	UNiagaraStackSimulationStageGroup::~UNiagaraStackSimulationStageGroup() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSimulationStageGroup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSimulationStageGroup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackSimulationStagePropertiesItem, UNiagaraStackSimulationStagePropertiesItem::StaticClass, TEXT("UNiagaraStackSimulationStagePropertiesItem"), &Z_Registration_Info_UClass_UNiagaraStackSimulationStagePropertiesItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackSimulationStagePropertiesItem), 382228256U) },
		{ Z_Construct_UClass_UNiagaraStackSimulationStageGroup, UNiagaraStackSimulationStageGroup::StaticClass, TEXT("UNiagaraStackSimulationStageGroup"), &Z_Registration_Info_UClass_UNiagaraStackSimulationStageGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackSimulationStageGroup), 4243053762U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSimulationStageGroup_h_2413929016(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSimulationStageGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSimulationStageGroup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
