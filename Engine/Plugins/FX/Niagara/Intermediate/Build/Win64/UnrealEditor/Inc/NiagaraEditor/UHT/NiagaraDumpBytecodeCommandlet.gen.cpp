// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Commandlets/NiagaraDumpBytecodeCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDumpBytecodeCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraDumpByteCodeCommandlet();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraDumpByteCodeCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraDumpByteCodeCommandlet::StaticRegisterNativesUNiagaraDumpByteCodeCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDumpByteCodeCommandlet);
	UClass* Z_Construct_UClass_UNiagaraDumpByteCodeCommandlet_NoRegister()
	{
		return UNiagaraDumpByteCodeCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDumpByteCodeCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDumpByteCodeCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDumpByteCodeCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/NiagaraDumpBytecodeCommandlet.h" },
		{ "ModuleRelativePath", "Public/Commandlets/NiagaraDumpBytecodeCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDumpByteCodeCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDumpByteCodeCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDumpByteCodeCommandlet_Statics::ClassParams = {
		&UNiagaraDumpByteCodeCommandlet::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDumpByteCodeCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDumpByteCodeCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDumpByteCodeCommandlet()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDumpByteCodeCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDumpByteCodeCommandlet.OuterSingleton, Z_Construct_UClass_UNiagaraDumpByteCodeCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDumpByteCodeCommandlet.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraDumpByteCodeCommandlet>()
	{
		return UNiagaraDumpByteCodeCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDumpByteCodeCommandlet);
	UNiagaraDumpByteCodeCommandlet::~UNiagaraDumpByteCodeCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraDumpBytecodeCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraDumpBytecodeCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDumpByteCodeCommandlet, UNiagaraDumpByteCodeCommandlet::StaticClass, TEXT("UNiagaraDumpByteCodeCommandlet"), &Z_Registration_Info_UClass_UNiagaraDumpByteCodeCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDumpByteCodeCommandlet), 948624939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraDumpBytecodeCommandlet_h_309054361(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraDumpBytecodeCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraDumpBytecodeCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
