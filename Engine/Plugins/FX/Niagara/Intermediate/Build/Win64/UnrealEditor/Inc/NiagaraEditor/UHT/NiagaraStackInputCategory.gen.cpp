// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackInputCategory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackInputCategory() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackInputCategory();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackInputCategory_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItemContent();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSpacer_NoRegister();
	NIAGARAEDITOR_API UEnum* Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStackParameterBehavior;
	static UEnum* EStackParameterBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStackParameterBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStackParameterBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("EStackParameterBehavior"));
		}
		return Z_Registration_Info_UEnum_EStackParameterBehavior.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UEnum* StaticEnum<EStackParameterBehavior>()
	{
		return EStackParameterBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior_Statics::Enumerators[] = {
		{ "EStackParameterBehavior::Dynamic", (int64)EStackParameterBehavior::Dynamic },
		{ "EStackParameterBehavior::Static", (int64)EStackParameterBehavior::Static },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior_Statics::Enum_MetaDataParams[] = {
		{ "Dynamic.Name", "EStackParameterBehavior::Dynamic" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackInputCategory.h" },
		{ "Static.Name", "EStackParameterBehavior::Static" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		"EStackParameterBehavior",
		"EStackParameterBehavior",
		Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior()
	{
		if (!Z_Registration_Info_UEnum_EStackParameterBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStackParameterBehavior.InnerSingleton, Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStackParameterBehavior.InnerSingleton;
	}
	void UNiagaraStackInputCategory::StaticRegisterNativesUNiagaraStackInputCategory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackInputCategory);
	UClass* Z_Construct_UClass_UNiagaraStackInputCategory_NoRegister()
	{
		return UNiagaraStackInputCategory::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackInputCategory_Statics
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
	UObject* (*const Z_Construct_UClass_UNiagaraStackInputCategory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackItemContent,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackInputCategory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackInputCategory.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackInputCategory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackInputCategory_Statics::NewProp_CategorySpacer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackInputCategory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackInputCategory_Statics::NewProp_CategorySpacer = { "CategorySpacer", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackInputCategory, CategorySpacer), Z_Construct_UClass_UNiagaraStackSpacer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackInputCategory_Statics::NewProp_CategorySpacer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackInputCategory_Statics::NewProp_CategorySpacer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStackInputCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackInputCategory_Statics::NewProp_CategorySpacer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackInputCategory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackInputCategory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackInputCategory_Statics::ClassParams = {
		&UNiagaraStackInputCategory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraStackInputCategory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackInputCategory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackInputCategory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackInputCategory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackInputCategory()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackInputCategory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackInputCategory.OuterSingleton, Z_Construct_UClass_UNiagaraStackInputCategory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackInputCategory.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackInputCategory>()
	{
		return UNiagaraStackInputCategory::StaticClass();
	}
	UNiagaraStackInputCategory::UNiagaraStackInputCategory() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackInputCategory);
	UNiagaraStackInputCategory::~UNiagaraStackInputCategory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackInputCategory_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackInputCategory_h_Statics::EnumInfo[] = {
		{ EStackParameterBehavior_StaticEnum, TEXT("EStackParameterBehavior"), &Z_Registration_Info_UEnum_EStackParameterBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3439467720U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackInputCategory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackInputCategory, UNiagaraStackInputCategory::StaticClass, TEXT("UNiagaraStackInputCategory"), &Z_Registration_Info_UClass_UNiagaraStackInputCategory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackInputCategory), 2287304037U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackInputCategory_h_1942753955(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackInputCategory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackInputCategory_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackInputCategory_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackInputCategory_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
