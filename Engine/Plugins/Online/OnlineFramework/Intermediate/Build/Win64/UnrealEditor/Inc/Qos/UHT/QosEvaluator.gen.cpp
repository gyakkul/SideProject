// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/QosEvaluator.h"
#include "QosRegionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQosEvaluator() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	QOS_API UClass* Z_Construct_UClass_UQosEvaluator();
	QOS_API UClass* Z_Construct_UClass_UQosEvaluator_NoRegister();
	QOS_API UScriptStruct* Z_Construct_UScriptStruct_FDatacenterQosInstance();
	UPackage* Z_Construct_UPackage__Script_Qos();
// End Cross Module References
	void UQosEvaluator::StaticRegisterNativesUQosEvaluator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQosEvaluator);
	UClass* Z_Construct_UClass_UQosEvaluator_NoRegister()
	{
		return UQosEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UQosEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInProgress_MetaData[];
#endif
		static void NewProp_bInProgress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCancelOperation_MetaData[];
#endif
		static void NewProp_bCancelOperation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelOperation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Datacenters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Datacenters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Datacenters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQosEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Qos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQosEvaluator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Evaluates QoS metrics to determine the best datacenter under current conditions\n * Additionally capable of generically pinging an array of servers that have a QosBeaconHost active\n */" },
		{ "IncludePath", "QosEvaluator.h" },
		{ "ModuleRelativePath", "Private/QosEvaluator.h" },
		{ "ToolTip", "Evaluates QoS metrics to determine the best datacenter under current conditions\nAdditionally capable of generically pinging an array of servers that have a QosBeaconHost active" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQosEvaluator_Statics::NewProp_bInProgress_MetaData[] = {
		{ "Comment", "/** A QoS operation is in progress */" },
		{ "ModuleRelativePath", "Private/QosEvaluator.h" },
		{ "ToolTip", "A QoS operation is in progress" },
	};
#endif
	void Z_Construct_UClass_UQosEvaluator_Statics::NewProp_bInProgress_SetBit(void* Obj)
	{
		((UQosEvaluator*)Obj)->bInProgress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQosEvaluator_Statics::NewProp_bInProgress = { "bInProgress", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UQosEvaluator), &Z_Construct_UClass_UQosEvaluator_Statics::NewProp_bInProgress_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQosEvaluator_Statics::NewProp_bInProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQosEvaluator_Statics::NewProp_bInProgress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQosEvaluator_Statics::NewProp_bCancelOperation_MetaData[] = {
		{ "Comment", "/** Should cancel occur at the next available opportunity */" },
		{ "ModuleRelativePath", "Private/QosEvaluator.h" },
		{ "ToolTip", "Should cancel occur at the next available opportunity" },
	};
#endif
	void Z_Construct_UClass_UQosEvaluator_Statics::NewProp_bCancelOperation_SetBit(void* Obj)
	{
		((UQosEvaluator*)Obj)->bCancelOperation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQosEvaluator_Statics::NewProp_bCancelOperation = { "bCancelOperation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UQosEvaluator), &Z_Construct_UClass_UQosEvaluator_Statics::NewProp_bCancelOperation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQosEvaluator_Statics::NewProp_bCancelOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQosEvaluator_Statics::NewProp_bCancelOperation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQosEvaluator_Statics::NewProp_Datacenters_Inner = { "Datacenters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDatacenterQosInstance, METADATA_PARAMS(nullptr, 0) }; // 1160900792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQosEvaluator_Statics::NewProp_Datacenters_MetaData[] = {
		{ "Comment", "/** Array of datacenters currently being evaluated */" },
		{ "ModuleRelativePath", "Private/QosEvaluator.h" },
		{ "ToolTip", "Array of datacenters currently being evaluated" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQosEvaluator_Statics::NewProp_Datacenters = { "Datacenters", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQosEvaluator, Datacenters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQosEvaluator_Statics::NewProp_Datacenters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQosEvaluator_Statics::NewProp_Datacenters_MetaData)) }; // 1160900792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQosEvaluator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosEvaluator_Statics::NewProp_bInProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosEvaluator_Statics::NewProp_bCancelOperation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosEvaluator_Statics::NewProp_Datacenters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosEvaluator_Statics::NewProp_Datacenters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQosEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQosEvaluator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQosEvaluator_Statics::ClassParams = {
		&UQosEvaluator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQosEvaluator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQosEvaluator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQosEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQosEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQosEvaluator()
	{
		if (!Z_Registration_Info_UClass_UQosEvaluator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQosEvaluator.OuterSingleton, Z_Construct_UClass_UQosEvaluator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQosEvaluator.OuterSingleton;
	}
	template<> QOS_API UClass* StaticClass<UQosEvaluator>()
	{
		return UQosEvaluator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQosEvaluator);
	UQosEvaluator::~UQosEvaluator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Private_QosEvaluator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Private_QosEvaluator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQosEvaluator, UQosEvaluator::StaticClass, TEXT("UQosEvaluator"), &Z_Registration_Info_UClass_UQosEvaluator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQosEvaluator), 1637325572U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Private_QosEvaluator_h_2248822961(TEXT("/Script/Qos"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Private_QosEvaluator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Private_QosEvaluator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
