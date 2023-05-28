// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceGrid2DCollectionReader.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceGrid2DCollectionReader() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollection();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceGrid2DCollectionReader::StaticRegisterNativesUNiagaraDataInterfaceGrid2DCollectionReader()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceGrid2DCollectionReader);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_NoRegister()
	{
		return UNiagaraDataInterfaceGrid2DCollectionReader::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EmitterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DIName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DIName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollection,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Grid" },
		{ "DisplayName", "Grid2D Collection Reader" },
		{ "Experimental", "" },
		{ "HideCategories", "Grid2DCollection Grid Deprecated" },
		{ "IncludePath", "NiagaraDataInterfaceGrid2DCollectionReader.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid2DCollectionReader.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::NewProp_EmitterName_MetaData[] = {
		{ "Category", "Reader" },
		{ "Comment", "// Name of the emitter to read from\n" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid2DCollectionReader.h" },
		{ "ToolTip", "Name of the emitter to read from" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceGrid2DCollectionReader, EmitterName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::NewProp_EmitterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::NewProp_EmitterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::NewProp_DIName_MetaData[] = {
		{ "Category", "Reader" },
		{ "Comment", "// Name of the Grid2DCollection Data Interface on the emitter\n" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid2DCollectionReader.h" },
		{ "ToolTip", "Name of the Grid2DCollection Data Interface on the emitter" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::NewProp_DIName = { "DIName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceGrid2DCollectionReader, DIName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::NewProp_DIName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::NewProp_DIName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::NewProp_EmitterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::NewProp_DIName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceGrid2DCollectionReader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::ClassParams = {
		&UNiagaraDataInterfaceGrid2DCollectionReader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollectionReader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollectionReader.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollectionReader.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceGrid2DCollectionReader>()
	{
		return UNiagaraDataInterfaceGrid2DCollectionReader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceGrid2DCollectionReader);
	UNiagaraDataInterfaceGrid2DCollectionReader::~UNiagaraDataInterfaceGrid2DCollectionReader() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraDataInterfaceGrid2DCollectionReader)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid2DCollectionReader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid2DCollectionReader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader, UNiagaraDataInterfaceGrid2DCollectionReader::StaticClass, TEXT("UNiagaraDataInterfaceGrid2DCollectionReader"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollectionReader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceGrid2DCollectionReader), 2929048078U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid2DCollectionReader_h_3107322498(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid2DCollectionReader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid2DCollectionReader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
