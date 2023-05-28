// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Builtin/PropertyHasNameFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyHasNameFilter() {}
// Cross Module References
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UPropertyHasNameFilter();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UPropertyHasNameFilter_NoRegister();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UPropertySelectorFilter();
	LEVELSNAPSHOTFILTERS_API UEnum* Z_Construct_UEnum_LevelSnapshotFilters_ENameMatchingRule();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotFilters();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENameMatchingRule;
	static UEnum* ENameMatchingRule_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENameMatchingRule.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENameMatchingRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LevelSnapshotFilters_ENameMatchingRule, (UObject*)Z_Construct_UPackage__Script_LevelSnapshotFilters(), TEXT("ENameMatchingRule"));
		}
		return Z_Registration_Info_UEnum_ENameMatchingRule.OuterSingleton;
	}
	template<> LEVELSNAPSHOTFILTERS_API UEnum* StaticEnum<ENameMatchingRule::Type>()
	{
		return ENameMatchingRule_StaticEnum();
	}
	struct Z_Construct_UEnum_LevelSnapshotFilters_ENameMatchingRule_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LevelSnapshotFilters_ENameMatchingRule_Statics::Enumerators[] = {
		{ "ENameMatchingRule::MatchesExactly", (int64)ENameMatchingRule::MatchesExactly },
		{ "ENameMatchingRule::MatchesIgnoreCase", (int64)ENameMatchingRule::MatchesIgnoreCase },
		{ "ENameMatchingRule::ContainsExactly", (int64)ENameMatchingRule::ContainsExactly },
		{ "ENameMatchingRule::ContainsIgnoreCase", (int64)ENameMatchingRule::ContainsIgnoreCase },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LevelSnapshotFilters_ENameMatchingRule_Statics::Enum_MetaDataParams[] = {
		{ "ContainsExactly.Comment", "/* The name must contains the following substring (case sensitive) */" },
		{ "ContainsExactly.Name", "ENameMatchingRule::ContainsExactly" },
		{ "ContainsExactly.ToolTip", "The name must contains the following substring (case sensitive)" },
		{ "ContainsIgnoreCase.Comment", "/* The name must contains the following substring (case insensitive) */" },
		{ "ContainsIgnoreCase.Name", "ENameMatchingRule::ContainsIgnoreCase" },
		{ "ContainsIgnoreCase.ToolTip", "The name must contains the following substring (case insensitive)" },
		{ "MatchesExactly.Comment", "/* The property name must match the given name exactly. */" },
		{ "MatchesExactly.Name", "ENameMatchingRule::MatchesExactly" },
		{ "MatchesExactly.ToolTip", "The property name must match the given name exactly." },
		{ "MatchesIgnoreCase.Comment", "/* The name must match the given name but ignores the case */" },
		{ "MatchesIgnoreCase.Name", "ENameMatchingRule::MatchesIgnoreCase" },
		{ "MatchesIgnoreCase.ToolTip", "The name must match the given name but ignores the case" },
		{ "ModuleRelativePath", "Public/Builtin/PropertyHasNameFilter.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LevelSnapshotFilters_ENameMatchingRule_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
		nullptr,
		"ENameMatchingRule",
		"ENameMatchingRule::Type",
		Z_Construct_UEnum_LevelSnapshotFilters_ENameMatchingRule_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshotFilters_ENameMatchingRule_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_LevelSnapshotFilters_ENameMatchingRule_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshotFilters_ENameMatchingRule_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LevelSnapshotFilters_ENameMatchingRule()
	{
		if (!Z_Registration_Info_UEnum_ENameMatchingRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENameMatchingRule.InnerSingleton, Z_Construct_UEnum_LevelSnapshotFilters_ENameMatchingRule_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENameMatchingRule.InnerSingleton;
	}
	void UPropertyHasNameFilter::StaticRegisterNativesUPropertyHasNameFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertyHasNameFilter);
	UClass* Z_Construct_UClass_UPropertyHasNameFilter_NoRegister()
	{
		return UPropertyHasNameFilter::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyHasNameFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameMatchingRule_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NameMatchingRule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeStructSubproperties_MetaData[];
#endif
		static void NewProp_bIncludeStructSubproperties_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeStructSubproperties;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AllowedNames_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedNames_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AllowedNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyHasNameFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertySelectorFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyHasNameFilter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows a property when is has a certain name\n * Use case: You only want to allow properties named \"MyPropertyName\"\n */" },
		{ "CommonSnapshotFilter", "" },
		{ "IncludePath", "Builtin/PropertyHasNameFilter.h" },
		{ "ModuleRelativePath", "Public/Builtin/PropertyHasNameFilter.h" },
		{ "ToolTip", "Allows a property when is has a certain name\nUse case: You only want to allow properties named \"MyPropertyName\"" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyHasNameFilter_Statics::NewProp_NameMatchingRule_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/* How to compare the property name to AllowedNames */" },
		{ "ModuleRelativePath", "Public/Builtin/PropertyHasNameFilter.h" },
		{ "ToolTip", "How to compare the property name to AllowedNames" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPropertyHasNameFilter_Statics::NewProp_NameMatchingRule = { "NameMatchingRule", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyHasNameFilter, NameMatchingRule), Z_Construct_UEnum_LevelSnapshotFilters_ENameMatchingRule, METADATA_PARAMS(Z_Construct_UClass_UPropertyHasNameFilter_Statics::NewProp_NameMatchingRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyHasNameFilter_Statics::NewProp_NameMatchingRule_MetaData)) }; // 314090563
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyHasNameFilter_Statics::NewProp_bIncludeStructSubproperties_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/**\n\x09 * Whether to implicitly include sub-properties of structs.\n\x09 *\n\x09 * Example: AllowedNames contains RelativeLocation.\n\x09 * If bIncludeStructSubproperties == true, then the properties X, Y, and Z are included. Otherwise, you must explicitly add them to AllowedNames.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Builtin/PropertyHasNameFilter.h" },
		{ "ToolTip", "Whether to implicitly include sub-properties of structs.\n\nExample: AllowedNames contains RelativeLocation.\nIf bIncludeStructSubproperties == true, then the properties X, Y, and Z are included. Otherwise, you must explicitly add them to AllowedNames." },
	};
#endif
	void Z_Construct_UClass_UPropertyHasNameFilter_Statics::NewProp_bIncludeStructSubproperties_SetBit(void* Obj)
	{
		((UPropertyHasNameFilter*)Obj)->bIncludeStructSubproperties = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPropertyHasNameFilter_Statics::NewProp_bIncludeStructSubproperties = { "bIncludeStructSubproperties", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPropertyHasNameFilter), &Z_Construct_UClass_UPropertyHasNameFilter_Statics::NewProp_bIncludeStructSubproperties_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPropertyHasNameFilter_Statics::NewProp_bIncludeStructSubproperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyHasNameFilter_Statics::NewProp_bIncludeStructSubproperties_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPropertyHasNameFilter_Statics::NewProp_AllowedNames_ElementProp = { "AllowedNames", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyHasNameFilter_Statics::NewProp_AllowedNames_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/* The names to match the property name against. */" },
		{ "ModuleRelativePath", "Public/Builtin/PropertyHasNameFilter.h" },
		{ "ToolTip", "The names to match the property name against." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPropertyHasNameFilter_Statics::NewProp_AllowedNames = { "AllowedNames", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyHasNameFilter, AllowedNames), METADATA_PARAMS(Z_Construct_UClass_UPropertyHasNameFilter_Statics::NewProp_AllowedNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyHasNameFilter_Statics::NewProp_AllowedNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPropertyHasNameFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyHasNameFilter_Statics::NewProp_NameMatchingRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyHasNameFilter_Statics::NewProp_bIncludeStructSubproperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyHasNameFilter_Statics::NewProp_AllowedNames_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyHasNameFilter_Statics::NewProp_AllowedNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyHasNameFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyHasNameFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertyHasNameFilter_Statics::ClassParams = {
		&UPropertyHasNameFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPropertyHasNameFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyHasNameFilter_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertyHasNameFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyHasNameFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyHasNameFilter()
	{
		if (!Z_Registration_Info_UClass_UPropertyHasNameFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertyHasNameFilter.OuterSingleton, Z_Construct_UClass_UPropertyHasNameFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPropertyHasNameFilter.OuterSingleton;
	}
	template<> LEVELSNAPSHOTFILTERS_API UClass* StaticClass<UPropertyHasNameFilter>()
	{
		return UPropertyHasNameFilter::StaticClass();
	}
	UPropertyHasNameFilter::UPropertyHasNameFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyHasNameFilter);
	UPropertyHasNameFilter::~UPropertyHasNameFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertyHasNameFilter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertyHasNameFilter_h_Statics::EnumInfo[] = {
		{ ENameMatchingRule_StaticEnum, TEXT("ENameMatchingRule"), &Z_Registration_Info_UEnum_ENameMatchingRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 314090563U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertyHasNameFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPropertyHasNameFilter, UPropertyHasNameFilter::StaticClass, TEXT("UPropertyHasNameFilter"), &Z_Registration_Info_UClass_UPropertyHasNameFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertyHasNameFilter), 653604946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertyHasNameFilter_h_4164588081(TEXT("/Script/LevelSnapshotFilters"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertyHasNameFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertyHasNameFilter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertyHasNameFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertyHasNameFilter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
