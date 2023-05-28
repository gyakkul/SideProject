// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorFactoryNiagara.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryNiagara() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UActorFactoryNiagara();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UActorFactoryNiagara_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UActorFactoryNiagara::StaticRegisterNativesUActorFactoryNiagara()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryNiagara);
	UClass* Z_Construct_UClass_UActorFactoryNiagara_NoRegister()
	{
		return UActorFactoryNiagara::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryNiagara_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryNiagara_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryNiagara_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactoryNiagara.h" },
		{ "ModuleRelativePath", "Public/ActorFactoryNiagara.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryNiagara_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryNiagara>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryNiagara_Statics::ClassParams = {
		&UActorFactoryNiagara::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryNiagara_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryNiagara_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryNiagara()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryNiagara.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryNiagara.OuterSingleton, Z_Construct_UClass_UActorFactoryNiagara_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryNiagara.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UActorFactoryNiagara>()
	{
		return UActorFactoryNiagara::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryNiagara);
	UActorFactoryNiagara::~UActorFactoryNiagara() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ActorFactoryNiagara_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ActorFactoryNiagara_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryNiagara, UActorFactoryNiagara::StaticClass, TEXT("UActorFactoryNiagara"), &Z_Registration_Info_UClass_UActorFactoryNiagara, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryNiagara), 1861030995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ActorFactoryNiagara_h_2694453234(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ActorFactoryNiagara_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ActorFactoryNiagara_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
