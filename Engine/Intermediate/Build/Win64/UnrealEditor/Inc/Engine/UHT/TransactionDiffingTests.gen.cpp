// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Private/Tests/TransactionDiffingTests.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransactionDiffingTests() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTransactionDiffingTestObject();
	ENGINE_API UClass* Z_Construct_UClass_UTransactionDiffingTestObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UTransactionDiffingTestObject::StaticRegisterNativesUTransactionDiffingTestObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransactionDiffingTestObject);
	UClass* Z_Construct_UClass_UTransactionDiffingTestObject_NoRegister()
	{
		return UTransactionDiffingTestObject::StaticClass();
	}
	struct Z_Construct_UClass_UTransactionDiffingTestObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NamesArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamesArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NamesArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AdditionalName;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectsArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectsArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectsArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AdditionalObject;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftObjectsArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftObjectsArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SoftObjectsArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalSoftObject_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AdditionalSoftObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyData_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTransactionDiffingTestObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransactionDiffingTestObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/TransactionDiffingTests.h" },
		{ "ModuleRelativePath", "Private/Tests/TransactionDiffingTests.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_NamesArray_Inner = { "NamesArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_NamesArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/TransactionDiffingTests.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_NamesArray = { "NamesArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransactionDiffingTestObject, NamesArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_NamesArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_NamesArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_AdditionalName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/TransactionDiffingTests.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_AdditionalName = { "AdditionalName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransactionDiffingTestObject, AdditionalName), METADATA_PARAMS(Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_AdditionalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_AdditionalName_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_ObjectsArray_Inner = { "ObjectsArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_ObjectsArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/TransactionDiffingTests.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_ObjectsArray = { "ObjectsArray", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransactionDiffingTestObject, ObjectsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_ObjectsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_ObjectsArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_AdditionalObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/TransactionDiffingTests.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_AdditionalObject = { "AdditionalObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransactionDiffingTestObject, AdditionalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_AdditionalObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_AdditionalObject_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_SoftObjectsArray_Inner = { "SoftObjectsArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_SoftObjectsArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/TransactionDiffingTests.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_SoftObjectsArray = { "SoftObjectsArray", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransactionDiffingTestObject, SoftObjectsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_SoftObjectsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_SoftObjectsArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_AdditionalSoftObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/TransactionDiffingTests.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_AdditionalSoftObject = { "AdditionalSoftObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransactionDiffingTestObject, AdditionalSoftObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_AdditionalSoftObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_AdditionalSoftObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_PropertyData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/TransactionDiffingTests.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_PropertyData = { "PropertyData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransactionDiffingTestObject, PropertyData), METADATA_PARAMS(Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_PropertyData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_PropertyData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransactionDiffingTestObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_NamesArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_NamesArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_AdditionalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_ObjectsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_ObjectsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_AdditionalObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_SoftObjectsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_SoftObjectsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_AdditionalSoftObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_PropertyData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTransactionDiffingTestObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransactionDiffingTestObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransactionDiffingTestObject_Statics::ClassParams = {
		&UTransactionDiffingTestObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTransactionDiffingTestObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTransactionDiffingTestObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTransactionDiffingTestObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTransactionDiffingTestObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTransactionDiffingTestObject()
	{
		if (!Z_Registration_Info_UClass_UTransactionDiffingTestObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransactionDiffingTestObject.OuterSingleton, Z_Construct_UClass_UTransactionDiffingTestObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTransactionDiffingTestObject.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTransactionDiffingTestObject>()
	{
		return UTransactionDiffingTestObject::StaticClass();
	}
	UTransactionDiffingTestObject::UTransactionDiffingTestObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTransactionDiffingTestObject);
	UTransactionDiffingTestObject::~UTransactionDiffingTestObject() {}
	IMPLEMENT_FARCHIVE_SERIALIZER(UTransactionDiffingTestObject)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_TransactionDiffingTests_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_TransactionDiffingTests_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTransactionDiffingTestObject, UTransactionDiffingTestObject::StaticClass, TEXT("UTransactionDiffingTestObject"), &Z_Registration_Info_UClass_UTransactionDiffingTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransactionDiffingTestObject), 3200704267U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_TransactionDiffingTests_h_3351906165(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_TransactionDiffingTests_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_TransactionDiffingTests_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
