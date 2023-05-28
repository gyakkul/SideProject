// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraDataInterfaceWater.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceWater() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceWater();
	WATER_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceWater_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyComponent_NoRegister();
// End Cross Module References
	void UNiagaraDataInterfaceWater::StaticRegisterNativesUNiagaraDataInterfaceWater()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceWater);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceWater_NoRegister()
	{
		return UNiagaraDataInterfaceWater::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceWater_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBodyComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceBodyComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceWater_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceWater_Statics::Class_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "DisplayName", "Water" },
		{ "IncludePath", "NiagaraDataInterfaceWater.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceWater.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceWater_Statics::NewProp_SourceBodyComponent_MetaData[] = {
		{ "Category", "Water" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceWater.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceWater_Statics::NewProp_SourceBodyComponent = { "SourceBodyComponent", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceWater, SourceBodyComponent), Z_Construct_UClass_UWaterBodyComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceWater_Statics::NewProp_SourceBodyComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceWater_Statics::NewProp_SourceBodyComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceWater_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceWater_Statics::NewProp_SourceBodyComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceWater_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceWater>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceWater_Statics::ClassParams = {
		&UNiagaraDataInterfaceWater::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceWater_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceWater_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceWater_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceWater_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceWater()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceWater.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceWater.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceWater_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceWater.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UNiagaraDataInterfaceWater>()
	{
		return UNiagaraDataInterfaceWater::StaticClass();
	}
	UNiagaraDataInterfaceWater::UNiagaraDataInterfaceWater() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceWater);
	UNiagaraDataInterfaceWater::~UNiagaraDataInterfaceWater() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraDataInterfaceWater_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraDataInterfaceWater_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceWater, UNiagaraDataInterfaceWater::StaticClass, TEXT("UNiagaraDataInterfaceWater"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceWater, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceWater), 4222424312U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraDataInterfaceWater_h_397616081(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraDataInterfaceWater_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraDataInterfaceWater_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
