// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType_Class.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardKeyType_Class() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_Class();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_Class_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBlackboardKeyType_Class::StaticRegisterNativesUBlackboardKeyType_Class()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackboardKeyType_Class);
	UClass* Z_Construct_UClass_UBlackboardKeyType_Class_NoRegister()
	{
		return UBlackboardKeyType_Class::StaticClass();
	}
	struct Z_Construct_UClass_UBlackboardKeyType_Class_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_BaseClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackboardKeyType_Class_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlackboardKeyType,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyType_Class_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Blackboard" },
		{ "DisplayName", "Class" },
		{ "IncludePath", "BehaviorTree/Blackboard/BlackboardKeyType_Class.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Class.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyType_Class_Statics::NewProp_BaseClass_MetaData[] = {
		{ "AllowAbstract", "1" },
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Class.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UBlackboardKeyType_Class_Statics::NewProp_BaseClass = { "BaseClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackboardKeyType_Class, BaseClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlackboardKeyType_Class_Statics::NewProp_BaseClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Class_Statics::NewProp_BaseClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlackboardKeyType_Class_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardKeyType_Class_Statics::NewProp_BaseClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackboardKeyType_Class_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardKeyType_Class>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardKeyType_Class_Statics::ClassParams = {
		&UBlackboardKeyType_Class::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlackboardKeyType_Class_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Class_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlackboardKeyType_Class_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Class_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackboardKeyType_Class()
	{
		if (!Z_Registration_Info_UClass_UBlackboardKeyType_Class.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackboardKeyType_Class.OuterSingleton, Z_Construct_UClass_UBlackboardKeyType_Class_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlackboardKeyType_Class.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBlackboardKeyType_Class>()
	{
		return UBlackboardKeyType_Class::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardKeyType_Class);
	UBlackboardKeyType_Class::~UBlackboardKeyType_Class() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Class_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Class_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlackboardKeyType_Class, UBlackboardKeyType_Class::StaticClass, TEXT("UBlackboardKeyType_Class"), &Z_Registration_Info_UClass_UBlackboardKeyType_Class, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackboardKeyType_Class), 1645563135U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Class_h_3617368071(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Class_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Class_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
