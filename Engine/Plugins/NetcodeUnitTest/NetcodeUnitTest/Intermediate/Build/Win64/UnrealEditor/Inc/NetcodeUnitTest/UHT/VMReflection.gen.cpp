// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitTests/VMReflection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVMReflection() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTest();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UVMReflection();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UVMReflection_NoRegister();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UVMTestClassA();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UVMTestClassA_NoRegister();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UVMTestClassB();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UVMTestClassB_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NetcodeUnitTest();
// End Cross Module References
	void UVMReflection::StaticRegisterNativesUVMReflection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVMReflection);
	UClass* Z_Construct_UClass_UVMReflection_NoRegister()
	{
		return UVMReflection::StaticClass();
	}
	struct Z_Construct_UClass_UVMReflection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVMReflection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUnitTest,
		(UObject* (*)())Z_Construct_UPackage__Script_NetcodeUnitTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMReflection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Internal unit test for verifying the functionality of the UScript/BP VM reflection helper\n */" },
		{ "IncludePath", "UnitTests/VMReflection.h" },
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
		{ "ToolTip", "Internal unit test for verifying the functionality of the UScript/BP VM reflection helper" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVMReflection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVMReflection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVMReflection_Statics::ClassParams = {
		&UVMReflection::StaticClass,
		"UnitTestStats",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVMReflection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVMReflection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVMReflection()
	{
		if (!Z_Registration_Info_UClass_UVMReflection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVMReflection.OuterSingleton, Z_Construct_UClass_UVMReflection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVMReflection.OuterSingleton;
	}
	template<> NETCODEUNITTEST_API UClass* StaticClass<UVMReflection>()
	{
		return UVMReflection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVMReflection);
	UVMReflection::~UVMReflection() {}
	void UVMTestClassA::StaticRegisterNativesUVMTestClassA()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVMTestClassA);
	UClass* Z_Construct_UClass_UVMTestClassA_NoRegister()
	{
		return UVMTestClassA::StaticClass();
	}
	struct Z_Construct_UClass_UVMTestClassA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AObjectRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AObjectRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ByteProp_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ByteProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UInt16Prop_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_UInt16Prop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UInt32Prop_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_UInt32Prop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UInt64Prop_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_UInt64Prop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int8Prop_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Int8Prop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int16Prop_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_Int16Prop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32Prop_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32Prop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int64Prop_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Int64Prop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatProp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoubleProp_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DoubleProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBoolPropA_MetaData[];
#endif
		static void NewProp_bBoolPropA_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoolPropA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBoolPropB_MetaData[];
#endif
		static void NewProp_bBoolPropB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoolPropB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBoolPropC_MetaData[];
#endif
		static void NewProp_bBoolPropC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoolPropC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBoolPropD_MetaData[];
#endif
		static void NewProp_bBoolPropD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoolPropD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBoolPropE_MetaData[];
#endif
		static void NewProp_bBoolPropE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoolPropE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameProp_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringProp_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextProp_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TextProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BytePropArray_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BytePropArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPropArray_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectPropArray;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DynBytePropArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynBytePropArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynBytePropArray;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DynBoolPropArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynBoolPropArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynBoolPropArray;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynObjectPropArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynObjectPropArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynObjectPropArray;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DynNamePropArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynNamePropArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynNamePropArray;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DynDoublePropArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynDoublePropArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynDoublePropArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DynFloatPropArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynFloatPropArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynFloatPropArray;
		static const UECodeGen_Private::FInt16PropertyParams NewProp_DynInt16PropArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynInt16PropArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynInt16PropArray;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_DynInt64PropArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynInt64PropArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynInt64PropArray;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_DynInt8PropArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynInt8PropArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynInt8PropArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DynIntPropArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynIntPropArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynIntPropArray;
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_DynUInt16PropArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynUInt16PropArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynUInt16PropArray;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DynUIntPropArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynUIntPropArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynUIntPropArray;
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_DynUInt64PropArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynUInt64PropArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynUInt64PropArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DynStringPropArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynStringPropArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynStringPropArray;
		static const UECodeGen_Private::FTextPropertyParams NewProp_DynTextPropArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynTextPropArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynTextPropArray;
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_DynClassPropArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynClassPropArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynClassPropArray;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynPawnPropArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynPawnPropArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynPawnPropArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructProp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructPropArray_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructPropArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynStructPropArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynStructPropArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynStructPropArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVMTestClassA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NetcodeUnitTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Test classes for testing different types/combinations of property reflection\n */" },
		{ "IncludePath", "UnitTests/VMReflection.h" },
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
		{ "ToolTip", "Test classes for testing different types/combinations of property reflection" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_AObjectRef_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_AObjectRef = { "AObjectRef", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, AObjectRef), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_AObjectRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_AObjectRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_ByteProp_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_ByteProp = { "ByteProp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, ByteProp), nullptr, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_ByteProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_ByteProp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_UInt16Prop_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_UInt16Prop = { "UInt16Prop", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, UInt16Prop), METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_UInt16Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_UInt16Prop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_UInt32Prop_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_UInt32Prop = { "UInt32Prop", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, UInt32Prop), METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_UInt32Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_UInt32Prop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_UInt64Prop_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_UInt64Prop = { "UInt64Prop", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, UInt64Prop), METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_UInt64Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_UInt64Prop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_Int8Prop_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_Int8Prop = { "Int8Prop", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, Int8Prop), METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_Int8Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_Int8Prop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_Int16Prop_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_Int16Prop = { "Int16Prop", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, Int16Prop), METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_Int16Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_Int16Prop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_Int32Prop_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_Int32Prop = { "Int32Prop", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, Int32Prop), METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_Int32Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_Int32Prop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_Int64Prop_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_Int64Prop = { "Int64Prop", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, Int64Prop), METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_Int64Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_Int64Prop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_FloatProp_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_FloatProp = { "FloatProp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, FloatProp), METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_FloatProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_FloatProp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DoubleProp_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DoubleProp = { "DoubleProp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, DoubleProp), METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DoubleProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DoubleProp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropA_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	void Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropA_SetBit(void* Obj)
	{
		((UVMTestClassA*)Obj)->bBoolPropA = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropA = { "bBoolPropA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVMTestClassA), &Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropA_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	void Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropB_SetBit(void* Obj)
	{
		((UVMTestClassA*)Obj)->bBoolPropB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropB = { "bBoolPropB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVMTestClassA), &Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropB_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropC_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	void Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropC_SetBit(void* Obj)
	{
		((UVMTestClassA*)Obj)->bBoolPropC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropC = { "bBoolPropC", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVMTestClassA), &Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropD_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	void Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropD_SetBit(void* Obj)
	{
		((UVMTestClassA*)Obj)->bBoolPropD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropD = { "bBoolPropD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVMTestClassA), &Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropE_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	void Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropE_SetBit(void* Obj)
	{
		((UVMTestClassA*)Obj)->bBoolPropE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropE = { "bBoolPropE", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVMTestClassA), &Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropE_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_NameProp_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_NameProp = { "NameProp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, NameProp), METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_NameProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_NameProp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_StringProp_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_StringProp = { "StringProp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, StringProp), METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_StringProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_StringProp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_TextProp_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_TextProp = { "TextProp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, TextProp), METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_TextProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_TextProp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_BytePropArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_BytePropArray = { "BytePropArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(BytePropArray, UVMTestClassA), nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, BytePropArray), nullptr, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_BytePropArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_BytePropArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_ObjectPropArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_ObjectPropArray = { "ObjectPropArray", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ObjectPropArray, UVMTestClassA), nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, ObjectPropArray), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_ObjectPropArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_ObjectPropArray_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynBytePropArray_Inner = { "DynBytePropArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynBytePropArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynBytePropArray = { "DynBytePropArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, DynBytePropArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynBytePropArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynBytePropArray_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynBoolPropArray_Inner = { "DynBoolPropArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynBoolPropArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynBoolPropArray = { "DynBoolPropArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, DynBoolPropArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynBoolPropArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynBoolPropArray_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynObjectPropArray_Inner = { "DynObjectPropArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynObjectPropArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynObjectPropArray = { "DynObjectPropArray", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, DynObjectPropArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynObjectPropArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynObjectPropArray_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynNamePropArray_Inner = { "DynNamePropArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynNamePropArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynNamePropArray = { "DynNamePropArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, DynNamePropArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynNamePropArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynNamePropArray_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynDoublePropArray_Inner = { "DynDoublePropArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynDoublePropArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynDoublePropArray = { "DynDoublePropArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, DynDoublePropArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynDoublePropArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynDoublePropArray_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynFloatPropArray_Inner = { "DynFloatPropArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynFloatPropArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynFloatPropArray = { "DynFloatPropArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, DynFloatPropArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynFloatPropArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynFloatPropArray_MetaData)) };
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynInt16PropArray_Inner = { "DynInt16PropArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynInt16PropArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynInt16PropArray = { "DynInt16PropArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, DynInt16PropArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynInt16PropArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynInt16PropArray_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynInt64PropArray_Inner = { "DynInt64PropArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynInt64PropArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynInt64PropArray = { "DynInt64PropArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, DynInt64PropArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynInt64PropArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynInt64PropArray_MetaData)) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynInt8PropArray_Inner = { "DynInt8PropArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynInt8PropArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynInt8PropArray = { "DynInt8PropArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, DynInt8PropArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynInt8PropArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynInt8PropArray_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynIntPropArray_Inner = { "DynIntPropArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynIntPropArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynIntPropArray = { "DynIntPropArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, DynIntPropArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynIntPropArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynIntPropArray_MetaData)) };
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynUInt16PropArray_Inner = { "DynUInt16PropArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynUInt16PropArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynUInt16PropArray = { "DynUInt16PropArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, DynUInt16PropArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynUInt16PropArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynUInt16PropArray_MetaData)) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynUIntPropArray_Inner = { "DynUIntPropArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynUIntPropArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynUIntPropArray = { "DynUIntPropArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, DynUIntPropArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynUIntPropArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynUIntPropArray_MetaData)) };
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynUInt64PropArray_Inner = { "DynUInt64PropArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynUInt64PropArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynUInt64PropArray = { "DynUInt64PropArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, DynUInt64PropArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynUInt64PropArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynUInt64PropArray_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynStringPropArray_Inner = { "DynStringPropArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynStringPropArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynStringPropArray = { "DynStringPropArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, DynStringPropArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynStringPropArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynStringPropArray_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynTextPropArray_Inner = { "DynTextPropArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynTextPropArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynTextPropArray = { "DynTextPropArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, DynTextPropArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynTextPropArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynTextPropArray_MetaData)) };
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynClassPropArray_Inner = { "DynClassPropArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynClassPropArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynClassPropArray = { "DynClassPropArray", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, DynClassPropArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynClassPropArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynClassPropArray_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynPawnPropArray_Inner = { "DynPawnPropArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynPawnPropArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynPawnPropArray = { "DynPawnPropArray", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, DynPawnPropArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynPawnPropArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynPawnPropArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_StructProp_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_StructProp = { "StructProp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, StructProp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_StructProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_StructProp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_StructPropArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_StructPropArray = { "StructPropArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(StructPropArray, UVMTestClassA), nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, StructPropArray), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_StructPropArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_StructPropArray_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynStructPropArray_Inner = { "DynStructPropArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynStructPropArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynStructPropArray = { "DynStructPropArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassA, DynStructPropArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynStructPropArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynStructPropArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVMTestClassA_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_AObjectRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_ByteProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_UInt16Prop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_UInt32Prop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_UInt64Prop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_Int8Prop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_Int16Prop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_Int32Prop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_Int64Prop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_FloatProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DoubleProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_bBoolPropE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_NameProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_StringProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_TextProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_BytePropArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_ObjectPropArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynBytePropArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynBytePropArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynBoolPropArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynBoolPropArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynObjectPropArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynObjectPropArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynNamePropArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynNamePropArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynDoublePropArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynDoublePropArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynFloatPropArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynFloatPropArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynInt16PropArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynInt16PropArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynInt64PropArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynInt64PropArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynInt8PropArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynInt8PropArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynIntPropArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynIntPropArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynUInt16PropArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynUInt16PropArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynUIntPropArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynUIntPropArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynUInt64PropArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynUInt64PropArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynStringPropArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynStringPropArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynTextPropArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynTextPropArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynClassPropArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynClassPropArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynPawnPropArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynPawnPropArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_StructProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_StructPropArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynStructPropArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassA_Statics::NewProp_DynStructPropArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVMTestClassA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVMTestClassA>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVMTestClassA_Statics::ClassParams = {
		&UVMTestClassA::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVMTestClassA_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVMTestClassA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVMTestClassA()
	{
		if (!Z_Registration_Info_UClass_UVMTestClassA.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVMTestClassA.OuterSingleton, Z_Construct_UClass_UVMTestClassA_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVMTestClassA.OuterSingleton;
	}
	template<> NETCODEUNITTEST_API UClass* StaticClass<UVMTestClassA>()
	{
		return UVMTestClassA::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVMTestClassA);
	UVMTestClassA::~UVMTestClassA() {}
	void UVMTestClassB::StaticRegisterNativesUVMTestClassB()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVMTestClassB);
	UClass* Z_Construct_UClass_UVMTestClassB_NoRegister()
	{
		return UVMTestClassB::StaticClass();
	}
	struct Z_Construct_UClass_UVMTestClassB_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BObjectRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BObjectRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVMTestClassB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NetcodeUnitTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassB_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnitTests/VMReflection.h" },
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMTestClassB_Statics::NewProp_BObjectRef_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UnitTests/VMReflection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVMTestClassB_Statics::NewProp_BObjectRef = { "BObjectRef", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVMTestClassB, BObjectRef), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVMTestClassB_Statics::NewProp_BObjectRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassB_Statics::NewProp_BObjectRef_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVMTestClassB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMTestClassB_Statics::NewProp_BObjectRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVMTestClassB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVMTestClassB>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVMTestClassB_Statics::ClassParams = {
		&UVMTestClassB::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVMTestClassB_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassB_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVMTestClassB_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVMTestClassB_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVMTestClassB()
	{
		if (!Z_Registration_Info_UClass_UVMTestClassB.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVMTestClassB.OuterSingleton, Z_Construct_UClass_UVMTestClassB_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVMTestClassB.OuterSingleton;
	}
	template<> NETCODEUNITTEST_API UClass* StaticClass<UVMTestClassB>()
	{
		return UVMTestClassB::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVMTestClassB);
	UVMTestClassB::~UVMTestClassB() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_VMReflection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_VMReflection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVMReflection, UVMReflection::StaticClass, TEXT("UVMReflection"), &Z_Registration_Info_UClass_UVMReflection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVMReflection), 1710675608U) },
		{ Z_Construct_UClass_UVMTestClassA, UVMTestClassA::StaticClass, TEXT("UVMTestClassA"), &Z_Registration_Info_UClass_UVMTestClassA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVMTestClassA), 1772743532U) },
		{ Z_Construct_UClass_UVMTestClassB, UVMTestClassB::StaticClass, TEXT("UVMTestClassB"), &Z_Registration_Info_UClass_UVMTestClassB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVMTestClassB), 1684646080U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_VMReflection_h_3612761342(TEXT("/Script/NetcodeUnitTest"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_VMReflection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_VMReflection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
