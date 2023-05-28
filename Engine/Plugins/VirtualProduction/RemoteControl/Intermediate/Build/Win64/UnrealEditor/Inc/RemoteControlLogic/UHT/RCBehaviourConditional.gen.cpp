// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Behaviour/Builtin/Conditional/RCBehaviourConditional.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRCBehaviourConditional() {}
// Cross Module References
	REMOTECONTROL_API UClass* Z_Construct_UClass_URCVirtualPropertySelfContainer_NoRegister();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCAction_NoRegister();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviour();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourConditional();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourConditional_NoRegister();
	REMOTECONTROLLOGIC_API UEnum* Z_Construct_UEnum_RemoteControlLogic_ERCBehaviourConditionType();
	REMOTECONTROLLOGIC_API UScriptStruct* Z_Construct_UScriptStruct_FRCBehaviourCondition();
	UPackage* Z_Construct_UPackage__Script_RemoteControlLogic();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERCBehaviourConditionType;
	static UEnum* ERCBehaviourConditionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERCBehaviourConditionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERCBehaviourConditionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RemoteControlLogic_ERCBehaviourConditionType, (UObject*)Z_Construct_UPackage__Script_RemoteControlLogic(), TEXT("ERCBehaviourConditionType"));
		}
		return Z_Registration_Info_UEnum_ERCBehaviourConditionType.OuterSingleton;
	}
	template<> REMOTECONTROLLOGIC_API UEnum* StaticEnum<ERCBehaviourConditionType>()
	{
		return ERCBehaviourConditionType_StaticEnum();
	}
	struct Z_Construct_UEnum_RemoteControlLogic_ERCBehaviourConditionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RemoteControlLogic_ERCBehaviourConditionType_Statics::Enumerators[] = {
		{ "ERCBehaviourConditionType::IsEqual", (int64)ERCBehaviourConditionType::IsEqual },
		{ "ERCBehaviourConditionType::IsGreaterThan", (int64)ERCBehaviourConditionType::IsGreaterThan },
		{ "ERCBehaviourConditionType::IsLesserThan", (int64)ERCBehaviourConditionType::IsLesserThan },
		{ "ERCBehaviourConditionType::IsGreaterThanOrEqualTo", (int64)ERCBehaviourConditionType::IsGreaterThanOrEqualTo },
		{ "ERCBehaviourConditionType::IsLesserThanOrEqualTo", (int64)ERCBehaviourConditionType::IsLesserThanOrEqualTo },
		{ "ERCBehaviourConditionType::Else", (int64)ERCBehaviourConditionType::Else },
		{ "ERCBehaviourConditionType::None", (int64)ERCBehaviourConditionType::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RemoteControlLogic_ERCBehaviourConditionType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Condition Typess\n */" },
		{ "Else.Name", "ERCBehaviourConditionType::Else" },
		{ "IsEqual.Name", "ERCBehaviourConditionType::IsEqual" },
		{ "IsGreaterThan.Name", "ERCBehaviourConditionType::IsGreaterThan" },
		{ "IsGreaterThanOrEqualTo.Name", "ERCBehaviourConditionType::IsGreaterThanOrEqualTo" },
		{ "IsLesserThan.Name", "ERCBehaviourConditionType::IsLesserThan" },
		{ "IsLesserThanOrEqualTo.Name", "ERCBehaviourConditionType::IsLesserThanOrEqualTo" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/Conditional/RCBehaviourConditional.h" },
		{ "None.Name", "ERCBehaviourConditionType::None" },
		{ "ToolTip", "Condition Typess" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RemoteControlLogic_ERCBehaviourConditionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RemoteControlLogic,
		nullptr,
		"ERCBehaviourConditionType",
		"ERCBehaviourConditionType",
		Z_Construct_UEnum_RemoteControlLogic_ERCBehaviourConditionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteControlLogic_ERCBehaviourConditionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RemoteControlLogic_ERCBehaviourConditionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteControlLogic_ERCBehaviourConditionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RemoteControlLogic_ERCBehaviourConditionType()
	{
		if (!Z_Registration_Info_UEnum_ERCBehaviourConditionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERCBehaviourConditionType.InnerSingleton, Z_Construct_UEnum_RemoteControlLogic_ERCBehaviourConditionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERCBehaviourConditionType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCBehaviourCondition;
class UScriptStruct* FRCBehaviourCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCBehaviourCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCBehaviourCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCBehaviourCondition, (UObject*)Z_Construct_UPackage__Script_RemoteControlLogic(), TEXT("RCBehaviourCondition"));
	}
	return Z_Registration_Info_UScriptStruct_RCBehaviourCondition.OuterSingleton;
}
template<> REMOTECONTROLLOGIC_API UScriptStruct* StaticStruct<FRCBehaviourCondition>()
{
	return FRCBehaviourCondition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConditionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConditionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConditionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Comparand_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Comparand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct representing a single Condition\n * \n * Serialization and GC support are automatically provided by standard container types, as all relevant fields have been marked as UPROPERTY()\n */" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/Conditional/RCBehaviourConditional.h" },
		{ "ToolTip", "Struct representing a single Condition\n\nSerialization and GC support are automatically provided by standard container types, as all relevant fields have been marked as UPROPERTY()" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCBehaviourCondition>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics::NewProp_ConditionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics::NewProp_ConditionType_MetaData[] = {
		{ "Comment", "/** The type of condition to be used for comparison*/" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/Conditional/RCBehaviourConditional.h" },
		{ "ToolTip", "The type of condition to be used for comparison" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics::NewProp_ConditionType = { "ConditionType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCBehaviourCondition, ConditionType), Z_Construct_UEnum_RemoteControlLogic_ERCBehaviourConditionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics::NewProp_ConditionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics::NewProp_ConditionType_MetaData)) }; // 2080737675
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics::NewProp_Comparand_MetaData[] = {
		{ "Comment", "/** The value with which to compare */" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/Conditional/RCBehaviourConditional.h" },
		{ "ToolTip", "The value with which to compare" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics::NewProp_Comparand = { "Comparand", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCBehaviourCondition, Comparand), Z_Construct_UClass_URCVirtualPropertySelfContainer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics::NewProp_Comparand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics::NewProp_Comparand_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics::NewProp_ConditionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics::NewProp_ConditionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics::NewProp_Comparand,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlLogic,
		nullptr,
		&NewStructOps,
		"RCBehaviourCondition",
		sizeof(FRCBehaviourCondition),
		alignof(FRCBehaviourCondition),
		Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCBehaviourCondition()
	{
		if (!Z_Registration_Info_UScriptStruct_RCBehaviourCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCBehaviourCondition.InnerSingleton, Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCBehaviourCondition.InnerSingleton;
	}
	void URCBehaviourConditional::StaticRegisterNativesURCBehaviourConditional()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCBehaviourConditional);
	UClass* Z_Construct_UClass_URCBehaviourConditional_NoRegister()
	{
		return URCBehaviourConditional::StaticClass();
	}
	struct Z_Construct_UClass_URCBehaviourConditional_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Conditions_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Conditions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Conditions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Comparand_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Comparand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCBehaviourConditional_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URCBehaviour,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlLogic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCBehaviourConditional_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * [Conditional Behaviour]\n * \n * Supports unique conditions per action that allow powerful Logic & Rigging of multiple usecases\n * including Tricode based multi-mapping (selector behaviour), simulation of Hide On Empty behaviours, etc.\n */" },
		{ "IncludePath", "Behaviour/Builtin/Conditional/RCBehaviourConditional.h" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/Conditional/RCBehaviourConditional.h" },
		{ "ToolTip", "[Conditional Behaviour]\n\nSupports unique conditions per action that allow powerful Logic & Rigging of multiple usecases\nincluding Tricode based multi-mapping (selector behaviour), simulation of Hide On Empty behaviours, etc." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URCBehaviourConditional_Statics::NewProp_Conditions_ValueProp = { "Conditions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRCBehaviourCondition, METADATA_PARAMS(nullptr, 0) }; // 3954777689
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URCBehaviourConditional_Statics::NewProp_Conditions_Key_KeyProp = { "Conditions_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URCAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCBehaviourConditional_Statics::NewProp_Conditions_MetaData[] = {
		{ "Comment", "/** Data storage for Actions and related Conditions; stored as a mapping of Action object and associated condition data\n\x09*  Each Action is associated with a unique condition (for the Conditional Behaviour) */" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/Conditional/RCBehaviourConditional.h" },
		{ "ToolTip", "Data storage for Actions and related Conditions; stored as a mapping of Action object and associated condition data\nEach Action is associated with a unique condition (for the Conditional Behaviour)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URCBehaviourConditional_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCBehaviourConditional, Conditions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URCBehaviourConditional_Statics::NewProp_Conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviourConditional_Statics::NewProp_Conditions_MetaData)) }; // 3954777689
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCBehaviourConditional_Statics::NewProp_Comparand_MetaData[] = {
		{ "Comment", "/** Virtual property used to build the Comparand - i.e. the property with which the Controller will be compared for a given condition*/" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/Conditional/RCBehaviourConditional.h" },
		{ "ToolTip", "Virtual property used to build the Comparand - i.e. the property with which the Controller will be compared for a given condition" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URCBehaviourConditional_Statics::NewProp_Comparand = { "Comparand", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCBehaviourConditional, Comparand), Z_Construct_UClass_URCVirtualPropertySelfContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URCBehaviourConditional_Statics::NewProp_Comparand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviourConditional_Statics::NewProp_Comparand_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URCBehaviourConditional_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCBehaviourConditional_Statics::NewProp_Conditions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCBehaviourConditional_Statics::NewProp_Conditions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCBehaviourConditional_Statics::NewProp_Conditions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCBehaviourConditional_Statics::NewProp_Comparand,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCBehaviourConditional_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCBehaviourConditional>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCBehaviourConditional_Statics::ClassParams = {
		&URCBehaviourConditional::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URCBehaviourConditional_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviourConditional_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URCBehaviourConditional_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviourConditional_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCBehaviourConditional()
	{
		if (!Z_Registration_Info_UClass_URCBehaviourConditional.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCBehaviourConditional.OuterSingleton, Z_Construct_UClass_URCBehaviourConditional_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCBehaviourConditional.OuterSingleton;
	}
	template<> REMOTECONTROLLOGIC_API UClass* StaticClass<URCBehaviourConditional>()
	{
		return URCBehaviourConditional::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCBehaviourConditional);
	URCBehaviourConditional::~URCBehaviourConditional() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditional_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditional_h_Statics::EnumInfo[] = {
		{ ERCBehaviourConditionType_StaticEnum, TEXT("ERCBehaviourConditionType"), &Z_Registration_Info_UEnum_ERCBehaviourConditionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2080737675U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditional_h_Statics::ScriptStructInfo[] = {
		{ FRCBehaviourCondition::StaticStruct, Z_Construct_UScriptStruct_FRCBehaviourCondition_Statics::NewStructOps, TEXT("RCBehaviourCondition"), &Z_Registration_Info_UScriptStruct_RCBehaviourCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCBehaviourCondition), 3954777689U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditional_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URCBehaviourConditional, URCBehaviourConditional::StaticClass, TEXT("URCBehaviourConditional"), &Z_Registration_Info_UClass_URCBehaviourConditional, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCBehaviourConditional), 14398857U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditional_h_553408216(TEXT("/Script/RemoteControlLogic"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditional_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditional_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditional_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditional_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditional_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditional_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
