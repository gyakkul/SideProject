// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoseSearch/PoseSearchDatabaseSet.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchDatabaseSet() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchDatabaseSet();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchDatabaseSet_NoRegister();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchSearchableAsset();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchSearchableAsset_NoRegister();
	POSESEARCH_API UEnum* Z_Construct_UEnum_PoseSearch_EPoseSearchPostSearchStatus();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPoseSearchPostSearchStatus;
	static UEnum* EPoseSearchPostSearchStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPoseSearchPostSearchStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPoseSearchPostSearchStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchPostSearchStatus, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("EPoseSearchPostSearchStatus"));
		}
		return Z_Registration_Info_UEnum_EPoseSearchPostSearchStatus.OuterSingleton;
	}
	template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchPostSearchStatus>()
	{
		return EPoseSearchPostSearchStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_PoseSearch_EPoseSearchPostSearchStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PoseSearch_EPoseSearchPostSearchStatus_Statics::Enumerators[] = {
		{ "EPoseSearchPostSearchStatus::Continue", (int64)EPoseSearchPostSearchStatus::Continue },
		{ "EPoseSearchPostSearchStatus::Stop", (int64)EPoseSearchPostSearchStatus::Stop },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PoseSearch_EPoseSearchPostSearchStatus_Statics::Enum_MetaDataParams[] = {
		{ "Continue.Comment", "// Continue looking for results \n" },
		{ "Continue.Name", "EPoseSearchPostSearchStatus::Continue" },
		{ "Continue.ToolTip", "Continue looking for results" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabaseSet.h" },
		{ "Stop.Comment", "// Halt and return the best result\n" },
		{ "Stop.Name", "EPoseSearchPostSearchStatus::Stop" },
		{ "Stop.ToolTip", "Halt and return the best result" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PoseSearch_EPoseSearchPostSearchStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		"EPoseSearchPostSearchStatus",
		"EPoseSearchPostSearchStatus",
		Z_Construct_UEnum_PoseSearch_EPoseSearchPostSearchStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPoseSearchPostSearchStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PoseSearch_EPoseSearchPostSearchStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPoseSearchPostSearchStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PoseSearch_EPoseSearchPostSearchStatus()
	{
		if (!Z_Registration_Info_UEnum_EPoseSearchPostSearchStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPoseSearchPostSearchStatus.InnerSingleton, Z_Construct_UEnum_PoseSearch_EPoseSearchPostSearchStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPoseSearchPostSearchStatus.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSetEntry;
class UScriptStruct* FPoseSearchDatabaseSetEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSetEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSetEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchDatabaseSetEntry"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSetEntry.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchDatabaseSetEntry>()
{
	return FPoseSearchDatabaseSetEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Searchable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Searchable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PostSearchStatus_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostSearchStatus_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PostSearchStatus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Animation|Pose Search" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabaseSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchDatabaseSetEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::NewProp_Searchable_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabaseSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::NewProp_Searchable = { "Searchable", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchDatabaseSetEntry, Searchable), Z_Construct_UClass_UPoseSearchSearchableAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::NewProp_Searchable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::NewProp_Searchable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabaseSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchDatabaseSetEntry, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::NewProp_Tag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::NewProp_PostSearchStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::NewProp_PostSearchStatus_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabaseSet.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::NewProp_PostSearchStatus = { "PostSearchStatus", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchDatabaseSetEntry, PostSearchStatus), Z_Construct_UEnum_PoseSearch_EPoseSearchPostSearchStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::NewProp_PostSearchStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::NewProp_PostSearchStatus_MetaData)) }; // 2094475000
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::NewProp_Searchable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::NewProp_PostSearchStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::NewProp_PostSearchStatus,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		&NewStructOps,
		"PoseSearchDatabaseSetEntry",
		sizeof(FPoseSearchDatabaseSetEntry),
		alignof(FPoseSearchDatabaseSetEntry),
		Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSetEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSetEntry.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSetEntry.InnerSingleton;
	}
	void UPoseSearchDatabaseSet::StaticRegisterNativesUPoseSearchDatabaseSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchDatabaseSet);
	UClass* Z_Construct_UClass_UPoseSearchDatabaseSet_NoRegister()
	{
		return UPoseSearchDatabaseSet::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchDatabaseSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetsToSearch_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetsToSearch_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetsToSearch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateContinuingPoseFirst_MetaData[];
#endif
		static void NewProp_bEvaluateContinuingPoseFirst_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateContinuingPoseFirst;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseSearchSearchableAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Animation|Pose Search" },
		{ "Comment", "/** A data asset which holds a collection searchable assets. */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "PoseSearch/PoseSearchDatabaseSet.h" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabaseSet.h" },
		{ "ToolTip", "A data asset which holds a collection searchable assets." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::NewProp_AssetsToSearch_Inner = { "AssetsToSearch", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry, METADATA_PARAMS(nullptr, 0) }; // 218868488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::NewProp_AssetsToSearch_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabaseSet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::NewProp_AssetsToSearch = { "AssetsToSearch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabaseSet, AssetsToSearch), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::NewProp_AssetsToSearch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::NewProp_AssetsToSearch_MetaData)) }; // 218868488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::NewProp_bEvaluateContinuingPoseFirst_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// if there's a valid continuing pose and bEvaluateContinuingPoseFirst is true, the continuing pose will be evaluated as first search,\n// otherwise it'll be evaluated with the related database: if the database is not active the continuing pose evaluation will be skipped\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabaseSet.h" },
		{ "ToolTip", "if there's a valid continuing pose and bEvaluateContinuingPoseFirst is true, the continuing pose will be evaluated as first search,\notherwise it'll be evaluated with the related database: if the database is not active the continuing pose evaluation will be skipped" },
	};
#endif
	void Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::NewProp_bEvaluateContinuingPoseFirst_SetBit(void* Obj)
	{
		((UPoseSearchDatabaseSet*)Obj)->bEvaluateContinuingPoseFirst = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::NewProp_bEvaluateContinuingPoseFirst = { "bEvaluateContinuingPoseFirst", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPoseSearchDatabaseSet), &Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::NewProp_bEvaluateContinuingPoseFirst_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::NewProp_bEvaluateContinuingPoseFirst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::NewProp_bEvaluateContinuingPoseFirst_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::NewProp_AssetsToSearch_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::NewProp_AssetsToSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::NewProp_bEvaluateContinuingPoseFirst,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchDatabaseSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::ClassParams = {
		&UPoseSearchDatabaseSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseSearchDatabaseSet()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchDatabaseSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchDatabaseSet.OuterSingleton, Z_Construct_UClass_UPoseSearchDatabaseSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchDatabaseSet.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UPoseSearchDatabaseSet>()
	{
		return UPoseSearchDatabaseSet::StaticClass();
	}
	UPoseSearchDatabaseSet::UPoseSearchDatabaseSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchDatabaseSet);
	UPoseSearchDatabaseSet::~UPoseSearchDatabaseSet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabaseSet_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabaseSet_h_Statics::EnumInfo[] = {
		{ EPoseSearchPostSearchStatus_StaticEnum, TEXT("EPoseSearchPostSearchStatus"), &Z_Registration_Info_UEnum_EPoseSearchPostSearchStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2094475000U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabaseSet_h_Statics::ScriptStructInfo[] = {
		{ FPoseSearchDatabaseSetEntry::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchDatabaseSetEntry_Statics::NewStructOps, TEXT("PoseSearchDatabaseSetEntry"), &Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSetEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchDatabaseSetEntry), 218868488U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabaseSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSearchDatabaseSet, UPoseSearchDatabaseSet::StaticClass, TEXT("UPoseSearchDatabaseSet"), &Z_Registration_Info_UClass_UPoseSearchDatabaseSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchDatabaseSet), 3067372361U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabaseSet_h_2630293296(TEXT("/Script/PoseSearch"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabaseSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabaseSet_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabaseSet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabaseSet_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabaseSet_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabaseSet_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
