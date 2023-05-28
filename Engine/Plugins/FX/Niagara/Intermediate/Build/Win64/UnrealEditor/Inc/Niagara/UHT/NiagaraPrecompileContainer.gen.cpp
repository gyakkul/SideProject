// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraPrecompileContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraPrecompileContainer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPrecompileContainer();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPrecompileContainer_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraPrecompileContainer::StaticRegisterNativesUNiagaraPrecompileContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraPrecompileContainer);
	UClass* Z_Construct_UClass_UNiagaraPrecompileContainer_NoRegister()
	{
		return UNiagaraPrecompileContainer::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraPrecompileContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Scripts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scripts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Scripts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_System_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_System;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraPrecompileContainer.h" },
		{ "ModuleRelativePath", "Private/NiagaraPrecompileContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_Scripts_Inner = { "Scripts", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_Scripts_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraPrecompileContainer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_Scripts = { "Scripts", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraPrecompileContainer, Scripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_Scripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_Scripts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_System_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraPrecompileContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_System = { "System", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraPrecompileContainer, System), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_System_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_System_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_Scripts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_Scripts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_System,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraPrecompileContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::ClassParams = {
		&UNiagaraPrecompileContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraPrecompileContainer()
	{
		if (!Z_Registration_Info_UClass_UNiagaraPrecompileContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraPrecompileContainer.OuterSingleton, Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraPrecompileContainer.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraPrecompileContainer>()
	{
		return UNiagaraPrecompileContainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPrecompileContainer);
	UNiagaraPrecompileContainer::~UNiagaraPrecompileContainer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraPrecompileContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraPrecompileContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraPrecompileContainer, UNiagaraPrecompileContainer::StaticClass, TEXT("UNiagaraPrecompileContainer"), &Z_Registration_Info_UClass_UNiagaraPrecompileContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraPrecompileContainer), 2022635439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraPrecompileContainer_h_3267717159(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraPrecompileContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraPrecompileContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
