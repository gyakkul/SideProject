// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConversationRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationRegistry() {}
// Cross Module References
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationRegistry();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationRegistry_NoRegister();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureStateChangeObserver_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CommonConversationRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetSerializeScriptStructCache_ConvVersion;
class UScriptStruct* FNetSerializeScriptStructCache_ConvVersion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetSerializeScriptStructCache_ConvVersion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetSerializeScriptStructCache_ConvVersion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion, (UObject*)Z_Construct_UPackage__Script_CommonConversationRuntime(), TEXT("NetSerializeScriptStructCache_ConvVersion"));
	}
	return Z_Registration_Info_UScriptStruct_NetSerializeScriptStructCache_ConvVersion.OuterSingleton;
}
template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<FNetSerializeScriptStructCache_ConvVersion>()
{
	return FNetSerializeScriptStructCache_ConvVersion::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_ScriptStructsToIndex_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScriptStructsToIndex_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptStructsToIndex_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ScriptStructsToIndex;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IndexToScriptStructs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexToScriptStructs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IndexToScriptStructs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//  Container for safely replicating  script struct references (constrained to a specified parent struct)\n" },
		{ "ModuleRelativePath", "Public/ConversationRegistry.h" },
		{ "ToolTip", "Container for safely replicating  script struct references (constrained to a specified parent struct)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetSerializeScriptStructCache_ConvVersion>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::NewProp_ScriptStructsToIndex_ValueProp = { "ScriptStructsToIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::NewProp_ScriptStructsToIndex_Key_KeyProp = { "ScriptStructsToIndex_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::NewProp_ScriptStructsToIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConversationRegistry.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::NewProp_ScriptStructsToIndex = { "ScriptStructsToIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetSerializeScriptStructCache_ConvVersion, ScriptStructsToIndex), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::NewProp_ScriptStructsToIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::NewProp_ScriptStructsToIndex_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::NewProp_IndexToScriptStructs_Inner = { "IndexToScriptStructs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::NewProp_IndexToScriptStructs_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConversationRegistry.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::NewProp_IndexToScriptStructs = { "IndexToScriptStructs", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetSerializeScriptStructCache_ConvVersion, IndexToScriptStructs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::NewProp_IndexToScriptStructs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::NewProp_IndexToScriptStructs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::NewProp_ScriptStructsToIndex_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::NewProp_ScriptStructsToIndex_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::NewProp_ScriptStructsToIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::NewProp_IndexToScriptStructs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::NewProp_IndexToScriptStructs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
		nullptr,
		&NewStructOps,
		"NetSerializeScriptStructCache_ConvVersion",
		sizeof(FNetSerializeScriptStructCache_ConvVersion),
		alignof(FNetSerializeScriptStructCache_ConvVersion),
		Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion()
	{
		if (!Z_Registration_Info_UScriptStruct_NetSerializeScriptStructCache_ConvVersion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetSerializeScriptStructCache_ConvVersion.InnerSingleton, Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NetSerializeScriptStructCache_ConvVersion.InnerSingleton;
	}
	void UConversationRegistry::StaticRegisterNativesUConversationRegistry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConversationRegistry);
	UClass* Z_Construct_UClass_UConversationRegistry_NoRegister()
	{
		return UConversationRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UConversationRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversationChoiceDataStructCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConversationChoiceDataStructCache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationRegistry_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A registry that can answer questions about all available dialogue assets\n */" },
		{ "IncludePath", "ConversationRegistry.h" },
		{ "ModuleRelativePath", "Public/ConversationRegistry.h" },
		{ "ToolTip", "A registry that can answer questions about all available dialogue assets" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationRegistry_Statics::NewProp_ConversationChoiceDataStructCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConversationRegistry.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConversationRegistry_Statics::NewProp_ConversationChoiceDataStructCache = { "ConversationChoiceDataStructCache", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationRegistry, ConversationChoiceDataStructCache), Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion, METADATA_PARAMS(Z_Construct_UClass_UConversationRegistry_Statics::NewProp_ConversationChoiceDataStructCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationRegistry_Statics::NewProp_ConversationChoiceDataStructCache_MetaData)) }; // 2141373363
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConversationRegistry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationRegistry_Statics::NewProp_ConversationChoiceDataStructCache,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UConversationRegistry_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameFeatureStateChangeObserver_NoRegister, (int32)VTABLE_OFFSET(UConversationRegistry, IGameFeatureStateChangeObserver), false },  // 2774822704
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationRegistry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationRegistry_Statics::ClassParams = {
		&UConversationRegistry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConversationRegistry_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConversationRegistry_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConversationRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationRegistry()
	{
		if (!Z_Registration_Info_UClass_UConversationRegistry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationRegistry.OuterSingleton, Z_Construct_UClass_UConversationRegistry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConversationRegistry.OuterSingleton;
	}
	template<> COMMONCONVERSATIONRUNTIME_API UClass* StaticClass<UConversationRegistry>()
	{
		return UConversationRegistry::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationRegistry);
	UConversationRegistry::~UConversationRegistry() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRegistry_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRegistry_h_Statics::ScriptStructInfo[] = {
		{ FNetSerializeScriptStructCache_ConvVersion::StaticStruct, Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics::NewStructOps, TEXT("NetSerializeScriptStructCache_ConvVersion"), &Z_Registration_Info_UScriptStruct_NetSerializeScriptStructCache_ConvVersion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetSerializeScriptStructCache_ConvVersion), 2141373363U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRegistry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConversationRegistry, UConversationRegistry::StaticClass, TEXT("UConversationRegistry"), &Z_Registration_Info_UClass_UConversationRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationRegistry), 2840165383U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRegistry_h_3681975259(TEXT("/Script/CommonConversationRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRegistry_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRegistry_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRegistry_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
