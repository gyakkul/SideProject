// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MLAdapter/Source/MLAdapter/Public/MLAdapterLibrarian.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLAdapterLibrarian() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterActuator_NoRegister();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterAgent_NoRegister();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSensor_NoRegister();
	MLADAPTER_API UScriptStruct* Z_Construct_UScriptStruct_FMLAdapterLibrarian();
	UPackage* Z_Construct_UPackage__Script_MLAdapter();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MLAdapterLibrarian;
class UScriptStruct* FMLAdapterLibrarian::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MLAdapterLibrarian.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MLAdapterLibrarian.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMLAdapterLibrarian, (UObject*)Z_Construct_UPackage__Script_MLAdapter(), TEXT("MLAdapterLibrarian"));
	}
	return Z_Registration_Info_UScriptStruct_MLAdapterLibrarian.OuterSingleton;
}
template<> MLADAPTER_API UScriptStruct* StaticStruct<FMLAdapterLibrarian>()
{
	return FMLAdapterLibrarian::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FClassPropertyParams NewProp_KnownSensorClasses_ValueProp;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_KnownSensorClasses_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KnownSensorClasses_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_KnownSensorClasses;
		static const UECodeGen_Private::FClassPropertyParams NewProp_KnownActuatorClasses_ValueProp;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_KnownActuatorClasses_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KnownActuatorClasses_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_KnownActuatorClasses;
		static const UECodeGen_Private::FClassPropertyParams NewProp_KnownAgentClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KnownAgentClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KnownAgentClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The FMLAdapterLibrarian discovers all classes that derived from UMLAdapterAgent, UMLAdapterSensor, or UMLAdapterActuator. \n * It provides functionality for finding those classes by name, so that remote clients can spawn them via their name.\n */" },
		{ "ModuleRelativePath", "Public/MLAdapterLibrarian.h" },
		{ "ToolTip", "The FMLAdapterLibrarian discovers all classes that derived from UMLAdapterAgent, UMLAdapterSensor, or UMLAdapterActuator.\nIt provides functionality for finding those classes by name, so that remote clients can spawn them via their name." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMLAdapterLibrarian>();
	}
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownSensorClasses_ValueProp = { "KnownSensorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UMLAdapterSensor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownSensorClasses_Key_KeyProp = { "KnownSensorClasses_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownSensorClasses_MetaData[] = {
		{ "ModuleRelativePath", "Public/MLAdapterLibrarian.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownSensorClasses = { "KnownSensorClasses", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMLAdapterLibrarian, KnownSensorClasses), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownSensorClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownSensorClasses_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownActuatorClasses_ValueProp = { "KnownActuatorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UMLAdapterActuator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownActuatorClasses_Key_KeyProp = { "KnownActuatorClasses_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownActuatorClasses_MetaData[] = {
		{ "ModuleRelativePath", "Public/MLAdapterLibrarian.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownActuatorClasses = { "KnownActuatorClasses", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMLAdapterLibrarian, KnownActuatorClasses), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownActuatorClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownActuatorClasses_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownAgentClasses_Inner = { "KnownAgentClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UMLAdapterAgent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownAgentClasses_MetaData[] = {
		{ "ModuleRelativePath", "Public/MLAdapterLibrarian.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownAgentClasses = { "KnownAgentClasses", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMLAdapterLibrarian, KnownAgentClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownAgentClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownAgentClasses_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownSensorClasses_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownSensorClasses_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownSensorClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownActuatorClasses_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownActuatorClasses_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownActuatorClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownAgentClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewProp_KnownAgentClasses,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MLAdapter,
		nullptr,
		&NewStructOps,
		"MLAdapterLibrarian",
		sizeof(FMLAdapterLibrarian),
		alignof(FMLAdapterLibrarian),
		Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMLAdapterLibrarian()
	{
		if (!Z_Registration_Info_UScriptStruct_MLAdapterLibrarian.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MLAdapterLibrarian.InnerSingleton, Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MLAdapterLibrarian.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_MLAdapterLibrarian_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_MLAdapterLibrarian_h_Statics::ScriptStructInfo[] = {
		{ FMLAdapterLibrarian::StaticStruct, Z_Construct_UScriptStruct_FMLAdapterLibrarian_Statics::NewStructOps, TEXT("MLAdapterLibrarian"), &Z_Registration_Info_UScriptStruct_MLAdapterLibrarian, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMLAdapterLibrarian), 284764233U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_MLAdapterLibrarian_h_3577975795(TEXT("/Script/MLAdapter"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_MLAdapterLibrarian_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_MLAdapterLibrarian_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
