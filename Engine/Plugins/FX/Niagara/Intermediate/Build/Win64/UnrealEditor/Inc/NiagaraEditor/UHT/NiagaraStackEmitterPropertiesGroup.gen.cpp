// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackEmitterPropertiesGroup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackEmitterPropertiesGroup() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEmitterPropertiesGroup();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEmitterPropertiesGroup_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEmitterPropertiesItem_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItemGroup();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraStackEmitterPropertiesGroup::StaticRegisterNativesUNiagaraStackEmitterPropertiesGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackEmitterPropertiesGroup);
	UClass* Z_Construct_UClass_UNiagaraStackEmitterPropertiesGroup_NoRegister()
	{
		return UNiagaraStackEmitterPropertiesGroup::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackEmitterPropertiesGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertiesItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertiesItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackEmitterPropertiesGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackItemGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEmitterPropertiesGroup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackEmitterPropertiesGroup.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackEmitterPropertiesGroup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEmitterPropertiesGroup_Statics::NewProp_PropertiesItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackEmitterPropertiesGroup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackEmitterPropertiesGroup_Statics::NewProp_PropertiesItem = { "PropertiesItem", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackEmitterPropertiesGroup, PropertiesItem), Z_Construct_UClass_UNiagaraStackEmitterPropertiesItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEmitterPropertiesGroup_Statics::NewProp_PropertiesItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEmitterPropertiesGroup_Statics::NewProp_PropertiesItem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStackEmitterPropertiesGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEmitterPropertiesGroup_Statics::NewProp_PropertiesItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackEmitterPropertiesGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackEmitterPropertiesGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackEmitterPropertiesGroup_Statics::ClassParams = {
		&UNiagaraStackEmitterPropertiesGroup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraStackEmitterPropertiesGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEmitterPropertiesGroup_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEmitterPropertiesGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEmitterPropertiesGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackEmitterPropertiesGroup()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackEmitterPropertiesGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackEmitterPropertiesGroup.OuterSingleton, Z_Construct_UClass_UNiagaraStackEmitterPropertiesGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackEmitterPropertiesGroup.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackEmitterPropertiesGroup>()
	{
		return UNiagaraStackEmitterPropertiesGroup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackEmitterPropertiesGroup);
	UNiagaraStackEmitterPropertiesGroup::~UNiagaraStackEmitterPropertiesGroup() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEmitterPropertiesGroup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEmitterPropertiesGroup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackEmitterPropertiesGroup, UNiagaraStackEmitterPropertiesGroup::StaticClass, TEXT("UNiagaraStackEmitterPropertiesGroup"), &Z_Registration_Info_UClass_UNiagaraStackEmitterPropertiesGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackEmitterPropertiesGroup), 2706877600U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEmitterPropertiesGroup_h_801659297(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEmitterPropertiesGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEmitterPropertiesGroup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
