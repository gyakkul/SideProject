// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImportTestFunctions/ImportTestFunctionsBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImportTestFunctionsBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UImportTestFunctionsBase();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UImportTestFunctionsBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeTests();
// End Cross Module References
	void UImportTestFunctionsBase::StaticRegisterNativesUImportTestFunctionsBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImportTestFunctionsBase);
	UClass* Z_Construct_UClass_UImportTestFunctionsBase_NoRegister()
	{
		return UImportTestFunctionsBase::StaticClass();
	}
	struct Z_Construct_UClass_UImportTestFunctionsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImportTestFunctionsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeTests,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportTestFunctionsBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This is the base class for any static class which provides test functions for an asset type.\n * Note that test functions defined in derived classes must be defined as UFUNCTION(Exec)\n * This ensures that default parameters are held as metadata.\n * However these functions are in reality not designed to be called from the console.\n * @todo: create an alternative UFUNCTION tag for exporting default parameters as metadata.\n */" },
		{ "IncludePath", "ImportTestFunctions/ImportTestFunctionsBase.h" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/ImportTestFunctionsBase.h" },
		{ "ToolTip", "This is the base class for any static class which provides test functions for an asset type.\nNote that test functions defined in derived classes must be defined as UFUNCTION(Exec)\nThis ensures that default parameters are held as metadata.\nHowever these functions are in reality not designed to be called from the console.\n@todo: create an alternative UFUNCTION tag for exporting default parameters as metadata." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImportTestFunctionsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImportTestFunctionsBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImportTestFunctionsBase_Statics::ClassParams = {
		&UImportTestFunctionsBase::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UImportTestFunctionsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImportTestFunctionsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImportTestFunctionsBase()
	{
		if (!Z_Registration_Info_UClass_UImportTestFunctionsBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImportTestFunctionsBase.OuterSingleton, Z_Construct_UClass_UImportTestFunctionsBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImportTestFunctionsBase.OuterSingleton;
	}
	template<> INTERCHANGETESTS_API UClass* StaticClass<UImportTestFunctionsBase>()
	{
		return UImportTestFunctionsBase::StaticClass();
	}
	UImportTestFunctionsBase::UImportTestFunctionsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImportTestFunctionsBase);
	UImportTestFunctionsBase::~UImportTestFunctionsBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ImportTestFunctionsBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ImportTestFunctionsBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UImportTestFunctionsBase, UImportTestFunctionsBase::StaticClass, TEXT("UImportTestFunctionsBase"), &Z_Registration_Info_UClass_UImportTestFunctionsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImportTestFunctionsBase), 3161501613U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ImportTestFunctionsBase_h_1645404380(TEXT("/Script/InterchangeTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ImportTestFunctionsBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ImportTestFunctionsBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
