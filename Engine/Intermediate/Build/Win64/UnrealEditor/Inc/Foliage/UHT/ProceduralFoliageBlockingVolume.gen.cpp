// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralFoliageBlockingVolume.h"
#include "FoliageType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFoliageBlockingVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	FOLIAGE_API UClass* Z_Construct_UClass_AProceduralFoliageBlockingVolume();
	FOLIAGE_API UClass* Z_Construct_UClass_AProceduralFoliageBlockingVolume_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_AProceduralFoliageVolume_NoRegister();
	FOLIAGE_API UScriptStruct* Z_Construct_UScriptStruct_FFoliageDensityFalloff();
	UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References
	void AProceduralFoliageBlockingVolume::StaticRegisterNativesAProceduralFoliageBlockingVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProceduralFoliageBlockingVolume);
	UClass* Z_Construct_UClass_AProceduralFoliageBlockingVolume_NoRegister()
	{
		return AProceduralFoliageBlockingVolume::StaticClass();
	}
	struct Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralFoliageVolume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProceduralFoliageVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DensityFalloff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** An invisible volume used to block ProceduralFoliage instances from being spawned. */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "ProceduralFoliageBlockingVolume.h" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageBlockingVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "An invisible volume used to block ProceduralFoliage instances from being spawned." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::NewProp_ProceduralFoliageVolume_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageBlockingVolume.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::NewProp_ProceduralFoliageVolume = { "ProceduralFoliageVolume", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProceduralFoliageBlockingVolume, ProceduralFoliageVolume), Z_Construct_UClass_AProceduralFoliageVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::NewProp_ProceduralFoliageVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::NewProp_ProceduralFoliageVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::NewProp_DensityFalloff_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageBlockingVolume.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::NewProp_DensityFalloff = { "DensityFalloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProceduralFoliageBlockingVolume, DensityFalloff), Z_Construct_UScriptStruct_FFoliageDensityFalloff, METADATA_PARAMS(Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::NewProp_DensityFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::NewProp_DensityFalloff_MetaData)) }; // 4097294747
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::NewProp_ProceduralFoliageVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::NewProp_DensityFalloff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralFoliageBlockingVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::ClassParams = {
		&AProceduralFoliageBlockingVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProceduralFoliageBlockingVolume()
	{
		if (!Z_Registration_Info_UClass_AProceduralFoliageBlockingVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProceduralFoliageBlockingVolume.OuterSingleton, Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProceduralFoliageBlockingVolume.OuterSingleton;
	}
	template<> FOLIAGE_API UClass* StaticClass<AProceduralFoliageBlockingVolume>()
	{
		return AProceduralFoliageBlockingVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralFoliageBlockingVolume);
	AProceduralFoliageBlockingVolume::~AProceduralFoliageBlockingVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageBlockingVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageBlockingVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProceduralFoliageBlockingVolume, AProceduralFoliageBlockingVolume::StaticClass, TEXT("AProceduralFoliageBlockingVolume"), &Z_Registration_Info_UClass_AProceduralFoliageBlockingVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProceduralFoliageBlockingVolume), 3091885535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageBlockingVolume_h_1444510192(TEXT("/Script/Foliage"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageBlockingVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageBlockingVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
