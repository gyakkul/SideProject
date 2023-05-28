// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Builtin/PropertySelector/TransformPropertyFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformPropertyFilter() {}
// Cross Module References
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UPropertySelectorFilter();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UTransformPropertyFilter();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UTransformPropertyFilter_NoRegister();
	LEVELSNAPSHOTFILTERS_API UEnum* Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotFilters();
// End Cross Module References
	void UTransformPropertyFilter::StaticRegisterNativesUTransformPropertyFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransformPropertyFilter);
	UClass* Z_Construct_UClass_UTransformPropertyFilter_NoRegister()
	{
		return UTransformPropertyFilter::StaticClass();
	}
	struct Z_Construct_UClass_UTransformPropertyFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTransformPropertyFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertySelectorFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformPropertyFilter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows you to filter location, rotation, and scale properties on scene components.\n * Use case: You want to restore the location but not rotation of an actor.\n */" },
		{ "IncludePath", "Builtin/PropertySelector/TransformPropertyFilter.h" },
		{ "ModuleRelativePath", "Public/Builtin/PropertySelector/TransformPropertyFilter.h" },
		{ "ToolTip", "Allows you to filter location, rotation, and scale properties on scene components.\nUse case: You want to restore the location but not rotation of an actor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformPropertyFilter_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Transform" },
		{ "Comment", "/* Should the location property be restored? */" },
		{ "ModuleRelativePath", "Public/Builtin/PropertySelector/TransformPropertyFilter.h" },
		{ "ToolTip", "Should the location property be restored?" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTransformPropertyFilter_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformPropertyFilter, Location), Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult, METADATA_PARAMS(Z_Construct_UClass_UTransformPropertyFilter_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformPropertyFilter_Statics::NewProp_Location_MetaData)) }; // 3495860090
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformPropertyFilter_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Transform" },
		{ "Comment", "/* Should the rotation property be restored? */" },
		{ "ModuleRelativePath", "Public/Builtin/PropertySelector/TransformPropertyFilter.h" },
		{ "ToolTip", "Should the rotation property be restored?" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTransformPropertyFilter_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformPropertyFilter, Rotation), Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult, METADATA_PARAMS(Z_Construct_UClass_UTransformPropertyFilter_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformPropertyFilter_Statics::NewProp_Rotation_MetaData)) }; // 3495860090
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformPropertyFilter_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Transform" },
		{ "Comment", "/* Should the scale property be restored? */" },
		{ "ModuleRelativePath", "Public/Builtin/PropertySelector/TransformPropertyFilter.h" },
		{ "ToolTip", "Should the scale property be restored?" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTransformPropertyFilter_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformPropertyFilter, Scale), Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult, METADATA_PARAMS(Z_Construct_UClass_UTransformPropertyFilter_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformPropertyFilter_Statics::NewProp_Scale_MetaData)) }; // 3495860090
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransformPropertyFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformPropertyFilter_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformPropertyFilter_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformPropertyFilter_Statics::NewProp_Scale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTransformPropertyFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransformPropertyFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransformPropertyFilter_Statics::ClassParams = {
		&UTransformPropertyFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTransformPropertyFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTransformPropertyFilter_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTransformPropertyFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformPropertyFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTransformPropertyFilter()
	{
		if (!Z_Registration_Info_UClass_UTransformPropertyFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransformPropertyFilter.OuterSingleton, Z_Construct_UClass_UTransformPropertyFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTransformPropertyFilter.OuterSingleton;
	}
	template<> LEVELSNAPSHOTFILTERS_API UClass* StaticClass<UTransformPropertyFilter>()
	{
		return UTransformPropertyFilter::StaticClass();
	}
	UTransformPropertyFilter::UTransformPropertyFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTransformPropertyFilter);
	UTransformPropertyFilter::~UTransformPropertyFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_TransformPropertyFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_TransformPropertyFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTransformPropertyFilter, UTransformPropertyFilter::StaticClass, TEXT("UTransformPropertyFilter"), &Z_Registration_Info_UClass_UTransformPropertyFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransformPropertyFilter), 4071336234U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_TransformPropertyFilter_h_2560267901(TEXT("/Script/LevelSnapshotFilters"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_TransformPropertyFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_TransformPropertyFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
