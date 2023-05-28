// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Tasks/AbilityTask_NetworkSyncPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_NetworkSyncPoint() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_NetworkSyncPoint();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EAbilityTaskNetSyncType();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_NetworkSyncDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_NetworkSyncDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_NetworkSyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_NetworkSyncPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_NetworkSyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "NetworkSyncDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_NetworkSyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_NetworkSyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_NetworkSyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_NetworkSyncDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FNetworkSyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& NetworkSyncDelegate)
{
	NetworkSyncDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilityTaskNetSyncType;
	static UEnum* EAbilityTaskNetSyncType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAbilityTaskNetSyncType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAbilityTaskNetSyncType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EAbilityTaskNetSyncType, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EAbilityTaskNetSyncType"));
		}
		return Z_Registration_Info_UEnum_EAbilityTaskNetSyncType.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EAbilityTaskNetSyncType>()
	{
		return EAbilityTaskNetSyncType_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EAbilityTaskNetSyncType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EAbilityTaskNetSyncType_Statics::Enumerators[] = {
		{ "EAbilityTaskNetSyncType::BothWait", (int64)EAbilityTaskNetSyncType::BothWait },
		{ "EAbilityTaskNetSyncType::OnlyServerWait", (int64)EAbilityTaskNetSyncType::OnlyServerWait },
		{ "EAbilityTaskNetSyncType::OnlyClientWait", (int64)EAbilityTaskNetSyncType::OnlyClientWait },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EAbilityTaskNetSyncType_Statics::Enum_MetaDataParams[] = {
		{ "BothWait.Comment", "/** Both client and server wait until the other signals */" },
		{ "BothWait.Name", "EAbilityTaskNetSyncType::BothWait" },
		{ "BothWait.ToolTip", "Both client and server wait until the other signals" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_NetworkSyncPoint.h" },
		{ "OnlyClientWait.Comment", "/** Only client will wait for the server signal. Server will signal and immediately continue without waiting to hear from Client. */" },
		{ "OnlyClientWait.Name", "EAbilityTaskNetSyncType::OnlyClientWait" },
		{ "OnlyClientWait.ToolTip", "Only client will wait for the server signal. Server will signal and immediately continue without waiting to hear from Client." },
		{ "OnlyServerWait.Comment", "/** Only server will wait for the client signal. Client will signal and immediately continue without waiting to hear from Server. */" },
		{ "OnlyServerWait.Name", "EAbilityTaskNetSyncType::OnlyServerWait" },
		{ "OnlyServerWait.ToolTip", "Only server will wait for the client signal. Client will signal and immediately continue without waiting to hear from Server." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EAbilityTaskNetSyncType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EAbilityTaskNetSyncType",
		"EAbilityTaskNetSyncType",
		Z_Construct_UEnum_GameplayAbilities_EAbilityTaskNetSyncType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EAbilityTaskNetSyncType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EAbilityTaskNetSyncType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EAbilityTaskNetSyncType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EAbilityTaskNetSyncType()
	{
		if (!Z_Registration_Info_UEnum_EAbilityTaskNetSyncType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbilityTaskNetSyncType.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EAbilityTaskNetSyncType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAbilityTaskNetSyncType.InnerSingleton;
	}
	DEFINE_FUNCTION(UAbilityTask_NetworkSyncPoint::execWaitNetSync)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_ENUM(EAbilityTaskNetSyncType,Z_Param_SyncType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_NetworkSyncPoint**)Z_Param__Result=UAbilityTask_NetworkSyncPoint::WaitNetSync(Z_Param_OwningAbility,EAbilityTaskNetSyncType(Z_Param_SyncType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_NetworkSyncPoint::execOnSignalCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSignalCallback();
		P_NATIVE_END;
	}
	void UAbilityTask_NetworkSyncPoint::StaticRegisterNativesUAbilityTask_NetworkSyncPoint()
	{
		UClass* Class = UAbilityTask_NetworkSyncPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSignalCallback", &UAbilityTask_NetworkSyncPoint::execOnSignalCallback },
			{ "WaitNetSync", &UAbilityTask_NetworkSyncPoint::execWaitNetSync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_OnSignalCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_OnSignalCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_NetworkSyncPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_OnSignalCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_NetworkSyncPoint, nullptr, "OnSignalCallback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_OnSignalCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_OnSignalCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_OnSignalCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_OnSignalCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_WaitNetSync_Statics
	{
		struct AbilityTask_NetworkSyncPoint_eventWaitNetSync_Parms
		{
			UGameplayAbility* OwningAbility;
			EAbilityTaskNetSyncType SyncType;
			UAbilityTask_NetworkSyncPoint* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SyncType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SyncType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_NetworkSyncPoint_eventWaitNetSync_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::NewProp_SyncType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::NewProp_SyncType = { "SyncType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_NetworkSyncPoint_eventWaitNetSync_Parms, SyncType), Z_Construct_UEnum_GameplayAbilities_EAbilityTaskNetSyncType, METADATA_PARAMS(nullptr, 0) }; // 2195961649
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_NetworkSyncPoint_eventWaitNetSync_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::NewProp_SyncType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::NewProp_SyncType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/**\n\x09 *\x09\n\x09 *\x09Synchronize execution flow between Client and Server. Depending on SyncType, the Client and Server will wait for the other to reach this node or another WaitNetSync node in the ability before continuing execution.  \n\x09 *\x09\n\x09 *\x09""BothWait - Both Client and Server will wait until the other reaches the node. (Whoever gets their first, waits for the other before continueing).\n\x09 *\x09OnlyServerWait - Only server will wait for the client signal. Client will signal and immediately continue without waiting to hear from Server.\n\x09 *\x09OnlyClientWait - Only client will wait for the server signal. Server will signal and immediately continue without waiting to hear from Client.\n\x09 *\x09\n\x09 *\x09Note that this is \"ability instance wide\". These sync points never affect sync points in other abilities. \n\x09 *\x09\n\x09 *\x09In most cases you will have both client and server execution paths connected to the same WaitNetSync node. However it is possible to use separate nodes\n\x09 *\x09""for cleanliness of the graph. The \"signal\" is \"ability instance wide\".\n\x09 *\x09\n\x09 */" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_NetworkSyncPoint.h" },
		{ "ToolTip", "Synchronize execution flow between Client and Server. Depending on SyncType, the Client and Server will wait for the other to reach this node or another WaitNetSync node in the ability before continuing execution.\n\nBothWait - Both Client and Server will wait until the other reaches the node. (Whoever gets their first, waits for the other before continueing).\nOnlyServerWait - Only server will wait for the client signal. Client will signal and immediately continue without waiting to hear from Server.\nOnlyClientWait - Only client will wait for the server signal. Server will signal and immediately continue without waiting to hear from Client.\n\nNote that this is \"ability instance wide\". These sync points never affect sync points in other abilities.\n\nIn most cases you will have both client and server execution paths connected to the same WaitNetSync node. However it is possible to use separate nodes\nfor cleanliness of the graph. The \"signal\" is \"ability instance wide\"." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_NetworkSyncPoint, nullptr, "WaitNetSync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::AbilityTask_NetworkSyncPoint_eventWaitNetSync_Parms), Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_WaitNetSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_NetworkSyncPoint);
	UClass* Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_NoRegister()
	{
		return UAbilityTask_NetworkSyncPoint::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSync_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSync;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_OnSignalCallback, "OnSignalCallback" }, // 1197862789
		{ &Z_Construct_UFunction_UAbilityTask_NetworkSyncPoint_WaitNetSync, "WaitNetSync" }, // 1303893908
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Task for providing a generic sync point for client server (one can wait for a signal from the other) */" },
		{ "IncludePath", "Abilities/Tasks/AbilityTask_NetworkSyncPoint.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_NetworkSyncPoint.h" },
		{ "ToolTip", "Task for providing a generic sync point for client server (one can wait for a signal from the other)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_Statics::NewProp_OnSync_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_NetworkSyncPoint.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_Statics::NewProp_OnSync = { "OnSync", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_NetworkSyncPoint, OnSync), Z_Construct_UDelegateFunction_GameplayAbilities_NetworkSyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_Statics::NewProp_OnSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_Statics::NewProp_OnSync_MetaData)) }; // 3044312101
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_Statics::NewProp_OnSync,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_NetworkSyncPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_Statics::ClassParams = {
		&UAbilityTask_NetworkSyncPoint::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_NetworkSyncPoint()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_NetworkSyncPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_NetworkSyncPoint.OuterSingleton, Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_NetworkSyncPoint.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_NetworkSyncPoint>()
	{
		return UAbilityTask_NetworkSyncPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_NetworkSyncPoint);
	UAbilityTask_NetworkSyncPoint::~UAbilityTask_NetworkSyncPoint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_NetworkSyncPoint_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_NetworkSyncPoint_h_Statics::EnumInfo[] = {
		{ EAbilityTaskNetSyncType_StaticEnum, TEXT("EAbilityTaskNetSyncType"), &Z_Registration_Info_UEnum_EAbilityTaskNetSyncType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2195961649U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_NetworkSyncPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_NetworkSyncPoint, UAbilityTask_NetworkSyncPoint::StaticClass, TEXT("UAbilityTask_NetworkSyncPoint"), &Z_Registration_Info_UClass_UAbilityTask_NetworkSyncPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_NetworkSyncPoint), 3245550466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_NetworkSyncPoint_h_595155523(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_NetworkSyncPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_NetworkSyncPoint_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_NetworkSyncPoint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_NetworkSyncPoint_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
