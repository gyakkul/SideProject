// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Tests/TextPropertyTestObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextPropertyTestObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTextPropertyTestObject();
	ENGINE_API UClass* Z_Construct_UClass_UTextPropertyTestObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UTextPropertyTestObject::StaticRegisterNativesUTextPropertyTestObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextPropertyTestObject);
	UClass* Z_Construct_UClass_UTextPropertyTestObject_NoRegister()
	{
		return UTextPropertyTestObject::StaticClass();
	}
	struct Z_Construct_UClass_UTextPropertyTestObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultedText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultedText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UndefaultedText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_UndefaultedText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransientText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TransientText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextPropertyTestObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextPropertyTestObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/TextPropertyTestObject.h" },
		{ "ModuleRelativePath", "Classes/Tests/TextPropertyTestObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_DefaultedText_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tests/TextPropertyTestObject.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_DefaultedText = { "DefaultedText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextPropertyTestObject, DefaultedText), METADATA_PARAMS(Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_DefaultedText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_DefaultedText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_UndefaultedText_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tests/TextPropertyTestObject.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_UndefaultedText = { "UndefaultedText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextPropertyTestObject, UndefaultedText), METADATA_PARAMS(Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_UndefaultedText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_UndefaultedText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_TransientText_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tests/TextPropertyTestObject.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_TransientText = { "TransientText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextPropertyTestObject, TransientText), METADATA_PARAMS(Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_TransientText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_TransientText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextPropertyTestObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_DefaultedText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_UndefaultedText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_TransientText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextPropertyTestObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextPropertyTestObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextPropertyTestObject_Statics::ClassParams = {
		&UTextPropertyTestObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextPropertyTestObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextPropertyTestObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextPropertyTestObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextPropertyTestObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextPropertyTestObject()
	{
		if (!Z_Registration_Info_UClass_UTextPropertyTestObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextPropertyTestObject.OuterSingleton, Z_Construct_UClass_UTextPropertyTestObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextPropertyTestObject.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTextPropertyTestObject>()
	{
		return UTextPropertyTestObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextPropertyTestObject);
	UTextPropertyTestObject::~UTextPropertyTestObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextPropertyTestObject, UTextPropertyTestObject::StaticClass, TEXT("UTextPropertyTestObject"), &Z_Registration_Info_UClass_UTextPropertyTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextPropertyTestObject), 2043144841U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_3027335559(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
