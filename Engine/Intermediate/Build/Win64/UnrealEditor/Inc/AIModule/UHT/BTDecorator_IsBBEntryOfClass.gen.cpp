// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Decorators/BTDecorator_IsBBEntryOfClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_IsBBEntryOfClass() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTDecorator_IsBBEntryOfClass::StaticRegisterNativesUBTDecorator_IsBBEntryOfClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_IsBBEntryOfClass);
	UClass* Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_NoRegister()
	{
		return UBTDecorator_IsBBEntryOfClass::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TestClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_IsBBEntryOfClass.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsBBEntryOfClass.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::NewProp_TestClass_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsBBEntryOfClass.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::NewProp_TestClass = { "TestClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_IsBBEntryOfClass, TestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::NewProp_TestClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::NewProp_TestClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::NewProp_TestClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_IsBBEntryOfClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::ClassParams = {
		&UBTDecorator_IsBBEntryOfClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass()
	{
		if (!Z_Registration_Info_UClass_UBTDecorator_IsBBEntryOfClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_IsBBEntryOfClass.OuterSingleton, Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTDecorator_IsBBEntryOfClass.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTDecorator_IsBBEntryOfClass>()
	{
		return UBTDecorator_IsBBEntryOfClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_IsBBEntryOfClass);
	UBTDecorator_IsBBEntryOfClass::~UBTDecorator_IsBBEntryOfClass() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_IsBBEntryOfClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_IsBBEntryOfClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass, UBTDecorator_IsBBEntryOfClass::StaticClass, TEXT("UBTDecorator_IsBBEntryOfClass"), &Z_Registration_Info_UClass_UBTDecorator_IsBBEntryOfClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_IsBBEntryOfClass), 2237510536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_IsBBEntryOfClass_h_1303882747(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_IsBBEntryOfClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_IsBBEntryOfClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
