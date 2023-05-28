// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/Distribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistribution() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UDistribution();
	ENGINE_API UClass* Z_Construct_UClass_UDistribution_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_DistributionParamMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDistributionLookupTable();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistribution();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_DistributionParamMode;
	static UEnum* DistributionParamMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_DistributionParamMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_DistributionParamMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_DistributionParamMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DistributionParamMode"));
		}
		return Z_Registration_Info_UEnum_DistributionParamMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<DistributionParamMode>()
	{
		return DistributionParamMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_DistributionParamMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_DistributionParamMode_Statics::Enumerators[] = {
		{ "DPM_Normal", (int64)DPM_Normal },
		{ "DPM_Abs", (int64)DPM_Abs },
		{ "DPM_Direct", (int64)DPM_Direct },
		{ "DPM_MAX", (int64)DPM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_DistributionParamMode_Statics::Enum_MetaDataParams[] = {
		{ "DPM_Abs.Name", "DPM_Abs" },
		{ "DPM_Direct.Name", "DPM_Direct" },
		{ "DPM_MAX.Name", "DPM_MAX" },
		{ "DPM_Normal.Name", "DPM_Normal" },
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_DistributionParamMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"DistributionParamMode",
		"DistributionParamMode",
		Z_Construct_UEnum_Engine_DistributionParamMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_DistributionParamMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_DistributionParamMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_DistributionParamMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_DistributionParamMode()
	{
		if (!Z_Registration_Info_UEnum_DistributionParamMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_DistributionParamMode.InnerSingleton, Z_Construct_UEnum_Engine_DistributionParamMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_DistributionParamMode.InnerSingleton;
	}
	struct Z_Construct_UScriptStruct_FDistributionLookupTable_Statics
	{
		struct FDistributionLookupTable
		{
			float TimeScale;
			float TimeBias;
			TArray<float> Values;
			uint8 Op;
			uint8 EntryCount;
			uint8 EntryStride;
			uint8 SubEntryStride;
			uint8 LockFlag;
		};

#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBias;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Op_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Op;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryCount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EntryCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryStride_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EntryStride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubEntryStride_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SubEntryStride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockFlag_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LockFlag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Lookup table for distributions. */" },
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
		{ "ToolTip", "Lookup table for distributions." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistributionLookupTable, TimeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeBias = { "TimeBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistributionLookupTable, TimeBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeBias_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistributionLookupTable, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Values_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Op_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Op = { "Op", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistributionLookupTable, Op), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Op_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Op_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryCount = { "EntryCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistributionLookupTable, EntryCount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryStride_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryStride = { "EntryStride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistributionLookupTable, EntryStride), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryStride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryStride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_SubEntryStride_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_SubEntryStride = { "SubEntryStride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistributionLookupTable, SubEntryStride), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_SubEntryStride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_SubEntryStride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_LockFlag_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_LockFlag = { "LockFlag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistributionLookupTable, LockFlag), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_LockFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_LockFlag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Op,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryStride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_SubEntryStride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_LockFlag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		nullptr,
		"DistributionLookupTable",
		sizeof(FDistributionLookupTable),
		alignof(FDistributionLookupTable),
		Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDistributionLookupTable()
	{
		static UScriptStruct* ReturnStruct = nullptr;
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	struct Z_Construct_UScriptStruct_FRawDistribution_Statics
	{
		struct FDistributionLookupTable
		{
			float TimeScale;
			float TimeBias;
			TArray<float> Values;
			uint8 Op;
			uint8 EntryCount;
			uint8 EntryStride;
			uint8 SubEntryStride;
			uint8 LockFlag;
		};

		struct FRawDistribution
		{
			FDistributionLookupTable Table;
		};

#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Table_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Table;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistribution_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Base class for raw (baked out) Distribution type\n" },
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
		{ "ToolTip", "Base class for raw (baked out) Distribution type" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistribution_Statics::NewProp_Table_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawDistribution_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawDistribution, Table), Z_Construct_UScriptStruct_FDistributionLookupTable, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistribution_Statics::NewProp_Table_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistribution_Statics::NewProp_Table_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawDistribution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistribution_Statics::NewProp_Table,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawDistribution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		nullptr,
		"RawDistribution",
		sizeof(FRawDistribution),
		alignof(FRawDistribution),
		Z_Construct_UScriptStruct_FRawDistribution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistribution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistribution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistribution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRawDistribution()
	{
		static UScriptStruct* ReturnStruct = nullptr;
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRawDistribution_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	void UDistribution::StaticRegisterNativesUDistribution()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDistribution);
	UClass* Z_Construct_UClass_UDistribution_NoRegister()
	{
		return UDistribution::StaticClass();
	}
	struct Z_Construct_UClass_UDistribution_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistribution_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistribution_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Distributions/Distribution.h" },
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistribution_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistribution>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistribution_Statics::ClassParams = {
		&UDistribution::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x002830A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDistribution_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDistribution_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistribution()
	{
		if (!Z_Registration_Info_UClass_UDistribution.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistribution.OuterSingleton, Z_Construct_UClass_UDistribution_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDistribution.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDistribution>()
	{
		return UDistribution::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistribution);
	UDistribution::~UDistribution() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_Statics::EnumInfo[] = {
		{ DistributionParamMode_StaticEnum, TEXT("DistributionParamMode"), &Z_Registration_Info_UEnum_DistributionParamMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2608299957U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDistribution, UDistribution::StaticClass, TEXT("UDistribution"), &Z_Registration_Info_UClass_UDistribution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistribution), 1878092005U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_2774071148(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
