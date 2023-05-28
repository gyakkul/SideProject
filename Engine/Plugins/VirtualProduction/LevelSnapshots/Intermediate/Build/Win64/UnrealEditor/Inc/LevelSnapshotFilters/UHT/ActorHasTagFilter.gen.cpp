// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Builtin/ActorHasTagFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorHasTagFilter() {}
// Cross Module References
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UActorHasTagFilter();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UActorHasTagFilter_NoRegister();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UActorSelectorFilter();
	LEVELSNAPSHOTFILTERS_API UEnum* Z_Construct_UEnum_LevelSnapshotFilters_EActorToCheck();
	LEVELSNAPSHOTFILTERS_API UEnum* Z_Construct_UEnum_LevelSnapshotFilters_ETagCheckingBehavior();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotFilters();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActorToCheck;
	static UEnum* EActorToCheck_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EActorToCheck.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EActorToCheck.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LevelSnapshotFilters_EActorToCheck, (UObject*)Z_Construct_UPackage__Script_LevelSnapshotFilters(), TEXT("EActorToCheck"));
		}
		return Z_Registration_Info_UEnum_EActorToCheck.OuterSingleton;
	}
	template<> LEVELSNAPSHOTFILTERS_API UEnum* StaticEnum<EActorToCheck::Type>()
	{
		return EActorToCheck_StaticEnum();
	}
	struct Z_Construct_UEnum_LevelSnapshotFilters_EActorToCheck_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LevelSnapshotFilters_EActorToCheck_Statics::Enumerators[] = {
		{ "EActorToCheck::WorldActor", (int64)EActorToCheck::WorldActor },
		{ "EActorToCheck::SnapshotActor", (int64)EActorToCheck::SnapshotActor },
		{ "EActorToCheck::Both", (int64)EActorToCheck::Both },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LevelSnapshotFilters_EActorToCheck_Statics::Enum_MetaDataParams[] = {
		{ "Both.Comment", "/* Checks the tags of both actors. */" },
		{ "Both.Name", "EActorToCheck::Both" },
		{ "Both.ToolTip", "Checks the tags of both actors." },
		{ "ModuleRelativePath", "Public/Builtin/ActorHasTagFilter.h" },
		{ "SnapshotActor.Comment", "/* Checks only the tags of the snapshot actor */" },
		{ "SnapshotActor.Name", "EActorToCheck::SnapshotActor" },
		{ "SnapshotActor.ToolTip", "Checks only the tags of the snapshot actor" },
		{ "WorldActor.Comment", "/* Checks only the tags of the world actor */" },
		{ "WorldActor.Name", "EActorToCheck::WorldActor" },
		{ "WorldActor.ToolTip", "Checks only the tags of the world actor" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LevelSnapshotFilters_EActorToCheck_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
		nullptr,
		"EActorToCheck",
		"EActorToCheck::Type",
		Z_Construct_UEnum_LevelSnapshotFilters_EActorToCheck_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshotFilters_EActorToCheck_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_LevelSnapshotFilters_EActorToCheck_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshotFilters_EActorToCheck_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LevelSnapshotFilters_EActorToCheck()
	{
		if (!Z_Registration_Info_UEnum_EActorToCheck.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActorToCheck.InnerSingleton, Z_Construct_UEnum_LevelSnapshotFilters_EActorToCheck_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EActorToCheck.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETagCheckingBehavior;
	static UEnum* ETagCheckingBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETagCheckingBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETagCheckingBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LevelSnapshotFilters_ETagCheckingBehavior, (UObject*)Z_Construct_UPackage__Script_LevelSnapshotFilters(), TEXT("ETagCheckingBehavior"));
		}
		return Z_Registration_Info_UEnum_ETagCheckingBehavior.OuterSingleton;
	}
	template<> LEVELSNAPSHOTFILTERS_API UEnum* StaticEnum<ETagCheckingBehavior::Type>()
	{
		return ETagCheckingBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_LevelSnapshotFilters_ETagCheckingBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LevelSnapshotFilters_ETagCheckingBehavior_Statics::Enumerators[] = {
		{ "ETagCheckingBehavior::HasAllTags", (int64)ETagCheckingBehavior::HasAllTags },
		{ "ETagCheckingBehavior::HasAnyTag", (int64)ETagCheckingBehavior::HasAnyTag },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LevelSnapshotFilters_ETagCheckingBehavior_Statics::Enum_MetaDataParams[] = {
		{ "HasAllTags.Comment", "/* Actor must have all tags to pass */" },
		{ "HasAllTags.Name", "ETagCheckingBehavior::HasAllTags" },
		{ "HasAllTags.ToolTip", "Actor must have all tags to pass" },
		{ "HasAnyTag.Comment", "/* Actor must have at least one of the tags */" },
		{ "HasAnyTag.Name", "ETagCheckingBehavior::HasAnyTag" },
		{ "HasAnyTag.ToolTip", "Actor must have at least one of the tags" },
		{ "ModuleRelativePath", "Public/Builtin/ActorHasTagFilter.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LevelSnapshotFilters_ETagCheckingBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
		nullptr,
		"ETagCheckingBehavior",
		"ETagCheckingBehavior::Type",
		Z_Construct_UEnum_LevelSnapshotFilters_ETagCheckingBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshotFilters_ETagCheckingBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_LevelSnapshotFilters_ETagCheckingBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshotFilters_ETagCheckingBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LevelSnapshotFilters_ETagCheckingBehavior()
	{
		if (!Z_Registration_Info_UEnum_ETagCheckingBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETagCheckingBehavior.InnerSingleton, Z_Construct_UEnum_LevelSnapshotFilters_ETagCheckingBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETagCheckingBehavior.InnerSingleton;
	}
	void UActorHasTagFilter::StaticRegisterNativesUActorHasTagFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorHasTagFilter);
	UClass* Z_Construct_UClass_UActorHasTagFilter_NoRegister()
	{
		return UActorHasTagFilter::StaticClass();
	}
	struct Z_Construct_UClass_UActorHasTagFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagCheckingBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TagCheckingBehavior;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AllowedTags_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedTags_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AllowedTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToCheck_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorToCheck;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorHasTagFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorSelectorFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorHasTagFilter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* Allows an actor if it has all or any of the specified tags. */" },
		{ "CommonSnapshotFilter", "" },
		{ "IncludePath", "Builtin/ActorHasTagFilter.h" },
		{ "ModuleRelativePath", "Public/Builtin/ActorHasTagFilter.h" },
		{ "ToolTip", "Allows an actor if it has all or any of the specified tags." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorHasTagFilter_Statics::NewProp_TagCheckingBehavior_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/* How to match AllowedTags in each actor. */" },
		{ "ModuleRelativePath", "Public/Builtin/ActorHasTagFilter.h" },
		{ "ToolTip", "How to match AllowedTags in each actor." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UActorHasTagFilter_Statics::NewProp_TagCheckingBehavior = { "TagCheckingBehavior", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorHasTagFilter, TagCheckingBehavior), Z_Construct_UEnum_LevelSnapshotFilters_ETagCheckingBehavior, METADATA_PARAMS(Z_Construct_UClass_UActorHasTagFilter_Statics::NewProp_TagCheckingBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorHasTagFilter_Statics::NewProp_TagCheckingBehavior_MetaData)) }; // 2112963923
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UActorHasTagFilter_Statics::NewProp_AllowedTags_ElementProp = { "AllowedTags", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorHasTagFilter_Statics::NewProp_AllowedTags_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/* The tags to check the actor for.  */" },
		{ "ModuleRelativePath", "Public/Builtin/ActorHasTagFilter.h" },
		{ "ToolTip", "The tags to check the actor for." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UActorHasTagFilter_Statics::NewProp_AllowedTags = { "AllowedTags", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorHasTagFilter, AllowedTags), METADATA_PARAMS(Z_Construct_UClass_UActorHasTagFilter_Statics::NewProp_AllowedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorHasTagFilter_Statics::NewProp_AllowedTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorHasTagFilter_Statics::NewProp_ActorToCheck_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/* Which of the actors we should check the tags on. */" },
		{ "ModuleRelativePath", "Public/Builtin/ActorHasTagFilter.h" },
		{ "ToolTip", "Which of the actors we should check the tags on." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UActorHasTagFilter_Statics::NewProp_ActorToCheck = { "ActorToCheck", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorHasTagFilter, ActorToCheck), Z_Construct_UEnum_LevelSnapshotFilters_EActorToCheck, METADATA_PARAMS(Z_Construct_UClass_UActorHasTagFilter_Statics::NewProp_ActorToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorHasTagFilter_Statics::NewProp_ActorToCheck_MetaData)) }; // 2181799964
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorHasTagFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorHasTagFilter_Statics::NewProp_TagCheckingBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorHasTagFilter_Statics::NewProp_AllowedTags_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorHasTagFilter_Statics::NewProp_AllowedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorHasTagFilter_Statics::NewProp_ActorToCheck,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorHasTagFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorHasTagFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorHasTagFilter_Statics::ClassParams = {
		&UActorHasTagFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorHasTagFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorHasTagFilter_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorHasTagFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorHasTagFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorHasTagFilter()
	{
		if (!Z_Registration_Info_UClass_UActorHasTagFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorHasTagFilter.OuterSingleton, Z_Construct_UClass_UActorHasTagFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorHasTagFilter.OuterSingleton;
	}
	template<> LEVELSNAPSHOTFILTERS_API UClass* StaticClass<UActorHasTagFilter>()
	{
		return UActorHasTagFilter::StaticClass();
	}
	UActorHasTagFilter::UActorHasTagFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorHasTagFilter);
	UActorHasTagFilter::~UActorHasTagFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorHasTagFilter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorHasTagFilter_h_Statics::EnumInfo[] = {
		{ EActorToCheck_StaticEnum, TEXT("EActorToCheck"), &Z_Registration_Info_UEnum_EActorToCheck, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2181799964U) },
		{ ETagCheckingBehavior_StaticEnum, TEXT("ETagCheckingBehavior"), &Z_Registration_Info_UEnum_ETagCheckingBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2112963923U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorHasTagFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorHasTagFilter, UActorHasTagFilter::StaticClass, TEXT("UActorHasTagFilter"), &Z_Registration_Info_UClass_UActorHasTagFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorHasTagFilter), 1827292430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorHasTagFilter_h_148570274(TEXT("/Script/LevelSnapshotFilters"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorHasTagFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorHasTagFilter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorHasTagFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorHasTagFilter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
