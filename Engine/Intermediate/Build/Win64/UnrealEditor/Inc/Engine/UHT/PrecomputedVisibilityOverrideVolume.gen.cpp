// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Lightmass/PrecomputedVisibilityOverrideVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrecomputedVisibilityOverrideVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APrecomputedVisibilityOverrideVolume();
	ENGINE_API UClass* Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void APrecomputedVisibilityOverrideVolume::StaticRegisterNativesAPrecomputedVisibilityOverrideVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APrecomputedVisibilityOverrideVolume);
	UClass* Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_NoRegister()
	{
		return APrecomputedVisibilityOverrideVolume::StaticClass();
	}
	struct Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverrideVisibleActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideVisibleActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideVisibleActors;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverrideInvisibleActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideInvisibleActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideInvisibleActors;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideInvisibleLevels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideInvisibleLevels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideInvisibleLevels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Brush Attachment Physics Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Lightmass/PrecomputedVisibilityOverrideVolume.h" },
		{ "ModuleRelativePath", "Classes/Lightmass/PrecomputedVisibilityOverrideVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideVisibleActors_Inner = { "OverrideVisibleActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideVisibleActors_MetaData[] = {
		{ "Category", "PrecomputedVisibilityOverrideVolume" },
		{ "Comment", "/** Array of actors that will always be considered visible by Precomputed Visibility when viewed from inside this volume. */" },
		{ "ModuleRelativePath", "Classes/Lightmass/PrecomputedVisibilityOverrideVolume.h" },
		{ "ToolTip", "Array of actors that will always be considered visible by Precomputed Visibility when viewed from inside this volume." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideVisibleActors = { "OverrideVisibleActors", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APrecomputedVisibilityOverrideVolume, OverrideVisibleActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideVisibleActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideVisibleActors_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideInvisibleActors_Inner = { "OverrideInvisibleActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideInvisibleActors_MetaData[] = {
		{ "Category", "PrecomputedVisibilityOverrideVolume" },
		{ "Comment", "/** Array of actors that will always be considered invisible by Precomputed Visibility when viewed from inside this volume. */" },
		{ "ModuleRelativePath", "Classes/Lightmass/PrecomputedVisibilityOverrideVolume.h" },
		{ "ToolTip", "Array of actors that will always be considered invisible by Precomputed Visibility when viewed from inside this volume." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideInvisibleActors = { "OverrideInvisibleActors", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APrecomputedVisibilityOverrideVolume, OverrideInvisibleActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideInvisibleActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideInvisibleActors_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideInvisibleLevels_Inner = { "OverrideInvisibleLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideInvisibleLevels_MetaData[] = {
		{ "Category", "PrecomputedVisibilityOverrideVolume" },
		{ "Comment", "/** Array of level names whose actors will always be considered invisible by Precomputed Visibility when viewed from inside this volume. */" },
		{ "ModuleRelativePath", "Classes/Lightmass/PrecomputedVisibilityOverrideVolume.h" },
		{ "ToolTip", "Array of level names whose actors will always be considered invisible by Precomputed Visibility when viewed from inside this volume." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideInvisibleLevels = { "OverrideInvisibleLevels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APrecomputedVisibilityOverrideVolume, OverrideInvisibleLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideInvisibleLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideInvisibleLevels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideVisibleActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideVisibleActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideInvisibleActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideInvisibleActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideInvisibleLevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideInvisibleLevels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrecomputedVisibilityOverrideVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::ClassParams = {
		&APrecomputedVisibilityOverrideVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrecomputedVisibilityOverrideVolume()
	{
		if (!Z_Registration_Info_UClass_APrecomputedVisibilityOverrideVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrecomputedVisibilityOverrideVolume.OuterSingleton, Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APrecomputedVisibilityOverrideVolume.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<APrecomputedVisibilityOverrideVolume>()
	{
		return APrecomputedVisibilityOverrideVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrecomputedVisibilityOverrideVolume);
	APrecomputedVisibilityOverrideVolume::~APrecomputedVisibilityOverrideVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_PrecomputedVisibilityOverrideVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_PrecomputedVisibilityOverrideVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APrecomputedVisibilityOverrideVolume, APrecomputedVisibilityOverrideVolume::StaticClass, TEXT("APrecomputedVisibilityOverrideVolume"), &Z_Registration_Info_UClass_APrecomputedVisibilityOverrideVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrecomputedVisibilityOverrideVolume), 3963411695U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_PrecomputedVisibilityOverrideVolume_h_1784699706(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_PrecomputedVisibilityOverrideVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_PrecomputedVisibilityOverrideVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
