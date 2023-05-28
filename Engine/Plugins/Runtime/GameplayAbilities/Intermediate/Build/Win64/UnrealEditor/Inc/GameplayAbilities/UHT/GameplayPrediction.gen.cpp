// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayPrediction.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayPrediction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackageMap();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FPredictionKey();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedPredictionKeyItem();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PredictionKey;
class UScriptStruct* FPredictionKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PredictionKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PredictionKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPredictionKey, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("PredictionKey"));
	}
	return Z_Registration_Info_UScriptStruct_PredictionKey.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FPredictionKey>()
{
	return FPredictionKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPredictionKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictiveConnection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PredictiveConnection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_Current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_Base;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStale_MetaData[];
#endif
		static void NewProp_bIsStale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsServerInitiated_MetaData[];
#endif
		static void NewProp_bIsServerInitiated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsServerInitiated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictionKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// PredictiveConnection\n" },
		{ "ModuleRelativePath", "Public/GameplayPrediction.h" },
		{ "ToolTip", "PredictiveConnection" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPredictionKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPredictionKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_PredictiveConnection_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayPrediction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_PredictiveConnection = { "PredictiveConnection", nullptr, (EPropertyFlags)0x0014000080000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPredictionKey, PredictiveConnection), Z_Construct_UClass_UPackageMap, METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_PredictiveConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_PredictiveConnection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_Current_MetaData[] = {
		{ "Comment", "/** The unique ID of this prediction key */" },
		{ "ModuleRelativePath", "Public/GameplayPrediction.h" },
		{ "ToolTip", "The unique ID of this prediction key" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPredictionKey, Current), METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_Current_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_Base_MetaData[] = {
		{ "Comment", "/** If non 0, the prediction key this was created from */" },
		{ "ModuleRelativePath", "Public/GameplayPrediction.h" },
		{ "ToolTip", "If non 0, the prediction key this was created from" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPredictionKey, Base), METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_Base_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_Base_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_bIsStale_MetaData[] = {
		{ "Comment", "/** If stale, this key cannot be used for more prediction */" },
		{ "ModuleRelativePath", "Public/GameplayPrediction.h" },
		{ "ToolTip", "If stale, this key cannot be used for more prediction" },
	};
#endif
	void Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_bIsStale_SetBit(void* Obj)
	{
		((FPredictionKey*)Obj)->bIsStale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_bIsStale = { "bIsStale", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPredictionKey), &Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_bIsStale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_bIsStale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_bIsStale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_bIsServerInitiated_MetaData[] = {
		{ "Comment", "/** True if this was created as a server initiated activation key, used to identify server activations but cannot be used for prediction */" },
		{ "ModuleRelativePath", "Public/GameplayPrediction.h" },
		{ "ToolTip", "True if this was created as a server initiated activation key, used to identify server activations but cannot be used for prediction" },
	};
#endif
	void Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_bIsServerInitiated_SetBit(void* Obj)
	{
		((FPredictionKey*)Obj)->bIsServerInitiated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_bIsServerInitiated = { "bIsServerInitiated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPredictionKey), &Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_bIsServerInitiated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_bIsServerInitiated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_bIsServerInitiated_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPredictionKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_PredictiveConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_Base,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_bIsStale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictionKey_Statics::NewProp_bIsServerInitiated,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPredictionKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"PredictionKey",
		sizeof(FPredictionKey),
		alignof(FPredictionKey),
		Z_Construct_UScriptStruct_FPredictionKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictionKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictionKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictionKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPredictionKey()
	{
		if (!Z_Registration_Info_UScriptStruct_PredictionKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PredictionKey.InnerSingleton, Z_Construct_UScriptStruct_FPredictionKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PredictionKey.InnerSingleton;
	}

static_assert(std::is_polymorphic<FReplicatedPredictionKeyItem>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FReplicatedPredictionKeyItem cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReplicatedPredictionKeyItem;
class UScriptStruct* FReplicatedPredictionKeyItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReplicatedPredictionKeyItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReplicatedPredictionKeyItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplicatedPredictionKeyItem, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ReplicatedPredictionKeyItem"));
	}
	return Z_Registration_Info_UScriptStruct_ReplicatedPredictionKeyItem.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FReplicatedPredictionKeyItem>()
{
	return FReplicatedPredictionKeyItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReplicatedPredictionKeyItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictionKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedPredictionKeyItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayPrediction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReplicatedPredictionKeyItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplicatedPredictionKeyItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedPredictionKeyItem_Statics::NewProp_PredictionKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayPrediction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplicatedPredictionKeyItem_Statics::NewProp_PredictionKey = { "PredictionKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplicatedPredictionKeyItem, PredictionKey), Z_Construct_UScriptStruct_FPredictionKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedPredictionKeyItem_Statics::NewProp_PredictionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedPredictionKeyItem_Statics::NewProp_PredictionKey_MetaData)) }; // 2453680625
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplicatedPredictionKeyItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedPredictionKeyItem_Statics::NewProp_PredictionKey,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplicatedPredictionKeyItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"ReplicatedPredictionKeyItem",
		sizeof(FReplicatedPredictionKeyItem),
		alignof(FReplicatedPredictionKeyItem),
		Z_Construct_UScriptStruct_FReplicatedPredictionKeyItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedPredictionKeyItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedPredictionKeyItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedPredictionKeyItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReplicatedPredictionKeyItem()
	{
		if (!Z_Registration_Info_UScriptStruct_ReplicatedPredictionKeyItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReplicatedPredictionKeyItem.InnerSingleton, Z_Construct_UScriptStruct_FReplicatedPredictionKeyItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReplicatedPredictionKeyItem.InnerSingleton;
	}

static_assert(std::is_polymorphic<FReplicatedPredictionKeyMap>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FReplicatedPredictionKeyMap cannot be polymorphic unless super FFastArraySerializer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReplicatedPredictionKeyMap;
class UScriptStruct* FReplicatedPredictionKeyMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReplicatedPredictionKeyMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReplicatedPredictionKeyMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ReplicatedPredictionKeyMap"));
	}
	return Z_Registration_Info_UScriptStruct_ReplicatedPredictionKeyMap.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FReplicatedPredictionKeyMap>()
{
	return FReplicatedPredictionKeyMap::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
	UE_NET_IMPLEMENT_FASTARRAY(FReplicatedPredictionKeyMap);
#else
	UE_NET_IMPLEMENT_FASTARRAY_STUB(FReplicatedPredictionKeyMap);
#endif
	struct Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictionKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PredictionKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayPrediction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplicatedPredictionKeyMap>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap_Statics::NewProp_PredictionKeys_Inner = { "PredictionKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FReplicatedPredictionKeyItem, METADATA_PARAMS(nullptr, 0) }; // 347146428
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap_Statics::NewProp_PredictionKeys_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayPrediction.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap_Statics::NewProp_PredictionKeys = { "PredictionKeys", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplicatedPredictionKeyMap, PredictionKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap_Statics::NewProp_PredictionKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap_Statics::NewProp_PredictionKeys_MetaData)) }; // 347146428
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap_Statics::NewProp_PredictionKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap_Statics::NewProp_PredictionKeys,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"ReplicatedPredictionKeyMap",
		sizeof(FReplicatedPredictionKeyMap),
		alignof(FReplicatedPredictionKeyMap),
		Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap()
	{
		if (!Z_Registration_Info_UScriptStruct_ReplicatedPredictionKeyMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReplicatedPredictionKeyMap.InnerSingleton, Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReplicatedPredictionKeyMap.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayPrediction_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayPrediction_h_Statics::ScriptStructInfo[] = {
		{ FPredictionKey::StaticStruct, Z_Construct_UScriptStruct_FPredictionKey_Statics::NewStructOps, TEXT("PredictionKey"), &Z_Registration_Info_UScriptStruct_PredictionKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPredictionKey), 2453680625U) },
		{ FReplicatedPredictionKeyItem::StaticStruct, Z_Construct_UScriptStruct_FReplicatedPredictionKeyItem_Statics::NewStructOps, TEXT("ReplicatedPredictionKeyItem"), &Z_Registration_Info_UScriptStruct_ReplicatedPredictionKeyItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplicatedPredictionKeyItem), 347146428U) },
		{ FReplicatedPredictionKeyMap::StaticStruct, Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap_Statics::NewStructOps, TEXT("ReplicatedPredictionKeyMap"), &Z_Registration_Info_UScriptStruct_ReplicatedPredictionKeyMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplicatedPredictionKeyMap), 1867860694U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayPrediction_h_1803515156(TEXT("/Script/GameplayAbilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayPrediction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayPrediction_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
