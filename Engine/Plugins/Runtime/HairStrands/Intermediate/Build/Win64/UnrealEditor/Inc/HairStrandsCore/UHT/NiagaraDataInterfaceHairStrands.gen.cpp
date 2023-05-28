// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/NiagaraDataInterfaceHairStrands.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceHairStrands() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAsset_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceHairStrands();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	void UNiagaraDataInterfaceHairStrands::StaticRegisterNativesUNiagaraDataInterfaceHairStrands()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceHairStrands);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_NoRegister()
	{
		return UNiagaraDataInterfaceHairStrands::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics::Class_MetaDataParams[] = {
		{ "Category", "Strands" },
		{ "Comment", "/** Data Interface for the strand base */" },
		{ "DisplayName", "Hair Strands" },
		{ "IncludePath", "Niagara/NiagaraDataInterfaceHairStrands.h" },
		{ "ModuleRelativePath", "Public/Niagara/NiagaraDataInterfaceHairStrands.h" },
		{ "ToolTip", "Data Interface for the strand base" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics::NewProp_DefaultSource_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Hair Strands Asset used to sample from when not overridden by a source actor from the scene. Also useful for previewing in the editor. */" },
		{ "ModuleRelativePath", "Public/Niagara/NiagaraDataInterfaceHairStrands.h" },
		{ "ToolTip", "Hair Strands Asset used to sample from when not overridden by a source actor from the scene. Also useful for previewing in the editor." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics::NewProp_DefaultSource = { "DefaultSource", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceHairStrands, DefaultSource), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics::NewProp_DefaultSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics::NewProp_DefaultSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics::NewProp_SourceActor_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The source actor from which to sample */" },
		{ "ModuleRelativePath", "Public/Niagara/NiagaraDataInterfaceHairStrands.h" },
		{ "ToolTip", "The source actor from which to sample" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceHairStrands, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics::NewProp_SourceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics::NewProp_SourceActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics::NewProp_DefaultSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics::NewProp_SourceActor,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister, (int32)VTABLE_OFFSET(UNiagaraDataInterfaceHairStrands, INiagaraSimCacheCustomStorageInterface), false },  // 2981400260
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceHairStrands>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics::ClassParams = {
		&UNiagaraDataInterfaceHairStrands::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceHairStrands()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceHairStrands.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceHairStrands.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceHairStrands.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UNiagaraDataInterfaceHairStrands>()
	{
		return UNiagaraDataInterfaceHairStrands::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceHairStrands);
	UNiagaraDataInterfaceHairStrands::~UNiagaraDataInterfaceHairStrands() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfaceHairStrands_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfaceHairStrands_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceHairStrands, UNiagaraDataInterfaceHairStrands::StaticClass, TEXT("UNiagaraDataInterfaceHairStrands"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceHairStrands, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceHairStrands), 2284947017U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfaceHairStrands_h_2394854045(TEXT("/Script/HairStrandsCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfaceHairStrands_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfaceHairStrands_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
