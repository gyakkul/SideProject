// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceNeighborGrid3D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceNeighborGrid3D() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3D();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceNeighborGrid3D::StaticRegisterNativesUNiagaraDataInterfaceNeighborGrid3D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceNeighborGrid3D);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_NoRegister()
	{
		return UNiagaraDataInterfaceNeighborGrid3D::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNeighborsPerCell_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxNeighborsPerCell;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceGrid3D,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::Class_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "DisplayName", "Neighbor Grid3D" },
		{ "IncludePath", "NiagaraDataInterfaceNeighborGrid3D.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceNeighborGrid3D.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::NewProp_MaxNeighborsPerCell_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceNeighborGrid3D.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::NewProp_MaxNeighborsPerCell = { "MaxNeighborsPerCell", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceNeighborGrid3D, MaxNeighborsPerCell), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::NewProp_MaxNeighborsPerCell_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::NewProp_MaxNeighborsPerCell_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::NewProp_MaxNeighborsPerCell,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceNeighborGrid3D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::ClassParams = {
		&UNiagaraDataInterfaceNeighborGrid3D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceNeighborGrid3D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceNeighborGrid3D.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceNeighborGrid3D.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceNeighborGrid3D>()
	{
		return UNiagaraDataInterfaceNeighborGrid3D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceNeighborGrid3D);
	UNiagaraDataInterfaceNeighborGrid3D::~UNiagaraDataInterfaceNeighborGrid3D() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceNeighborGrid3D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceNeighborGrid3D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D, UNiagaraDataInterfaceNeighborGrid3D::StaticClass, TEXT("UNiagaraDataInterfaceNeighborGrid3D"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceNeighborGrid3D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceNeighborGrid3D), 3981799540U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceNeighborGrid3D_h_367374871(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceNeighborGrid3D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceNeighborGrid3D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
