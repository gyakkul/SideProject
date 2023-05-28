// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralFoliageVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFoliageVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionActorLoaderInterface_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_AProceduralFoliageVolume();
	FOLIAGE_API UClass* Z_Construct_UClass_AProceduralFoliageVolume_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References
	void AProceduralFoliageVolume::StaticRegisterNativesAProceduralFoliageVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProceduralFoliageVolume);
	UClass* Z_Construct_UClass_AProceduralFoliageVolume_NoRegister()
	{
		return AProceduralFoliageVolume::StaticClass();
	}
	struct Z_Construct_UClass_AProceduralFoliageVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProceduralComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProceduralFoliageVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralFoliageVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "ProceduralFoliageVolume.h" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralFoliageVolume_Statics::NewProp_ProceduralComponent_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageVolume.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AProceduralFoliageVolume_Statics::NewProp_ProceduralComponent = { "ProceduralComponent", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProceduralFoliageVolume, ProceduralComponent), Z_Construct_UClass_UProceduralFoliageComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralFoliageVolume_Statics::NewProp_ProceduralComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralFoliageVolume_Statics::NewProp_ProceduralComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProceduralFoliageVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralFoliageVolume_Statics::NewProp_ProceduralComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AProceduralFoliageVolume_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWorldPartitionActorLoaderInterface_NoRegister, (int32)VTABLE_OFFSET(AProceduralFoliageVolume, IWorldPartitionActorLoaderInterface), false },  // 2588401415
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProceduralFoliageVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralFoliageVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProceduralFoliageVolume_Statics::ClassParams = {
		&AProceduralFoliageVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProceduralFoliageVolume_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralFoliageVolume_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProceduralFoliageVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralFoliageVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProceduralFoliageVolume()
	{
		if (!Z_Registration_Info_UClass_AProceduralFoliageVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProceduralFoliageVolume.OuterSingleton, Z_Construct_UClass_AProceduralFoliageVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProceduralFoliageVolume.OuterSingleton;
	}
	template<> FOLIAGE_API UClass* StaticClass<AProceduralFoliageVolume>()
	{
		return AProceduralFoliageVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralFoliageVolume);
	AProceduralFoliageVolume::~AProceduralFoliageVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProceduralFoliageVolume, AProceduralFoliageVolume::StaticClass, TEXT("AProceduralFoliageVolume"), &Z_Registration_Info_UClass_AProceduralFoliageVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProceduralFoliageVolume), 4008031105U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageVolume_h_1710564422(TEXT("/Script/Foliage"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
