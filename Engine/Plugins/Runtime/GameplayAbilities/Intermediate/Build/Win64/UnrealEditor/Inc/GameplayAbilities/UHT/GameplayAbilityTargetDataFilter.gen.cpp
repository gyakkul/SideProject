// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/GameplayAbilityTargetDataFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityTargetDataFilter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTargetDataFilter();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETargetDataFilterSelf;
	static UEnum* ETargetDataFilterSelf_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETargetDataFilterSelf.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETargetDataFilterSelf.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ETargetDataFilterSelf"));
		}
		return Z_Registration_Info_UEnum_ETargetDataFilterSelf.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<ETargetDataFilterSelf::Type>()
	{
		return ETargetDataFilterSelf_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf_Statics::Enumerators[] = {
		{ "ETargetDataFilterSelf::TDFS_Any", (int64)ETargetDataFilterSelf::TDFS_Any },
		{ "ETargetDataFilterSelf::TDFS_NoSelf", (int64)ETargetDataFilterSelf::TDFS_NoSelf },
		{ "ETargetDataFilterSelf::TDFS_NoOthers", (int64)ETargetDataFilterSelf::TDFS_NoOthers },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Set rather it is possible to target self */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetDataFilter.h" },
		{ "TDFS_Any.DisplayName", "Allow self or others" },
		{ "TDFS_Any.Name", "ETargetDataFilterSelf::TDFS_Any" },
		{ "TDFS_NoOthers.DisplayName", "Filter others out" },
		{ "TDFS_NoOthers.Name", "ETargetDataFilterSelf::TDFS_NoOthers" },
		{ "TDFS_NoSelf.DisplayName", "Filter self out" },
		{ "TDFS_NoSelf.Name", "ETargetDataFilterSelf::TDFS_NoSelf" },
		{ "ToolTip", "Set rather it is possible to target self" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"ETargetDataFilterSelf",
		"ETargetDataFilterSelf::Type",
		Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf()
	{
		if (!Z_Registration_Info_UEnum_ETargetDataFilterSelf.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETargetDataFilterSelf.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETargetDataFilterSelf.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTargetDataFilter;
class UScriptStruct* FGameplayTargetDataFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTargetDataFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTargetDataFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTargetDataFilter, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayTargetDataFilter"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTargetDataFilter.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayTargetDataFilter>()
{
	return FGameplayTargetDataFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelfActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelfActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RequiredActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelfFilter_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelfFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverseFilter_MetaData[];
#endif
		static void NewProp_bReverseFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Simple actor target filter, games can subclass this */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetDataFilter.h" },
		{ "ToolTip", "Simple actor target filter, games can subclass this" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTargetDataFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_SelfActor_MetaData[] = {
		{ "Comment", "/** Actor we're comparing against. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetDataFilter.h" },
		{ "ToolTip", "Actor we're comparing against." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTargetDataFilter, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_SelfActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_SelfActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_RequiredActorClass_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/** Subclass actors must be to pass the filter. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetDataFilter.h" },
		{ "ToolTip", "Subclass actors must be to pass the filter." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_RequiredActorClass = { "RequiredActorClass", nullptr, (EPropertyFlags)0x0015000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTargetDataFilter, RequiredActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_RequiredActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_RequiredActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_SelfFilter_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/** Filter based on whether or not this actor is \"self.\" */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetDataFilter.h" },
		{ "ToolTip", "Filter based on whether or not this actor is \"self.\"" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_SelfFilter = { "SelfFilter", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTargetDataFilter, SelfFilter), Z_Construct_UEnum_GameplayAbilities_ETargetDataFilterSelf, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_SelfFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_SelfFilter_MetaData)) }; // 2942240967
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_bReverseFilter_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/** Reverses the meaning of the filter, so it will exclude all actors that pass. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetDataFilter.h" },
		{ "ToolTip", "Reverses the meaning of the filter, so it will exclude all actors that pass." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_bReverseFilter_SetBit(void* Obj)
	{
		((FGameplayTargetDataFilter*)Obj)->bReverseFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_bReverseFilter = { "bReverseFilter", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGameplayTargetDataFilter), &Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_bReverseFilter_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_bReverseFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_bReverseFilter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_SelfActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_RequiredActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_SelfFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewProp_bReverseFilter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayTargetDataFilter",
		sizeof(FGameplayTargetDataFilter),
		alignof(FGameplayTargetDataFilter),
		Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTargetDataFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTargetDataFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTargetDataFilter.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTargetDataFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTargetDataFilterHandle;
class UScriptStruct* FGameplayTargetDataFilterHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTargetDataFilterHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTargetDataFilterHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayTargetDataFilterHandle"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTargetDataFilterHandle.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayTargetDataFilterHandle>()
{
	return FGameplayTargetDataFilterHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Polymorphic handle to filter structure that handles checking if actors should be targeted */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetDataFilter.h" },
		{ "ToolTip", "Polymorphic handle to filter structure that handles checking if actors should be targeted" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTargetDataFilterHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayTargetDataFilterHandle",
		sizeof(FGameplayTargetDataFilterHandle),
		alignof(FGameplayTargetDataFilterHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTargetDataFilterHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTargetDataFilterHandle.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTargetDataFilterHandle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetDataFilter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetDataFilter_h_Statics::EnumInfo[] = {
		{ ETargetDataFilterSelf_StaticEnum, TEXT("ETargetDataFilterSelf"), &Z_Registration_Info_UEnum_ETargetDataFilterSelf, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2942240967U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetDataFilter_h_Statics::ScriptStructInfo[] = {
		{ FGameplayTargetDataFilter::StaticStruct, Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics::NewStructOps, TEXT("GameplayTargetDataFilter"), &Z_Registration_Info_UScriptStruct_GameplayTargetDataFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTargetDataFilter), 3320913145U) },
		{ FGameplayTargetDataFilterHandle::StaticStruct, Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle_Statics::NewStructOps, TEXT("GameplayTargetDataFilterHandle"), &Z_Registration_Info_UScriptStruct_GameplayTargetDataFilterHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTargetDataFilterHandle), 3502446820U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetDataFilter_h_3280106517(TEXT("/Script/GameplayAbilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetDataFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetDataFilter_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetDataFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetDataFilter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
