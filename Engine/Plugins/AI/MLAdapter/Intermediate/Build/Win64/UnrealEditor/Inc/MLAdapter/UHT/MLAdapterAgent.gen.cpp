// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MLAdapter/Source/MLAdapter/Public/Agents/MLAdapterAgent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLAdapterAgent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterActuator_NoRegister();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterAgent();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterAgent_NoRegister();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSensor_NoRegister();
	MLADAPTER_API UScriptStruct* Z_Construct_UScriptStruct_FMLAdapterAgentConfig();
	MLADAPTER_API UScriptStruct* Z_Construct_UScriptStruct_FMLAdapterParameterMap();
	UPackage* Z_Construct_UPackage__Script_MLAdapter();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MLAdapterParameterMap;
class UScriptStruct* FMLAdapterParameterMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MLAdapterParameterMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MLAdapterParameterMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMLAdapterParameterMap, (UObject*)Z_Construct_UPackage__Script_MLAdapter(), TEXT("MLAdapterParameterMap"));
	}
	return Z_Registration_Info_UScriptStruct_MLAdapterParameterMap.OuterSingleton;
}
template<> MLADAPTER_API UScriptStruct* StaticStruct<FMLAdapterParameterMap>()
{
	return FMLAdapterParameterMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMLAdapterParameterMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Params_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Params_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMLAdapterParameterMap_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Provides a serializable mapping from parameter name to value that is used to configure sensors & actuators. */" },
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
		{ "ToolTip", "Provides a serializable mapping from parameter name to value that is used to configure sensors & actuators." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMLAdapterParameterMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMLAdapterParameterMap>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMLAdapterParameterMap_Statics::NewProp_Params_ValueProp = { "Params", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMLAdapterParameterMap_Statics::NewProp_Params_Key_KeyProp = { "Params_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMLAdapterParameterMap_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMLAdapterParameterMap_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMLAdapterParameterMap, Params), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMLAdapterParameterMap_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMLAdapterParameterMap_Statics::NewProp_Params_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMLAdapterParameterMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMLAdapterParameterMap_Statics::NewProp_Params_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMLAdapterParameterMap_Statics::NewProp_Params_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMLAdapterParameterMap_Statics::NewProp_Params,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMLAdapterParameterMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MLAdapter,
		nullptr,
		&NewStructOps,
		"MLAdapterParameterMap",
		sizeof(FMLAdapterParameterMap),
		alignof(FMLAdapterParameterMap),
		Z_Construct_UScriptStruct_FMLAdapterParameterMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMLAdapterParameterMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMLAdapterParameterMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMLAdapterParameterMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMLAdapterParameterMap()
	{
		if (!Z_Registration_Info_UScriptStruct_MLAdapterParameterMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MLAdapterParameterMap.InnerSingleton, Z_Construct_UScriptStruct_FMLAdapterParameterMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MLAdapterParameterMap.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MLAdapterAgentConfig;
class UScriptStruct* FMLAdapterAgentConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MLAdapterAgentConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MLAdapterAgentConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMLAdapterAgentConfig, (UObject*)Z_Construct_UPackage__Script_MLAdapter(), TEXT("MLAdapterAgentConfig"));
	}
	return Z_Registration_Info_UScriptStruct_MLAdapterAgentConfig.OuterSingleton;
}
template<> MLADAPTER_API UScriptStruct* StaticStruct<FMLAdapterAgentConfig>()
{
	return FMLAdapterAgentConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sensors_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Sensors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sensors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Sensors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actuators_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Actuators_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actuators_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Actuators;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AvatarClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AgentClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAvatarClassExact_MetaData[];
#endif
		static void NewProp_bAvatarClassExact_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvatarClassExact;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRequestNewAvatarUponClearingPrev_MetaData[];
#endif
		static void NewProp_bAutoRequestNewAvatarUponClearingPrev_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRequestNewAvatarUponClearingPrev;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A serializable config for an agent. Used in the external API to define agents. */" },
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
		{ "ToolTip", "A serializable config for an agent. Used in the external API to define agents." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMLAdapterAgentConfig>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_Sensors_ValueProp = { "Sensors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMLAdapterParameterMap, METADATA_PARAMS(nullptr, 0) }; // 4041316841
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_Sensors_Key_KeyProp = { "Sensors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_Sensors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_Sensors = { "Sensors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMLAdapterAgentConfig, Sensors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_Sensors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_Sensors_MetaData)) }; // 4041316841
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_Actuators_ValueProp = { "Actuators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMLAdapterParameterMap, METADATA_PARAMS(nullptr, 0) }; // 4041316841
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_Actuators_Key_KeyProp = { "Actuators_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_Actuators_MetaData[] = {
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_Actuators = { "Actuators", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMLAdapterAgentConfig, Actuators), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_Actuators_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_Actuators_MetaData)) }; // 4041316841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_AvatarClassName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_AvatarClassName = { "AvatarClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMLAdapterAgentConfig, AvatarClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_AvatarClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_AvatarClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_AgentClassName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_AgentClassName = { "AgentClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMLAdapterAgentConfig, AgentClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_AgentClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_AgentClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_bAvatarClassExact_MetaData[] = {
		{ "Comment", "/** If set to true, won't accept child classes of the AvatarClass. */" },
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
		{ "ToolTip", "If set to true, won't accept child classes of the AvatarClass." },
	};
#endif
	void Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_bAvatarClassExact_SetBit(void* Obj)
	{
		((FMLAdapterAgentConfig*)Obj)->bAvatarClassExact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_bAvatarClassExact = { "bAvatarClassExact", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMLAdapterAgentConfig), &Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_bAvatarClassExact_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_bAvatarClassExact_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_bAvatarClassExact_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_bAutoRequestNewAvatarUponClearingPrev_MetaData[] = {
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_bAutoRequestNewAvatarUponClearingPrev_SetBit(void* Obj)
	{
		((FMLAdapterAgentConfig*)Obj)->bAutoRequestNewAvatarUponClearingPrev = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_bAutoRequestNewAvatarUponClearingPrev = { "bAutoRequestNewAvatarUponClearingPrev", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMLAdapterAgentConfig), &Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_bAutoRequestNewAvatarUponClearingPrev_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_bAutoRequestNewAvatarUponClearingPrev_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_bAutoRequestNewAvatarUponClearingPrev_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_Sensors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_Sensors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_Sensors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_Actuators_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_Actuators_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_Actuators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_AvatarClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_AgentClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_bAvatarClassExact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewProp_bAutoRequestNewAvatarUponClearingPrev,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MLAdapter,
		nullptr,
		&NewStructOps,
		"MLAdapterAgentConfig",
		sizeof(FMLAdapterAgentConfig),
		alignof(FMLAdapterAgentConfig),
		Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMLAdapterAgentConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_MLAdapterAgentConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MLAdapterAgentConfig.InnerSingleton, Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MLAdapterAgentConfig.InnerSingleton;
	}
	DEFINE_FUNCTION(UMLAdapterAgent::execOnPawnControllerChanged)
	{
		P_GET_OBJECT(APawn,Z_Param_InPawn);
		P_GET_OBJECT(AController,Z_Param_InController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnControllerChanged(Z_Param_InPawn,Z_Param_InController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMLAdapterAgent::execOnAvatarDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAvatarDestroyed(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	void UMLAdapterAgent::StaticRegisterNativesUMLAdapterAgent()
	{
		UClass* Class = UMLAdapterAgent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAvatarDestroyed", &UMLAdapterAgent::execOnAvatarDestroyed },
			{ "OnPawnControllerChanged", &UMLAdapterAgent::execOnPawnControllerChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMLAdapterAgent_OnAvatarDestroyed_Statics
	{
		struct MLAdapterAgent_eventOnAvatarDestroyed_Parms
		{
			AActor* DestroyedActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMLAdapterAgent_OnAvatarDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLAdapterAgent_eventOnAvatarDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLAdapterAgent_OnAvatarDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLAdapterAgent_OnAvatarDestroyed_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLAdapterAgent_OnAvatarDestroyed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** When the agent's avatar is destroyed, we need to cleanup callbacks and references to the avatar. Will request a new avatar if AgentConfig.bAutoRequestNewAvatarUponClearingPrev is true. */" },
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
		{ "ToolTip", "When the agent's avatar is destroyed, we need to cleanup callbacks and references to the avatar. Will request a new avatar if AgentConfig.bAutoRequestNewAvatarUponClearingPrev is true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLAdapterAgent_OnAvatarDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLAdapterAgent, nullptr, "OnAvatarDestroyed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLAdapterAgent_OnAvatarDestroyed_Statics::MLAdapterAgent_eventOnAvatarDestroyed_Parms), Z_Construct_UFunction_UMLAdapterAgent_OnAvatarDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLAdapterAgent_OnAvatarDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLAdapterAgent_OnAvatarDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLAdapterAgent_OnAvatarDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLAdapterAgent_OnAvatarDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLAdapterAgent_OnAvatarDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMLAdapterAgent_OnPawnControllerChanged_Statics
	{
		struct MLAdapterAgent_eventOnPawnControllerChanged_Parms
		{
			APawn* InPawn;
			AController* InController;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMLAdapterAgent_OnPawnControllerChanged_Statics::NewProp_InPawn = { "InPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLAdapterAgent_eventOnPawnControllerChanged_Parms, InPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMLAdapterAgent_OnPawnControllerChanged_Statics::NewProp_InController = { "InController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLAdapterAgent_eventOnPawnControllerChanged_Parms, InController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLAdapterAgent_OnPawnControllerChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLAdapterAgent_OnPawnControllerChanged_Statics::NewProp_InPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLAdapterAgent_OnPawnControllerChanged_Statics::NewProp_InController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLAdapterAgent_OnPawnControllerChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Will be bound to UGameInstance.OnPawnControllerChanged if current avatar is a pawn or a controller. */" },
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
		{ "ToolTip", "Will be bound to UGameInstance.OnPawnControllerChanged if current avatar is a pawn or a controller." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLAdapterAgent_OnPawnControllerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLAdapterAgent, nullptr, "OnPawnControllerChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLAdapterAgent_OnPawnControllerChanged_Statics::MLAdapterAgent_eventOnPawnControllerChanged_Parms), Z_Construct_UFunction_UMLAdapterAgent_OnPawnControllerChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLAdapterAgent_OnPawnControllerChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLAdapterAgent_OnPawnControllerChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLAdapterAgent_OnPawnControllerChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLAdapterAgent_OnPawnControllerChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLAdapterAgent_OnPawnControllerChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLAdapterAgent);
	UClass* Z_Construct_UClass_UMLAdapterAgent_NoRegister()
	{
		return UMLAdapterAgent::StaticClass();
	}
	struct Z_Construct_UClass_UMLAdapterAgent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sensors_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sensors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sensors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sensors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actuators_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Actuators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actuators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actuators;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AvatarClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableActionDuration_MetaData[];
#endif
		static void NewProp_bEnableActionDuration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableActionDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionDurationSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionDurationSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActionDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentActionDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActionDurationElapsed_MetaData[];
#endif
		static void NewProp_bActionDurationElapsed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActionDurationElapsed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Avatar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Avatar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLAdapterAgent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MLAdapter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMLAdapterAgent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMLAdapterAgent_OnAvatarDestroyed, "OnAvatarDestroyed" }, // 876334429
		{ &Z_Construct_UFunction_UMLAdapterAgent_OnPawnControllerChanged, "OnPawnControllerChanged" }, // 3357354440
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterAgent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An agent capable of controlling a single avatar (e.g. a Pawn or Controller). Contains sensors for\n * perceiving information about the environment and actuators for taking actions in the game.\n */" },
		{ "IncludePath", "Agents/MLAdapterAgent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An agent capable of controlling a single avatar (e.g. a Pawn or Controller). Contains sensors for\nperceiving information about the environment and actuators for taking actions in the game." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Sensors_Inner_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Sensors_Inner = { "Sensors", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMLAdapterSensor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Sensors_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Sensors_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Sensors_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Sensors = { "Sensors", nullptr, (EPropertyFlags)0x002408800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterAgent, Sensors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Sensors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Sensors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Actuators_Inner_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Actuators_Inner = { "Actuators", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMLAdapterActuator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Actuators_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Actuators_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Actuators_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Actuators = { "Actuators", nullptr, (EPropertyFlags)0x002408800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterAgent, Actuators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Actuators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Actuators_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_AvatarClass_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_AvatarClass = { "AvatarClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterAgent, AvatarClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_AvatarClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_AvatarClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_bEnableActionDuration_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "Comment", "// If true, then agents won't be able to make a new decision until each action duration has elapsed.\n" },
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
		{ "ToolTip", "If true, then agents won't be able to make a new decision until each action duration has elapsed." },
	};
#endif
	void Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_bEnableActionDuration_SetBit(void* Obj)
	{
		((UMLAdapterAgent*)Obj)->bEnableActionDuration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_bEnableActionDuration = { "bEnableActionDuration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMLAdapterAgent), &Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_bEnableActionDuration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_bEnableActionDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_bEnableActionDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_ActionDurationSeconds_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "Comment", "// How long should agents wait before they can change their action\n" },
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
		{ "ToolTip", "How long should agents wait before they can change their action" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_ActionDurationSeconds = { "ActionDurationSeconds", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterAgent, ActionDurationSeconds), METADATA_PARAMS(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_ActionDurationSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_ActionDurationSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_CurrentActionDuration_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "Comment", "// How much time has the current action been executing\n" },
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
		{ "ToolTip", "How much time has the current action been executing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_CurrentActionDuration = { "CurrentActionDuration", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterAgent, CurrentActionDuration), METADATA_PARAMS(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_CurrentActionDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_CurrentActionDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_bActionDurationElapsed_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
	};
#endif
	void Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_bActionDurationElapsed_SetBit(void* Obj)
	{
		((UMLAdapterAgent*)Obj)->bActionDurationElapsed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_bActionDurationElapsed = { "bActionDurationElapsed", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMLAdapterAgent), &Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_bActionDurationElapsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_bActionDurationElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_bActionDurationElapsed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Avatar_MetaData[] = {
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterAgent, Avatar), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Avatar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Avatar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Controller_MetaData[] = {
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterAgent, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Controller_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Pawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterAgent, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Pawn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLAdapterAgent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Sensors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Sensors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Actuators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Actuators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_AvatarClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_bEnableActionDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_ActionDurationSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_CurrentActionDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_bActionDurationElapsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Avatar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterAgent_Statics::NewProp_Pawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLAdapterAgent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLAdapterAgent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLAdapterAgent_Statics::ClassParams = {
		&UMLAdapterAgent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMLAdapterAgent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterAgent_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLAdapterAgent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterAgent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLAdapterAgent()
	{
		if (!Z_Registration_Info_UClass_UMLAdapterAgent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLAdapterAgent.OuterSingleton, Z_Construct_UClass_UMLAdapterAgent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLAdapterAgent.OuterSingleton;
	}
	template<> MLADAPTER_API UClass* StaticClass<UMLAdapterAgent>()
	{
		return UMLAdapterAgent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLAdapterAgent);
	UMLAdapterAgent::~UMLAdapterAgent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h_Statics::ScriptStructInfo[] = {
		{ FMLAdapterParameterMap::StaticStruct, Z_Construct_UScriptStruct_FMLAdapterParameterMap_Statics::NewStructOps, TEXT("MLAdapterParameterMap"), &Z_Registration_Info_UScriptStruct_MLAdapterParameterMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMLAdapterParameterMap), 4041316841U) },
		{ FMLAdapterAgentConfig::StaticStruct, Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics::NewStructOps, TEXT("MLAdapterAgentConfig"), &Z_Registration_Info_UScriptStruct_MLAdapterAgentConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMLAdapterAgentConfig), 4157558722U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLAdapterAgent, UMLAdapterAgent::StaticClass, TEXT("UMLAdapterAgent"), &Z_Registration_Info_UClass_UMLAdapterAgent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLAdapterAgent), 2468053957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h_4138819180(TEXT("/Script/MLAdapter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
