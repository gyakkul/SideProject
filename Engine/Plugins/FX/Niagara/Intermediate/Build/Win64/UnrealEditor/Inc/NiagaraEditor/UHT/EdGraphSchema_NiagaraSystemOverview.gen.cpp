// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdGraphSchema_NiagaraSystemOverview.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphSchema_NiagaraSystemOverview() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_NiagaraSystemOverview();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_NiagaraSystemOverview_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UEdGraphSchema_NiagaraSystemOverview::StaticRegisterNativesUEdGraphSchema_NiagaraSystemOverview()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphSchema_NiagaraSystemOverview);
	UClass* Z_Construct_UClass_UEdGraphSchema_NiagaraSystemOverview_NoRegister()
	{
		return UEdGraphSchema_NiagaraSystemOverview::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphSchema_NiagaraSystemOverview_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphSchema_NiagaraSystemOverview_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphSchema_NiagaraSystemOverview_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraphSchema_NiagaraSystemOverview.h" },
		{ "ModuleRelativePath", "Public/EdGraphSchema_NiagaraSystemOverview.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphSchema_NiagaraSystemOverview_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphSchema_NiagaraSystemOverview>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphSchema_NiagaraSystemOverview_Statics::ClassParams = {
		&UEdGraphSchema_NiagaraSystemOverview::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphSchema_NiagaraSystemOverview_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_NiagaraSystemOverview_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphSchema_NiagaraSystemOverview()
	{
		if (!Z_Registration_Info_UClass_UEdGraphSchema_NiagaraSystemOverview.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphSchema_NiagaraSystemOverview.OuterSingleton, Z_Construct_UClass_UEdGraphSchema_NiagaraSystemOverview_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraphSchema_NiagaraSystemOverview.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UEdGraphSchema_NiagaraSystemOverview>()
	{
		return UEdGraphSchema_NiagaraSystemOverview::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphSchema_NiagaraSystemOverview);
	UEdGraphSchema_NiagaraSystemOverview::~UEdGraphSchema_NiagaraSystemOverview() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_NiagaraSystemOverview_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_NiagaraSystemOverview_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphSchema_NiagaraSystemOverview, UEdGraphSchema_NiagaraSystemOverview::StaticClass, TEXT("UEdGraphSchema_NiagaraSystemOverview"), &Z_Registration_Info_UClass_UEdGraphSchema_NiagaraSystemOverview, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphSchema_NiagaraSystemOverview), 627515853U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_NiagaraSystemOverview_h_1071454185(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_NiagaraSystemOverview_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_NiagaraSystemOverview_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
