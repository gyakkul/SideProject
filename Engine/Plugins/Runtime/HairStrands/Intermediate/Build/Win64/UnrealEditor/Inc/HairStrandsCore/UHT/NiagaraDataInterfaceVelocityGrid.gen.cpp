// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/NiagaraDataInterfaceVelocityGrid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVelocityGrid() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	void UNiagaraDataInterfaceVelocityGrid::StaticRegisterNativesUNiagaraDataInterfaceVelocityGrid()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceVelocityGrid);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid_NoRegister()
	{
		return UNiagaraDataInterfaceVelocityGrid::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceRWBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid_Statics::Class_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "Comment", "/** Data Interface for the strand base */" },
		{ "DisplayName", "Velocity Grid" },
		{ "IncludePath", "Niagara/NiagaraDataInterfaceVelocityGrid.h" },
		{ "ModuleRelativePath", "Public/Niagara/NiagaraDataInterfaceVelocityGrid.h" },
		{ "ToolTip", "Data Interface for the strand base" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid_Statics::NewProp_GridSize_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** Grid size along the X axis. */" },
		{ "ModuleRelativePath", "Public/Niagara/NiagaraDataInterfaceVelocityGrid.h" },
		{ "ToolTip", "Grid size along the X axis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceVelocityGrid, GridSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid_Statics::NewProp_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid_Statics::NewProp_GridSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid_Statics::NewProp_GridSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceVelocityGrid>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid_Statics::ClassParams = {
		&UNiagaraDataInterfaceVelocityGrid::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceVelocityGrid.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceVelocityGrid.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceVelocityGrid.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UNiagaraDataInterfaceVelocityGrid>()
	{
		return UNiagaraDataInterfaceVelocityGrid::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceVelocityGrid);
	UNiagaraDataInterfaceVelocityGrid::~UNiagaraDataInterfaceVelocityGrid() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfaceVelocityGrid_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfaceVelocityGrid_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid, UNiagaraDataInterfaceVelocityGrid::StaticClass, TEXT("UNiagaraDataInterfaceVelocityGrid"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceVelocityGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceVelocityGrid), 2046504886U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfaceVelocityGrid_h_1957448450(TEXT("/Script/HairStrandsCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfaceVelocityGrid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfaceVelocityGrid_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
