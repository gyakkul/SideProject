// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassEntityTestTypes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LocalPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassEntityTestTypes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_USubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestCustomSubsystem();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestCustomSubsystem_NoRegister();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestEngineSubsystem();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestEngineSubsystem_NoRegister();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestGameInstanceSubsystem();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestGameInstanceSubsystem_NoRegister();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestLocalPlayerSubsystem();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestLocalPlayerSubsystem_NoRegister();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestProcessor_A();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestProcessor_A_NoRegister();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestProcessor_B();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestProcessor_B_NoRegister();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestProcessor_C();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestProcessor_C_NoRegister();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestProcessor_D();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestProcessor_D_NoRegister();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestProcessor_E();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestProcessor_E_NoRegister();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestProcessor_F();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestProcessor_F_NoRegister();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestProcessor_Floats();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestProcessor_Floats_NoRegister();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestProcessor_FloatsInts();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestProcessor_FloatsInts_NoRegister();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestProcessor_Ints();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestProcessor_Ints_NoRegister();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestProcessorBase();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestProcessorBase_NoRegister();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestStaticCounterProcessor();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestStaticCounterProcessor_NoRegister();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestWorldSubsystem();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UMassTestWorldSubsystem_NoRegister();
	MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestFragment_Array();
	MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestFragment_Bool();
	MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestFragment_Float();
	MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestFragment_Int();
	MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestFragment_Large();
	MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestFragment_Tag();
	MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestTag_A();
	MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestTag_B();
	MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestTag_C();
	MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestTag_D();
	UPackage* Z_Construct_UPackage__Script_MassEntityTestSuite();
// End Cross Module References

