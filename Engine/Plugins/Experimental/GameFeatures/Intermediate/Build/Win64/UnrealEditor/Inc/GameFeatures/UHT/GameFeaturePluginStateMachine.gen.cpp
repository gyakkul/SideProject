// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/GameFeaturePluginStateMachine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeaturePluginStateMachine() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureData_NoRegister();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeaturePluginStateMachine();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeaturePluginStateMachine_NoRegister();
	GAMEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FGameFeaturePluginStateMachineProperties();
	UPackage* Z_Construct_UPackage__Script_GameFeatures();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameFeaturePluginStateMachineProperties;
class UScriptStruct* FGameFeaturePluginStateMachineProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameFeaturePluginStateMachineProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameFeaturePluginStateMachineProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameFeaturePluginStateMachineProperties, (UObject*)Z_Construct_UPackage__Script_GameFeatures(), TEXT("GameFeaturePluginStateMachineProperties"));
	}
	return Z_Registration_Info_UScriptStruct_GameFeaturePluginStateMachineProperties.OuterSingleton;
}
template<> GAMEFEATURES_API UScriptStruct* StaticStruct<FGameFeaturePluginStateMachineProperties>()
{
	return FGameFeaturePluginStateMachineProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameFeaturePluginStateMachineProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameFeatureData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GameFeatureData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameFeaturePluginStateMachineProperties_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** The common properties that can be accessed by the states of the state machine */" },
		{ "ModuleRelativePath", "Private/GameFeaturePluginStateMachine.h" },
		{ "ToolTip", "The common properties that can be accessed by the states of the state machine" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameFeaturePluginStateMachineProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameFeaturePluginStateMachineProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameFeaturePluginStateMachineProperties_Statics::NewProp_GameFeatureData_MetaData[] = {
		{ "Comment", "/** The data asset describing this game feature */" },
		{ "ModuleRelativePath", "Private/GameFeaturePluginStateMachine.h" },
		{ "ToolTip", "The data asset describing this game feature" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameFeaturePluginStateMachineProperties_Statics::NewProp_GameFeatureData = { "GameFeatureData", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameFeaturePluginStateMachineProperties, GameFeatureData), Z_Construct_UClass_UGameFeatureData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameFeaturePluginStateMachineProperties_Statics::NewProp_GameFeatureData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeaturePluginStateMachineProperties_Statics::NewProp_GameFeatureData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameFeaturePluginStateMachineProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeaturePluginStateMachineProperties_Statics::NewProp_GameFeatureData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameFeaturePluginStateMachineProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameFeatures,
		nullptr,
		&NewStructOps,
		"GameFeaturePluginStateMachineProperties",
		sizeof(FGameFeaturePluginStateMachineProperties),
		alignof(FGameFeaturePluginStateMachineProperties),
		Z_Construct_UScriptStruct_FGameFeaturePluginStateMachineProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeaturePluginStateMachineProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameFeaturePluginStateMachineProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeaturePluginStateMachineProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameFeaturePluginStateMachineProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_GameFeaturePluginStateMachineProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameFeaturePluginStateMachineProperties.InnerSingleton, Z_Construct_UScriptStruct_FGameFeaturePluginStateMachineProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameFeaturePluginStateMachineProperties.InnerSingleton;
	}
	void UGameFeaturePluginStateMachine::StaticRegisterNativesUGameFeaturePluginStateMachine()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeaturePluginStateMachine);
	UClass* Z_Construct_UClass_UGameFeaturePluginStateMachine_NoRegister()
	{
		return UGameFeaturePluginStateMachine::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeaturePluginStateMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeaturePluginStateMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFeatures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeaturePluginStateMachine_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A state machine to manage transitioning a game feature plugin from just a URL into a fully loaded and active plugin, including registering its contents with other game systems */" },
		{ "IncludePath", "GameFeaturePluginStateMachine.h" },
		{ "ModuleRelativePath", "Private/GameFeaturePluginStateMachine.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A state machine to manage transitioning a game feature plugin from just a URL into a fully loaded and active plugin, including registering its contents with other game systems" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeaturePluginStateMachine_Statics::NewProp_StateProperties_MetaData[] = {
		{ "Comment", "/** The common properties that can be accessed by the states of the state machine */" },
		{ "ModuleRelativePath", "Private/GameFeaturePluginStateMachine.h" },
		{ "ToolTip", "The common properties that can be accessed by the states of the state machine" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeaturePluginStateMachine_Statics::NewProp_StateProperties = { "StateProperties", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameFeaturePluginStateMachine, StateProperties), Z_Construct_UScriptStruct_FGameFeaturePluginStateMachineProperties, METADATA_PARAMS(Z_Construct_UClass_UGameFeaturePluginStateMachine_Statics::NewProp_StateProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeaturePluginStateMachine_Statics::NewProp_StateProperties_MetaData)) }; // 190485284
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeaturePluginStateMachine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeaturePluginStateMachine_Statics::NewProp_StateProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeaturePluginStateMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeaturePluginStateMachine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeaturePluginStateMachine_Statics::ClassParams = {
		&UGameFeaturePluginStateMachine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameFeaturePluginStateMachine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeaturePluginStateMachine_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFeaturePluginStateMachine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeaturePluginStateMachine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFeaturePluginStateMachine()
	{
		if (!Z_Registration_Info_UClass_UGameFeaturePluginStateMachine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeaturePluginStateMachine.OuterSingleton, Z_Construct_UClass_UGameFeaturePluginStateMachine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeaturePluginStateMachine.OuterSingleton;
	}
	template<> GAMEFEATURES_API UClass* StaticClass<UGameFeaturePluginStateMachine>()
	{
		return UGameFeaturePluginStateMachine::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeaturePluginStateMachine);
	UGameFeaturePluginStateMachine::~UGameFeaturePluginStateMachine() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Private_GameFeaturePluginStateMachine_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Private_GameFeaturePluginStateMachine_h_Statics::ScriptStructInfo[] = {
		{ FGameFeaturePluginStateMachineProperties::StaticStruct, Z_Construct_UScriptStruct_FGameFeaturePluginStateMachineProperties_Statics::NewStructOps, TEXT("GameFeaturePluginStateMachineProperties"), &Z_Registration_Info_UScriptStruct_GameFeaturePluginStateMachineProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameFeaturePluginStateMachineProperties), 190485284U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Private_GameFeaturePluginStateMachine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeaturePluginStateMachine, UGameFeaturePluginStateMachine::StaticClass, TEXT("UGameFeaturePluginStateMachine"), &Z_Registration_Info_UClass_UGameFeaturePluginStateMachine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeaturePluginStateMachine), 3252217118U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Private_GameFeaturePluginStateMachine_h_2044848471(TEXT("/Script/GameFeatures"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Private_GameFeaturePluginStateMachine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Private_GameFeaturePluginStateMachine_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Private_GameFeaturePluginStateMachine_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Private_GameFeaturePluginStateMachine_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
