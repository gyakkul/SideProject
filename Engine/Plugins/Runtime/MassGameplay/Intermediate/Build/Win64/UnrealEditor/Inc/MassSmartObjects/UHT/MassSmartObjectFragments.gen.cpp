// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassSmartObjects/Public/MassSmartObjectFragments.h"
#include "GameplayTagContainer.h"
#include "SmartObjectRuntime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSmartObjectFragments() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	MASSSMARTOBJECTS_API UEnum* Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus();
	MASSSMARTOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FMassSmartObjectTimedBehaviorFragment();
	MASSSMARTOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FMassSmartObjectUserFragment();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectClaimHandle();
	UPackage* Z_Construct_UPackage__Script_MassSmartObjects();
// End Cross Module References

static_assert(std::is_polymorphic<FMassSmartObjectUserFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassSmartObjectUserFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSmartObjectUserFragment;
class UScriptStruct* FMassSmartObjectUserFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSmartObjectUserFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSmartObjectUserFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSmartObjectUserFragment, (UObject*)Z_Construct_UPackage__Script_MassSmartObjects(), TEXT("MassSmartObjectUserFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassSmartObjectUserFragment.OuterSingleton;
}
template<> MASSSMARTOBJECTS_API UScriptStruct* StaticStruct<FMassSmartObjectUserFragment>()
{
	return FMassSmartObjectUserFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionStatus_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionStatus_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractionStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionCooldownEndTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InteractionCooldownEndTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Fragment used by an entity to be able to interact with smart objects */" },
		{ "ModuleRelativePath", "Public/MassSmartObjectFragments.h" },
		{ "ToolTip", "Fragment used by an entity to be able to interact with smart objects" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSmartObjectUserFragment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewProp_UserTags_MetaData[] = {
		{ "Comment", "/** Tags describing the smart object user. */" },
		{ "ModuleRelativePath", "Public/MassSmartObjectFragments.h" },
		{ "ToolTip", "Tags describing the smart object user." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewProp_UserTags = { "UserTags", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSmartObjectUserFragment, UserTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewProp_UserTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewProp_UserTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewProp_InteractionHandle_MetaData[] = {
		{ "Comment", "/** Claim handle for the currently active smart object interaction. */" },
		{ "ModuleRelativePath", "Public/MassSmartObjectFragments.h" },
		{ "ToolTip", "Claim handle for the currently active smart object interaction." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewProp_InteractionHandle = { "InteractionHandle", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSmartObjectUserFragment, InteractionHandle), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewProp_InteractionHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewProp_InteractionHandle_MetaData)) }; // 931449528
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewProp_InteractionStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewProp_InteractionStatus_MetaData[] = {
		{ "Comment", "/** Status of the current active smart object interaction. */" },
		{ "ModuleRelativePath", "Public/MassSmartObjectFragments.h" },
		{ "ToolTip", "Status of the current active smart object interaction." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewProp_InteractionStatus = { "InteractionStatus", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSmartObjectUserFragment, InteractionStatus), Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewProp_InteractionStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewProp_InteractionStatus_MetaData)) }; // 864764723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewProp_InteractionCooldownEndTime_MetaData[] = {
		{ "Comment", "/**\n\x09 * World time in seconds before which the user is considered in cooldown and\n\x09 * won't look for new interactions (value of 0 indicates no cooldown).\n\x09 */" },
		{ "ModuleRelativePath", "Public/MassSmartObjectFragments.h" },
		{ "ToolTip", "World time in seconds before which the user is considered in cooldown and\nwon't look for new interactions (value of 0 indicates no cooldown)." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewProp_InteractionCooldownEndTime = { "InteractionCooldownEndTime", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSmartObjectUserFragment, InteractionCooldownEndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewProp_InteractionCooldownEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewProp_InteractionCooldownEndTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewProp_UserTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewProp_InteractionHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewProp_InteractionStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewProp_InteractionStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewProp_InteractionCooldownEndTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassSmartObjects,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassSmartObjectUserFragment",
		sizeof(FMassSmartObjectUserFragment),
		alignof(FMassSmartObjectUserFragment),
		Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSmartObjectUserFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSmartObjectUserFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSmartObjectUserFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSmartObjectUserFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassSmartObjectTimedBehaviorFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassSmartObjectTimedBehaviorFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSmartObjectTimedBehaviorFragment;
class UScriptStruct* FMassSmartObjectTimedBehaviorFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSmartObjectTimedBehaviorFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSmartObjectTimedBehaviorFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSmartObjectTimedBehaviorFragment, (UObject*)Z_Construct_UPackage__Script_MassSmartObjects(), TEXT("MassSmartObjectTimedBehaviorFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassSmartObjectTimedBehaviorFragment.OuterSingleton;
}
template<> MASSSMARTOBJECTS_API UScriptStruct* StaticStruct<FMassSmartObjectTimedBehaviorFragment>()
{
	return FMassSmartObjectTimedBehaviorFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSmartObjectTimedBehaviorFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UseTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectTimedBehaviorFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Fragment used to process time based smartobject interactions */" },
		{ "ModuleRelativePath", "Public/MassSmartObjectFragments.h" },
		{ "ToolTip", "Fragment used to process time based smartobject interactions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSmartObjectTimedBehaviorFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSmartObjectTimedBehaviorFragment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectTimedBehaviorFragment_Statics::NewProp_UseTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassSmartObjectFragments.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassSmartObjectTimedBehaviorFragment_Statics::NewProp_UseTime = { "UseTime", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSmartObjectTimedBehaviorFragment, UseTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectTimedBehaviorFragment_Statics::NewProp_UseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectTimedBehaviorFragment_Statics::NewProp_UseTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassSmartObjectTimedBehaviorFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSmartObjectTimedBehaviorFragment_Statics::NewProp_UseTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSmartObjectTimedBehaviorFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassSmartObjects,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassSmartObjectTimedBehaviorFragment",
		sizeof(FMassSmartObjectTimedBehaviorFragment),
		alignof(FMassSmartObjectTimedBehaviorFragment),
		Z_Construct_UScriptStruct_FMassSmartObjectTimedBehaviorFragment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectTimedBehaviorFragment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectTimedBehaviorFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectTimedBehaviorFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSmartObjectTimedBehaviorFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSmartObjectTimedBehaviorFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSmartObjectTimedBehaviorFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassSmartObjectTimedBehaviorFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSmartObjectTimedBehaviorFragment.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectFragments_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectFragments_h_Statics::ScriptStructInfo[] = {
		{ FMassSmartObjectUserFragment::StaticStruct, Z_Construct_UScriptStruct_FMassSmartObjectUserFragment_Statics::NewStructOps, TEXT("MassSmartObjectUserFragment"), &Z_Registration_Info_UScriptStruct_MassSmartObjectUserFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSmartObjectUserFragment), 3400418272U) },
		{ FMassSmartObjectTimedBehaviorFragment::StaticStruct, Z_Construct_UScriptStruct_FMassSmartObjectTimedBehaviorFragment_Statics::NewStructOps, TEXT("MassSmartObjectTimedBehaviorFragment"), &Z_Registration_Info_UScriptStruct_MassSmartObjectTimedBehaviorFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSmartObjectTimedBehaviorFragment), 2348895622U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectFragments_h_310135054(TEXT("/Script/MassSmartObjects"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectFragments_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectFragments_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
