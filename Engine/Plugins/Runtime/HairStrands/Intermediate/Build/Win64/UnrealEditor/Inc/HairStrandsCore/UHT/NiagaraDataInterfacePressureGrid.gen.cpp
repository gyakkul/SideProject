// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/NiagaraDataInterfacePressureGrid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfacePressureGrid() {}
// Cross Module References
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UNiagaraDataInterfacePressureGrid();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UNiagaraDataInterfacePressureGrid_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	void UNiagaraDataInterfacePressureGrid::StaticRegisterNativesUNiagaraDataInterfacePressureGrid()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfacePressureGrid);
	UClass* Z_Construct_UClass_UNiagaraDataInterfacePressureGrid_NoRegister()
	{
		return UNiagaraDataInterfacePressureGrid::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfacePressureGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfacePressureGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfacePressureGrid_Statics::Class_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "Comment", "/** Data Interface for the strand base */" },
		{ "DisplayName", "Pressure Grid" },
		{ "IncludePath", "Niagara/NiagaraDataInterfacePressureGrid.h" },
		{ "ModuleRelativePath", "Public/Niagara/NiagaraDataInterfacePressureGrid.h" },
		{ "ToolTip", "Data Interface for the strand base" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfacePressureGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfacePressureGrid>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfacePressureGrid_Statics::ClassParams = {
		&UNiagaraDataInterfacePressureGrid::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfacePressureGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfacePressureGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfacePressureGrid()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfacePressureGrid.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfacePressureGrid.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfacePressureGrid_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfacePressureGrid.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UNiagaraDataInterfacePressureGrid>()
	{
		return UNiagaraDataInterfacePressureGrid::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfacePressureGrid);
	UNiagaraDataInterfacePressureGrid::~UNiagaraDataInterfacePressureGrid() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfacePressureGrid_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfacePressureGrid_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfacePressureGrid, UNiagaraDataInterfacePressureGrid::StaticClass, TEXT("UNiagaraDataInterfacePressureGrid"), &Z_Registration_Info_UClass_UNiagaraDataInterfacePressureGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfacePressureGrid), 1519707272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfacePressureGrid_h_4240526292(TEXT("/Script/HairStrandsCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfacePressureGrid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfacePressureGrid_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
