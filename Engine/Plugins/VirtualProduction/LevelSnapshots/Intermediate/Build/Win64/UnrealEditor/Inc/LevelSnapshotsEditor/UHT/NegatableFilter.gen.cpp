// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Data/Filters/NegatableFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNegatableFilter() {}
// Cross Module References
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_ULevelSnapshotFilter();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_ULevelSnapshotFilter_NoRegister();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_UNegatableFilter();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_UNegatableFilter_NoRegister();
	LEVELSNAPSHOTSEDITOR_API UEnum* Z_Construct_UEnum_LevelSnapshotsEditor_EFilterBehavior();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotsEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFilterBehavior;
	static UEnum* EFilterBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFilterBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFilterBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LevelSnapshotsEditor_EFilterBehavior, (UObject*)Z_Construct_UPackage__Script_LevelSnapshotsEditor(), TEXT("EFilterBehavior"));
		}
		return Z_Registration_Info_UEnum_EFilterBehavior.OuterSingleton;
	}
	template<> LEVELSNAPSHOTSEDITOR_API UEnum* StaticEnum<EFilterBehavior>()
	{
		return EFilterBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_LevelSnapshotsEditor_EFilterBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LevelSnapshotsEditor_EFilterBehavior_Statics::Enumerators[] = {
		{ "EFilterBehavior::DoNotNegate", (int64)EFilterBehavior::DoNotNegate },
		{ "EFilterBehavior::Negate", (int64)EFilterBehavior::Negate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LevelSnapshotsEditor_EFilterBehavior_Statics::Enum_MetaDataParams[] = {
		{ "DoNotNegate.Comment", "/* Pass on same result */" },
		{ "DoNotNegate.Name", "EFilterBehavior::DoNotNegate" },
		{ "DoNotNegate.ToolTip", "Pass on same result" },
		{ "ModuleRelativePath", "Private/Data/Filters/NegatableFilter.h" },
		{ "Negate.Comment", "/* Invert the result */" },
		{ "Negate.Name", "EFilterBehavior::Negate" },
		{ "Negate.ToolTip", "Invert the result" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LevelSnapshotsEditor_EFilterBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LevelSnapshotsEditor,
		nullptr,
		"EFilterBehavior",
		"EFilterBehavior",
		Z_Construct_UEnum_LevelSnapshotsEditor_EFilterBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshotsEditor_EFilterBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LevelSnapshotsEditor_EFilterBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshotsEditor_EFilterBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LevelSnapshotsEditor_EFilterBehavior()
	{
		if (!Z_Registration_Info_UEnum_EFilterBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFilterBehavior.InnerSingleton, Z_Construct_UEnum_LevelSnapshotsEditor_EFilterBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFilterBehavior.InnerSingleton;
	}
	void UNegatableFilter::StaticRegisterNativesUNegatableFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNegatableFilter);
	UClass* Z_Construct_UClass_UNegatableFilter_NoRegister()
	{
		return UNegatableFilter::StaticClass();
	}
	struct Z_Construct_UClass_UNegatableFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FilterBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreFilter_MetaData[];
#endif
		static void NewProp_bIgnoreFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildFilter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNegatableFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULevelSnapshotFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotsEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNegatableFilter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Calls a child filter and possibly negates its results.\n */" },
		{ "IncludePath", "Data/Filters/NegatableFilter.h" },
		{ "InternalSnapshotFilter", "" },
		{ "ModuleRelativePath", "Private/Data/Filters/NegatableFilter.h" },
		{ "ToolTip", "* Calls a child filter and possibly negates its results." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNegatableFilter_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/* Display name in editor. Defaults to class name if left empty. */" },
		{ "ModuleRelativePath", "Private/Data/Filters/NegatableFilter.h" },
		{ "ToolTip", "Display name in editor. Defaults to class name if left empty." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNegatableFilter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNegatableFilter, Name), METADATA_PARAMS(Z_Construct_UClass_UNegatableFilter_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNegatableFilter_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNegatableFilter_Statics::NewProp_FilterBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNegatableFilter_Statics::NewProp_FilterBehavior_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/* Whether to pass on the result of the filter, negate it, or ignore it. */" },
		{ "ModuleRelativePath", "Private/Data/Filters/NegatableFilter.h" },
		{ "ToolTip", "Whether to pass on the result of the filter, negate it, or ignore it." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNegatableFilter_Statics::NewProp_FilterBehavior = { "FilterBehavior", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNegatableFilter, FilterBehavior), Z_Construct_UEnum_LevelSnapshotsEditor_EFilterBehavior, METADATA_PARAMS(Z_Construct_UClass_UNegatableFilter_Statics::NewProp_FilterBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNegatableFilter_Statics::NewProp_FilterBehavior_MetaData)) }; // 820360472
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNegatableFilter_Statics::NewProp_bIgnoreFilter_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/* Whether this filter should be ignored */" },
		{ "ModuleRelativePath", "Private/Data/Filters/NegatableFilter.h" },
		{ "ToolTip", "Whether this filter should be ignored" },
	};
#endif
	void Z_Construct_UClass_UNegatableFilter_Statics::NewProp_bIgnoreFilter_SetBit(void* Obj)
	{
		((UNegatableFilter*)Obj)->bIgnoreFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNegatableFilter_Statics::NewProp_bIgnoreFilter = { "bIgnoreFilter", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNegatableFilter), &Z_Construct_UClass_UNegatableFilter_Statics::NewProp_bIgnoreFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNegatableFilter_Statics::NewProp_bIgnoreFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNegatableFilter_Statics::NewProp_bIgnoreFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNegatableFilter_Statics::NewProp_ChildFilter_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Data/Filters/NegatableFilter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNegatableFilter_Statics::NewProp_ChildFilter = { "ChildFilter", nullptr, (EPropertyFlags)0x0046000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNegatableFilter, ChildFilter), Z_Construct_UClass_ULevelSnapshotFilter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNegatableFilter_Statics::NewProp_ChildFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNegatableFilter_Statics::NewProp_ChildFilter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNegatableFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNegatableFilter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNegatableFilter_Statics::NewProp_FilterBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNegatableFilter_Statics::NewProp_FilterBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNegatableFilter_Statics::NewProp_bIgnoreFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNegatableFilter_Statics::NewProp_ChildFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNegatableFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNegatableFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNegatableFilter_Statics::ClassParams = {
		&UNegatableFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNegatableFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNegatableFilter_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNegatableFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNegatableFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNegatableFilter()
	{
		if (!Z_Registration_Info_UClass_UNegatableFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNegatableFilter.OuterSingleton, Z_Construct_UClass_UNegatableFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNegatableFilter.OuterSingleton;
	}
	template<> LEVELSNAPSHOTSEDITOR_API UClass* StaticClass<UNegatableFilter>()
	{
		return UNegatableFilter::StaticClass();
	}
	UNegatableFilter::UNegatableFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNegatableFilter);
	UNegatableFilter::~UNegatableFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_NegatableFilter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_NegatableFilter_h_Statics::EnumInfo[] = {
		{ EFilterBehavior_StaticEnum, TEXT("EFilterBehavior"), &Z_Registration_Info_UEnum_EFilterBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 820360472U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_NegatableFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNegatableFilter, UNegatableFilter::StaticClass, TEXT("UNegatableFilter"), &Z_Registration_Info_UClass_UNegatableFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNegatableFilter), 1472414878U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_NegatableFilter_h_2543261009(TEXT("/Script/LevelSnapshotsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_NegatableFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_NegatableFilter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_NegatableFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_NegatableFilter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
