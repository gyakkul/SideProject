// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Builtin/PropertyTypeFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyTypeFilter() {}
// Cross Module References
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UPropertySelectorFilter();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UPropertyTypeFilter();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UPropertyTypeFilter_NoRegister();
	LEVELSNAPSHOTFILTERS_API UEnum* Z_Construct_UEnum_LevelSnapshotFilters_EBlueprintPropertyType();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotFilters();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlueprintPropertyType;
	static UEnum* EBlueprintPropertyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlueprintPropertyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlueprintPropertyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LevelSnapshotFilters_EBlueprintPropertyType, (UObject*)Z_Construct_UPackage__Script_LevelSnapshotFilters(), TEXT("EBlueprintPropertyType"));
		}
		return Z_Registration_Info_UEnum_EBlueprintPropertyType.OuterSingleton;
	}
	template<> LEVELSNAPSHOTFILTERS_API UEnum* StaticEnum<EBlueprintPropertyType::Type>()
	{
		return EBlueprintPropertyType_StaticEnum();
	}
	struct Z_Construct_UEnum_LevelSnapshotFilters_EBlueprintPropertyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LevelSnapshotFilters_EBlueprintPropertyType_Statics::Enumerators[] = {
		{ "EBlueprintPropertyType::Byte", (int64)EBlueprintPropertyType::Byte },
		{ "EBlueprintPropertyType::Int", (int64)EBlueprintPropertyType::Int },
		{ "EBlueprintPropertyType::Int64", (int64)EBlueprintPropertyType::Int64 },
		{ "EBlueprintPropertyType::Bool", (int64)EBlueprintPropertyType::Bool },
		{ "EBlueprintPropertyType::Float", (int64)EBlueprintPropertyType::Float },
		{ "EBlueprintPropertyType::ObjectReference", (int64)EBlueprintPropertyType::ObjectReference },
		{ "EBlueprintPropertyType::Name", (int64)EBlueprintPropertyType::Name },
		{ "EBlueprintPropertyType::Interface", (int64)EBlueprintPropertyType::Interface },
		{ "EBlueprintPropertyType::Struct", (int64)EBlueprintPropertyType::Struct },
		{ "EBlueprintPropertyType::String", (int64)EBlueprintPropertyType::String },
		{ "EBlueprintPropertyType::Text", (int64)EBlueprintPropertyType::Text },
		{ "EBlueprintPropertyType::WeakObjectReference", (int64)EBlueprintPropertyType::WeakObjectReference },
		{ "EBlueprintPropertyType::SoftObjectReference", (int64)EBlueprintPropertyType::SoftObjectReference },
		{ "EBlueprintPropertyType::Double", (int64)EBlueprintPropertyType::Double },
		{ "EBlueprintPropertyType::Array", (int64)EBlueprintPropertyType::Array },
		{ "EBlueprintPropertyType::Map", (int64)EBlueprintPropertyType::Map },
		{ "EBlueprintPropertyType::Set", (int64)EBlueprintPropertyType::Set },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LevelSnapshotFilters_EBlueprintPropertyType_Statics::Enum_MetaDataParams[] = {
		{ "Array.Name", "EBlueprintPropertyType::Array" },
		{ "Bool.Name", "EBlueprintPropertyType::Bool" },
		{ "Byte.Comment", "// CPT_NONE\n" },
		{ "Byte.Name", "EBlueprintPropertyType::Byte" },
		{ "Byte.ToolTip", "CPT_NONE" },
		{ "Comment", "// Copied from EPropertyType\n" },
		{ "Double.Name", "EBlueprintPropertyType::Double" },
		{ "Float.Comment", "//CPT_Bool8 = 10, Unsupported by Blueprints\n//CPT_Bool16 = 11, Unsupported by Blueprints\n//CPT_Bool32 = 12, Unsupported by Blueprints\n//CPT_Bool64 = 13, Unsupported by Blueprints\n" },
		{ "Float.Name", "EBlueprintPropertyType::Float" },
		{ "Float.ToolTip", "CPT_Bool8 = 10, Unsupported by Blueprints\nCPT_Bool16 = 11, Unsupported by Blueprints\nCPT_Bool32 = 12, Unsupported by Blueprints\nCPT_Bool64 = 13, Unsupported by Blueprints" },
		{ "Int.Comment", "//CPT_UInt16 = 2, Unsupported by Blueprints\n//CPT_UInt32 = 3, Unsupported by Blueprints\n//CPT_UInt64 = 4, Unsupported by Blueprints\n//CPT_Int8 = 5, Unsupported by Blueprints\n//CPT_Int16 = 6, Unsupported by Blueprints\n" },
		{ "Int.Name", "EBlueprintPropertyType::Int" },
		{ "Int.ToolTip", "CPT_UInt16 = 2, Unsupported by Blueprints\nCPT_UInt32 = 3, Unsupported by Blueprints\nCPT_UInt64 = 4, Unsupported by Blueprints\nCPT_Int8 = 5, Unsupported by Blueprints\nCPT_Int16 = 6, Unsupported by Blueprints" },
		{ "Int64.Name", "EBlueprintPropertyType::Int64" },
		{ "Interface.Comment", "//CPT_Delegate = 17, Not useful for level snapshots\n" },
		{ "Interface.Name", "EBlueprintPropertyType::Interface" },
		{ "Interface.ToolTip", "CPT_Delegate = 17, Not useful for level snapshots" },
		{ "Map.Name", "EBlueprintPropertyType::Map" },
		{ "ModuleRelativePath", "Public/Builtin/PropertyTypeFilter.h" },
		{ "Name.Name", "EBlueprintPropertyType::Name" },
		{ "ObjectReference.Name", "EBlueprintPropertyType::ObjectReference" },
		{ "Set.Name", "EBlueprintPropertyType::Set" },
		{ "SoftObjectReference.Comment", "// CPT_LazyObjectReference = 27, No idea what this is; probably not useful for Blueprints\n" },
		{ "SoftObjectReference.Name", "EBlueprintPropertyType::SoftObjectReference" },
		{ "SoftObjectReference.ToolTip", "CPT_LazyObjectReference = 27, No idea what this is; probably not useful for Blueprints" },
		{ "String.Comment", "//CPT_Unused_Index_21 = 21,\n//CPT_Unused_Index_22 = 22,\n" },
		{ "String.Name", "EBlueprintPropertyType::String" },
		{ "String.ToolTip", "CPT_Unused_Index_21 = 21,\nCPT_Unused_Index_22 = 22," },
		{ "Struct.Comment", "// CPT_Unused_Index_19 = 19,\n" },
		{ "Struct.Name", "EBlueprintPropertyType::Struct" },
		{ "Struct.ToolTip", "CPT_Unused_Index_19 = 19," },
		{ "Text.Name", "EBlueprintPropertyType::Text" },
		{ "ToolTip", "Copied from EPropertyType" },
		{ "WeakObjectReference.Comment", "// CPT_MulticastDelegate = 25, Not useful for level snapshots\n" },
		{ "WeakObjectReference.Name", "EBlueprintPropertyType::WeakObjectReference" },
		{ "WeakObjectReference.ToolTip", "CPT_MulticastDelegate = 25, Not useful for level snapshots" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LevelSnapshotFilters_EBlueprintPropertyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
		nullptr,
		"EBlueprintPropertyType",
		"EBlueprintPropertyType::Type",
		Z_Construct_UEnum_LevelSnapshotFilters_EBlueprintPropertyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshotFilters_EBlueprintPropertyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_LevelSnapshotFilters_EBlueprintPropertyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshotFilters_EBlueprintPropertyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LevelSnapshotFilters_EBlueprintPropertyType()
	{
		if (!Z_Registration_Info_UEnum_EBlueprintPropertyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlueprintPropertyType.InnerSingleton, Z_Construct_UEnum_LevelSnapshotFilters_EBlueprintPropertyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlueprintPropertyType.InnerSingleton;
	}
	void UPropertyTypeFilter::StaticRegisterNativesUPropertyTypeFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertyTypeFilter);
	UClass* Z_Construct_UClass_UPropertyTypeFilter_NoRegister()
	{
		return UPropertyTypeFilter::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyTypeFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedTypes_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedTypes_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AllowedTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyTypeFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertySelectorFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyTypeFilter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows a property if it is of a certain type.\n *\n * Use case: You want to include only int properties.\n */" },
		{ "IncludePath", "Builtin/PropertyTypeFilter.h" },
		{ "ModuleRelativePath", "Public/Builtin/PropertyTypeFilter.h" },
		{ "ToolTip", "Allows a property if it is of a certain type.\n\nUse case: You want to include only int properties." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPropertyTypeFilter_Statics::NewProp_AllowedTypes_ElementProp = { "AllowedTypes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_LevelSnapshotFilters_EBlueprintPropertyType, METADATA_PARAMS(nullptr, 0) }; // 1349177603
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyTypeFilter_Statics::NewProp_AllowedTypes_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/* The property types that you want to allow */" },
		{ "ModuleRelativePath", "Public/Builtin/PropertyTypeFilter.h" },
		{ "ToolTip", "The property types that you want to allow" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPropertyTypeFilter_Statics::NewProp_AllowedTypes = { "AllowedTypes", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyTypeFilter, AllowedTypes), METADATA_PARAMS(Z_Construct_UClass_UPropertyTypeFilter_Statics::NewProp_AllowedTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyTypeFilter_Statics::NewProp_AllowedTypes_MetaData)) }; // 1349177603
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPropertyTypeFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyTypeFilter_Statics::NewProp_AllowedTypes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyTypeFilter_Statics::NewProp_AllowedTypes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyTypeFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyTypeFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertyTypeFilter_Statics::ClassParams = {
		&UPropertyTypeFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPropertyTypeFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyTypeFilter_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertyTypeFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyTypeFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyTypeFilter()
	{
		if (!Z_Registration_Info_UClass_UPropertyTypeFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertyTypeFilter.OuterSingleton, Z_Construct_UClass_UPropertyTypeFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPropertyTypeFilter.OuterSingleton;
	}
	template<> LEVELSNAPSHOTFILTERS_API UClass* StaticClass<UPropertyTypeFilter>()
	{
		return UPropertyTypeFilter::StaticClass();
	}
	UPropertyTypeFilter::UPropertyTypeFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyTypeFilter);
	UPropertyTypeFilter::~UPropertyTypeFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertyTypeFilter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertyTypeFilter_h_Statics::EnumInfo[] = {
		{ EBlueprintPropertyType_StaticEnum, TEXT("EBlueprintPropertyType"), &Z_Registration_Info_UEnum_EBlueprintPropertyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1349177603U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertyTypeFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPropertyTypeFilter, UPropertyTypeFilter::StaticClass, TEXT("UPropertyTypeFilter"), &Z_Registration_Info_UClass_UPropertyTypeFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertyTypeFilter), 3245648936U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertyTypeFilter_h_1283031952(TEXT("/Script/LevelSnapshotFilters"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertyTypeFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertyTypeFilter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertyTypeFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertyTypeFilter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
