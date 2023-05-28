// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NiagaraNodeParameterMapFor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraNodeParameterMapFor() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNode();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeParameterMapFor();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeParameterMapFor_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeParameterMapForIndex();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeParameterMapForIndex_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeParameterMapForWithContinue();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeParameterMapForWithContinue_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeParameterMapSet();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraNodeParameterMapFor::StaticRegisterNativesUNiagaraNodeParameterMapFor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeParameterMapFor);
	UClass* Z_Construct_UClass_UNiagaraNodeParameterMapFor_NoRegister()
	{
		return UNiagaraNodeParameterMapFor::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeParameterMapFor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeParameterMapFor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNodeParameterMapSet,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeParameterMapFor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A node that allows a user to set multiple values into a parameter map in a for loop. */" },
		{ "IncludePath", "NiagaraNodeParameterMapFor.h" },
		{ "ModuleRelativePath", "Private/NiagaraNodeParameterMapFor.h" },
		{ "ToolTip", "A node that allows a user to set multiple values into a parameter map in a for loop." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeParameterMapFor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeParameterMapFor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeParameterMapFor_Statics::ClassParams = {
		&UNiagaraNodeParameterMapFor::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeParameterMapFor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeParameterMapFor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeParameterMapFor()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeParameterMapFor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeParameterMapFor.OuterSingleton, Z_Construct_UClass_UNiagaraNodeParameterMapFor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeParameterMapFor.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeParameterMapFor>()
	{
		return UNiagaraNodeParameterMapFor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeParameterMapFor);
	UNiagaraNodeParameterMapFor::~UNiagaraNodeParameterMapFor() {}
	void UNiagaraNodeParameterMapForWithContinue::StaticRegisterNativesUNiagaraNodeParameterMapForWithContinue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeParameterMapForWithContinue);
	UClass* Z_Construct_UClass_UNiagaraNodeParameterMapForWithContinue_NoRegister()
	{
		return UNiagaraNodeParameterMapForWithContinue::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeParameterMapForWithContinue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeParameterMapForWithContinue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNodeParameterMapFor,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeParameterMapForWithContinue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraNodeParameterMapFor.h" },
		{ "ModuleRelativePath", "Private/NiagaraNodeParameterMapFor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeParameterMapForWithContinue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeParameterMapForWithContinue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeParameterMapForWithContinue_Statics::ClassParams = {
		&UNiagaraNodeParameterMapForWithContinue::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeParameterMapForWithContinue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeParameterMapForWithContinue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeParameterMapForWithContinue()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeParameterMapForWithContinue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeParameterMapForWithContinue.OuterSingleton, Z_Construct_UClass_UNiagaraNodeParameterMapForWithContinue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeParameterMapForWithContinue.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeParameterMapForWithContinue>()
	{
		return UNiagaraNodeParameterMapForWithContinue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeParameterMapForWithContinue);
	UNiagaraNodeParameterMapForWithContinue::~UNiagaraNodeParameterMapForWithContinue() {}
	void UNiagaraNodeParameterMapForIndex::StaticRegisterNativesUNiagaraNodeParameterMapForIndex()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeParameterMapForIndex);
	UClass* Z_Construct_UClass_UNiagaraNodeParameterMapForIndex_NoRegister()
	{
		return UNiagaraNodeParameterMapForIndex::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeParameterMapForIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeParameterMapForIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNode,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeParameterMapForIndex_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraNodeParameterMapFor.h" },
		{ "ModuleRelativePath", "Private/NiagaraNodeParameterMapFor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeParameterMapForIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeParameterMapForIndex>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeParameterMapForIndex_Statics::ClassParams = {
		&UNiagaraNodeParameterMapForIndex::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeParameterMapForIndex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeParameterMapForIndex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeParameterMapForIndex()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeParameterMapForIndex.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeParameterMapForIndex.OuterSingleton, Z_Construct_UClass_UNiagaraNodeParameterMapForIndex_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeParameterMapForIndex.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeParameterMapForIndex>()
	{
		return UNiagaraNodeParameterMapForIndex::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeParameterMapForIndex);
	UNiagaraNodeParameterMapForIndex::~UNiagaraNodeParameterMapForIndex() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapFor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapFor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraNodeParameterMapFor, UNiagaraNodeParameterMapFor::StaticClass, TEXT("UNiagaraNodeParameterMapFor"), &Z_Registration_Info_UClass_UNiagaraNodeParameterMapFor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeParameterMapFor), 1966596503U) },
		{ Z_Construct_UClass_UNiagaraNodeParameterMapForWithContinue, UNiagaraNodeParameterMapForWithContinue::StaticClass, TEXT("UNiagaraNodeParameterMapForWithContinue"), &Z_Registration_Info_UClass_UNiagaraNodeParameterMapForWithContinue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeParameterMapForWithContinue), 2357925155U) },
		{ Z_Construct_UClass_UNiagaraNodeParameterMapForIndex, UNiagaraNodeParameterMapForIndex::StaticClass, TEXT("UNiagaraNodeParameterMapForIndex"), &Z_Registration_Info_UClass_UNiagaraNodeParameterMapForIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeParameterMapForIndex), 4086172027U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapFor_h_1519964127(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapFor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapFor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
