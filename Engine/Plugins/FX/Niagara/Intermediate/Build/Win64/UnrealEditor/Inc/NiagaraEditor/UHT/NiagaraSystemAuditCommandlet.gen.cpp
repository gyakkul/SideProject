// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Commandlets/NiagaraSystemAuditCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSystemAuditCommandlet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraSystemAuditCommandlet();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraSystemAuditCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraSystemAuditCommandlet::StaticRegisterNativesUNiagaraSystemAuditCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSystemAuditCommandlet);
	UClass* Z_Construct_UClass_UNiagaraSystemAuditCommandlet_NoRegister()
	{
		return UNiagaraSystemAuditCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSystemAuditCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PackagesToSave_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagesToSave_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PackagesToSave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSystemAuditCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemAuditCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/NiagaraSystemAuditCommandlet.h" },
		{ "ModuleRelativePath", "Public/Commandlets/NiagaraSystemAuditCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSystemAuditCommandlet_Statics::NewProp_PackagesToSave_Inner = { "PackagesToSave", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPackage, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemAuditCommandlet_Statics::NewProp_PackagesToSave_MetaData[] = {
		{ "ModuleRelativePath", "Public/Commandlets/NiagaraSystemAuditCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystemAuditCommandlet_Statics::NewProp_PackagesToSave = { "PackagesToSave", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystemAuditCommandlet, PackagesToSave), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemAuditCommandlet_Statics::NewProp_PackagesToSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemAuditCommandlet_Statics::NewProp_PackagesToSave_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraSystemAuditCommandlet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemAuditCommandlet_Statics::NewProp_PackagesToSave_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemAuditCommandlet_Statics::NewProp_PackagesToSave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSystemAuditCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSystemAuditCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSystemAuditCommandlet_Statics::ClassParams = {
		&UNiagaraSystemAuditCommandlet::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraSystemAuditCommandlet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemAuditCommandlet_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemAuditCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemAuditCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSystemAuditCommandlet()
	{
		if (!Z_Registration_Info_UClass_UNiagaraSystemAuditCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSystemAuditCommandlet.OuterSingleton, Z_Construct_UClass_UNiagaraSystemAuditCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraSystemAuditCommandlet.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraSystemAuditCommandlet>()
	{
		return UNiagaraSystemAuditCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSystemAuditCommandlet);
	UNiagaraSystemAuditCommandlet::~UNiagaraSystemAuditCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraSystemAuditCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraSystemAuditCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraSystemAuditCommandlet, UNiagaraSystemAuditCommandlet::StaticClass, TEXT("UNiagaraSystemAuditCommandlet"), &Z_Registration_Info_UClass_UNiagaraSystemAuditCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSystemAuditCommandlet), 1405074281U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraSystemAuditCommandlet_h_2654249063(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraSystemAuditCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraSystemAuditCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
