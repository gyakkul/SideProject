// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackItemGroup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackItemGroup() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEntry();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItemGroup();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItemGroup_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItemGroupFooter();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItemGroupFooter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraStackItemGroup::StaticRegisterNativesUNiagaraStackItemGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackItemGroup);
	UClass* Z_Construct_UClass_UNiagaraStackItemGroup_NoRegister()
	{
		return UNiagaraStackItemGroup::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackItemGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupFooter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GroupFooter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackItemGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackItemGroup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackItemGroup.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackItemGroup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackItemGroup_Statics::NewProp_GroupFooter_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackItemGroup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackItemGroup_Statics::NewProp_GroupFooter = { "GroupFooter", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackItemGroup, GroupFooter), Z_Construct_UClass_UNiagaraStackItemGroupFooter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackItemGroup_Statics::NewProp_GroupFooter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackItemGroup_Statics::NewProp_GroupFooter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStackItemGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackItemGroup_Statics::NewProp_GroupFooter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackItemGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackItemGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackItemGroup_Statics::ClassParams = {
		&UNiagaraStackItemGroup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraStackItemGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackItemGroup_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackItemGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackItemGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackItemGroup()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackItemGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackItemGroup.OuterSingleton, Z_Construct_UClass_UNiagaraStackItemGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackItemGroup.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackItemGroup>()
	{
		return UNiagaraStackItemGroup::StaticClass();
	}
	UNiagaraStackItemGroup::UNiagaraStackItemGroup() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackItemGroup);
	UNiagaraStackItemGroup::~UNiagaraStackItemGroup() {}
	void UNiagaraStackItemGroupFooter::StaticRegisterNativesUNiagaraStackItemGroupFooter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackItemGroupFooter);
	UClass* Z_Construct_UClass_UNiagaraStackItemGroupFooter_NoRegister()
	{
		return UNiagaraStackItemGroupFooter::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackItemGroupFooter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackItemGroupFooter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackItemGroupFooter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackItemGroup.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackItemGroup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackItemGroupFooter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackItemGroupFooter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackItemGroupFooter_Statics::ClassParams = {
		&UNiagaraStackItemGroupFooter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackItemGroupFooter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackItemGroupFooter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackItemGroupFooter()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackItemGroupFooter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackItemGroupFooter.OuterSingleton, Z_Construct_UClass_UNiagaraStackItemGroupFooter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackItemGroupFooter.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackItemGroupFooter>()
	{
		return UNiagaraStackItemGroupFooter::StaticClass();
	}
	UNiagaraStackItemGroupFooter::UNiagaraStackItemGroupFooter() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackItemGroupFooter);
	UNiagaraStackItemGroupFooter::~UNiagaraStackItemGroupFooter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackItemGroup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackItemGroup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackItemGroup, UNiagaraStackItemGroup::StaticClass, TEXT("UNiagaraStackItemGroup"), &Z_Registration_Info_UClass_UNiagaraStackItemGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackItemGroup), 367454096U) },
		{ Z_Construct_UClass_UNiagaraStackItemGroupFooter, UNiagaraStackItemGroupFooter::StaticClass, TEXT("UNiagaraStackItemGroupFooter"), &Z_Registration_Info_UClass_UNiagaraStackItemGroupFooter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackItemGroupFooter), 4271118643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackItemGroup_h_2037857504(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackItemGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackItemGroup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
