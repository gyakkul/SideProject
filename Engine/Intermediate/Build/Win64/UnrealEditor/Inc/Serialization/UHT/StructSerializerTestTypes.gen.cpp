// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tests/StructSerializerTestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructSerializerTestTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UMetaData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox3f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds3f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix44f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FOrientedBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane4f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat4f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator3f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform3f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4f();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FOrientedBoxFloat();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerByteArray();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerMapTestStruct();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerSetTestStruct();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerTestStruct();
	UPackage* Z_Construct_UPackage__Script_Serialization();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructSerializerNumericTestStruct;
class UScriptStruct* FStructSerializerNumericTestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructSerializerNumericTestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructSerializerNumericTestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct, (UObject*)Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerNumericTestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_StructSerializerNumericTestStruct.OuterSingleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerNumericTestStruct>()
{
	return FStructSerializerNumericTestStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int8_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Int8;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int16_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_Int16;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int64_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Int64;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UInt8_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_UInt8;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UInt16_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_UInt16;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UInt32_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_UInt32;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UInt64_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_UInt64;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Double_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Double;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Test structure for numeric properties.\n */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for numeric properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerNumericTestStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int8_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int8 = { "Int8", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Int8), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int8_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int8_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int16_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int16 = { "Int16", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Int16), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int16_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int16_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int32_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int32 = { "Int32", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Int32), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int32_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int32_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int64_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int64 = { "Int64", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Int64), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int64_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int64_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt8_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt8 = { "UInt8", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNumericTestStruct, UInt8), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt8_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt8_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt16_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt16 = { "UInt16", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNumericTestStruct, UInt16), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt16_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt16_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt32_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt32 = { "UInt32", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNumericTestStruct, UInt32), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt32_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt32_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt64_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt64 = { "UInt64", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNumericTestStruct, UInt64), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt64_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt64_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Float_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Float), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Float_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Double_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Double = { "Double", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Double), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Double_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Double_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int16,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int32,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int64,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt16,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt32,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt64,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Double,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerNumericTestStruct",
		sizeof(FStructSerializerNumericTestStruct),
		alignof(FStructSerializerNumericTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_StructSerializerNumericTestStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructSerializerNumericTestStruct.InnerSingleton, Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StructSerializerNumericTestStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructSerializerBooleanTestStruct;
class UScriptStruct* FStructSerializerBooleanTestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructSerializerBooleanTestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructSerializerBooleanTestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct, (UObject*)Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerBooleanTestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_StructSerializerBooleanTestStruct.OuterSingleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerBooleanTestStruct>()
{
	return FStructSerializerBooleanTestStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolFalse_MetaData[];
#endif
		static void NewProp_BoolFalse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolFalse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolTrue_MetaData[];
#endif
		static void NewProp_BoolTrue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolTrue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bitfield0_MetaData[];
#endif
		static void NewProp_Bitfield0_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Bitfield0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bitfield1_MetaData[];
#endif
		static void NewProp_Bitfield1_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Bitfield1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bitfield2Set_MetaData[];
#endif
		static void NewProp_Bitfield2Set_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Bitfield2Set;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bitfield3_MetaData[];
#endif
		static void NewProp_Bitfield3_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Bitfield3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bitfield4Set_MetaData[];
#endif
		static void NewProp_Bitfield4Set_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Bitfield4Set;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bitfield5Set_MetaData[];
#endif
		static void NewProp_Bitfield5Set_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Bitfield5Set;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bitfield6_MetaData[];
#endif
		static void NewProp_Bitfield6_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Bitfield6;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bitfield7Set_MetaData[];
#endif
		static void NewProp_Bitfield7Set_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Bitfield7Set;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Test structure for boolean properties.\n */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for boolean properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerBooleanTestStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->BoolFalse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse = { "BoolFalse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->BoolTrue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue = { "BoolTrue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield0_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield0_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->Bitfield0 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield0 = { "Bitfield0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield0_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield1_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield1_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->Bitfield1 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield1 = { "Bitfield1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield1_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield2Set_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield2Set_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->Bitfield2Set = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield2Set = { "Bitfield2Set", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield2Set_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield2Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield2Set_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield3_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield3_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->Bitfield3 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield3 = { "Bitfield3", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield3_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield4Set_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield4Set_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->Bitfield4Set = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield4Set = { "Bitfield4Set", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield4Set_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield4Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield4Set_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield5Set_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield5Set_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->Bitfield5Set = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield5Set = { "Bitfield5Set", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield5Set_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield5Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield5Set_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield6_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield6_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->Bitfield6 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield6 = { "Bitfield6", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield6_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield6_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield6_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield7Set_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield7Set_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->Bitfield7Set = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield7Set = { "Bitfield7Set", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield7Set_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield7Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield7Set_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield2Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield4Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield5Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield6,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield7Set,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerBooleanTestStruct",
		sizeof(FStructSerializerBooleanTestStruct),
		alignof(FStructSerializerBooleanTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_StructSerializerBooleanTestStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructSerializerBooleanTestStruct.InnerSingleton, Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StructSerializerBooleanTestStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructSerializerObjectTestStruct;
class UScriptStruct* FStructSerializerObjectTestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructSerializerObjectTestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructSerializerObjectTestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct, (UObject*)Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerObjectTestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_StructSerializerObjectTestStruct.OuterSingleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerObjectTestStruct>()
{
	return FStructSerializerObjectTestStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_RawClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WrappedClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_WrappedClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SubClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SoftClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RawObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WrappedObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WrappedObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeakObject_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftObject_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClassPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Test structure for UObject properties.\n */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for UObject properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerObjectTestStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_RawClass_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_RawClass = { "RawClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerObjectTestStruct, RawClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_RawClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_RawClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_WrappedClass_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_WrappedClass = { "WrappedClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerObjectTestStruct, WrappedClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_WrappedClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_WrappedClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SubClass_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SubClass = { "SubClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerObjectTestStruct, SubClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMetaData, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SubClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SubClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SoftClass_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SoftClass = { "SoftClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerObjectTestStruct, SoftClass), Z_Construct_UClass_UMetaData, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SoftClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SoftClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_RawObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_RawObject = { "RawObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerObjectTestStruct, RawObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_RawObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_RawObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_WrappedObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_WrappedObject = { "WrappedObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerObjectTestStruct, WrappedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_WrappedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_WrappedObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_WeakObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_WeakObject = { "WeakObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerObjectTestStruct, WeakObject), Z_Construct_UClass_UMetaData, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_WeakObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_WeakObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SoftObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SoftObject = { "SoftObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerObjectTestStruct, SoftObject), Z_Construct_UClass_UMetaData, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SoftObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SoftObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ClassPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ClassPath = { "ClassPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerObjectTestStruct, ClassPath), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ClassPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ClassPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ObjectPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerObjectTestStruct, ObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ObjectPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_RawClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_WrappedClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SubClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SoftClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_RawObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_WrappedObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_WeakObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_SoftObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ClassPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ObjectPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerObjectTestStruct",
		sizeof(FStructSerializerObjectTestStruct),
		alignof(FStructSerializerObjectTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_StructSerializerObjectTestStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructSerializerObjectTestStruct.InnerSingleton, Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StructSerializerObjectTestStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructSerializerBuiltinTestStruct;
class UScriptStruct* FStructSerializerBuiltinTestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructSerializerBuiltinTestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructSerializerBuiltinTestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct, (UObject*)Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerBuiltinTestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_StructSerializerBuiltinTestStruct.OuterSingleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerBuiltinTestStruct>()
{
	return FStructSerializerBuiltinTestStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector4_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quat_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Test structure for properties of various built-in types.\n * @see NoExportTypes.h\n */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for properties of various built-in types.\n@see NoExportTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerBuiltinTestStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Guid_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_String_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, String), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_String_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector_MetaData[] = {
		{ "Comment", "//UPROPERTY()\n//FTimespan Timespan;\n" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "UPROPERTY()\nFTimespan Timespan;" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector4_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector4 = { "Vector4", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Vector4), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Rotator_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Rotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Rotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Quat_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Quat = { "Quat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Quat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Quat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Quat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Rotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Quat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerBuiltinTestStruct",
		sizeof(FStructSerializerBuiltinTestStruct),
		alignof(FStructSerializerBuiltinTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_StructSerializerBuiltinTestStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructSerializerBuiltinTestStruct.InnerSingleton, Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StructSerializerBuiltinTestStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructSerializerLWCTypesTest;
class UScriptStruct* FStructSerializerLWCTypesTest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructSerializerLWCTypesTest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructSerializerLWCTypesTest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest, (UObject*)Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerLWCTypesTest"));
	}
	return Z_Registration_Info_UScriptStruct_StructSerializerLWCTypesTest.OuterSingleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerLWCTypesTest>()
{
	return FStructSerializerLWCTypesTest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector2D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector4_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Matrix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Matrix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Plane_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Plane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quat_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box2D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxSphereBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxSphereBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrientedBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OrientedBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Double_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Double;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StrToVec_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StrToVec_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrToVec_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StrToVec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_VectorSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Test structure for LWC types.\n * @see NoExportTypes.h\n */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for LWC types.\n@see NoExportTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerLWCTypesTest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Vector_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerLWCTypesTest, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Vector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Vector2D_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Vector2D = { "Vector2D", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerLWCTypesTest, Vector2D), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Vector2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Vector2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Vector4_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Vector4 = { "Vector4", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerLWCTypesTest, Vector4), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Vector4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Vector4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Matrix_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Matrix = { "Matrix", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerLWCTypesTest, Matrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Matrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Matrix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Plane_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Plane = { "Plane", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerLWCTypesTest, Plane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Plane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Plane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Quat_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Quat = { "Quat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerLWCTypesTest, Quat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Quat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Quat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Rotator_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerLWCTypesTest, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Rotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Rotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerLWCTypesTest, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Box_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerLWCTypesTest, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Box_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Box2D_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Box2D = { "Box2D", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerLWCTypesTest, Box2D), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Box2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Box2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_BoxSphereBounds_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_BoxSphereBounds = { "BoxSphereBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerLWCTypesTest, BoxSphereBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_BoxSphereBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_BoxSphereBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_OrientedBox_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_OrientedBox = { "OrientedBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerLWCTypesTest, OrientedBox), Z_Construct_UScriptStruct_FOrientedBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_OrientedBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_OrientedBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Float_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerLWCTypesTest, Float), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Float_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Double_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Double = { "Double", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerLWCTypesTest, Double), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Double_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Double_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_VectorArray_Inner = { "VectorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_VectorArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_VectorArray = { "VectorArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerLWCTypesTest, VectorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_VectorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_VectorArray_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_StrToVec_ValueProp = { "StrToVec", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_StrToVec_Key_KeyProp = { "StrToVec_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_StrToVec_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_StrToVec = { "StrToVec", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerLWCTypesTest, StrToVec), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_StrToVec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_StrToVec_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_VectorSet_ElementProp = { "VectorSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_VectorSet_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FVector>::Value, "The structure 'FVector' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_VectorSet = { "VectorSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerLWCTypesTest, VectorSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_VectorSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_VectorSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Vector2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Vector4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Matrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Plane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Quat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Rotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Box2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_BoxSphereBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_OrientedBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_Double,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_VectorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_VectorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_StrToVec_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_StrToVec_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_StrToVec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_VectorSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewProp_VectorSet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerLWCTypesTest",
		sizeof(FStructSerializerLWCTypesTest),
		alignof(FStructSerializerLWCTypesTest),
		Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest()
	{
		if (!Z_Registration_Info_UScriptStruct_StructSerializerLWCTypesTest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructSerializerLWCTypesTest.InnerSingleton, Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StructSerializerLWCTypesTest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OrientedBoxFloat;
class UScriptStruct* FOrientedBoxFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OrientedBoxFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OrientedBoxFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOrientedBoxFloat, (UObject*)Z_Construct_UPackage__Script_Serialization(), TEXT("OrientedBoxFloat"));
	}
	return Z_Registration_Info_UScriptStruct_OrientedBoxFloat.OuterSingleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FOrientedBoxFloat>()
{
	return FOrientedBoxFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisX_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisY_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisZ_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtentX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtentX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtentY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtentY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtentZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtentZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Float (Non LWC) version of FOrientedBox since the float version doesn't exist yet */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Float (Non LWC) version of FOrientedBox since the float version doesn't exist yet" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOrientedBoxFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_Center_MetaData[] = {
		{ "Comment", "/** Holds the center of the box. */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Holds the center of the box." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOrientedBoxFloat, Center), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_AxisX_MetaData[] = {
		{ "Comment", "/** Holds the x-axis vector of the box. Must be a unit vector. */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Holds the x-axis vector of the box. Must be a unit vector." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_AxisX = { "AxisX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOrientedBoxFloat, AxisX), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_AxisX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_AxisX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_AxisY_MetaData[] = {
		{ "Comment", "/** Holds the y-axis vector of the box. Must be a unit vector. */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Holds the y-axis vector of the box. Must be a unit vector." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_AxisY = { "AxisY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOrientedBoxFloat, AxisY), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_AxisY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_AxisY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_AxisZ_MetaData[] = {
		{ "Comment", "/** Holds the z-axis vector of the box. Must be a unit vector. */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Holds the z-axis vector of the box. Must be a unit vector." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_AxisZ = { "AxisZ", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOrientedBoxFloat, AxisZ), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_AxisZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_AxisZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_ExtentX_MetaData[] = {
		{ "Comment", "/** Holds the extent of the box along its x-axis. */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Holds the extent of the box along its x-axis." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_ExtentX = { "ExtentX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOrientedBoxFloat, ExtentX), METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_ExtentX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_ExtentX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_ExtentY_MetaData[] = {
		{ "Comment", "/** Holds the extent of the box along its y-axis. */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Holds the extent of the box along its y-axis." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_ExtentY = { "ExtentY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOrientedBoxFloat, ExtentY), METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_ExtentY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_ExtentY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_ExtentZ_MetaData[] = {
		{ "Comment", "/** Holds the extent of the box along its z-axis. */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Holds the extent of the box along its z-axis." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_ExtentZ = { "ExtentZ", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOrientedBoxFloat, ExtentZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_ExtentZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_ExtentZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_AxisX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_AxisY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_AxisZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_ExtentX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_ExtentY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewProp_ExtentZ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"OrientedBoxFloat",
		sizeof(FOrientedBoxFloat),
		alignof(FOrientedBoxFloat),
		Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOrientedBoxFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_OrientedBoxFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OrientedBoxFloat.InnerSingleton, Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OrientedBoxFloat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructSerializerNonLWCTypesTest;
class UScriptStruct* FStructSerializerNonLWCTypesTest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructSerializerNonLWCTypesTest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructSerializerNonLWCTypesTest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest, (UObject*)Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerNonLWCTypesTest"));
	}
	return Z_Registration_Info_UScriptStruct_StructSerializerNonLWCTypesTest.OuterSingleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerNonLWCTypesTest>()
{
	return FStructSerializerNonLWCTypesTest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector2D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector4_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Matrix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Matrix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Plane_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Plane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quat_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box2D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxSphereBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxSphereBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrientedBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OrientedBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Double_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Double;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StrToVec_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StrToVec_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrToVec_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StrToVec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_VectorSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Test structure for Non-LWC version of built in types.\n * @see NoExportTypes.h\n */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for Non-LWC version of built in types.\n@see NoExportTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerNonLWCTypesTest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Vector_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNonLWCTypesTest, Vector), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Vector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Vector2D_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Vector2D = { "Vector2D", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNonLWCTypesTest, Vector2D), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Vector2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Vector2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Vector4_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Vector4 = { "Vector4", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNonLWCTypesTest, Vector4), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Vector4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Vector4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Matrix_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Matrix = { "Matrix", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNonLWCTypesTest, Matrix), Z_Construct_UScriptStruct_FMatrix44f, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Matrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Matrix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Plane_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Plane = { "Plane", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNonLWCTypesTest, Plane), Z_Construct_UScriptStruct_FPlane4f, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Plane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Plane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Quat_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Quat = { "Quat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNonLWCTypesTest, Quat), Z_Construct_UScriptStruct_FQuat4f, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Quat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Quat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Rotator_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNonLWCTypesTest, Rotator), Z_Construct_UScriptStruct_FRotator3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Rotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Rotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNonLWCTypesTest, Transform), Z_Construct_UScriptStruct_FTransform3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Box_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNonLWCTypesTest, Box), Z_Construct_UScriptStruct_FBox3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Box_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Box2D_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Box2D = { "Box2D", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNonLWCTypesTest, Box2D), Z_Construct_UScriptStruct_FBox2f, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Box2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Box2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_BoxSphereBounds_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_BoxSphereBounds = { "BoxSphereBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNonLWCTypesTest, BoxSphereBounds), Z_Construct_UScriptStruct_FBoxSphereBounds3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_BoxSphereBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_BoxSphereBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_OrientedBox_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_OrientedBox = { "OrientedBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNonLWCTypesTest, OrientedBox), Z_Construct_UScriptStruct_FOrientedBoxFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_OrientedBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_OrientedBox_MetaData)) }; // 1958130780
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Float_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNonLWCTypesTest, Float), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Float_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Double_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Double = { "Double", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNonLWCTypesTest, Double), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Double_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Double_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_VectorArray_Inner = { "VectorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_VectorArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_VectorArray = { "VectorArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNonLWCTypesTest, VectorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_VectorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_VectorArray_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_StrToVec_ValueProp = { "StrToVec", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_StrToVec_Key_KeyProp = { "StrToVec_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_StrToVec_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_StrToVec = { "StrToVec", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNonLWCTypesTest, StrToVec), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_StrToVec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_StrToVec_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_VectorSet_ElementProp = { "VectorSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_VectorSet_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FVector3f>::Value, "The structure 'FVector3f' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_VectorSet = { "VectorSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerNonLWCTypesTest, VectorSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_VectorSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_VectorSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Vector2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Vector4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Matrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Plane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Quat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Rotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Box2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_BoxSphereBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_OrientedBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_Double,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_VectorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_VectorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_StrToVec_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_StrToVec_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_StrToVec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_VectorSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewProp_VectorSet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerNonLWCTypesTest",
		sizeof(FStructSerializerNonLWCTypesTest),
		alignof(FStructSerializerNonLWCTypesTest),
		Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest()
	{
		if (!Z_Registration_Info_UScriptStruct_StructSerializerNonLWCTypesTest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructSerializerNonLWCTypesTest.InnerSingleton, Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StructSerializerNonLWCTypesTest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructSerializerByteArray;
class UScriptStruct* FStructSerializerByteArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructSerializerByteArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructSerializerByteArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerByteArray, (UObject*)Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerByteArray"));
	}
	return Z_Registration_Info_UScriptStruct_StructSerializerByteArray.OuterSingleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerByteArray>()
{
	return FStructSerializerByteArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dummy1_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Dummy1;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ByteArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ByteArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dummy2_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Dummy2;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Int8Array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int8Array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Int8Array;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dummy3_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Dummy3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Test structure for byte array properties.\n */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for byte array properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerByteArray>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy1_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy1 = { "Dummy1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerByteArray, Dummy1), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy1_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_ByteArray_Inner = { "ByteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_ByteArray_MetaData[] = {
		{ "Comment", "// To test 'skip array'.\n" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "To test 'skip array'." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_ByteArray = { "ByteArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerByteArray, ByteArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_ByteArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_ByteArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy2_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy2 = { "Dummy2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerByteArray, Dummy2), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy2_MetaData)) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Int8Array_Inner = { "Int8Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Int8Array_MetaData[] = {
		{ "Comment", "// To test 'skip array'.\n" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "To test 'skip array'." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Int8Array = { "Int8Array", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerByteArray, Int8Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Int8Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Int8Array_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy3_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy3 = { "Dummy3", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerByteArray, Dummy3), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy3_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_ByteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_ByteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Int8Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Int8Array,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewProp_Dummy3,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerByteArray",
		sizeof(FStructSerializerByteArray),
		alignof(FStructSerializerByteArray),
		Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerByteArray()
	{
		if (!Z_Registration_Info_UScriptStruct_StructSerializerByteArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructSerializerByteArray.InnerSingleton, Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StructSerializerByteArray.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructSerializerArrayTestStruct;
class UScriptStruct* FStructSerializerArrayTestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructSerializerArrayTestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructSerializerArrayTestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct, (UObject*)Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerArrayTestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_StructSerializerArrayTestStruct.OuterSingleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerArrayTestStruct>()
{
	return FStructSerializerArrayTestStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32Array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32Array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Int32Array;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ByteArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ByteArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticSingleElement_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StaticSingleElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticInt32Array_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StaticInt32Array;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticFloatArray_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticFloatArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StructArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Test structure for array properties.\n */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for array properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerArrayTestStruct>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array_Inner = { "Int32Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array = { "Int32Array", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerArrayTestStruct, Int32Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_ByteArray_Inner = { "ByteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_ByteArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_ByteArray = { "ByteArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerArrayTestStruct, ByteArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_ByteArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_ByteArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticSingleElement_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticSingleElement = { "StaticSingleElement", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(StaticSingleElement, FStructSerializerArrayTestStruct), nullptr, nullptr, STRUCT_OFFSET(FStructSerializerArrayTestStruct, StaticSingleElement), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticSingleElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticSingleElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticInt32Array_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticInt32Array = { "StaticInt32Array", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(StaticInt32Array, FStructSerializerArrayTestStruct), nullptr, nullptr, STRUCT_OFFSET(FStructSerializerArrayTestStruct, StaticInt32Array), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticInt32Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticInt32Array_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticFloatArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticFloatArray = { "StaticFloatArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(StaticFloatArray, FStructSerializerArrayTestStruct), nullptr, nullptr, STRUCT_OFFSET(FStructSerializerArrayTestStruct, StaticFloatArray), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticFloatArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticFloatArray_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray_Inner = { "VectorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray = { "VectorArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerArrayTestStruct, VectorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StructArray_Inner = { "StructArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct, METADATA_PARAMS(nullptr, 0) }; // 3951633965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StructArray_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StructArray = { "StructArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerArrayTestStruct, StructArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StructArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StructArray_MetaData)) }; // 3951633965
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_ByteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_ByteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticSingleElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticInt32Array,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticFloatArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StructArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StructArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerArrayTestStruct",
		sizeof(FStructSerializerArrayTestStruct),
		alignof(FStructSerializerArrayTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_StructSerializerArrayTestStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructSerializerArrayTestStruct.InnerSingleton, Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StructSerializerArrayTestStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructSerializerMapTestStruct;
class UScriptStruct* FStructSerializerMapTestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructSerializerMapTestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructSerializerMapTestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct, (UObject*)Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerMapTestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_StructSerializerMapTestStruct.OuterSingleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerMapTestStruct>()
{
	return FStructSerializerMapTestStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_IntToStr_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntToStr_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntToStr_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_IntToStr;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StrToStr_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StrToStr_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrToStr_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StrToStr;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StrToVec_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StrToVec_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrToVec_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StrToVec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StrToStruct_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StrToStruct_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrToStruct_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StrToStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Test structure for map properties.\n */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for map properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerMapTestStruct>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_ValueProp = { "IntToStr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_Key_KeyProp = { "IntToStr_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr = { "IntToStr", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerMapTestStruct, IntToStr), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_ValueProp = { "StrToStr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_Key_KeyProp = { "StrToStr_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr = { "StrToStr", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerMapTestStruct, StrToStr), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_ValueProp = { "StrToVec", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_Key_KeyProp = { "StrToVec_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec = { "StrToVec", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerMapTestStruct, StrToVec), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStruct_ValueProp = { "StrToStruct", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct, METADATA_PARAMS(nullptr, 0) }; // 3951633965
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStruct_Key_KeyProp = { "StrToStruct_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStruct_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStruct = { "StrToStruct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerMapTestStruct, StrToStruct), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStruct_MetaData)) }; // 3951633965
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStruct_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStruct_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStruct,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerMapTestStruct",
		sizeof(FStructSerializerMapTestStruct),
		alignof(FStructSerializerMapTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerMapTestStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_StructSerializerMapTestStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructSerializerMapTestStruct.InnerSingleton, Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StructSerializerMapTestStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructSerializerSetTestStruct;
class UScriptStruct* FStructSerializerSetTestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructSerializerSetTestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructSerializerSetTestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct, (UObject*)Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerSetTestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_StructSerializerSetTestStruct.OuterSingleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerSetTestStruct>()
{
	return FStructSerializerSetTestStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_StrSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_StrSet;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_IntSet;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_NameSet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_StructSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Test structure for set properties.\n */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for set properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerSetTestStruct>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StrSet_ElementProp = { "StrSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StrSet_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StrSet = { "StrSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerSetTestStruct, StrSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StrSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StrSet_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_IntSet_ElementProp = { "IntSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_IntSet_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_IntSet = { "IntSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerSetTestStruct, IntSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_IntSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_IntSet_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_NameSet_ElementProp = { "NameSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_NameSet_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_NameSet = { "NameSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerSetTestStruct, NameSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_NameSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_NameSet_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StructSet_ElementProp = { "StructSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct, METADATA_PARAMS(nullptr, 0) }; // 3951633965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StructSet_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FStructSerializerBuiltinTestStruct>::Value, "The structure 'FStructSerializerBuiltinTestStruct' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StructSet = { "StructSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerSetTestStruct, StructSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StructSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StructSet_MetaData)) }; // 3951633965
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StrSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StrSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_IntSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_IntSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_NameSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_NameSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StructSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewProp_StructSet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerSetTestStruct",
		sizeof(FStructSerializerSetTestStruct),
		alignof(FStructSerializerSetTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerSetTestStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_StructSerializerSetTestStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructSerializerSetTestStruct.InnerSingleton, Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StructSerializerSetTestStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructSerializerTestStruct;
class UScriptStruct* FStructSerializerTestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructSerializerTestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructSerializerTestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerTestStruct, (UObject*)Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerTestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_StructSerializerTestStruct.OuterSingleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerTestStruct>()
{
	return FStructSerializerTestStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Numerics_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Numerics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Booleans_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Booleans;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Objects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Builtins_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Builtins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arrays_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Arrays;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maps_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Maps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sets_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LWCTypes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LWCTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Test structure for all supported types.\n */" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for all supported types." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerTestStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Numerics_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Numerics = { "Numerics", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerTestStruct, Numerics), Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Numerics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Numerics_MetaData)) }; // 3733139810
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Booleans_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Booleans = { "Booleans", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerTestStruct, Booleans), Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Booleans_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Booleans_MetaData)) }; // 4288888264
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Objects_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerTestStruct, Objects), Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Objects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Objects_MetaData)) }; // 1327286969
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Builtins_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Builtins = { "Builtins", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerTestStruct, Builtins), Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Builtins_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Builtins_MetaData)) }; // 3951633965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Arrays_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Arrays = { "Arrays", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerTestStruct, Arrays), Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Arrays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Arrays_MetaData)) }; // 3652936989
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Maps_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Maps = { "Maps", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerTestStruct, Maps), Z_Construct_UScriptStruct_FStructSerializerMapTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Maps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Maps_MetaData)) }; // 2308787162
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Sets_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Sets = { "Sets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerTestStruct, Sets), Z_Construct_UScriptStruct_FStructSerializerSetTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Sets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Sets_MetaData)) }; // 2245210002
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_LWCTypes_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_LWCTypes = { "LWCTypes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructSerializerTestStruct, LWCTypes), Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_LWCTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_LWCTypes_MetaData)) }; // 2265937413
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Numerics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Booleans,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Objects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Builtins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Arrays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Maps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Sets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_LWCTypes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerTestStruct",
		sizeof(FStructSerializerTestStruct),
		alignof(FStructSerializerTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerTestStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_StructSerializerTestStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructSerializerTestStruct.InnerSingleton, Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StructSerializerTestStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_Statics::ScriptStructInfo[] = {
		{ FStructSerializerNumericTestStruct::StaticStruct, Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewStructOps, TEXT("StructSerializerNumericTestStruct"), &Z_Registration_Info_UScriptStruct_StructSerializerNumericTestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructSerializerNumericTestStruct), 3733139810U) },
		{ FStructSerializerBooleanTestStruct::StaticStruct, Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewStructOps, TEXT("StructSerializerBooleanTestStruct"), &Z_Registration_Info_UScriptStruct_StructSerializerBooleanTestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructSerializerBooleanTestStruct), 4288888264U) },
		{ FStructSerializerObjectTestStruct::StaticStruct, Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewStructOps, TEXT("StructSerializerObjectTestStruct"), &Z_Registration_Info_UScriptStruct_StructSerializerObjectTestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructSerializerObjectTestStruct), 1327286969U) },
		{ FStructSerializerBuiltinTestStruct::StaticStruct, Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewStructOps, TEXT("StructSerializerBuiltinTestStruct"), &Z_Registration_Info_UScriptStruct_StructSerializerBuiltinTestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructSerializerBuiltinTestStruct), 3951633965U) },
		{ FStructSerializerLWCTypesTest::StaticStruct, Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewStructOps, TEXT("StructSerializerLWCTypesTest"), &Z_Registration_Info_UScriptStruct_StructSerializerLWCTypesTest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructSerializerLWCTypesTest), 2265937413U) },
		{ FOrientedBoxFloat::StaticStruct, Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewStructOps, TEXT("OrientedBoxFloat"), &Z_Registration_Info_UScriptStruct_OrientedBoxFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOrientedBoxFloat), 1958130780U) },
		{ FStructSerializerNonLWCTypesTest::StaticStruct, Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewStructOps, TEXT("StructSerializerNonLWCTypesTest"), &Z_Registration_Info_UScriptStruct_StructSerializerNonLWCTypesTest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructSerializerNonLWCTypesTest), 33799403U) },
		{ FStructSerializerByteArray::StaticStruct, Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewStructOps, TEXT("StructSerializerByteArray"), &Z_Registration_Info_UScriptStruct_StructSerializerByteArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructSerializerByteArray), 2934981318U) },
		{ FStructSerializerArrayTestStruct::StaticStruct, Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewStructOps, TEXT("StructSerializerArrayTestStruct"), &Z_Registration_Info_UScriptStruct_StructSerializerArrayTestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructSerializerArrayTestStruct), 3652936989U) },
		{ FStructSerializerMapTestStruct::StaticStruct, Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewStructOps, TEXT("StructSerializerMapTestStruct"), &Z_Registration_Info_UScriptStruct_StructSerializerMapTestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructSerializerMapTestStruct), 2308787162U) },
		{ FStructSerializerSetTestStruct::StaticStruct, Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewStructOps, TEXT("StructSerializerSetTestStruct"), &Z_Registration_Info_UScriptStruct_StructSerializerSetTestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructSerializerSetTestStruct), 2245210002U) },
		{ FStructSerializerTestStruct::StaticStruct, Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewStructOps, TEXT("StructSerializerTestStruct"), &Z_Registration_Info_UScriptStruct_StructSerializerTestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructSerializerTestStruct), 3734273586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_2380394351(TEXT("/Script/Serialization"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
