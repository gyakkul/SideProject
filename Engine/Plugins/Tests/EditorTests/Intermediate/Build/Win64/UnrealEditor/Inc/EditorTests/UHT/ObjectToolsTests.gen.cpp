// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/UnrealEd/ObjectToolsTests.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectToolsTests() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EDITORTESTS_API UClass* Z_Construct_UClass_UObjectToolsTestObject();
	EDITORTESTS_API UClass* Z_Construct_UClass_UObjectToolsTestObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EditorTests();
// End Cross Module References
	void UObjectToolsTestObject::StaticRegisterNativesUObjectToolsTestObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectToolsTestObject);
	UClass* Z_Construct_UClass_UObjectToolsTestObject_NoRegister()
	{
		return UObjectToolsTestObject::StaticClass();
	}
	struct Z_Construct_UClass_UObjectToolsTestObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrongReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StrongReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeakReference_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectToolsTestObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorTests,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectToolsTestObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnrealEd/ObjectToolsTests.h" },
		{ "ModuleRelativePath", "Private/UnrealEd/ObjectToolsTests.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectToolsTestObject_Statics::NewProp_StrongReference_MetaData[] = {
		{ "ModuleRelativePath", "Private/UnrealEd/ObjectToolsTests.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UObjectToolsTestObject_Statics::NewProp_StrongReference = { "StrongReference", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UObjectToolsTestObject, StrongReference), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UObjectToolsTestObject_Statics::NewProp_StrongReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectToolsTestObject_Statics::NewProp_StrongReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectToolsTestObject_Statics::NewProp_WeakReference_MetaData[] = {
		{ "ModuleRelativePath", "Private/UnrealEd/ObjectToolsTests.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UObjectToolsTestObject_Statics::NewProp_WeakReference = { "WeakReference", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UObjectToolsTestObject, WeakReference), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UObjectToolsTestObject_Statics::NewProp_WeakReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectToolsTestObject_Statics::NewProp_WeakReference_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectToolsTestObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectToolsTestObject_Statics::NewProp_StrongReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectToolsTestObject_Statics::NewProp_WeakReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectToolsTestObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectToolsTestObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectToolsTestObject_Statics::ClassParams = {
		&UObjectToolsTestObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UObjectToolsTestObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectToolsTestObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectToolsTestObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectToolsTestObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectToolsTestObject()
	{
		if (!Z_Registration_Info_UClass_UObjectToolsTestObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectToolsTestObject.OuterSingleton, Z_Construct_UClass_UObjectToolsTestObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectToolsTestObject.OuterSingleton;
	}
	template<> EDITORTESTS_API UClass* StaticClass<UObjectToolsTestObject>()
	{
		return UObjectToolsTestObject::StaticClass();
	}
	UObjectToolsTestObject::UObjectToolsTestObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectToolsTestObject);
	UObjectToolsTestObject::~UObjectToolsTestObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_ObjectToolsTests_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_ObjectToolsTests_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectToolsTestObject, UObjectToolsTestObject::StaticClass, TEXT("UObjectToolsTestObject"), &Z_Registration_Info_UClass_UObjectToolsTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectToolsTestObject), 4034119880U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_ObjectToolsTests_h_4225263753(TEXT("/Script/EditorTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_ObjectToolsTests_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_ObjectToolsTests_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
