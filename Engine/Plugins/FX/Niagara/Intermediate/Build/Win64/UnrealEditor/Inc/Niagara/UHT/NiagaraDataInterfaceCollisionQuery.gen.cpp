// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceCollisionQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceCollisionQuery() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceCollisionQuery::StaticRegisterNativesUNiagaraDataInterfaceCollisionQuery()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceCollisionQuery);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_NoRegister()
	{
		return UNiagaraDataInterfaceCollisionQuery::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_Statics::Class_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Data Interface that can be used to query collision related data, like geometry traces or sampling the depth buffer. */" },
		{ "DisplayName", "Collision Query" },
		{ "IncludePath", "NiagaraDataInterfaceCollisionQuery.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCollisionQuery.h" },
		{ "ToolTip", "Data Interface that can be used to query collision related data, like geometry traces or sampling the depth buffer." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceCollisionQuery>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_Statics::ClassParams = {
		&UNiagaraDataInterfaceCollisionQuery::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceCollisionQuery.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceCollisionQuery.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceCollisionQuery.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceCollisionQuery>()
	{
		return UNiagaraDataInterfaceCollisionQuery::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceCollisionQuery);
	UNiagaraDataInterfaceCollisionQuery::~UNiagaraDataInterfaceCollisionQuery() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCollisionQuery_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCollisionQuery_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery, UNiagaraDataInterfaceCollisionQuery::StaticClass, TEXT("UNiagaraDataInterfaceCollisionQuery"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceCollisionQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceCollisionQuery), 582682910U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCollisionQuery_h_3170923832(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCollisionQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCollisionQuery_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
