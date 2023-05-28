// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionVector() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UDistribution();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVector();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVector_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorLockFlags();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDistributionLookupTable();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistribution();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector4Distribution();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorDistribution();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDistributionVectorLockFlags;
	static UEnum* EDistributionVectorLockFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDistributionVectorLockFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDistributionVectorLockFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDistributionVectorLockFlags, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDistributionVectorLockFlags"));
		}
		return Z_Registration_Info_UEnum_EDistributionVectorLockFlags.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDistributionVectorLockFlags>()
	{
		return EDistributionVectorLockFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EDistributionVectorLockFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EDistributionVectorLockFlags_Statics::Enumerators[] = {
		{ "EDVLF_None", (int64)EDVLF_None },
		{ "EDVLF_XY", (int64)EDVLF_XY },
		{ "EDVLF_XZ", (int64)EDVLF_XZ },
		{ "EDVLF_YZ", (int64)EDVLF_YZ },
		{ "EDVLF_XYZ", (int64)EDVLF_XYZ },
		{ "EDVLF_MAX", (int64)EDVLF_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EDistributionVectorLockFlags_Statics::Enum_MetaDataParams[] = {
		{ "EDVLF_MAX.Name", "EDVLF_MAX" },
		{ "EDVLF_None.DisplayName", "None" },
		{ "EDVLF_None.Name", "EDVLF_None" },
		{ "EDVLF_XY.DisplayName", "XY" },
		{ "EDVLF_XY.Name", "EDVLF_XY" },
		{ "EDVLF_XYZ.DisplayName", "XYZ" },
		{ "EDVLF_XYZ.Name", "EDVLF_XYZ" },
		{ "EDVLF_XZ.DisplayName", "XZ" },
		{ "EDVLF_XZ.Name", "EDVLF_XZ" },
		{ "EDVLF_YZ.DisplayName", "YZ" },
		{ "EDVLF_YZ.Name", "EDVLF_YZ" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDistributionVectorLockFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EDistributionVectorLockFlags",
		"EDistributionVectorLockFlags",
		Z_Construct_UEnum_Engine_EDistributionVectorLockFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDistributionVectorLockFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EDistributionVectorLockFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDistributionVectorLockFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EDistributionVectorLockFlags()
	{
		if (!Z_Registration_Info_UEnum_EDistributionVectorLockFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDistributionVectorLockFlags.InnerSingleton, Z_Construct_UEnum_Engine_EDistributionVectorLockFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDistributionVectorLockFlags.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDistributionVectorMirrorFlags;
	static UEnum* EDistributionVectorMirrorFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDistributionVectorMirrorFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDistributionVectorMirrorFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDistributionVectorMirrorFlags"));
		}
		return Z_Registration_Info_UEnum_EDistributionVectorMirrorFlags.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDistributionVectorMirrorFlags>()
	{
		return EDistributionVectorMirrorFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags_Statics::Enumerators[] = {
		{ "EDVMF_Same", (int64)EDVMF_Same },
		{ "EDVMF_Different", (int64)EDVMF_Different },
		{ "EDVMF_Mirror", (int64)EDVMF_Mirror },
		{ "EDVMF_MAX", (int64)EDVMF_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags_Statics::Enum_MetaDataParams[] = {
		{ "EDVMF_Different.DisplayName", "Different" },
		{ "EDVMF_Different.Name", "EDVMF_Different" },
		{ "EDVMF_MAX.Name", "EDVMF_MAX" },
		{ "EDVMF_Mirror.DisplayName", "Mirror" },
		{ "EDVMF_Mirror.Name", "EDVMF_Mirror" },
		{ "EDVMF_Same.DisplayName", "Same" },
		{ "EDVMF_Same.Name", "EDVMF_Same" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EDistributionVectorMirrorFlags",
		"EDistributionVectorMirrorFlags",
		Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags()
	{
		if (!Z_Registration_Info_UEnum_EDistributionVectorMirrorFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDistributionVectorMirrorFlags.InnerSingleton, Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDistributionVectorMirrorFlags.InnerSingleton;
	}
	struct Z_Construct_UScriptStruct_FVectorDistribution_Statics
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

		struct FVectorDistribution
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorDistribution_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Type-safe vector distribution. */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
		{ "ToolTip", "Type-safe vector distribution." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorDistribution_Statics::NewProp_Table_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorDistribution_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVectorDistribution, Table), Z_Construct_UScriptStruct_FDistributionLookupTable, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorDistribution_Statics::NewProp_Table_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorDistribution_Statics::NewProp_Table_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVectorDistribution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorDistribution_Statics::NewProp_Table,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorDistribution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		nullptr,
		"VectorDistribution",
		sizeof(FVectorDistribution),
		alignof(FVectorDistribution),
		Z_Construct_UScriptStruct_FVectorDistribution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorDistribution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorDistribution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorDistribution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVectorDistribution()
	{
		static UScriptStruct* ReturnStruct = nullptr;
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVectorDistribution_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	struct Z_Construct_UScriptStruct_FVector4Distribution_Statics
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

		struct FVector4Distribution
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector4Distribution_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Type-safe 4-vector distribution. */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
		{ "ToolTip", "Type-safe 4-vector distribution." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector4Distribution_Statics::NewProp_Table_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVector4Distribution_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVector4Distribution, Table), Z_Construct_UScriptStruct_FDistributionLookupTable, METADATA_PARAMS(Z_Construct_UScriptStruct_FVector4Distribution_Statics::NewProp_Table_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4Distribution_Statics::NewProp_Table_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector4Distribution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector4Distribution_Statics::NewProp_Table,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector4Distribution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		nullptr,
		"Vector4Distribution",
		sizeof(FVector4Distribution),
		alignof(FVector4Distribution),
		Z_Construct_UScriptStruct_FVector4Distribution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4Distribution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVector4Distribution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4Distribution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVector4Distribution()
	{
		static UScriptStruct* ReturnStruct = nullptr;
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVector4Distribution_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}

static_assert(std::is_polymorphic<FRawDistributionVector>() == std::is_polymorphic<FRawDistribution>(), "USTRUCT FRawDistributionVector cannot be polymorphic unless super FRawDistribution is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RawDistributionVector;
class UScriptStruct* FRawDistributionVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RawDistributionVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RawDistributionVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawDistributionVector, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RawDistributionVector"));
	}
	return Z_Registration_Info_UScriptStruct_RawDistributionVector.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRawDistributionVector>()
{
	return FRawDistributionVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRawDistributionVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinValueVec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinValueVec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxValueVec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxValueVec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distribution_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Distribution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistributionVector_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawDistributionVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawDistributionVector, MinValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawDistributionVector, MaxValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValueVec_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValueVec = { "MinValueVec", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawDistributionVector, MinValueVec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValueVec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValueVec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValueVec_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValueVec = { "MaxValueVec", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawDistributionVector, MaxValueVec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValueVec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValueVec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_Distribution_MetaData[] = {
		{ "Category", "RawDistributionVector" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_Distribution = { "Distribution", nullptr, (EPropertyFlags)0x0014000002080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawDistributionVector, Distribution), Z_Construct_UClass_UDistributionVector_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_Distribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_Distribution_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawDistributionVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValueVec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValueVec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_Distribution,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawDistributionVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FRawDistribution,
		&NewStructOps,
		"RawDistributionVector",
		sizeof(FRawDistributionVector),
		alignof(FRawDistributionVector),
		Z_Construct_UScriptStruct_FRawDistributionVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RawDistributionVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RawDistributionVector.InnerSingleton, Z_Construct_UScriptStruct_FRawDistributionVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RawDistributionVector.InnerSingleton;
	}
	void UDistributionVector::StaticRegisterNativesUDistributionVector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDistributionVector);
	UClass* Z_Construct_UClass_UDistributionVector_NoRegister()
	{
		return UDistributionVector::StaticClass();
	}
	struct Z_Construct_UClass_UDistributionVector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeBaked_MetaData[];
#endif
		static void NewProp_bCanBeBaked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeBaked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDirty_MetaData[];
#endif
		static void NewProp_bIsDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDirty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBakedDataSuccesfully_MetaData[];
#endif
		static void NewProp_bBakedDataSuccesfully_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakedDataSuccesfully;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistributionVector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDistribution,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVector_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Distributions/DistributionVector.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVector_Statics::NewProp_bCanBeBaked_MetaData[] = {
		{ "Category", "Baked" },
		{ "Comment", "/** Can this variable be baked out to a FRawDistribution? Should be true 99% of the time*/" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
		{ "ToolTip", "Can this variable be baked out to a FRawDistribution? Should be true 99% of the time" },
	};
#endif
	void Z_Construct_UClass_UDistributionVector_Statics::NewProp_bCanBeBaked_SetBit(void* Obj)
	{
		((UDistributionVector*)Obj)->bCanBeBaked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionVector_Statics::NewProp_bCanBeBaked = { "bCanBeBaked", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDistributionVector), &Z_Construct_UClass_UDistributionVector_Statics::NewProp_bCanBeBaked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistributionVector_Statics::NewProp_bCanBeBaked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVector_Statics::NewProp_bCanBeBaked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVector_Statics::NewProp_bIsDirty_MetaData[] = {
		{ "Comment", "/** Set internally when the distribution is updated so that that FRawDistribution can know to update itself*/" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
		{ "ToolTip", "Set internally when the distribution is updated so that that FRawDistribution can know to update itself" },
	};
#endif
	void Z_Construct_UClass_UDistributionVector_Statics::NewProp_bIsDirty_SetBit(void* Obj)
	{
		((UDistributionVector*)Obj)->bIsDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionVector_Statics::NewProp_bIsDirty = { "bIsDirty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDistributionVector), &Z_Construct_UClass_UDistributionVector_Statics::NewProp_bIsDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistributionVector_Statics::NewProp_bIsDirty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVector_Statics::NewProp_bIsDirty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVector_Statics::NewProp_bBakedDataSuccesfully_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif
	void Z_Construct_UClass_UDistributionVector_Statics::NewProp_bBakedDataSuccesfully_SetBit(void* Obj)
	{
		((UDistributionVector*)Obj)->bBakedDataSuccesfully = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionVector_Statics::NewProp_bBakedDataSuccesfully = { "bBakedDataSuccesfully", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDistributionVector), &Z_Construct_UClass_UDistributionVector_Statics::NewProp_bBakedDataSuccesfully_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistributionVector_Statics::NewProp_bBakedDataSuccesfully_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVector_Statics::NewProp_bBakedDataSuccesfully_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVector_Statics::NewProp_bCanBeBaked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVector_Statics::NewProp_bIsDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVector_Statics::NewProp_bBakedDataSuccesfully,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistributionVector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionVector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistributionVector_Statics::ClassParams = {
		&UDistributionVector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDistributionVector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVector_Statics::PropPointers),
		0,
		0x003030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDistributionVector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistributionVector()
	{
		if (!Z_Registration_Info_UClass_UDistributionVector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistributionVector.OuterSingleton, Z_Construct_UClass_UDistributionVector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDistributionVector.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDistributionVector>()
	{
		return UDistributionVector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionVector);
	UDistributionVector::~UDistributionVector() {}
	IMPLEMENT_FARCHIVE_SERIALIZER(UDistributionVector)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_Statics::EnumInfo[] = {
		{ EDistributionVectorLockFlags_StaticEnum, TEXT("EDistributionVectorLockFlags"), &Z_Registration_Info_UEnum_EDistributionVectorLockFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2705895626U) },
		{ EDistributionVectorMirrorFlags_StaticEnum, TEXT("EDistributionVectorMirrorFlags"), &Z_Registration_Info_UEnum_EDistributionVectorMirrorFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2895249647U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_Statics::ScriptStructInfo[] = {
		{ FRawDistributionVector::StaticStruct, Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewStructOps, TEXT("RawDistributionVector"), &Z_Registration_Info_UScriptStruct_RawDistributionVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRawDistributionVector), 3056335262U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDistributionVector, UDistributionVector::StaticClass, TEXT("UDistributionVector"), &Z_Registration_Info_UClass_UDistributionVector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistributionVector), 146571716U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_4089604315(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
