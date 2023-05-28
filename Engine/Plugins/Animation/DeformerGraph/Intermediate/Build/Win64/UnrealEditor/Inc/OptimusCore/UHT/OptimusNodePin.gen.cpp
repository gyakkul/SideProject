// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusNodePin.h"
#include "OptimusDataDomain.h"
#include "OptimusDataType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNodePin() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePin();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePin_NoRegister();
	OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusNodePinDirection();
	OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusNodePinStorageType();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataDomain();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataTypeRef();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimusNodePinStorageType;
	static UEnum* EOptimusNodePinStorageType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOptimusNodePinStorageType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOptimusNodePinStorageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OptimusCore_EOptimusNodePinStorageType, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("EOptimusNodePinStorageType"));
		}
		return Z_Registration_Info_UEnum_EOptimusNodePinStorageType.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusNodePinStorageType>()
	{
		return EOptimusNodePinStorageType_StaticEnum();
	}
	struct Z_Construct_UEnum_OptimusCore_EOptimusNodePinStorageType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OptimusCore_EOptimusNodePinStorageType_Statics::Enumerators[] = {
		{ "EOptimusNodePinStorageType::Value", (int64)EOptimusNodePinStorageType::Value },
		{ "EOptimusNodePinStorageType::Resource", (int64)EOptimusNodePinStorageType::Resource },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OptimusCore_EOptimusNodePinStorageType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Specifies the storage type of the pin data */" },
		{ "ModuleRelativePath", "Public/OptimusNodePin.h" },
		{ "Resource.Comment", "/** Plain value of some type */" },
		{ "Resource.Name", "EOptimusNodePinStorageType::Resource" },
		{ "Resource.ToolTip", "Plain value of some type" },
		{ "ToolTip", "Specifies the storage type of the pin data" },
		{ "Value.Name", "EOptimusNodePinStorageType::Value" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OptimusCore_EOptimusNodePinStorageType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		"EOptimusNodePinStorageType",
		"EOptimusNodePinStorageType",
		Z_Construct_UEnum_OptimusCore_EOptimusNodePinStorageType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusNodePinStorageType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OptimusCore_EOptimusNodePinStorageType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusNodePinStorageType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OptimusCore_EOptimusNodePinStorageType()
	{
		if (!Z_Registration_Info_UEnum_EOptimusNodePinStorageType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimusNodePinStorageType.InnerSingleton, Z_Construct_UEnum_OptimusCore_EOptimusNodePinStorageType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOptimusNodePinStorageType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimusNodePinDirection;
	static UEnum* EOptimusNodePinDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOptimusNodePinDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOptimusNodePinDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OptimusCore_EOptimusNodePinDirection, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("EOptimusNodePinDirection"));
		}
		return Z_Registration_Info_UEnum_EOptimusNodePinDirection.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusNodePinDirection>()
	{
		return EOptimusNodePinDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_OptimusCore_EOptimusNodePinDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OptimusCore_EOptimusNodePinDirection_Statics::Enumerators[] = {
		{ "EOptimusNodePinDirection::Unknown", (int64)EOptimusNodePinDirection::Unknown },
		{ "EOptimusNodePinDirection::Input", (int64)EOptimusNodePinDirection::Input },
		{ "EOptimusNodePinDirection::Output", (int64)EOptimusNodePinDirection::Output },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OptimusCore_EOptimusNodePinDirection_Statics::Enum_MetaDataParams[] = {
		{ "Input.Name", "EOptimusNodePinDirection::Input" },
		{ "ModuleRelativePath", "Public/OptimusNodePin.h" },
		{ "Output.Name", "EOptimusNodePinDirection::Output" },
		{ "Unknown.Name", "EOptimusNodePinDirection::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OptimusCore_EOptimusNodePinDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		"EOptimusNodePinDirection",
		"EOptimusNodePinDirection",
		Z_Construct_UEnum_OptimusCore_EOptimusNodePinDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusNodePinDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OptimusCore_EOptimusNodePinDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusNodePinDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OptimusCore_EOptimusNodePinDirection()
	{
		if (!Z_Registration_Info_UEnum_EOptimusNodePinDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimusNodePinDirection.InnerSingleton, Z_Construct_UEnum_OptimusCore_EOptimusNodePinDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOptimusNodePinDirection.InnerSingleton;
	}
	void UOptimusNodePin::StaticRegisterNativesUOptimusNodePin()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNodePin);
	UClass* Z_Construct_UClass_UOptimusNodePin_NoRegister()
	{
		return UOptimusNodePin::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusNodePin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsGroupingPin_MetaData[];
#endif
		static void NewProp_bIsGroupingPin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGroupingPin;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StorageType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StorageType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StorageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataDomain_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataDomain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataType;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubPins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubPins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubPins;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusNodePin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodePin_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OptimusNodePin.h" },
		{ "ModuleRelativePath", "Public/OptimusNodePin.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_bIsGroupingPin_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusNodePin.h" },
	};
#endif
	void Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_bIsGroupingPin_SetBit(void* Obj)
	{
		((UOptimusNodePin*)Obj)->bIsGroupingPin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_bIsGroupingPin = { "bIsGroupingPin", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOptimusNodePin), &Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_bIsGroupingPin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_bIsGroupingPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_bIsGroupingPin_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusNodePin.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNodePin, Direction), Z_Construct_UEnum_OptimusCore_EOptimusNodePinDirection, METADATA_PARAMS(Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_Direction_MetaData)) }; // 4206029600
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_StorageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_StorageType_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusNodePin.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_StorageType = { "StorageType", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNodePin, StorageType_DEPRECATED), Z_Construct_UEnum_OptimusCore_EOptimusNodePinStorageType, METADATA_PARAMS(Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_StorageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_StorageType_MetaData)) }; // 2324896261
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_DataDomain_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusNodePin.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_DataDomain = { "DataDomain", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNodePin, DataDomain), Z_Construct_UScriptStruct_FOptimusDataDomain, METADATA_PARAMS(Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_DataDomain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_DataDomain_MetaData)) }; // 413683696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_DataType_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusNodePin.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNodePin, DataType), Z_Construct_UScriptStruct_FOptimusDataTypeRef, METADATA_PARAMS(Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_DataType_MetaData)) }; // 2733180919
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_SubPins_Inner = { "SubPins", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOptimusNodePin_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_SubPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusNodePin.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_SubPins = { "SubPins", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNodePin, SubPins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_SubPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_SubPins_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNodePin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_bIsGroupingPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_StorageType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_StorageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_DataDomain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_SubPins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodePin_Statics::NewProp_SubPins,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusNodePin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNodePin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNodePin_Statics::ClassParams = {
		&UOptimusNodePin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusNodePin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodePin_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusNodePin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodePin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusNodePin()
	{
		if (!Z_Registration_Info_UClass_UOptimusNodePin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNodePin.OuterSingleton, Z_Construct_UClass_UOptimusNodePin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusNodePin.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNodePin>()
	{
		return UOptimusNodePin::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNodePin);
	UOptimusNodePin::~UOptimusNodePin() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePin_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePin_h_Statics::EnumInfo[] = {
		{ EOptimusNodePinStorageType_StaticEnum, TEXT("EOptimusNodePinStorageType"), &Z_Registration_Info_UEnum_EOptimusNodePinStorageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2324896261U) },
		{ EOptimusNodePinDirection_StaticEnum, TEXT("EOptimusNodePinDirection"), &Z_Registration_Info_UEnum_EOptimusNodePinDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4206029600U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNodePin, UOptimusNodePin::StaticClass, TEXT("UOptimusNodePin"), &Z_Registration_Info_UClass_UOptimusNodePin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNodePin), 303959543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePin_h_2160538996(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePin_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePin_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePin_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
