// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackRenderItemGroup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackRenderItemGroup() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItemGroup();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackRenderItemGroup();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackRenderItemGroup_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraStackRenderItemGroup::StaticRegisterNativesUNiagaraStackRenderItemGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackRenderItemGroup);
	UClass* Z_Construct_UClass_UNiagaraStackRenderItemGroup_NoRegister()
	{
		return UNiagaraStackRenderItemGroup::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackRenderItemGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackRenderItemGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackItemGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackRenderItemGroup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackRenderItemGroup.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackRenderItemGroup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackRenderItemGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackRenderItemGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackRenderItemGroup_Statics::ClassParams = {
		&UNiagaraStackRenderItemGroup::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackRenderItemGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackRenderItemGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackRenderItemGroup()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackRenderItemGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackRenderItemGroup.OuterSingleton, Z_Construct_UClass_UNiagaraStackRenderItemGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackRenderItemGroup.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackRenderItemGroup>()
	{
		return UNiagaraStackRenderItemGroup::StaticClass();
	}
	UNiagaraStackRenderItemGroup::UNiagaraStackRenderItemGroup() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackRenderItemGroup);
	UNiagaraStackRenderItemGroup::~UNiagaraStackRenderItemGroup() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackRenderItemGroup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackRenderItemGroup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackRenderItemGroup, UNiagaraStackRenderItemGroup::StaticClass, TEXT("UNiagaraStackRenderItemGroup"), &Z_Registration_Info_UClass_UNiagaraStackRenderItemGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackRenderItemGroup), 3967756613U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackRenderItemGroup_h_1563708433(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackRenderItemGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackRenderItemGroup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
