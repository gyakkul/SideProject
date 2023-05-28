// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tests/RemoteControlTestData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlTestData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlTestObject();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlTestObject_NoRegister();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlTestStruct();
	UPackage* Z_Construct_UPackage__Script_RemoteControl();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlTestStruct;
class UScriptStruct* FRemoteControlTestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlTestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlTestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlTestStruct, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RemoteControlTestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlTestStruct.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRemoteControlTestStruct>()
{
	return FRemoteControlTestStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSomeBool_MetaData[];
#endif
		static void NewProp_bSomeBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSomeBool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SomeUInt32_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SomeUInt32;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SomeFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SomeFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SomeVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SomeVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SomeRotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SomeRotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SomeClampedInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SomeClampedInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SomeClampedFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SomeClampedFloat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlTestData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlTestStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_bSomeBool_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlTestData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_bSomeBool_SetBit(void* Obj)
	{
		((FRemoteControlTestStruct*)Obj)->bSomeBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_bSomeBool = { "bSomeBool", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRemoteControlTestStruct), &Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_bSomeBool_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_bSomeBool_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_bSomeBool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeUInt32_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlTestData.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeUInt32 = { "SomeUInt32", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlTestStruct, SomeUInt32), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeUInt32_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeUInt32_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeFloat_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlTestData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeFloat = { "SomeFloat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlTestStruct, SomeFloat), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeFloat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeVector_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlTestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeVector = { "SomeVector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlTestStruct, SomeVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeRotator_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlTestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeRotator = { "SomeRotator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlTestStruct, SomeRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeRotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeClampedInt_MetaData[] = {
		{ "Category", "RC" },
		{ "ClampMax", "145" },
		{ "ClampMin", "20" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlTestData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeClampedInt = { "SomeClampedInt", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlTestStruct, SomeClampedInt), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeClampedInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeClampedInt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeClampedFloat_MetaData[] = {
		{ "Category", "RC" },
		{ "ClampMax", "0.920000" },
		{ "ClampMin", "0.200000" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlTestData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeClampedFloat = { "SomeClampedFloat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlTestStruct, SomeClampedFloat), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeClampedFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeClampedFloat_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_bSomeBool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeUInt32,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeClampedInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewProp_SomeClampedFloat,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		&NewStructOps,
		"RemoteControlTestStruct",
		sizeof(FRemoteControlTestStruct),
		alignof(FRemoteControlTestStruct),
		Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlTestStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlTestStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlTestStruct.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlTestStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlTestInnerStruct;
class UScriptStruct* FRemoteControlTestInnerStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlTestInnerStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlTestInnerStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RemoteControlTestInnerStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlTestInnerStruct.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRemoteControlTestInnerStruct>()
{
	return FRemoteControlTestInnerStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayOfVectors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayOfVectors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayOfVectors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/RemoteControlTestData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlTestInnerStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/RemoteControlTestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlTestInnerStruct, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::NewProp_FloatArray_Inner = { "FloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::NewProp_FloatArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/RemoteControlTestData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::NewProp_FloatArray = { "FloatArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlTestInnerStruct, FloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::NewProp_FloatArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::NewProp_FloatArray_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::NewProp_ArrayOfVectors_Inner = { "ArrayOfVectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::NewProp_ArrayOfVectors_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/RemoteControlTestData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::NewProp_ArrayOfVectors = { "ArrayOfVectors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlTestInnerStruct, ArrayOfVectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::NewProp_ArrayOfVectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::NewProp_ArrayOfVectors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::NewProp_FloatArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::NewProp_FloatArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::NewProp_ArrayOfVectors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::NewProp_ArrayOfVectors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		&NewStructOps,
		"RemoteControlTestInnerStruct",
		sizeof(FRemoteControlTestInnerStruct),
		alignof(FRemoteControlTestInnerStruct),
		Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlTestInnerStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlTestInnerStruct.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlTestInnerStruct.InnerSingleton;
	}
	void URemoteControlTestObject::StaticRegisterNativesURemoteControlTestObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteControlTestObject);
	UClass* Z_Construct_UClass_URemoteControlTestObject_NoRegister()
	{
		return URemoteControlTestObject::StaticClass();
	}
	struct Z_Construct_UClass_URemoteControlTestObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CStyleIntArray_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CStyleIntArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_IntSet;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_IntMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntInnerStructMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntInnerStructMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntInnerStructMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_IntInnerStructMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StringColorMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringColorMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringColorMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StringColorMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteControlTestObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlTestObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/RemoteControlTestData.h" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlTestData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_CStyleIntArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/RemoteControlTestData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_CStyleIntArray = { "CStyleIntArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(CStyleIntArray, URemoteControlTestObject), nullptr, nullptr, STRUCT_OFFSET(URemoteControlTestObject, CStyleIntArray), METADATA_PARAMS(Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_CStyleIntArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_CStyleIntArray_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntArray_Inner = { "IntArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/RemoteControlTestData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntArray = { "IntArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlTestObject, IntArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntArray_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_FloatArray_Inner = { "FloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_FloatArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/RemoteControlTestData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_FloatArray = { "FloatArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlTestObject, FloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_FloatArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_FloatArray_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntSet_ElementProp = { "IntSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntSet_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/RemoteControlTestData.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntSet = { "IntSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlTestObject, IntSet), METADATA_PARAMS(Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntSet_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntMap_ValueProp = { "IntMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntMap_Key_KeyProp = { "IntMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntMap_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/RemoteControlTestData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntMap = { "IntMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlTestObject, IntMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntMap_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntInnerStructMap_ValueProp = { "IntInnerStructMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct, METADATA_PARAMS(nullptr, 0) }; // 2268715126
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntInnerStructMap_Key_KeyProp = { "IntInnerStructMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntInnerStructMap_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/RemoteControlTestData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntInnerStructMap = { "IntInnerStructMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlTestObject, IntInnerStructMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntInnerStructMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntInnerStructMap_MetaData)) }; // 2268715126
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_StringColorMap_ValueProp = { "StringColorMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_StringColorMap_Key_KeyProp = { "StringColorMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_StringColorMap_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/RemoteControlTestData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_StringColorMap = { "StringColorMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlTestObject, StringColorMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_StringColorMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_StringColorMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteControlTestObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_CStyleIntArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_FloatArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_FloatArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntInnerStructMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntInnerStructMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_IntInnerStructMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_StringColorMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_StringColorMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlTestObject_Statics::NewProp_StringColorMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteControlTestObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteControlTestObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteControlTestObject_Statics::ClassParams = {
		&URemoteControlTestObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemoteControlTestObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlTestObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteControlTestObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlTestObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteControlTestObject()
	{
		if (!Z_Registration_Info_UClass_URemoteControlTestObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteControlTestObject.OuterSingleton, Z_Construct_UClass_URemoteControlTestObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteControlTestObject.OuterSingleton;
	}
	template<> REMOTECONTROL_API UClass* StaticClass<URemoteControlTestObject>()
	{
		return URemoteControlTestObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteControlTestObject);
	URemoteControlTestObject::~URemoteControlTestObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlTestData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlTestData_h_Statics::ScriptStructInfo[] = {
		{ FRemoteControlTestStruct::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlTestStruct_Statics::NewStructOps, TEXT("RemoteControlTestStruct"), &Z_Registration_Info_UScriptStruct_RemoteControlTestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlTestStruct), 996604048U) },
		{ FRemoteControlTestInnerStruct::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlTestInnerStruct_Statics::NewStructOps, TEXT("RemoteControlTestInnerStruct"), &Z_Registration_Info_UScriptStruct_RemoteControlTestInnerStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlTestInnerStruct), 2268715126U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlTestData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteControlTestObject, URemoteControlTestObject::StaticClass, TEXT("URemoteControlTestObject"), &Z_Registration_Info_UClass_URemoteControlTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteControlTestObject), 1444647859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlTestData_h_572284604(TEXT("/Script/RemoteControl"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlTestData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlTestData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlTestData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlTestData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
