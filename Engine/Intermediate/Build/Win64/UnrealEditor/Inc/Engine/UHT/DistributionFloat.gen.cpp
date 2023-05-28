// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionFloat() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistribution();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDistributionLookupTable();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatDistribution();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistribution();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_UScriptStruct_FFloatDistribution_Statics
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

		struct FFloatDistribution
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatDistribution_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Type-safe floating point distribution. */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
		{ "ToolTip", "Type-safe floating point distribution." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatDistribution_Statics::NewProp_Table_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloatDistribution_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFloatDistribution, Table), Z_Construct_UScriptStruct_FDistributionLookupTable, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatDistribution_Statics::NewProp_Table_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatDistribution_Statics::NewProp_Table_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatDistribution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatDistribution_Statics::NewProp_Table,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatDistribution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		nullptr,
		"FloatDistribution",
		sizeof(FFloatDistribution),
		alignof(FFloatDistribution),
		Z_Construct_UScriptStruct_FFloatDistribution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatDistribution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatDistribution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatDistribution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFloatDistribution()
	{
		static UScriptStruct* ReturnStruct = nullptr;
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFloatDistribution_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}

static_assert(std::is_polymorphic<FRawDistributionFloat>() == std::is_polymorphic<FRawDistribution>(), "USTRUCT FRawDistributionFloat cannot be polymorphic unless super FRawDistribution is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RawDistributionFloat;
class UScriptStruct* FRawDistributionFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RawDistributionFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RawDistributionFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawDistributionFloat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RawDistributionFloat"));
	}
	return Z_Registration_Info_UScriptStruct_RawDistributionFloat.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRawDistributionFloat>()
{
	return FRawDistributionFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRawDistributionFloat_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distribution_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Distribution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawDistributionFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_MinValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawDistributionFloat, MinValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_MinValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_MinValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_MaxValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawDistributionFloat, MaxValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_MaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_Distribution_MetaData[] = {
		{ "Category", "RawDistributionFloat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_Distribution = { "Distribution", nullptr, (EPropertyFlags)0x0014000002080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawDistributionFloat, Distribution), Z_Construct_UClass_UDistributionFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_Distribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_Distribution_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_MinValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_MaxValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_Distribution,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FRawDistribution,
		&NewStructOps,
		"RawDistributionFloat",
		sizeof(FRawDistributionFloat),
		alignof(FRawDistributionFloat),
		Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_RawDistributionFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RawDistributionFloat.InnerSingleton, Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RawDistributionFloat.InnerSingleton;
	}
	void UDistributionFloat::StaticRegisterNativesUDistributionFloat()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDistributionFloat);
	UClass* Z_Construct_UClass_UDistributionFloat_NoRegister()
	{
		return UDistributionFloat::StaticClass();
	}
	struct Z_Construct_UClass_UDistributionFloat_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBakedDataSuccesfully_MetaData[];
#endif
		static void NewProp_bBakedDataSuccesfully_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakedDataSuccesfully;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistributionFloat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDistribution,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloat_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Distributions/DistributionFloat.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bCanBeBaked_MetaData[] = {
		{ "Category", "Baked" },
		{ "Comment", "/** Can this variable be baked out to a FRawDistribution? Should be true 99% of the time*/" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
		{ "ToolTip", "Can this variable be baked out to a FRawDistribution? Should be true 99% of the time" },
	};
#endif
	void Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bCanBeBaked_SetBit(void* Obj)
	{
		((UDistributionFloat*)Obj)->bCanBeBaked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bCanBeBaked = { "bCanBeBaked", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDistributionFloat), &Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bCanBeBaked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bCanBeBaked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bCanBeBaked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bBakedDataSuccesfully_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
	};
#endif
	void Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bBakedDataSuccesfully_SetBit(void* Obj)
	{
		((UDistributionFloat*)Obj)->bBakedDataSuccesfully = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bBakedDataSuccesfully = { "bBakedDataSuccesfully", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDistributionFloat), &Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bBakedDataSuccesfully_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bBakedDataSuccesfully_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bBakedDataSuccesfully_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bCanBeBaked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bBakedDataSuccesfully,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistributionFloat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionFloat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistributionFloat_Statics::ClassParams = {
		&UDistributionFloat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDistributionFloat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloat_Statics::PropPointers),
		0,
		0x003030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDistributionFloat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistributionFloat()
	{
		if (!Z_Registration_Info_UClass_UDistributionFloat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistributionFloat.OuterSingleton, Z_Construct_UClass_UDistributionFloat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDistributionFloat.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDistributionFloat>()
	{
		return UDistributionFloat::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionFloat);
	UDistributionFloat::~UDistributionFloat() {}
	IMPLEMENT_FARCHIVE_SERIALIZER(UDistributionFloat)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_Statics::ScriptStructInfo[] = {
		{ FRawDistributionFloat::StaticStruct, Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewStructOps, TEXT("RawDistributionFloat"), &Z_Registration_Info_UScriptStruct_RawDistributionFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRawDistributionFloat), 2827880765U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDistributionFloat, UDistributionFloat::StaticClass, TEXT("UDistributionFloat"), &Z_Registration_Info_UClass_UDistributionFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistributionFloat), 1023555644U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_2829589890(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
