// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StructUtilsTestTypes.h"
#include "PropertyBag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructUtilsTestTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedPropertyBag();
	STRUCTUTILSTESTSUITE_API UClass* Z_Construct_UClass_UBagTestObject1();
	STRUCTUTILSTESTSUITE_API UClass* Z_Construct_UClass_UBagTestObject1_NoRegister();
	STRUCTUTILSTESTSUITE_API UClass* Z_Construct_UClass_UBagTestObject1Derived();
	STRUCTUTILSTESTSUITE_API UClass* Z_Construct_UClass_UBagTestObject1Derived_NoRegister();
	STRUCTUTILSTESTSUITE_API UClass* Z_Construct_UClass_UBagTestObject2();
	STRUCTUTILSTESTSUITE_API UClass* Z_Construct_UClass_UBagTestObject2_NoRegister();
	STRUCTUTILSTESTSUITE_API UClass* Z_Construct_UClass_UTestObjectWithPropertyBag();
	STRUCTUTILSTESTSUITE_API UClass* Z_Construct_UClass_UTestObjectWithPropertyBag_NoRegister();
	STRUCTUTILSTESTSUITE_API UEnum* Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest1();
	STRUCTUTILSTESTSUITE_API UEnum* Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest2();
	STRUCTUTILSTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestStructComplex();
	STRUCTUTILSTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestStructSimple();
	STRUCTUTILSTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestStructSimple1();
	STRUCTUTILSTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestStructSimple2();
	STRUCTUTILSTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestStructSimple3();
	STRUCTUTILSTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestStructSimple4();
	STRUCTUTILSTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestStructSimple5();
	STRUCTUTILSTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestStructSimple6();
	STRUCTUTILSTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestStructSimple7();
	STRUCTUTILSTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestStructSimpleBase();
	UPackage* Z_Construct_UPackage__Script_StructUtilsTestSuite();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestStructSimpleBase;
