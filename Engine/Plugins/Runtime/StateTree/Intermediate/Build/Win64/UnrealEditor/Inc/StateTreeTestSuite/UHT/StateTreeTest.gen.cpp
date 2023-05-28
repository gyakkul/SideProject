// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/StateTreeTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeTest() {}
// Cross Module References
	STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeSchema();
	STATETREETESTSUITE_API UClass* Z_Construct_UClass_UStateTreeTestSchema();
	STATETREETESTSUITE_API UClass* Z_Construct_UClass_UStateTreeTestSchema_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StateTreeTestSuite();
// End Cross Module References
	void UStateTreeTestSchema::StaticRegisterNativesUStateTreeTestSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeTestSchema);
	UClass* Z_Construct_UClass_UStateTreeTestSchema_NoRegister()
	{
		return UStateTreeTestSchema::StaticClass();
	}
	struct Z_Construct_UClass_UStateTreeTestSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateTreeTestSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStateTreeSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTestSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StateTreeTest.h" },
		{ "ModuleRelativePath", "Private/StateTreeTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateTreeTestSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeTestSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeTestSchema_Statics::ClassParams = {
		&UStateTreeTestSchema::StaticClass,
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
		0x040000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStateTreeTestSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTestSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateTreeTestSchema()
	{
		if (!Z_Registration_Info_UClass_UStateTreeTestSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeTestSchema.OuterSingleton, Z_Construct_UClass_UStateTreeTestSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateTreeTestSchema.OuterSingleton;
	}
	template<> STATETREETESTSUITE_API UClass* StaticClass<UStateTreeTestSchema>()
	{
		return UStateTreeTestSchema::StaticClass();
	}
	UStateTreeTestSchema::UStateTreeTestSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeTestSchema);
	UStateTreeTestSchema::~UStateTreeTestSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeTestSuite_Private_StateTreeTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeTestSuite_Private_StateTreeTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeTestSchema, UStateTreeTestSchema::StaticClass, TEXT("UStateTreeTestSchema"), &Z_Registration_Info_UClass_UStateTreeTestSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeTestSchema), 1938000829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeTestSuite_Private_StateTreeTest_h_3521350653(TEXT("/Script/StateTreeTestSuite"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeTestSuite_Private_StateTreeTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeTestSuite_Private_StateTreeTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
