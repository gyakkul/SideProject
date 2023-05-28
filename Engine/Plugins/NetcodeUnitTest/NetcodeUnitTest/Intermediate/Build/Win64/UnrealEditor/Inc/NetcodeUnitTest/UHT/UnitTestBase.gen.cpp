// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitTestBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitTestBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTestBase();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTestBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NetcodeUnitTest();
// End Cross Module References
	void UUnitTestBase::StaticRegisterNativesUUnitTestBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnitTestBase);
	UClass* Z_Construct_UClass_UUnitTestBase_NoRegister()
	{
		return UUnitTestBase::StaticClass();
	}
	struct Z_Construct_UClass_UUnitTestBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnitTestBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NetcodeUnitTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTestBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for the unit test framework event implementation\n * (all engine/external-triggered events are wrapped, in order to hook logs triggered during their execution)\n *\n * NOTE: All wrapped functions/events, begin with 'UT'\n */" },
		{ "IncludePath", "UnitTestBase.h" },
		{ "ModuleRelativePath", "Classes/UnitTestBase.h" },
		{ "ToolTip", "Base class for the unit test framework event implementation\n(all engine/external-triggered events are wrapped, in order to hook logs triggered during their execution)\n\nNOTE: All wrapped functions/events, begin with 'UT'" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnitTestBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnitTestBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnitTestBase_Statics::ClassParams = {
		&UUnitTestBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUnitTestBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTestBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnitTestBase()
	{
		if (!Z_Registration_Info_UClass_UUnitTestBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnitTestBase.OuterSingleton, Z_Construct_UClass_UUnitTestBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnitTestBase.OuterSingleton;
	}
	template<> NETCODEUNITTEST_API UClass* StaticClass<UUnitTestBase>()
	{
		return UUnitTestBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnitTestBase);
	UUnitTestBase::~UUnitTestBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnitTestBase, UUnitTestBase::StaticClass, TEXT("UUnitTestBase"), &Z_Registration_Info_UClass_UUnitTestBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnitTestBase), 4278887437U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_705202130(TEXT("/Script/NetcodeUnitTest"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