class UScriptStruct* FTestStructSimpleBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestStructSimpleBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestStructSimpleBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestStructSimpleBase, (UObject*)Z_Construct_UPackage__Script_StructUtilsTestSuite(), TEXT("TestStructSimpleBase"));
	}
	return Z_Registration_Info_UScriptStruct_TestStructSimpleBase.OuterSingleton;
}
template<> STRUCTUTILSTESTSUITE_API UScriptStruct* StaticStruct<FTestStructSimpleBase>()
{
	return FTestStructSimpleBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestStructSimpleBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStructSimpleBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestStructSimpleBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestStructSimpleBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestStructSimpleBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtilsTestSuite,
		nullptr,
		&NewStructOps,
		"TestStructSimpleBase",
		sizeof(FTestStructSimpleBase),
		alignof(FTestStructSimpleBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestStructSimpleBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimpleBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestStructSimpleBase()
	{
		if (!Z_Registration_Info_UScriptStruct_TestStructSimpleBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestStructSimpleBase.InnerSingleton, Z_Construct_UScriptStruct_FTestStructSimpleBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestStructSimpleBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestStructSimple>() == std::is_polymorphic<FTestStructSimpleBase>(), "USTRUCT FTestStructSimple cannot be polymorphic unless super FTestStructSimpleBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestStructSimple;
class UScriptStruct* FTestStructSimple::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestStructSimple.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestStructSimple.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestStructSimple, (UObject*)Z_Construct_UPackage__Script_StructUtilsTestSuite(), TEXT("TestStructSimple"));
	}
	return Z_Registration_Info_UScriptStruct_TestStructSimple.OuterSingleton;
}
template<> STRUCTUTILSTESTSUITE_API UScriptStruct* StaticStruct<FTestStructSimple>()
{
	return FTestStructSimple::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestStructSimple_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStructSimple_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestStructSimple_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestStructSimple>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStructSimple_Statics::NewProp_Float_MetaData[] = {
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTestStructSimple_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTestStructSimple, Float), METADATA_PARAMS(Z_Construct_UScriptStruct_FTestStructSimple_Statics::NewProp_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple_Statics::NewProp_Float_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestStructSimple_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestStructSimple_Statics::NewProp_Float,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestStructSimple_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtilsTestSuite,
		Z_Construct_UScriptStruct_FTestStructSimpleBase,
		&NewStructOps,
		"TestStructSimple",
		sizeof(FTestStructSimple),
		alignof(FTestStructSimple),
		Z_Construct_UScriptStruct_FTestStructSimple_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestStructSimple_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestStructSimple()
	{
		if (!Z_Registration_Info_UScriptStruct_TestStructSimple.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestStructSimple.InnerSingleton, Z_Construct_UScriptStruct_FTestStructSimple_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestStructSimple.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestStructComplex;
class UScriptStruct* FTestStructComplex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestStructComplex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestStructComplex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestStructComplex, (UObject*)Z_Construct_UPackage__Script_StructUtilsTestSuite(), TEXT("TestStructComplex"));
	}
	return Z_Registration_Info_UScriptStruct_TestStructComplex.OuterSingleton;
}
template<> STRUCTUTILSTESTSUITE_API UScriptStruct* StaticStruct<FTestStructComplex>()
{
	return FTestStructComplex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestStructComplex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StringArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStructComplex_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestStructComplex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestStructComplex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStructComplex_Statics::NewProp_String_MetaData[] = {
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTestStructComplex_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTestStructComplex, String), METADATA_PARAMS(Z_Construct_UScriptStruct_FTestStructComplex_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructComplex_Statics::NewProp_String_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTestStructComplex_Statics::NewProp_StringArray_Inner = { "StringArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStructComplex_Statics::NewProp_StringArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTestStructComplex_Statics::NewProp_StringArray = { "StringArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTestStructComplex, StringArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTestStructComplex_Statics::NewProp_StringArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructComplex_Statics::NewProp_StringArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestStructComplex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestStructComplex_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestStructComplex_Statics::NewProp_StringArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestStructComplex_Statics::NewProp_StringArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestStructComplex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtilsTestSuite,
		nullptr,
		&NewStructOps,
		"TestStructComplex",
		sizeof(FTestStructComplex),
		alignof(FTestStructComplex),
		Z_Construct_UScriptStruct_FTestStructComplex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructComplex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestStructComplex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructComplex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestStructComplex()
	{
		if (!Z_Registration_Info_UScriptStruct_TestStructComplex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestStructComplex.InnerSingleton, Z_Construct_UScriptStruct_FTestStructComplex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestStructComplex.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestStructSimple1>() == std::is_polymorphic<FTestStructSimpleBase>(), "USTRUCT FTestStructSimple1 cannot be polymorphic unless super FTestStructSimpleBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestStructSimple1;
class UScriptStruct* FTestStructSimple1::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestStructSimple1.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestStructSimple1.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestStructSimple1, (UObject*)Z_Construct_UPackage__Script_StructUtilsTestSuite(), TEXT("TestStructSimple1"));
	}
	return Z_Registration_Info_UScriptStruct_TestStructSimple1.OuterSingleton;
}
template<> STRUCTUTILSTESTSUITE_API UScriptStruct* StaticStruct<FTestStructSimple1>()
{
	return FTestStructSimple1::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestStructSimple1_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStructSimple1_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestStructSimple1_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestStructSimple1>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStructSimple1_Statics::NewProp_Float_MetaData[] = {
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTestStructSimple1_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTestStructSimple1, Float), METADATA_PARAMS(Z_Construct_UScriptStruct_FTestStructSimple1_Statics::NewProp_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple1_Statics::NewProp_Float_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestStructSimple1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestStructSimple1_Statics::NewProp_Float,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestStructSimple1_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtilsTestSuite,
		Z_Construct_UScriptStruct_FTestStructSimpleBase,
		&NewStructOps,
		"TestStructSimple1",
		sizeof(FTestStructSimple1),
		alignof(FTestStructSimple1),
		Z_Construct_UScriptStruct_FTestStructSimple1_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple1_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestStructSimple1_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple1_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestStructSimple1()
	{
		if (!Z_Registration_Info_UScriptStruct_TestStructSimple1.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestStructSimple1.InnerSingleton, Z_Construct_UScriptStruct_FTestStructSimple1_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestStructSimple1.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestStructSimple2>() == std::is_polymorphic<FTestStructSimpleBase>(), "USTRUCT FTestStructSimple2 cannot be polymorphic unless super FTestStructSimpleBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestStructSimple2;
class UScriptStruct* FTestStructSimple2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestStructSimple2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestStructSimple2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestStructSimple2, (UObject*)Z_Construct_UPackage__Script_StructUtilsTestSuite(), TEXT("TestStructSimple2"));
	}
	return Z_Registration_Info_UScriptStruct_TestStructSimple2.OuterSingleton;
}
template<> STRUCTUTILSTESTSUITE_API UScriptStruct* StaticStruct<FTestStructSimple2>()
{
	return FTestStructSimple2::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestStructSimple2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStructSimple2_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestStructSimple2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestStructSimple2>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStructSimple2_Statics::NewProp_Float_MetaData[] = {
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTestStructSimple2_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTestStructSimple2, Float), METADATA_PARAMS(Z_Construct_UScriptStruct_FTestStructSimple2_Statics::NewProp_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple2_Statics::NewProp_Float_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestStructSimple2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestStructSimple2_Statics::NewProp_Float,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestStructSimple2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtilsTestSuite,
		Z_Construct_UScriptStruct_FTestStructSimpleBase,
		&NewStructOps,
		"TestStructSimple2",
		sizeof(FTestStructSimple2),
		alignof(FTestStructSimple2),
		Z_Construct_UScriptStruct_FTestStructSimple2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestStructSimple2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestStructSimple2()
	{
		if (!Z_Registration_Info_UScriptStruct_TestStructSimple2.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestStructSimple2.InnerSingleton, Z_Construct_UScriptStruct_FTestStructSimple2_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestStructSimple2.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestStructSimple3>() == std::is_polymorphic<FTestStructSimpleBase>(), "USTRUCT FTestStructSimple3 cannot be polymorphic unless super FTestStructSimpleBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestStructSimple3;
class UScriptStruct* FTestStructSimple3::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestStructSimple3.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestStructSimple3.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestStructSimple3, (UObject*)Z_Construct_UPackage__Script_StructUtilsTestSuite(), TEXT("TestStructSimple3"));
	}
	return Z_Registration_Info_UScriptStruct_TestStructSimple3.OuterSingleton;
}
template<> STRUCTUTILSTESTSUITE_API UScriptStruct* StaticStruct<FTestStructSimple3>()
{
	return FTestStructSimple3::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestStructSimple3_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStructSimple3_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestStructSimple3_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestStructSimple3>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStructSimple3_Statics::NewProp_Float_MetaData[] = {
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTestStructSimple3_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTestStructSimple3, Float), METADATA_PARAMS(Z_Construct_UScriptStruct_FTestStructSimple3_Statics::NewProp_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple3_Statics::NewProp_Float_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestStructSimple3_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestStructSimple3_Statics::NewProp_Float,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestStructSimple3_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtilsTestSuite,
		Z_Construct_UScriptStruct_FTestStructSimpleBase,
		&NewStructOps,
		"TestStructSimple3",
		sizeof(FTestStructSimple3),
		alignof(FTestStructSimple3),
		Z_Construct_UScriptStruct_FTestStructSimple3_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple3_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestStructSimple3_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple3_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestStructSimple3()
	{
		if (!Z_Registration_Info_UScriptStruct_TestStructSimple3.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestStructSimple3.InnerSingleton, Z_Construct_UScriptStruct_FTestStructSimple3_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestStructSimple3.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestStructSimple4>() == std::is_polymorphic<FTestStructSimpleBase>(), "USTRUCT FTestStructSimple4 cannot be polymorphic unless super FTestStructSimpleBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestStructSimple4;
class UScriptStruct* FTestStructSimple4::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestStructSimple4.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestStructSimple4.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestStructSimple4, (UObject*)Z_Construct_UPackage__Script_StructUtilsTestSuite(), TEXT("TestStructSimple4"));
	}
	return Z_Registration_Info_UScriptStruct_TestStructSimple4.OuterSingleton;
}
template<> STRUCTUTILSTESTSUITE_API UScriptStruct* StaticStruct<FTestStructSimple4>()
{
	return FTestStructSimple4::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestStructSimple4_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStructSimple4_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestStructSimple4_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestStructSimple4>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStructSimple4_Statics::NewProp_Float_MetaData[] = {
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTestStructSimple4_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTestStructSimple4, Float), METADATA_PARAMS(Z_Construct_UScriptStruct_FTestStructSimple4_Statics::NewProp_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple4_Statics::NewProp_Float_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestStructSimple4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestStructSimple4_Statics::NewProp_Float,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestStructSimple4_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtilsTestSuite,
		Z_Construct_UScriptStruct_FTestStructSimpleBase,
		&NewStructOps,
		"TestStructSimple4",
		sizeof(FTestStructSimple4),
		alignof(FTestStructSimple4),
		Z_Construct_UScriptStruct_FTestStructSimple4_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple4_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestStructSimple4_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple4_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestStructSimple4()
	{
		if (!Z_Registration_Info_UScriptStruct_TestStructSimple4.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestStructSimple4.InnerSingleton, Z_Construct_UScriptStruct_FTestStructSimple4_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestStructSimple4.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestStructSimple5>() == std::is_polymorphic<FTestStructSimpleBase>(), "USTRUCT FTestStructSimple5 cannot be polymorphic unless super FTestStructSimpleBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestStructSimple5;
class UScriptStruct* FTestStructSimple5::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestStructSimple5.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestStructSimple5.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestStructSimple5, (UObject*)Z_Construct_UPackage__Script_StructUtilsTestSuite(), TEXT("TestStructSimple5"));
	}
	return Z_Registration_Info_UScriptStruct_TestStructSimple5.OuterSingleton;
}
template<> STRUCTUTILSTESTSUITE_API UScriptStruct* StaticStruct<FTestStructSimple5>()
{
	return FTestStructSimple5::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestStructSimple5_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStructSimple5_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestStructSimple5_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestStructSimple5>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStructSimple5_Statics::NewProp_Float_MetaData[] = {
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTestStructSimple5_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTestStructSimple5, Float), METADATA_PARAMS(Z_Construct_UScriptStruct_FTestStructSimple5_Statics::NewProp_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple5_Statics::NewProp_Float_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestStructSimple5_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestStructSimple5_Statics::NewProp_Float,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestStructSimple5_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtilsTestSuite,
		Z_Construct_UScriptStruct_FTestStructSimpleBase,
		&NewStructOps,
		"TestStructSimple5",
		sizeof(FTestStructSimple5),
		alignof(FTestStructSimple5),
		Z_Construct_UScriptStruct_FTestStructSimple5_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple5_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestStructSimple5_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple5_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestStructSimple5()
	{
		if (!Z_Registration_Info_UScriptStruct_TestStructSimple5.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestStructSimple5.InnerSingleton, Z_Construct_UScriptStruct_FTestStructSimple5_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestStructSimple5.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestStructSimple6>() == std::is_polymorphic<FTestStructSimpleBase>(), "USTRUCT FTestStructSimple6 cannot be polymorphic unless super FTestStructSimpleBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestStructSimple6;
class UScriptStruct* FTestStructSimple6::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestStructSimple6.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestStructSimple6.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestStructSimple6, (UObject*)Z_Construct_UPackage__Script_StructUtilsTestSuite(), TEXT("TestStructSimple6"));
	}
	return Z_Registration_Info_UScriptStruct_TestStructSimple6.OuterSingleton;
}
template<> STRUCTUTILSTESTSUITE_API UScriptStruct* StaticStruct<FTestStructSimple6>()
{
	return FTestStructSimple6::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestStructSimple6_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStructSimple6_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestStructSimple6_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestStructSimple6>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStructSimple6_Statics::NewProp_Float_MetaData[] = {
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTestStructSimple6_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTestStructSimple6, Float), METADATA_PARAMS(Z_Construct_UScriptStruct_FTestStructSimple6_Statics::NewProp_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple6_Statics::NewProp_Float_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestStructSimple6_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestStructSimple6_Statics::NewProp_Float,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestStructSimple6_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtilsTestSuite,
		Z_Construct_UScriptStruct_FTestStructSimpleBase,
		&NewStructOps,
		"TestStructSimple6",
		sizeof(FTestStructSimple6),
		alignof(FTestStructSimple6),
		Z_Construct_UScriptStruct_FTestStructSimple6_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple6_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestStructSimple6_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple6_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestStructSimple6()
	{
		if (!Z_Registration_Info_UScriptStruct_TestStructSimple6.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestStructSimple6.InnerSingleton, Z_Construct_UScriptStruct_FTestStructSimple6_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestStructSimple6.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestStructSimple7>() == std::is_polymorphic<FTestStructSimpleBase>(), "USTRUCT FTestStructSimple7 cannot be polymorphic unless super FTestStructSimpleBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestStructSimple7;
class UScriptStruct* FTestStructSimple7::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestStructSimple7.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestStructSimple7.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestStructSimple7, (UObject*)Z_Construct_UPackage__Script_StructUtilsTestSuite(), TEXT("TestStructSimple7"));
	}
	return Z_Registration_Info_UScriptStruct_TestStructSimple7.OuterSingleton;
}
template<> STRUCTUTILSTESTSUITE_API UScriptStruct* StaticStruct<FTestStructSimple7>()
{
	return FTestStructSimple7::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestStructSimple7_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStructSimple7_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestStructSimple7_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestStructSimple7>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStructSimple7_Statics::NewProp_Float_MetaData[] = {
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTestStructSimple7_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTestStructSimple7, Float), METADATA_PARAMS(Z_Construct_UScriptStruct_FTestStructSimple7_Statics::NewProp_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple7_Statics::NewProp_Float_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestStructSimple7_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestStructSimple7_Statics::NewProp_Float,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestStructSimple7_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtilsTestSuite,
		Z_Construct_UScriptStruct_FTestStructSimpleBase,
		&NewStructOps,
		"TestStructSimple7",
		sizeof(FTestStructSimple7),
		alignof(FTestStructSimple7),
		Z_Construct_UScriptStruct_FTestStructSimple7_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple7_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestStructSimple7_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructSimple7_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestStructSimple7()
	{
		if (!Z_Registration_Info_UScriptStruct_TestStructSimple7.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestStructSimple7.InnerSingleton, Z_Construct_UScriptStruct_FTestStructSimple7_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestStructSimple7.InnerSingleton;
	}
	void UBagTestObject1::StaticRegisterNativesUBagTestObject1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBagTestObject1);
	UClass* Z_Construct_UClass_UBagTestObject1_NoRegister()
	{
		return UBagTestObject1::StaticClass();
	}
	struct Z_Construct_UClass_UBagTestObject1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBagTestObject1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtilsTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBagTestObject1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StructUtilsTestTypes.h" },
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBagTestObject1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBagTestObject1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBagTestObject1_Statics::ClassParams = {
		&UBagTestObject1::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBagTestObject1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBagTestObject1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBagTestObject1()
	{
		if (!Z_Registration_Info_UClass_UBagTestObject1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBagTestObject1.OuterSingleton, Z_Construct_UClass_UBagTestObject1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBagTestObject1.OuterSingleton;
	}
	template<> STRUCTUTILSTESTSUITE_API UClass* StaticClass<UBagTestObject1>()
	{
		return UBagTestObject1::StaticClass();
	}
	UBagTestObject1::UBagTestObject1(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBagTestObject1);
	UBagTestObject1::~UBagTestObject1() {}
	void UBagTestObject2::StaticRegisterNativesUBagTestObject2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBagTestObject2);
	UClass* Z_Construct_UClass_UBagTestObject2_NoRegister()
	{
		return UBagTestObject2::StaticClass();
	}
	struct Z_Construct_UClass_UBagTestObject2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBagTestObject2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtilsTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBagTestObject2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StructUtilsTestTypes.h" },
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBagTestObject2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBagTestObject2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBagTestObject2_Statics::ClassParams = {
		&UBagTestObject2::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBagTestObject2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBagTestObject2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBagTestObject2()
	{
		if (!Z_Registration_Info_UClass_UBagTestObject2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBagTestObject2.OuterSingleton, Z_Construct_UClass_UBagTestObject2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBagTestObject2.OuterSingleton;
	}
	template<> STRUCTUTILSTESTSUITE_API UClass* StaticClass<UBagTestObject2>()
	{
		return UBagTestObject2::StaticClass();
	}
	UBagTestObject2::UBagTestObject2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBagTestObject2);
	UBagTestObject2::~UBagTestObject2() {}
	void UBagTestObject1Derived::StaticRegisterNativesUBagTestObject1Derived()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBagTestObject1Derived);
	UClass* Z_Construct_UClass_UBagTestObject1Derived_NoRegister()
	{
		return UBagTestObject1Derived::StaticClass();
	}
	struct Z_Construct_UClass_UBagTestObject1Derived_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBagTestObject1Derived_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBagTestObject1,
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtilsTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBagTestObject1Derived_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StructUtilsTestTypes.h" },
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBagTestObject1Derived_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBagTestObject1Derived>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBagTestObject1Derived_Statics::ClassParams = {
		&UBagTestObject1Derived::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBagTestObject1Derived_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBagTestObject1Derived_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBagTestObject1Derived()
	{
		if (!Z_Registration_Info_UClass_UBagTestObject1Derived.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBagTestObject1Derived.OuterSingleton, Z_Construct_UClass_UBagTestObject1Derived_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBagTestObject1Derived.OuterSingleton;
	}
	template<> STRUCTUTILSTESTSUITE_API UClass* StaticClass<UBagTestObject1Derived>()
	{
		return UBagTestObject1Derived::StaticClass();
	}
	UBagTestObject1Derived::UBagTestObject1Derived(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBagTestObject1Derived);
	UBagTestObject1Derived::~UBagTestObject1Derived() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPropertyBagTest1;
	static UEnum* EPropertyBagTest1_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPropertyBagTest1.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPropertyBagTest1.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest1, (UObject*)Z_Construct_UPackage__Script_StructUtilsTestSuite(), TEXT("EPropertyBagTest1"));
		}
		return Z_Registration_Info_UEnum_EPropertyBagTest1.OuterSingleton;
	}
	template<> STRUCTUTILSTESTSUITE_API UEnum* StaticEnum<EPropertyBagTest1>()
	{
		return EPropertyBagTest1_StaticEnum();
	}
	struct Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest1_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest1_Statics::Enumerators[] = {
		{ "EPropertyBagTest1::Foo", (int64)EPropertyBagTest1::Foo },
		{ "EPropertyBagTest1::Bar", (int64)EPropertyBagTest1::Bar },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest1_Statics::Enum_MetaDataParams[] = {
		{ "Bar.Name", "EPropertyBagTest1::Bar" },
		{ "Foo.Name", "EPropertyBagTest1::Foo" },
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest1_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StructUtilsTestSuite,
		nullptr,
		"EPropertyBagTest1",
		"EPropertyBagTest1",
		Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest1_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest1_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest1_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest1_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest1()
	{
		if (!Z_Registration_Info_UEnum_EPropertyBagTest1.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPropertyBagTest1.InnerSingleton, Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest1_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPropertyBagTest1.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPropertyBagTest2;
	static UEnum* EPropertyBagTest2_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPropertyBagTest2.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPropertyBagTest2.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest2, (UObject*)Z_Construct_UPackage__Script_StructUtilsTestSuite(), TEXT("EPropertyBagTest2"));
		}
		return Z_Registration_Info_UEnum_EPropertyBagTest2.OuterSingleton;
	}
	template<> STRUCTUTILSTESTSUITE_API UEnum* StaticEnum<EPropertyBagTest2>()
	{
		return EPropertyBagTest2_StaticEnum();
	}
	struct Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest2_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest2_Statics::Enumerators[] = {
		{ "EPropertyBagTest2::Bingo", (int64)EPropertyBagTest2::Bingo },
		{ "EPropertyBagTest2::Bongo", (int64)EPropertyBagTest2::Bongo },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest2_Statics::Enum_MetaDataParams[] = {
		{ "Bingo.Name", "EPropertyBagTest2::Bingo" },
		{ "Bongo.Name", "EPropertyBagTest2::Bongo" },
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest2_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StructUtilsTestSuite,
		nullptr,
		"EPropertyBagTest2",
		"EPropertyBagTest2",
		Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest2_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest2_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest2_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest2_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest2()
	{
		if (!Z_Registration_Info_UEnum_EPropertyBagTest2.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPropertyBagTest2.InnerSingleton, Z_Construct_UEnum_StructUtilsTestSuite_EPropertyBagTest2_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPropertyBagTest2.InnerSingleton;
	}
	void UTestObjectWithPropertyBag::StaticRegisterNativesUTestObjectWithPropertyBag()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestObjectWithPropertyBag);
	UClass* Z_Construct_UClass_UTestObjectWithPropertyBag_NoRegister()
	{
		return UTestObjectWithPropertyBag::StaticClass();
	}
	struct Z_Construct_UClass_UTestObjectWithPropertyBag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestObjectWithPropertyBag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtilsTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestObjectWithPropertyBag_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StructUtilsTestTypes.h" },
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestObjectWithPropertyBag_Statics::NewProp_Bag_MetaData[] = {
		{ "ModuleRelativePath", "Public/StructUtilsTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTestObjectWithPropertyBag_Statics::NewProp_Bag = { "Bag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestObjectWithPropertyBag, Bag), Z_Construct_UScriptStruct_FInstancedPropertyBag, METADATA_PARAMS(Z_Construct_UClass_UTestObjectWithPropertyBag_Statics::NewProp_Bag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestObjectWithPropertyBag_Statics::NewProp_Bag_MetaData)) }; // 3551882691
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestObjectWithPropertyBag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestObjectWithPropertyBag_Statics::NewProp_Bag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestObjectWithPropertyBag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestObjectWithPropertyBag>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestObjectWithPropertyBag_Statics::ClassParams = {
		&UTestObjectWithPropertyBag::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestObjectWithPropertyBag_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestObjectWithPropertyBag_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestObjectWithPropertyBag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestObjectWithPropertyBag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestObjectWithPropertyBag()
	{
		if (!Z_Registration_Info_UClass_UTestObjectWithPropertyBag.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestObjectWithPropertyBag.OuterSingleton, Z_Construct_UClass_UTestObjectWithPropertyBag_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestObjectWithPropertyBag.OuterSingleton;
	}
	template<> STRUCTUTILSTESTSUITE_API UClass* StaticClass<UTestObjectWithPropertyBag>()
	{
		return UTestObjectWithPropertyBag::StaticClass();
	}
	UTestObjectWithPropertyBag::UTestObjectWithPropertyBag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestObjectWithPropertyBag);
	UTestObjectWithPropertyBag::~UTestObjectWithPropertyBag() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsTestSuite_Public_StructUtilsTestTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsTestSuite_Public_StructUtilsTestTypes_h_Statics::EnumInfo[] = {
		{ EPropertyBagTest1_StaticEnum, TEXT("EPropertyBagTest1"), &Z_Registration_Info_UEnum_EPropertyBagTest1, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 769430532U) },
		{ EPropertyBagTest2_StaticEnum, TEXT("EPropertyBagTest2"), &Z_Registration_Info_UEnum_EPropertyBagTest2, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3680917912U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsTestSuite_Public_StructUtilsTestTypes_h_Statics::ScriptStructInfo[] = {
		{ FTestStructSimpleBase::StaticStruct, Z_Construct_UScriptStruct_FTestStructSimpleBase_Statics::NewStructOps, TEXT("TestStructSimpleBase"), &Z_Registration_Info_UScriptStruct_TestStructSimpleBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestStructSimpleBase), 332176456U) },
		{ FTestStructSimple::StaticStruct, Z_Construct_UScriptStruct_FTestStructSimple_Statics::NewStructOps, TEXT("TestStructSimple"), &Z_Registration_Info_UScriptStruct_TestStructSimple, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestStructSimple), 1322483657U) },
		{ FTestStructComplex::StaticStruct, Z_Construct_UScriptStruct_FTestStructComplex_Statics::NewStructOps, TEXT("TestStructComplex"), &Z_Registration_Info_UScriptStruct_TestStructComplex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestStructComplex), 2282674873U) },
		{ FTestStructSimple1::StaticStruct, Z_Construct_UScriptStruct_FTestStructSimple1_Statics::NewStructOps, TEXT("TestStructSimple1"), &Z_Registration_Info_UScriptStruct_TestStructSimple1, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestStructSimple1), 1762306621U) },
		{ FTestStructSimple2::StaticStruct, Z_Construct_UScriptStruct_FTestStructSimple2_Statics::NewStructOps, TEXT("TestStructSimple2"), &Z_Registration_Info_UScriptStruct_TestStructSimple2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestStructSimple2), 947579282U) },
		{ FTestStructSimple3::StaticStruct, Z_Construct_UScriptStruct_FTestStructSimple3_Statics::NewStructOps, TEXT("TestStructSimple3"), &Z_Registration_Info_UScriptStruct_TestStructSimple3, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestStructSimple3), 2735326550U) },
		{ FTestStructSimple4::StaticStruct, Z_Construct_UScriptStruct_FTestStructSimple4_Statics::NewStructOps, TEXT("TestStructSimple4"), &Z_Registration_Info_UScriptStruct_TestStructSimple4, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestStructSimple4), 1847641981U) },
		{ FTestStructSimple5::StaticStruct, Z_Construct_UScriptStruct_FTestStructSimple5_Statics::NewStructOps, TEXT("TestStructSimple5"), &Z_Registration_Info_UScriptStruct_TestStructSimple5, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestStructSimple5), 4259618644U) },
		{ FTestStructSimple6::StaticStruct, Z_Construct_UScriptStruct_FTestStructSimple6_Statics::NewStructOps, TEXT("TestStructSimple6"), &Z_Registration_Info_UScriptStruct_TestStructSimple6, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestStructSimple6), 2458052963U) },
		{ FTestStructSimple7::StaticStruct, Z_Construct_UScriptStruct_FTestStructSimple7_Statics::NewStructOps, TEXT("TestStructSimple7"), &Z_Registration_Info_UScriptStruct_TestStructSimple7, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestStructSimple7), 1790209726U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsTestSuite_Public_StructUtilsTestTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBagTestObject1, UBagTestObject1::StaticClass, TEXT("UBagTestObject1"), &Z_Registration_Info_UClass_UBagTestObject1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBagTestObject1), 1168317407U) },
		{ Z_Construct_UClass_UBagTestObject2, UBagTestObject2::StaticClass, TEXT("UBagTestObject2"), &Z_Registration_Info_UClass_UBagTestObject2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBagTestObject2), 825039276U) },
		{ Z_Construct_UClass_UBagTestObject1Derived, UBagTestObject1Derived::StaticClass, TEXT("UBagTestObject1Derived"), &Z_Registration_Info_UClass_UBagTestObject1Derived, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBagTestObject1Derived), 3771119447U) },
		{ Z_Construct_UClass_UTestObjectWithPropertyBag, UTestObjectWithPropertyBag::StaticClass, TEXT("UTestObjectWithPropertyBag"), &Z_Registration_Info_UClass_UTestObjectWithPropertyBag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestObjectWithPropertyBag), 3814919559U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsTestSuite_Public_StructUtilsTestTypes_h_3836254591(TEXT("/Script/StructUtilsTestSuite"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsTestSuite_Public_StructUtilsTestTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsTestSuite_Public_StructUtilsTestTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsTestSuite_Public_StructUtilsTestTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsTestSuite_Public_StructUtilsTestTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsTestSuite_Public_StructUtilsTestTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsTestSuite_Public_StructUtilsTestTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