static_assert(std::is_polymorphic<FTestFragment_Float>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FTestFragment_Float cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestFragment_Float;
class UScriptStruct* FTestFragment_Float::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestFragment_Float.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestFragment_Float.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("TestFragment_Float"));
	}
	return Z_Registration_Info_UScriptStruct_TestFragment_Float.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FTestFragment_Float>()
{
	return FTestFragment_Float::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestFragment_Float_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestFragment_Float_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestFragment_Float_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestFragment_Float>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestFragment_Float_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"TestFragment_Float",
		sizeof(FTestFragment_Float),
		alignof(FTestFragment_Float),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestFragment_Float_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestFragment_Float_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestFragment_Float()
	{
		if (!Z_Registration_Info_UScriptStruct_TestFragment_Float.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestFragment_Float.InnerSingleton, Z_Construct_UScriptStruct_FTestFragment_Float_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestFragment_Float.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestFragment_Int>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FTestFragment_Int cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestFragment_Int;
class UScriptStruct* FTestFragment_Int::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestFragment_Int.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestFragment_Int.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("TestFragment_Int"));
	}
	return Z_Registration_Info_UScriptStruct_TestFragment_Int.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FTestFragment_Int>()
{
	return FTestFragment_Int::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestFragment_Int_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestFragment_Int_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestFragment_Int_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestFragment_Int>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestFragment_Int_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"TestFragment_Int",
		sizeof(FTestFragment_Int),
		alignof(FTestFragment_Int),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestFragment_Int_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestFragment_Int_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestFragment_Int()
	{
		if (!Z_Registration_Info_UScriptStruct_TestFragment_Int.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestFragment_Int.InnerSingleton, Z_Construct_UScriptStruct_FTestFragment_Int_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestFragment_Int.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestFragment_Bool>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FTestFragment_Bool cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestFragment_Bool;
class UScriptStruct* FTestFragment_Bool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestFragment_Bool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestFragment_Bool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Bool, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("TestFragment_Bool"));
	}
	return Z_Registration_Info_UScriptStruct_TestFragment_Bool.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FTestFragment_Bool>()
{
	return FTestFragment_Bool::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestFragment_Bool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestFragment_Bool_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestFragment_Bool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestFragment_Bool>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestFragment_Bool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"TestFragment_Bool",
		sizeof(FTestFragment_Bool),
		alignof(FTestFragment_Bool),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestFragment_Bool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestFragment_Bool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestFragment_Bool()
	{
		if (!Z_Registration_Info_UScriptStruct_TestFragment_Bool.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestFragment_Bool.InnerSingleton, Z_Construct_UScriptStruct_FTestFragment_Bool_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestFragment_Bool.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestFragment_Large>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FTestFragment_Large cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestFragment_Large;
class UScriptStruct* FTestFragment_Large::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestFragment_Large.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestFragment_Large.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Large, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("TestFragment_Large"));
	}
	return Z_Registration_Info_UScriptStruct_TestFragment_Large.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FTestFragment_Large>()
{
	return FTestFragment_Large::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestFragment_Large_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestFragment_Large_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestFragment_Large_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestFragment_Large>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestFragment_Large_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"TestFragment_Large",
		sizeof(FTestFragment_Large),
		alignof(FTestFragment_Large),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestFragment_Large_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestFragment_Large_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestFragment_Large()
	{
		if (!Z_Registration_Info_UScriptStruct_TestFragment_Large.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestFragment_Large.InnerSingleton, Z_Construct_UScriptStruct_FTestFragment_Large_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestFragment_Large.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestFragment_Array>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FTestFragment_Array cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestFragment_Array;
class UScriptStruct* FTestFragment_Array::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestFragment_Array.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestFragment_Array.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Array, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("TestFragment_Array"));
	}
	return Z_Registration_Info_UScriptStruct_TestFragment_Array.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FTestFragment_Array>()
{
	return FTestFragment_Array::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestFragment_Array_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestFragment_Array_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestFragment_Array_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestFragment_Array>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestFragment_Array_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"TestFragment_Array",
		sizeof(FTestFragment_Array),
		alignof(FTestFragment_Array),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestFragment_Array_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestFragment_Array_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestFragment_Array()
	{
		if (!Z_Registration_Info_UScriptStruct_TestFragment_Array.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestFragment_Array.InnerSingleton, Z_Construct_UScriptStruct_FTestFragment_Array_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestFragment_Array.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestFragment_Tag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FTestFragment_Tag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestFragment_Tag;
class UScriptStruct* FTestFragment_Tag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestFragment_Tag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestFragment_Tag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Tag, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("TestFragment_Tag"));
	}
	return Z_Registration_Info_UScriptStruct_TestFragment_Tag.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FTestFragment_Tag>()
{
	return FTestFragment_Tag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestFragment_Tag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestFragment_Tag_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** @todo rename to FTestTag */" },
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
		{ "ToolTip", "@todo rename to FTestTag" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestFragment_Tag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestFragment_Tag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestFragment_Tag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"TestFragment_Tag",
		sizeof(FTestFragment_Tag),
		alignof(FTestFragment_Tag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestFragment_Tag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestFragment_Tag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestFragment_Tag()
	{
		if (!Z_Registration_Info_UScriptStruct_TestFragment_Tag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestFragment_Tag.InnerSingleton, Z_Construct_UScriptStruct_FTestFragment_Tag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestFragment_Tag.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestTag_A>() == std::is_polymorphic<FMassTag>(), "USTRUCT FTestTag_A cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestTag_A;
class UScriptStruct* FTestTag_A::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestTag_A.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestTag_A.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_A, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("TestTag_A"));
	}
	return Z_Registration_Info_UScriptStruct_TestTag_A.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FTestTag_A>()
{
	return FTestTag_A::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestTag_A_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTag_A_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestTag_A_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestTag_A>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestTag_A_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"TestTag_A",
		sizeof(FTestTag_A),
		alignof(FTestTag_A),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestTag_A_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTag_A_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestTag_A()
	{
		if (!Z_Registration_Info_UScriptStruct_TestTag_A.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestTag_A.InnerSingleton, Z_Construct_UScriptStruct_FTestTag_A_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestTag_A.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestTag_B>() == std::is_polymorphic<FMassTag>(), "USTRUCT FTestTag_B cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestTag_B;
class UScriptStruct* FTestTag_B::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestTag_B.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestTag_B.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_B, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("TestTag_B"));
	}
	return Z_Registration_Info_UScriptStruct_TestTag_B.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FTestTag_B>()
{
	return FTestTag_B::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestTag_B_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTag_B_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestTag_B_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestTag_B>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestTag_B_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"TestTag_B",
		sizeof(FTestTag_B),
		alignof(FTestTag_B),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestTag_B_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTag_B_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestTag_B()
	{
		if (!Z_Registration_Info_UScriptStruct_TestTag_B.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestTag_B.InnerSingleton, Z_Construct_UScriptStruct_FTestTag_B_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestTag_B.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestTag_C>() == std::is_polymorphic<FMassTag>(), "USTRUCT FTestTag_C cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestTag_C;
class UScriptStruct* FTestTag_C::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestTag_C.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestTag_C.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_C, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("TestTag_C"));
	}
	return Z_Registration_Info_UScriptStruct_TestTag_C.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FTestTag_C>()
{
	return FTestTag_C::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestTag_C_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTag_C_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestTag_C_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestTag_C>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestTag_C_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"TestTag_C",
		sizeof(FTestTag_C),
		alignof(FTestTag_C),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestTag_C_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTag_C_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestTag_C()
	{
		if (!Z_Registration_Info_UScriptStruct_TestTag_C.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestTag_C.InnerSingleton, Z_Construct_UScriptStruct_FTestTag_C_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestTag_C.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestTag_D>() == std::is_polymorphic<FMassTag>(), "USTRUCT FTestTag_D cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestTag_D;
class UScriptStruct* FTestTag_D::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestTag_D.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestTag_D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_D, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("TestTag_D"));
	}
	return Z_Registration_Info_UScriptStruct_TestTag_D.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FTestTag_D>()
{
	return FTestTag_D::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestTag_D_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTag_D_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestTag_D_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestTag_D>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestTag_D_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"TestTag_D",
		sizeof(FTestTag_D),
		alignof(FTestTag_D),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestTag_D_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTag_D_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestTag_D()
	{
		if (!Z_Registration_Info_UScriptStruct_TestTag_D.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestTag_D.InnerSingleton, Z_Construct_UScriptStruct_FTestTag_D_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestTag_D.InnerSingleton;
	}
	void UMassTestProcessorBase::StaticRegisterNativesUMassTestProcessorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTestProcessorBase);
	UClass* Z_Construct_UClass_UMassTestProcessorBase_NoRegister()
	{
		return UMassTestProcessorBase::StaticClass();
	}
	struct Z_Construct_UClass_UMassTestProcessorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTestProcessorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTestProcessorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassEntityTestTypes.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTestProcessorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTestProcessorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTestProcessorBase_Statics::ClassParams = {
		&UMassTestProcessorBase::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassTestProcessorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassTestProcessorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassTestProcessorBase()
	{
		if (!Z_Registration_Info_UClass_UMassTestProcessorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTestProcessorBase.OuterSingleton, Z_Construct_UClass_UMassTestProcessorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTestProcessorBase.OuterSingleton;
	}
	template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UMassTestProcessorBase>()
	{
		return UMassTestProcessorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTestProcessorBase);
	UMassTestProcessorBase::~UMassTestProcessorBase() {}
	void UMassTestProcessor_A::StaticRegisterNativesUMassTestProcessor_A()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTestProcessor_A);
	UClass* Z_Construct_UClass_UMassTestProcessor_A_NoRegister()
	{
		return UMassTestProcessor_A::StaticClass();
	}
	struct Z_Construct_UClass_UMassTestProcessor_A_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTestProcessor_A_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTestProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTestProcessor_A_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassEntityTestTypes.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTestProcessor_A_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTestProcessor_A>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTestProcessor_A_Statics::ClassParams = {
		&UMassTestProcessor_A::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassTestProcessor_A_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassTestProcessor_A_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassTestProcessor_A()
	{
		if (!Z_Registration_Info_UClass_UMassTestProcessor_A.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTestProcessor_A.OuterSingleton, Z_Construct_UClass_UMassTestProcessor_A_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTestProcessor_A.OuterSingleton;
	}
	template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UMassTestProcessor_A>()
	{
		return UMassTestProcessor_A::StaticClass();
	}
	UMassTestProcessor_A::UMassTestProcessor_A() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTestProcessor_A);
	UMassTestProcessor_A::~UMassTestProcessor_A() {}
	void UMassTestProcessor_B::StaticRegisterNativesUMassTestProcessor_B()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTestProcessor_B);
	UClass* Z_Construct_UClass_UMassTestProcessor_B_NoRegister()
	{
		return UMassTestProcessor_B::StaticClass();
	}
	struct Z_Construct_UClass_UMassTestProcessor_B_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTestProcessor_B_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTestProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTestProcessor_B_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassEntityTestTypes.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTestProcessor_B_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTestProcessor_B>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTestProcessor_B_Statics::ClassParams = {
		&UMassTestProcessor_B::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassTestProcessor_B_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassTestProcessor_B_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassTestProcessor_B()
	{
		if (!Z_Registration_Info_UClass_UMassTestProcessor_B.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTestProcessor_B.OuterSingleton, Z_Construct_UClass_UMassTestProcessor_B_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTestProcessor_B.OuterSingleton;
	}
	template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UMassTestProcessor_B>()
	{
		return UMassTestProcessor_B::StaticClass();
	}
	UMassTestProcessor_B::UMassTestProcessor_B() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTestProcessor_B);
	UMassTestProcessor_B::~UMassTestProcessor_B() {}
	void UMassTestProcessor_C::StaticRegisterNativesUMassTestProcessor_C()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTestProcessor_C);
	UClass* Z_Construct_UClass_UMassTestProcessor_C_NoRegister()
	{
		return UMassTestProcessor_C::StaticClass();
	}
	struct Z_Construct_UClass_UMassTestProcessor_C_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTestProcessor_C_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTestProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTestProcessor_C_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassEntityTestTypes.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTestProcessor_C_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTestProcessor_C>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTestProcessor_C_Statics::ClassParams = {
		&UMassTestProcessor_C::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassTestProcessor_C_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassTestProcessor_C_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassTestProcessor_C()
	{
		if (!Z_Registration_Info_UClass_UMassTestProcessor_C.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTestProcessor_C.OuterSingleton, Z_Construct_UClass_UMassTestProcessor_C_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTestProcessor_C.OuterSingleton;
	}
	template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UMassTestProcessor_C>()
	{
		return UMassTestProcessor_C::StaticClass();
	}
	UMassTestProcessor_C::UMassTestProcessor_C() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTestProcessor_C);
	UMassTestProcessor_C::~UMassTestProcessor_C() {}
	void UMassTestProcessor_D::StaticRegisterNativesUMassTestProcessor_D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTestProcessor_D);
	UClass* Z_Construct_UClass_UMassTestProcessor_D_NoRegister()
	{
		return UMassTestProcessor_D::StaticClass();
	}
	struct Z_Construct_UClass_UMassTestProcessor_D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTestProcessor_D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTestProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTestProcessor_D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassEntityTestTypes.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTestProcessor_D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTestProcessor_D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTestProcessor_D_Statics::ClassParams = {
		&UMassTestProcessor_D::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassTestProcessor_D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassTestProcessor_D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassTestProcessor_D()
	{
		if (!Z_Registration_Info_UClass_UMassTestProcessor_D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTestProcessor_D.OuterSingleton, Z_Construct_UClass_UMassTestProcessor_D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTestProcessor_D.OuterSingleton;
	}
	template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UMassTestProcessor_D>()
	{
		return UMassTestProcessor_D::StaticClass();
	}
	UMassTestProcessor_D::UMassTestProcessor_D() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTestProcessor_D);
	UMassTestProcessor_D::~UMassTestProcessor_D() {}
	void UMassTestProcessor_E::StaticRegisterNativesUMassTestProcessor_E()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTestProcessor_E);
	UClass* Z_Construct_UClass_UMassTestProcessor_E_NoRegister()
	{
		return UMassTestProcessor_E::StaticClass();
	}
	struct Z_Construct_UClass_UMassTestProcessor_E_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTestProcessor_E_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTestProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTestProcessor_E_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassEntityTestTypes.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTestProcessor_E_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTestProcessor_E>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTestProcessor_E_Statics::ClassParams = {
		&UMassTestProcessor_E::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassTestProcessor_E_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassTestProcessor_E_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassTestProcessor_E()
	{
		if (!Z_Registration_Info_UClass_UMassTestProcessor_E.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTestProcessor_E.OuterSingleton, Z_Construct_UClass_UMassTestProcessor_E_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTestProcessor_E.OuterSingleton;
	}
	template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UMassTestProcessor_E>()
	{
		return UMassTestProcessor_E::StaticClass();
	}
	UMassTestProcessor_E::UMassTestProcessor_E() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTestProcessor_E);
	UMassTestProcessor_E::~UMassTestProcessor_E() {}
	void UMassTestProcessor_F::StaticRegisterNativesUMassTestProcessor_F()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTestProcessor_F);
	UClass* Z_Construct_UClass_UMassTestProcessor_F_NoRegister()
	{
		return UMassTestProcessor_F::StaticClass();
	}
	struct Z_Construct_UClass_UMassTestProcessor_F_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTestProcessor_F_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTestProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTestProcessor_F_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassEntityTestTypes.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTestProcessor_F_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTestProcessor_F>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTestProcessor_F_Statics::ClassParams = {
		&UMassTestProcessor_F::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassTestProcessor_F_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassTestProcessor_F_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassTestProcessor_F()
	{
		if (!Z_Registration_Info_UClass_UMassTestProcessor_F.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTestProcessor_F.OuterSingleton, Z_Construct_UClass_UMassTestProcessor_F_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTestProcessor_F.OuterSingleton;
	}
	template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UMassTestProcessor_F>()
	{
		return UMassTestProcessor_F::StaticClass();
	}
	UMassTestProcessor_F::UMassTestProcessor_F() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTestProcessor_F);
	UMassTestProcessor_F::~UMassTestProcessor_F() {}
	void UMassTestProcessor_Floats::StaticRegisterNativesUMassTestProcessor_Floats()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTestProcessor_Floats);
	UClass* Z_Construct_UClass_UMassTestProcessor_Floats_NoRegister()
	{
		return UMassTestProcessor_Floats::StaticClass();
	}
	struct Z_Construct_UClass_UMassTestProcessor_Floats_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTestProcessor_Floats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTestProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTestProcessor_Floats_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassEntityTestTypes.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTestProcessor_Floats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTestProcessor_Floats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTestProcessor_Floats_Statics::ClassParams = {
		&UMassTestProcessor_Floats::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x400030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassTestProcessor_Floats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassTestProcessor_Floats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassTestProcessor_Floats()
	{
		if (!Z_Registration_Info_UClass_UMassTestProcessor_Floats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTestProcessor_Floats.OuterSingleton, Z_Construct_UClass_UMassTestProcessor_Floats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTestProcessor_Floats.OuterSingleton;
	}
	template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UMassTestProcessor_Floats>()
	{
		return UMassTestProcessor_Floats::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTestProcessor_Floats);
	UMassTestProcessor_Floats::~UMassTestProcessor_Floats() {}
	void UMassTestProcessor_Ints::StaticRegisterNativesUMassTestProcessor_Ints()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTestProcessor_Ints);
	UClass* Z_Construct_UClass_UMassTestProcessor_Ints_NoRegister()
	{
		return UMassTestProcessor_Ints::StaticClass();
	}
	struct Z_Construct_UClass_UMassTestProcessor_Ints_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTestProcessor_Ints_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTestProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTestProcessor_Ints_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassEntityTestTypes.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTestProcessor_Ints_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTestProcessor_Ints>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTestProcessor_Ints_Statics::ClassParams = {
		&UMassTestProcessor_Ints::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x400030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassTestProcessor_Ints_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassTestProcessor_Ints_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassTestProcessor_Ints()
	{
		if (!Z_Registration_Info_UClass_UMassTestProcessor_Ints.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTestProcessor_Ints.OuterSingleton, Z_Construct_UClass_UMassTestProcessor_Ints_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTestProcessor_Ints.OuterSingleton;
	}
	template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UMassTestProcessor_Ints>()
	{
		return UMassTestProcessor_Ints::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTestProcessor_Ints);
	UMassTestProcessor_Ints::~UMassTestProcessor_Ints() {}
	void UMassTestProcessor_FloatsInts::StaticRegisterNativesUMassTestProcessor_FloatsInts()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTestProcessor_FloatsInts);
	UClass* Z_Construct_UClass_UMassTestProcessor_FloatsInts_NoRegister()
	{
		return UMassTestProcessor_FloatsInts::StaticClass();
	}
	struct Z_Construct_UClass_UMassTestProcessor_FloatsInts_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTestProcessor_FloatsInts_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTestProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTestProcessor_FloatsInts_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassEntityTestTypes.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTestProcessor_FloatsInts_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTestProcessor_FloatsInts>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTestProcessor_FloatsInts_Statics::ClassParams = {
		&UMassTestProcessor_FloatsInts::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x400030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassTestProcessor_FloatsInts_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassTestProcessor_FloatsInts_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassTestProcessor_FloatsInts()
	{
		if (!Z_Registration_Info_UClass_UMassTestProcessor_FloatsInts.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTestProcessor_FloatsInts.OuterSingleton, Z_Construct_UClass_UMassTestProcessor_FloatsInts_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTestProcessor_FloatsInts.OuterSingleton;
	}
	template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UMassTestProcessor_FloatsInts>()
	{
		return UMassTestProcessor_FloatsInts::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTestProcessor_FloatsInts);
	UMassTestProcessor_FloatsInts::~UMassTestProcessor_FloatsInts() {}
	void UMassTestStaticCounterProcessor::StaticRegisterNativesUMassTestStaticCounterProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTestStaticCounterProcessor);
	UClass* Z_Construct_UClass_UMassTestStaticCounterProcessor_NoRegister()
	{
		return UMassTestStaticCounterProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassTestStaticCounterProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTestStaticCounterProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTestStaticCounterProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassEntityTestTypes.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTestStaticCounterProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTestStaticCounterProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTestStaticCounterProcessor_Statics::ClassParams = {
		&UMassTestStaticCounterProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassTestStaticCounterProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassTestStaticCounterProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassTestStaticCounterProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassTestStaticCounterProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTestStaticCounterProcessor.OuterSingleton, Z_Construct_UClass_UMassTestStaticCounterProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTestStaticCounterProcessor.OuterSingleton;
	}
	template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UMassTestStaticCounterProcessor>()
	{
		return UMassTestStaticCounterProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTestStaticCounterProcessor);
	UMassTestStaticCounterProcessor::~UMassTestStaticCounterProcessor() {}
	void UMassTestWorldSubsystem::StaticRegisterNativesUMassTestWorldSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTestWorldSubsystem);
	UClass* Z_Construct_UClass_UMassTestWorldSubsystem_NoRegister()
	{
		return UMassTestWorldSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassTestWorldSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTestWorldSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTestWorldSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassEntityTestTypes.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTestWorldSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTestWorldSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTestWorldSubsystem_Statics::ClassParams = {
		&UMassTestWorldSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassTestWorldSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassTestWorldSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassTestWorldSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassTestWorldSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTestWorldSubsystem.OuterSingleton, Z_Construct_UClass_UMassTestWorldSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTestWorldSubsystem.OuterSingleton;
	}
	template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UMassTestWorldSubsystem>()
	{
		return UMassTestWorldSubsystem::StaticClass();
	}
	UMassTestWorldSubsystem::UMassTestWorldSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTestWorldSubsystem);
	UMassTestWorldSubsystem::~UMassTestWorldSubsystem() {}
	void UMassTestEngineSubsystem::StaticRegisterNativesUMassTestEngineSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTestEngineSubsystem);
	UClass* Z_Construct_UClass_UMassTestEngineSubsystem_NoRegister()
	{
		return UMassTestEngineSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassTestEngineSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTestEngineSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTestEngineSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassEntityTestTypes.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTestEngineSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTestEngineSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTestEngineSubsystem_Statics::ClassParams = {
		&UMassTestEngineSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassTestEngineSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassTestEngineSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassTestEngineSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassTestEngineSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTestEngineSubsystem.OuterSingleton, Z_Construct_UClass_UMassTestEngineSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTestEngineSubsystem.OuterSingleton;
	}
	template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UMassTestEngineSubsystem>()
	{
		return UMassTestEngineSubsystem::StaticClass();
	}
	UMassTestEngineSubsystem::UMassTestEngineSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTestEngineSubsystem);
	UMassTestEngineSubsystem::~UMassTestEngineSubsystem() {}
	void UMassTestCustomSubsystem::StaticRegisterNativesUMassTestCustomSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTestCustomSubsystem);
	UClass* Z_Construct_UClass_UMassTestCustomSubsystem_NoRegister()
	{
		return UMassTestCustomSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassTestCustomSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTestCustomSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTestCustomSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassEntityTestTypes.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTestCustomSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTestCustomSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTestCustomSubsystem_Statics::ClassParams = {
		&UMassTestCustomSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassTestCustomSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassTestCustomSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassTestCustomSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassTestCustomSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTestCustomSubsystem.OuterSingleton, Z_Construct_UClass_UMassTestCustomSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTestCustomSubsystem.OuterSingleton;
	}
	template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UMassTestCustomSubsystem>()
	{
		return UMassTestCustomSubsystem::StaticClass();
	}
	UMassTestCustomSubsystem::UMassTestCustomSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTestCustomSubsystem);
	UMassTestCustomSubsystem::~UMassTestCustomSubsystem() {}
	void UMassTestLocalPlayerSubsystem::StaticRegisterNativesUMassTestLocalPlayerSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTestLocalPlayerSubsystem);
	UClass* Z_Construct_UClass_UMassTestLocalPlayerSubsystem_NoRegister()
	{
		return UMassTestLocalPlayerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassTestLocalPlayerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTestLocalPlayerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTestLocalPlayerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassEntityTestTypes.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTestLocalPlayerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTestLocalPlayerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTestLocalPlayerSubsystem_Statics::ClassParams = {
		&UMassTestLocalPlayerSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassTestLocalPlayerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassTestLocalPlayerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassTestLocalPlayerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassTestLocalPlayerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTestLocalPlayerSubsystem.OuterSingleton, Z_Construct_UClass_UMassTestLocalPlayerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTestLocalPlayerSubsystem.OuterSingleton;
	}
	template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UMassTestLocalPlayerSubsystem>()
	{
		return UMassTestLocalPlayerSubsystem::StaticClass();
	}
	UMassTestLocalPlayerSubsystem::UMassTestLocalPlayerSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTestLocalPlayerSubsystem);
	UMassTestLocalPlayerSubsystem::~UMassTestLocalPlayerSubsystem() {}
	void UMassTestGameInstanceSubsystem::StaticRegisterNativesUMassTestGameInstanceSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTestGameInstanceSubsystem);
	UClass* Z_Construct_UClass_UMassTestGameInstanceSubsystem_NoRegister()
	{
		return UMassTestGameInstanceSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassTestGameInstanceSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTestGameInstanceSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTestGameInstanceSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassEntityTestTypes.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTestGameInstanceSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTestGameInstanceSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTestGameInstanceSubsystem_Statics::ClassParams = {
		&UMassTestGameInstanceSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassTestGameInstanceSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassTestGameInstanceSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassTestGameInstanceSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassTestGameInstanceSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTestGameInstanceSubsystem.OuterSingleton, Z_Construct_UClass_UMassTestGameInstanceSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTestGameInstanceSubsystem.OuterSingleton;
	}
	template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UMassTestGameInstanceSubsystem>()
	{
		return UMassTestGameInstanceSubsystem::StaticClass();
	}
	UMassTestGameInstanceSubsystem::UMassTestGameInstanceSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTestGameInstanceSubsystem);
	UMassTestGameInstanceSubsystem::~UMassTestGameInstanceSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityTestSuite_Public_MassEntityTestTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityTestSuite_Public_MassEntityTestTypes_h_Statics::ScriptStructInfo[] = {
		{ FTestFragment_Float::StaticStruct, Z_Construct_UScriptStruct_FTestFragment_Float_Statics::NewStructOps, TEXT("TestFragment_Float"), &Z_Registration_Info_UScriptStruct_TestFragment_Float, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestFragment_Float), 224001278U) },
		{ FTestFragment_Int::StaticStruct, Z_Construct_UScriptStruct_FTestFragment_Int_Statics::NewStructOps, TEXT("TestFragment_Int"), &Z_Registration_Info_UScriptStruct_TestFragment_Int, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestFragment_Int), 2930224539U) },
		{ FTestFragment_Bool::StaticStruct, Z_Construct_UScriptStruct_FTestFragment_Bool_Statics::NewStructOps, TEXT("TestFragment_Bool"), &Z_Registration_Info_UScriptStruct_TestFragment_Bool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestFragment_Bool), 1809770557U) },
		{ FTestFragment_Large::StaticStruct, Z_Construct_UScriptStruct_FTestFragment_Large_Statics::NewStructOps, TEXT("TestFragment_Large"), &Z_Registration_Info_UScriptStruct_TestFragment_Large, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestFragment_Large), 2639874155U) },
		{ FTestFragment_Array::StaticStruct, Z_Construct_UScriptStruct_FTestFragment_Array_Statics::NewStructOps, TEXT("TestFragment_Array"), &Z_Registration_Info_UScriptStruct_TestFragment_Array, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestFragment_Array), 1439008567U) },
		{ FTestFragment_Tag::StaticStruct, Z_Construct_UScriptStruct_FTestFragment_Tag_Statics::NewStructOps, TEXT("TestFragment_Tag"), &Z_Registration_Info_UScriptStruct_TestFragment_Tag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestFragment_Tag), 2802673549U) },
		{ FTestTag_A::StaticStruct, Z_Construct_UScriptStruct_FTestTag_A_Statics::NewStructOps, TEXT("TestTag_A"), &Z_Registration_Info_UScriptStruct_TestTag_A, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestTag_A), 127630705U) },
		{ FTestTag_B::StaticStruct, Z_Construct_UScriptStruct_FTestTag_B_Statics::NewStructOps, TEXT("TestTag_B"), &Z_Registration_Info_UScriptStruct_TestTag_B, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestTag_B), 479078817U) },
		{ FTestTag_C::StaticStruct, Z_Construct_UScriptStruct_FTestTag_C_Statics::NewStructOps, TEXT("TestTag_C"), &Z_Registration_Info_UScriptStruct_TestTag_C, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestTag_C), 2017828892U) },
		{ FTestTag_D::StaticStruct, Z_Construct_UScriptStruct_FTestTag_D_Statics::NewStructOps, TEXT("TestTag_D"), &Z_Registration_Info_UScriptStruct_TestTag_D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestTag_D), 1319670730U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityTestSuite_Public_MassEntityTestTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTestProcessorBase, UMassTestProcessorBase::StaticClass, TEXT("UMassTestProcessorBase"), &Z_Registration_Info_UClass_UMassTestProcessorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTestProcessorBase), 1658298053U) },
		{ Z_Construct_UClass_UMassTestProcessor_A, UMassTestProcessor_A::StaticClass, TEXT("UMassTestProcessor_A"), &Z_Registration_Info_UClass_UMassTestProcessor_A, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTestProcessor_A), 999683038U) },
		{ Z_Construct_UClass_UMassTestProcessor_B, UMassTestProcessor_B::StaticClass, TEXT("UMassTestProcessor_B"), &Z_Registration_Info_UClass_UMassTestProcessor_B, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTestProcessor_B), 2173226406U) },
		{ Z_Construct_UClass_UMassTestProcessor_C, UMassTestProcessor_C::StaticClass, TEXT("UMassTestProcessor_C"), &Z_Registration_Info_UClass_UMassTestProcessor_C, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTestProcessor_C), 144344275U) },
		{ Z_Construct_UClass_UMassTestProcessor_D, UMassTestProcessor_D::StaticClass, TEXT("UMassTestProcessor_D"), &Z_Registration_Info_UClass_UMassTestProcessor_D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTestProcessor_D), 4063877450U) },
		{ Z_Construct_UClass_UMassTestProcessor_E, UMassTestProcessor_E::StaticClass, TEXT("UMassTestProcessor_E"), &Z_Registration_Info_UClass_UMassTestProcessor_E, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTestProcessor_E), 2887781747U) },
		{ Z_Construct_UClass_UMassTestProcessor_F, UMassTestProcessor_F::StaticClass, TEXT("UMassTestProcessor_F"), &Z_Registration_Info_UClass_UMassTestProcessor_F, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTestProcessor_F), 167536119U) },
		{ Z_Construct_UClass_UMassTestProcessor_Floats, UMassTestProcessor_Floats::StaticClass, TEXT("UMassTestProcessor_Floats"), &Z_Registration_Info_UClass_UMassTestProcessor_Floats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTestProcessor_Floats), 449351805U) },
		{ Z_Construct_UClass_UMassTestProcessor_Ints, UMassTestProcessor_Ints::StaticClass, TEXT("UMassTestProcessor_Ints"), &Z_Registration_Info_UClass_UMassTestProcessor_Ints, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTestProcessor_Ints), 4224961799U) },
		{ Z_Construct_UClass_UMassTestProcessor_FloatsInts, UMassTestProcessor_FloatsInts::StaticClass, TEXT("UMassTestProcessor_FloatsInts"), &Z_Registration_Info_UClass_UMassTestProcessor_FloatsInts, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTestProcessor_FloatsInts), 26835365U) },
		{ Z_Construct_UClass_UMassTestStaticCounterProcessor, UMassTestStaticCounterProcessor::StaticClass, TEXT("UMassTestStaticCounterProcessor"), &Z_Registration_Info_UClass_UMassTestStaticCounterProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTestStaticCounterProcessor), 2882825518U) },
		{ Z_Construct_UClass_UMassTestWorldSubsystem, UMassTestWorldSubsystem::StaticClass, TEXT("UMassTestWorldSubsystem"), &Z_Registration_Info_UClass_UMassTestWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTestWorldSubsystem), 178226416U) },
		{ Z_Construct_UClass_UMassTestEngineSubsystem, UMassTestEngineSubsystem::StaticClass, TEXT("UMassTestEngineSubsystem"), &Z_Registration_Info_UClass_UMassTestEngineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTestEngineSubsystem), 3464553478U) },
		{ Z_Construct_UClass_UMassTestCustomSubsystem, UMassTestCustomSubsystem::StaticClass, TEXT("UMassTestCustomSubsystem"), &Z_Registration_Info_UClass_UMassTestCustomSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTestCustomSubsystem), 1690494648U) },
		{ Z_Construct_UClass_UMassTestLocalPlayerSubsystem, UMassTestLocalPlayerSubsystem::StaticClass, TEXT("UMassTestLocalPlayerSubsystem"), &Z_Registration_Info_UClass_UMassTestLocalPlayerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTestLocalPlayerSubsystem), 4100776907U) },
		{ Z_Construct_UClass_UMassTestGameInstanceSubsystem, UMassTestGameInstanceSubsystem::StaticClass, TEXT("UMassTestGameInstanceSubsystem"), &Z_Registration_Info_UClass_UMassTestGameInstanceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTestGameInstanceSubsystem), 576689364U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityTestSuite_Public_MassEntityTestTypes_h_3923633640(TEXT("/Script/MassEntityTestSuite"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityTestSuite_Public_MassEntityTestTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityTestSuite_Public_MassEntityTestTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityTestSuite_Public_MassEntityTestTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityTestSuite_Public_MassEntityTestTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
