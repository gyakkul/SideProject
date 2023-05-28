// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tests/PropertyPathHelpersTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyPathHelpersTest() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PROPERTYPATH_API UClass* Z_Construct_UClass_UPropertyPathTestObject();
	PROPERTYPATH_API UClass* Z_Construct_UClass_UPropertyPathTestObject_NoRegister();
	PROPERTYPATH_API UEnum* Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum();
	PROPERTYPATH_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyPathTestBed();
	PROPERTYPATH_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct();
	PROPERTYPATH_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyPathTestStruct();
	UPackage* Z_Construct_UPackage__Script_PropertyPath();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPropertyPathTestEnum;
	static UEnum* EPropertyPathTestEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPropertyPathTestEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPropertyPathTestEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, (UObject*)Z_Construct_UPackage__Script_PropertyPath(), TEXT("EPropertyPathTestEnum"));
		}
		return Z_Registration_Info_UEnum_EPropertyPathTestEnum.OuterSingleton;
	}
	template<> PROPERTYPATH_API UEnum* StaticEnum<EPropertyPathTestEnum>()
	{
		return EPropertyPathTestEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum_Statics::Enumerators[] = {
		{ "One", (int64)One },
		{ "Two", (int64)Two },
		{ "Three", (int64)Three },
		{ "Four", (int64)Four },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum_Statics::Enum_MetaDataParams[] = {
		{ "Four.Name", "Four" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
		{ "One.Name", "One" },
		{ "Three.Name", "Three" },
		{ "Two.Name", "Two" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PropertyPath,
		nullptr,
		"EPropertyPathTestEnum",
		"EPropertyPathTestEnum",
		Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum()
	{
		if (!Z_Registration_Info_UEnum_EPropertyPathTestEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPropertyPathTestEnum.InnerSingleton, Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPropertyPathTestEnum.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyPathTestInnerStruct;
class UScriptStruct* FPropertyPathTestInnerStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyPathTestInnerStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyPathTestInnerStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct, (UObject*)Z_Construct_UPackage__Script_PropertyPath(), TEXT("PropertyPathTestInnerStruct"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyPathTestInnerStruct.OuterSingleton;
}
template<> PROPERTYPATH_API UScriptStruct* StaticStruct<FPropertyPathTestInnerStruct>()
{
	return FPropertyPathTestInnerStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bool_MetaData[];
#endif
		static void NewProp_Bool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Bool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumOne_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnumOne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumTwo_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnumTwo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumThree_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnumThree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumFour_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnumFour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Integer_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Integer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyPathTestInnerStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Float_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyPathTestInnerStruct, Float), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Float_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Bool_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Bool_SetBit(void* Obj)
	{
		((FPropertyPathTestInnerStruct*)Obj)->Bool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Bool = { "Bool", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPropertyPathTestInnerStruct), &Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Bool_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Bool_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Bool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumOne_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumOne = { "EnumOne", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyPathTestInnerStruct, EnumOne), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumOne_MetaData)) }; // 2579110413
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumTwo_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumTwo = { "EnumTwo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyPathTestInnerStruct, EnumTwo), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumTwo_MetaData)) }; // 2579110413
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumThree_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumThree = { "EnumThree", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyPathTestInnerStruct, EnumThree), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumThree_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumThree_MetaData)) }; // 2579110413
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumFour_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumFour = { "EnumFour", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyPathTestInnerStruct, EnumFour), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumFour_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumFour_MetaData)) }; // 2579110413
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Integer_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Integer = { "Integer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyPathTestInnerStruct, Integer), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Integer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Integer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_String_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyPathTestInnerStruct, String), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_String_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Bool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumTwo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumThree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumFour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Integer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_String,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PropertyPath,
		nullptr,
		&NewStructOps,
		"PropertyPathTestInnerStruct",
		sizeof(FPropertyPathTestInnerStruct),
		alignof(FPropertyPathTestInnerStruct),
		Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_PropertyPathTestInnerStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyPathTestInnerStruct.InnerSingleton, Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropertyPathTestInnerStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyPathTestStruct;
class UScriptStruct* FPropertyPathTestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyPathTestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyPathTestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathTestStruct, (UObject*)Z_Construct_UPackage__Script_PropertyPath(), TEXT("PropertyPathTestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyPathTestStruct.OuterSingleton;
}
template<> PROPERTYPATH_API UScriptStruct* StaticStruct<FPropertyPathTestStruct>()
{
	return FPropertyPathTestStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bool_MetaData[];
#endif
		static void NewProp_Bool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Bool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Integer_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Integer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumOne_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnumOne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumTwo_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnumTwo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumThree_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnumThree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumFour_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnumFour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InnerStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InnerObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyPathTestStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Bool_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Bool_SetBit(void* Obj)
	{
		((FPropertyPathTestStruct*)Obj)->Bool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Bool = { "Bool", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPropertyPathTestStruct), &Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Bool_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Bool_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Bool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Integer_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Integer = { "Integer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyPathTestStruct, Integer), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Integer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Integer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumOne_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumOne = { "EnumOne", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyPathTestStruct, EnumOne), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumOne_MetaData)) }; // 2579110413
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumTwo_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumTwo = { "EnumTwo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyPathTestStruct, EnumTwo), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumTwo_MetaData)) }; // 2579110413
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumThree_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumThree = { "EnumThree", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyPathTestStruct, EnumThree), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumThree_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumThree_MetaData)) }; // 2579110413
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumFour_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumFour = { "EnumFour", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyPathTestStruct, EnumFour), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumFour_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumFour_MetaData)) }; // 2579110413
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_String_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyPathTestStruct, String), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_String_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Float_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyPathTestStruct, Float), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Float_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_InnerStruct_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_InnerStruct = { "InnerStruct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyPathTestStruct, InnerStruct), Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_InnerStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_InnerStruct_MetaData)) }; // 3176009664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_InnerObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_InnerObject = { "InnerObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyPathTestStruct, InnerObject), Z_Construct_UClass_UPropertyPathTestObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_InnerObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_InnerObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Bool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Integer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumTwo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumThree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumFour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_InnerStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_InnerObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PropertyPath,
		nullptr,
		&NewStructOps,
		"PropertyPathTestStruct",
		sizeof(FPropertyPathTestStruct),
		alignof(FPropertyPathTestStruct),
		Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyPathTestStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_PropertyPathTestStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyPathTestStruct.InnerSingleton, Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropertyPathTestStruct.InnerSingleton;
	}
	DEFINE_FUNCTION(UPropertyPathTestObject::execGetStructConstRef)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPropertyPathTestStruct*)Z_Param__Result=P_THIS->GetStructConstRef();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPropertyPathTestObject::execSetStructConstRef)
	{
		P_GET_STRUCT(FPropertyPathTestStruct,Z_Param_InStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStructConstRef(Z_Param_InStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPropertyPathTestObject::execGetStructRef)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPropertyPathTestStruct*)Z_Param__Result=P_THIS->GetStructRef();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPropertyPathTestObject::execSetStructRef)
	{
		P_GET_STRUCT(FPropertyPathTestStruct,Z_Param_InStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStructRef(Z_Param_InStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPropertyPathTestObject::execGetStruct)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPropertyPathTestStruct*)Z_Param__Result=P_THIS->GetStruct();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPropertyPathTestObject::execSetStruct)
	{
		P_GET_STRUCT(FPropertyPathTestStruct,Z_Param_InStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStruct(Z_Param_InStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPropertyPathTestObject::execGetFloat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFloat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPropertyPathTestObject::execSetFloat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFloat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloat(Z_Param_InFloat);
		P_NATIVE_END;
	}
	void UPropertyPathTestObject::GetFloat_WrapperImpl(const void* Object, void* OutValue)
	{
		const UPropertyPathTestObject* Obj = (const UPropertyPathTestObject*)Object;
		float& Result = *(float*)OutValue;
		Result = (float)Obj->GetFloat();
	}
	void UPropertyPathTestObject::SetFloat_WrapperImpl(void* Object, const void* InValue)
	{
		UPropertyPathTestObject* Obj = (UPropertyPathTestObject*)Object;
		float& Value = *(float*)InValue;
		Obj->SetFloat(Value);
	}
	void UPropertyPathTestObject::GetStruct_WrapperImpl(const void* Object, void* OutValue)
	{
		const UPropertyPathTestObject* Obj = (const UPropertyPathTestObject*)Object;
		FPropertyPathTestStruct& Result = *(FPropertyPathTestStruct*)OutValue;
		Result = (FPropertyPathTestStruct)Obj->GetStruct();
	}
	void UPropertyPathTestObject::SetStruct_WrapperImpl(void* Object, const void* InValue)
	{
		UPropertyPathTestObject* Obj = (UPropertyPathTestObject*)Object;
		FPropertyPathTestStruct& Value = *(FPropertyPathTestStruct*)InValue;
		Obj->SetStruct(Value);
	}
	void UPropertyPathTestObject::GetStructRef_WrapperImpl(const void* Object, void* OutValue)
	{
		const UPropertyPathTestObject* Obj = (const UPropertyPathTestObject*)Object;
		FPropertyPathTestStruct& Result = *(FPropertyPathTestStruct*)OutValue;
		Result = (FPropertyPathTestStruct)Obj->GetStructRef();
	}
	void UPropertyPathTestObject::SetStructRef_WrapperImpl(void* Object, const void* InValue)
	{
		UPropertyPathTestObject* Obj = (UPropertyPathTestObject*)Object;
		FPropertyPathTestStruct& Value = *(FPropertyPathTestStruct*)InValue;
		Obj->SetStructRef(Value);
	}
	void UPropertyPathTestObject::GetStructConstRef_WrapperImpl(const void* Object, void* OutValue)
	{
		const UPropertyPathTestObject* Obj = (const UPropertyPathTestObject*)Object;
		FPropertyPathTestStruct& Result = *(FPropertyPathTestStruct*)OutValue;
		Result = (FPropertyPathTestStruct)Obj->GetStructConstRef();
	}
	void UPropertyPathTestObject::SetStructConstRef_WrapperImpl(void* Object, const void* InValue)
	{
		UPropertyPathTestObject* Obj = (UPropertyPathTestObject*)Object;
		FPropertyPathTestStruct& Value = *(FPropertyPathTestStruct*)InValue;
		Obj->SetStructConstRef(Value);
	}
	void UPropertyPathTestObject::StaticRegisterNativesUPropertyPathTestObject()
	{
		UClass* Class = UPropertyPathTestObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFloat", &UPropertyPathTestObject::execGetFloat },
			{ "GetStruct", &UPropertyPathTestObject::execGetStruct },
			{ "GetStructConstRef", &UPropertyPathTestObject::execGetStructConstRef },
			{ "GetStructRef", &UPropertyPathTestObject::execGetStructRef },
			{ "SetFloat", &UPropertyPathTestObject::execSetFloat },
			{ "SetStruct", &UPropertyPathTestObject::execSetStruct },
			{ "SetStructConstRef", &UPropertyPathTestObject::execSetStructConstRef },
			{ "SetStructRef", &UPropertyPathTestObject::execSetStructRef },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics
	{
		struct PropertyPathTestObject_eventGetFloat_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PropertyPathTestObject_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyPathTestObject, nullptr, "GetFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics::PropertyPathTestObject_eventGetFloat_Parms), Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPropertyPathTestObject_GetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics
	{
		struct PropertyPathTestObject_eventGetStruct_Parms
		{
			FPropertyPathTestStruct ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PropertyPathTestObject_eventGetStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FPropertyPathTestStruct, METADATA_PARAMS(nullptr, 0) }; // 271822444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyPathTestObject, nullptr, "GetStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics::PropertyPathTestObject_eventGetStruct_Parms), Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPropertyPathTestObject_GetStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics
	{
		struct PropertyPathTestObject_eventGetStructConstRef_Parms
		{
			FPropertyPathTestStruct ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PropertyPathTestObject_eventGetStructConstRef_Parms, ReturnValue), Z_Construct_UScriptStruct_FPropertyPathTestStruct, METADATA_PARAMS(Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::NewProp_ReturnValue_MetaData)) }; // 271822444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyPathTestObject, nullptr, "GetStructConstRef", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::PropertyPathTestObject_eventGetStructConstRef_Parms), Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics
	{
		struct PropertyPathTestObject_eventGetStructRef_Parms
		{
			FPropertyPathTestStruct ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PropertyPathTestObject_eventGetStructRef_Parms, ReturnValue), Z_Construct_UScriptStruct_FPropertyPathTestStruct, METADATA_PARAMS(nullptr, 0) }; // 271822444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyPathTestObject, nullptr, "GetStructRef", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics::PropertyPathTestObject_eventGetStructRef_Parms), Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics
	{
		struct PropertyPathTestObject_eventSetFloat_Parms
		{
			float InFloat;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFloat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics::NewProp_InFloat = { "InFloat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PropertyPathTestObject_eventSetFloat_Parms, InFloat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics::NewProp_InFloat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyPathTestObject, nullptr, "SetFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics::PropertyPathTestObject_eventSetFloat_Parms), Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPropertyPathTestObject_SetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics
	{
		struct PropertyPathTestObject_eventSetStruct_Parms
		{
			FPropertyPathTestStruct InStruct;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PropertyPathTestObject_eventSetStruct_Parms, InStruct), Z_Construct_UScriptStruct_FPropertyPathTestStruct, METADATA_PARAMS(nullptr, 0) }; // 271822444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics::NewProp_InStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyPathTestObject, nullptr, "SetStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics::PropertyPathTestObject_eventSetStruct_Parms), Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPropertyPathTestObject_SetStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics
	{
		struct PropertyPathTestObject_eventSetStructConstRef_Parms
		{
			FPropertyPathTestStruct InStruct;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PropertyPathTestObject_eventSetStructConstRef_Parms, InStruct), Z_Construct_UScriptStruct_FPropertyPathTestStruct, METADATA_PARAMS(nullptr, 0) }; // 271822444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics::NewProp_InStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyPathTestObject, nullptr, "SetStructConstRef", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics::PropertyPathTestObject_eventSetStructConstRef_Parms), Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics
	{
		struct PropertyPathTestObject_eventSetStructRef_Parms
		{
			FPropertyPathTestStruct InStruct;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PropertyPathTestObject_eventSetStructRef_Parms, InStruct), Z_Construct_UScriptStruct_FPropertyPathTestStruct, METADATA_PARAMS(nullptr, 0) }; // 271822444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics::NewProp_InStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyPathTestObject, nullptr, "SetStructRef", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics::PropertyPathTestObject_eventSetStructRef_Parms), Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertyPathTestObject);
	UClass* Z_Construct_UClass_UPropertyPathTestObject_NoRegister()
	{
		return UPropertyPathTestObject::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyPathTestObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bool_MetaData[];
#endif
		static void NewProp_Bool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Bool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumOne_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnumOne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumTwo_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnumTwo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumThree_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnumThree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumFour_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnumFour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Integer_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Integer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Struct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructConstRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructConstRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InnerObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyPathTestObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PropertyPath,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPropertyPathTestObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPropertyPathTestObject_GetFloat, "GetFloat" }, // 4239490210
		{ &Z_Construct_UFunction_UPropertyPathTestObject_GetStruct, "GetStruct" }, // 1169464836
		{ &Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef, "GetStructConstRef" }, // 2204863064
		{ &Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef, "GetStructRef" }, // 611776591
		{ &Z_Construct_UFunction_UPropertyPathTestObject_SetFloat, "SetFloat" }, // 11975572
		{ &Z_Construct_UFunction_UPropertyPathTestObject_SetStruct, "SetStruct" }, // 2448752219
		{ &Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef, "SetStructConstRef" }, // 3489962049
		{ &Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef, "SetStructRef" }, // 3744815949
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyPathTestObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/PropertyPathHelpersTest.h" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Bool_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	void Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Bool_SetBit(void* Obj)
	{
		((UPropertyPathTestObject*)Obj)->Bool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Bool = { "Bool", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPropertyPathTestObject), &Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Bool_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Bool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Bool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumOne_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumOne = { "EnumOne", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyPathTestObject, EnumOne), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumOne_MetaData)) }; // 2579110413
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumTwo_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumTwo = { "EnumTwo", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyPathTestObject, EnumTwo), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumTwo_MetaData)) }; // 2579110413
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumThree_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumThree = { "EnumThree", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyPathTestObject, EnumThree), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumThree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumThree_MetaData)) }; // 2579110413
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumFour_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumFour = { "EnumFour", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyPathTestObject, EnumFour), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumFour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumFour_MetaData)) }; // 2579110413
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Integer_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Integer = { "Integer", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyPathTestObject, Integer), METADATA_PARAMS(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Integer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Integer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_String_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyPathTestObject, String), METADATA_PARAMS(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_String_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Float_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UPropertyPathTestObject::SetFloat_WrapperImpl, &UPropertyPathTestObject::GetFloat_WrapperImpl, STRUCT_OFFSET(UPropertyPathTestObject, Float), METADATA_PARAMS(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Float_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Struct_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UPropertyPathTestObject::SetStruct_WrapperImpl, &UPropertyPathTestObject::GetStruct_WrapperImpl, STRUCT_OFFSET(UPropertyPathTestObject, Struct), Z_Construct_UScriptStruct_FPropertyPathTestStruct, METADATA_PARAMS(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Struct_MetaData)) }; // 271822444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_StructRef_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_StructRef = { "StructRef", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UPropertyPathTestObject::SetStructRef_WrapperImpl, &UPropertyPathTestObject::GetStructRef_WrapperImpl, STRUCT_OFFSET(UPropertyPathTestObject, StructRef), Z_Construct_UScriptStruct_FPropertyPathTestStruct, METADATA_PARAMS(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_StructRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_StructRef_MetaData)) }; // 271822444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_StructConstRef_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_StructConstRef = { "StructConstRef", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UPropertyPathTestObject::SetStructConstRef_WrapperImpl, &UPropertyPathTestObject::GetStructConstRef_WrapperImpl, STRUCT_OFFSET(UPropertyPathTestObject, StructConstRef), Z_Construct_UScriptStruct_FPropertyPathTestStruct, METADATA_PARAMS(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_StructConstRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_StructConstRef_MetaData)) }; // 271822444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_InnerObject_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_InnerObject = { "InnerObject", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyPathTestObject, InnerObject), Z_Construct_UClass_UPropertyPathTestObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_InnerObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_InnerObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPropertyPathTestObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Bool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumTwo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumThree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumFour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Integer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_StructRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_StructConstRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_InnerObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyPathTestObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyPathTestObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertyPathTestObject_Statics::ClassParams = {
		&UPropertyPathTestObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPropertyPathTestObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyPathTestObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertyPathTestObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyPathTestObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyPathTestObject()
	{
		if (!Z_Registration_Info_UClass_UPropertyPathTestObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertyPathTestObject.OuterSingleton, Z_Construct_UClass_UPropertyPathTestObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPropertyPathTestObject.OuterSingleton;
	}
	template<> PROPERTYPATH_API UClass* StaticClass<UPropertyPathTestObject>()
	{
		return UPropertyPathTestObject::StaticClass();
	}
	UPropertyPathTestObject::UPropertyPathTestObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyPathTestObject);
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyPathTestBed;
class UScriptStruct* FPropertyPathTestBed::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyPathTestBed.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyPathTestBed.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathTestBed, (UObject*)Z_Construct_UPackage__Script_PropertyPath(), TEXT("PropertyPathTestBed"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyPathTestBed.OuterSingleton;
}
template<> PROPERTYPATH_API UScriptStruct* StaticStruct<FPropertyPathTestBed>()
{
	return FPropertyPathTestBed::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ModifiedObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyPathTestBed>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_Object_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyPathTestBed, Object), Z_Construct_UClass_UPropertyPathTestObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_ModifiedObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_ModifiedObject = { "ModifiedObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyPathTestBed, ModifiedObject), Z_Construct_UClass_UPropertyPathTestObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_ModifiedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_ModifiedObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_ModifiedStruct_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_ModifiedStruct = { "ModifiedStruct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyPathTestBed, ModifiedStruct), Z_Construct_UScriptStruct_FPropertyPathTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_ModifiedStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_ModifiedStruct_MetaData)) }; // 271822444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_DefaultStruct_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_DefaultStruct = { "DefaultStruct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyPathTestBed, DefaultStruct), Z_Construct_UScriptStruct_FPropertyPathTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_DefaultStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_DefaultStruct_MetaData)) }; // 271822444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_ModifiedObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_ModifiedStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_DefaultStruct,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PropertyPath,
		nullptr,
		&NewStructOps,
		"PropertyPathTestBed",
		sizeof(FPropertyPathTestBed),
		alignof(FPropertyPathTestBed),
		Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyPathTestBed()
	{
		if (!Z_Registration_Info_UScriptStruct_PropertyPathTestBed.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyPathTestBed.InnerSingleton, Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropertyPathTestBed.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_Statics::EnumInfo[] = {
		{ EPropertyPathTestEnum_StaticEnum, TEXT("EPropertyPathTestEnum"), &Z_Registration_Info_UEnum_EPropertyPathTestEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2579110413U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_Statics::ScriptStructInfo[] = {
		{ FPropertyPathTestInnerStruct::StaticStruct, Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewStructOps, TEXT("PropertyPathTestInnerStruct"), &Z_Registration_Info_UScriptStruct_PropertyPathTestInnerStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyPathTestInnerStruct), 3176009664U) },
		{ FPropertyPathTestStruct::StaticStruct, Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewStructOps, TEXT("PropertyPathTestStruct"), &Z_Registration_Info_UScriptStruct_PropertyPathTestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyPathTestStruct), 271822444U) },
		{ FPropertyPathTestBed::StaticStruct, Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewStructOps, TEXT("PropertyPathTestBed"), &Z_Registration_Info_UScriptStruct_PropertyPathTestBed, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyPathTestBed), 3781192665U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPropertyPathTestObject, UPropertyPathTestObject::StaticClass, TEXT("UPropertyPathTestObject"), &Z_Registration_Info_UClass_UPropertyPathTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertyPathTestObject), 50541732U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_4226801433(TEXT("/Script/PropertyPath"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
