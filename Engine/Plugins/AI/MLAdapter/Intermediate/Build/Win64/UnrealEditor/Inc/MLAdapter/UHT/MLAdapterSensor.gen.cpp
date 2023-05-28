// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MLAdapter/Source/MLAdapter/Public/Sensors/MLAdapterSensor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLAdapterSensor() {}
// Cross Module References
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterAgentElement();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSensor();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSensor_NoRegister();
	MLADAPTER_API UEnum* Z_Construct_UEnum_MLAdapter_EMLAdapterTickPolicy();
	UPackage* Z_Construct_UPackage__Script_MLAdapter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMLAdapterTickPolicy;
	static UEnum* EMLAdapterTickPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMLAdapterTickPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMLAdapterTickPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MLAdapter_EMLAdapterTickPolicy, (UObject*)Z_Construct_UPackage__Script_MLAdapter(), TEXT("EMLAdapterTickPolicy"));
		}
		return Z_Registration_Info_UEnum_EMLAdapterTickPolicy.OuterSingleton;
	}
	template<> MLADAPTER_API UEnum* StaticEnum<EMLAdapterTickPolicy>()
	{
		return EMLAdapterTickPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_MLAdapter_EMLAdapterTickPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MLAdapter_EMLAdapterTickPolicy_Statics::Enumerators[] = {
		{ "EMLAdapterTickPolicy::EveryTick", (int64)EMLAdapterTickPolicy::EveryTick },
		{ "EMLAdapterTickPolicy::EveryXSeconds", (int64)EMLAdapterTickPolicy::EveryXSeconds },
		{ "EMLAdapterTickPolicy::EveryNTicks", (int64)EMLAdapterTickPolicy::EveryNTicks },
		{ "EMLAdapterTickPolicy::Never", (int64)EMLAdapterTickPolicy::Never },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MLAdapter_EMLAdapterTickPolicy_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Controls the frequency that a sensor should tick at. */" },
		{ "EveryNTicks.Name", "EMLAdapterTickPolicy::EveryNTicks" },
		{ "EveryTick.Name", "EMLAdapterTickPolicy::EveryTick" },
		{ "EveryXSeconds.Name", "EMLAdapterTickPolicy::EveryXSeconds" },
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor.h" },
		{ "Never.Name", "EMLAdapterTickPolicy::Never" },
		{ "ToolTip", "Controls the frequency that a sensor should tick at." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MLAdapter_EMLAdapterTickPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MLAdapter,
		nullptr,
		"EMLAdapterTickPolicy",
		"EMLAdapterTickPolicy",
		Z_Construct_UEnum_MLAdapter_EMLAdapterTickPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MLAdapter_EMLAdapterTickPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MLAdapter_EMLAdapterTickPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MLAdapter_EMLAdapterTickPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MLAdapter_EMLAdapterTickPolicy()
	{
		if (!Z_Registration_Info_UEnum_EMLAdapterTickPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMLAdapterTickPolicy.InnerSingleton, Z_Construct_UEnum_MLAdapter_EMLAdapterTickPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMLAdapterTickPolicy.InnerSingleton;
	}
	void UMLAdapterSensor::StaticRegisterNativesUMLAdapterSensor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLAdapterSensor);
	UClass* Z_Construct_UClass_UMLAdapterSensor_NoRegister()
	{
		return UMLAdapterSensor::StaticClass();
	}
	struct Z_Construct_UClass_UMLAdapterSensor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresPawn_MetaData[];
#endif
		static void NewProp_bRequiresPawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPolling_MetaData[];
#endif
		static void NewProp_bIsPolling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPolling;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TickPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TickPolicy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLAdapterSensor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLAdapterAgentElement,
		(UObject* (*)())Z_Construct_UPackage__Script_MLAdapter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Allows an agent to sense information about the game world or itself. */" },
		{ "IncludePath", "Sensors/MLAdapterSensor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Allows an agent to sense information about the game world or itself." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_Statics::NewProp_bRequiresPawn_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "Comment", "/** @todo this is not currently referenced anywhere */" },
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor.h" },
		{ "ToolTip", "@todo this is not currently referenced anywhere" },
	};
#endif
	void Z_Construct_UClass_UMLAdapterSensor_Statics::NewProp_bRequiresPawn_SetBit(void* Obj)
	{
		((UMLAdapterSensor*)Obj)->bRequiresPawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLAdapterSensor_Statics::NewProp_bRequiresPawn = { "bRequiresPawn", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMLAdapterSensor), &Z_Construct_UClass_UMLAdapterSensor_Statics::NewProp_bRequiresPawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_Statics::NewProp_bRequiresPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Statics::NewProp_bRequiresPawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_Statics::NewProp_bIsPolling_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "Comment", "/** @todo this is not currently referenced anywhere */" },
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor.h" },
		{ "ToolTip", "@todo this is not currently referenced anywhere" },
	};
#endif
	void Z_Construct_UClass_UMLAdapterSensor_Statics::NewProp_bIsPolling_SetBit(void* Obj)
	{
		((UMLAdapterSensor*)Obj)->bIsPolling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLAdapterSensor_Statics::NewProp_bIsPolling = { "bIsPolling", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMLAdapterSensor), &Z_Construct_UClass_UMLAdapterSensor_Statics::NewProp_bIsPolling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_Statics::NewProp_bIsPolling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Statics::NewProp_bIsPolling_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMLAdapterSensor_Statics::NewProp_TickPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_Statics::NewProp_TickPolicy_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "Comment", "/** Determines what frequency this sensor ticks at. */" },
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor.h" },
		{ "ToolTip", "Determines what frequency this sensor ticks at." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMLAdapterSensor_Statics::NewProp_TickPolicy = { "TickPolicy", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSensor, TickPolicy), Z_Construct_UEnum_MLAdapter_EMLAdapterTickPolicy, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_Statics::NewProp_TickPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Statics::NewProp_TickPolicy_MetaData)) }; // 4174028931
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLAdapterSensor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_Statics::NewProp_bRequiresPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_Statics::NewProp_bIsPolling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_Statics::NewProp_TickPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_Statics::NewProp_TickPolicy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLAdapterSensor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLAdapterSensor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLAdapterSensor_Statics::ClassParams = {
		&UMLAdapterSensor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMLAdapterSensor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLAdapterSensor()
	{
		if (!Z_Registration_Info_UClass_UMLAdapterSensor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLAdapterSensor.OuterSingleton, Z_Construct_UClass_UMLAdapterSensor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLAdapterSensor.OuterSingleton;
	}
	template<> MLADAPTER_API UClass* StaticClass<UMLAdapterSensor>()
	{
		return UMLAdapterSensor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLAdapterSensor);
	UMLAdapterSensor::~UMLAdapterSensor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_Statics::EnumInfo[] = {
		{ EMLAdapterTickPolicy_StaticEnum, TEXT("EMLAdapterTickPolicy"), &Z_Registration_Info_UEnum_EMLAdapterTickPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4174028931U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLAdapterSensor, UMLAdapterSensor::StaticClass, TEXT("UMLAdapterSensor"), &Z_Registration_Info_UClass_UMLAdapterSensor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLAdapterSensor), 3043133910U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_3959167069(TEXT("/Script/MLAdapter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
