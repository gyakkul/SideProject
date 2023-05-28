// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCueSet.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueSet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueSet();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueSet_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotifyData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueNotifyData;
class UScriptStruct* FGameplayCueNotifyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotifyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueNotifyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueNotifyData, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueNotifyData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotifyData.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueNotifyData>()
{
	return FGameplayCueNotifyData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueNotifyObj_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueNotifyObj;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedGameplayCueClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_LoadedGameplayCueClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayCueSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueNotifyData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewProp_GameplayCueTag_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "ModuleRelativePath", "Public/GameplayCueSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueNotifyData, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewProp_GameplayCueTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewProp_GameplayCueTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewProp_GameplayCueNotifyObj_MetaData[] = {
		{ "AllowedClasses", "/Script/GameplayAbilities.GameplayCueNotify_Static, /Script/GameplayAbilities.GameplayCueNotify_Actor" },
		{ "Category", "GameplayCue" },
		{ "ModuleRelativePath", "Public/GameplayCueSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewProp_GameplayCueNotifyObj = { "GameplayCueNotifyObj", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueNotifyData, GameplayCueNotifyObj), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewProp_GameplayCueNotifyObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewProp_GameplayCueNotifyObj_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewProp_LoadedGameplayCueClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayCueSet.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewProp_LoadedGameplayCueClass = { "LoadedGameplayCueClass", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueNotifyData, LoadedGameplayCueClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewProp_LoadedGameplayCueClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewProp_LoadedGameplayCueClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewProp_GameplayCueTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewProp_GameplayCueNotifyObj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewProp_LoadedGameplayCueClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayCueNotifyData",
		sizeof(FGameplayCueNotifyData),
		alignof(FGameplayCueNotifyData),
		Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotifyData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayCueNotifyData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueNotifyData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayCueNotifyData.InnerSingleton;
	}
	void UGameplayCueSet::StaticRegisterNativesUGameplayCueSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayCueSet);
	UClass* Z_Construct_UClass_UGameplayCueSet_NoRegister()
	{
		return UGameplayCueSet::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayCueSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayCueData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayCueSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""A set of gameplay cue actors to handle gameplay cue events\n */" },
		{ "IncludePath", "GameplayCueSet.h" },
		{ "ModuleRelativePath", "Public/GameplayCueSet.h" },
		{ "ToolTip", "A set of gameplay cue actors to handle gameplay cue events" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayCueSet_Statics::NewProp_GameplayCueData_Inner = { "GameplayCueData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayCueNotifyData, METADATA_PARAMS(nullptr, 0) }; // 2348757425
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueSet_Statics::NewProp_GameplayCueData_MetaData[] = {
		{ "Category", "CueSet" },
		{ "ModuleRelativePath", "Public/GameplayCueSet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayCueSet_Statics::NewProp_GameplayCueData = { "GameplayCueData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayCueSet, GameplayCueData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayCueSet_Statics::NewProp_GameplayCueData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueSet_Statics::NewProp_GameplayCueData_MetaData)) }; // 2348757425
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayCueSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueSet_Statics::NewProp_GameplayCueData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueSet_Statics::NewProp_GameplayCueData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayCueSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayCueSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayCueSet_Statics::ClassParams = {
		&UGameplayCueSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayCueSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueSet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayCueSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayCueSet()
	{
		if (!Z_Registration_Info_UClass_UGameplayCueSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayCueSet.OuterSingleton, Z_Construct_UClass_UGameplayCueSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayCueSet.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayCueSet>()
	{
		return UGameplayCueSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayCueSet);
	UGameplayCueSet::~UGameplayCueSet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueSet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueSet_h_Statics::ScriptStructInfo[] = {
		{ FGameplayCueNotifyData::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics::NewStructOps, TEXT("GameplayCueNotifyData"), &Z_Registration_Info_UScriptStruct_GameplayCueNotifyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueNotifyData), 2348757425U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayCueSet, UGameplayCueSet::StaticClass, TEXT("UGameplayCueSet"), &Z_Registration_Info_UClass_UGameplayCueSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayCueSet), 3628119207U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueSet_h_1688557190(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueSet_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueSet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueSet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
