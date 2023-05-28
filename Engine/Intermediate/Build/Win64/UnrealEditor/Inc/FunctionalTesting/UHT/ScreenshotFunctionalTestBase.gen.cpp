// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScreenshotFunctionalTestBase.h"
#include "../Public/AutomationScreenshotOptions.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenshotFunctionalTestBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTest();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AScreenshotFunctionalTestBase();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AScreenshotFunctionalTestBase_NoRegister();
	FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationScreenshotOptions();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References
	void AScreenshotFunctionalTestBase::StaticRegisterNativesAScreenshotFunctionalTestBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AScreenshotFunctionalTestBase);
	UClass* Z_Construct_UClass_AScreenshotFunctionalTestBase_NoRegister()
	{
		return AScreenshotFunctionalTestBase::StaticClass();
	}
	struct Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Notes_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Notes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenshotCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScreenshotCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenshotOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenshotOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFunctionalTest,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Base class for screenshot functional test\n*/" },
		{ "HideCategories", "Actor Input Rendering" },
		{ "IncludePath", "ScreenshotFunctionalTestBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/ScreenshotFunctionalTestBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for screenshot functional test" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_Notes_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "ModuleRelativePath", "Classes/ScreenshotFunctionalTestBase.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_Notes = { "Notes", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AScreenshotFunctionalTestBase, Notes), METADATA_PARAMS(Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_Notes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_Notes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotCamera_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/ScreenshotFunctionalTestBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotCamera = { "ScreenshotCamera", nullptr, (EPropertyFlags)0x002408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AScreenshotFunctionalTestBase, ScreenshotCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotOptions_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "ModuleRelativePath", "Classes/ScreenshotFunctionalTestBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotOptions = { "ScreenshotOptions", nullptr, (EPropertyFlags)0x00200a0000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AScreenshotFunctionalTestBase, ScreenshotOptions), Z_Construct_UScriptStruct_FAutomationScreenshotOptions, METADATA_PARAMS(Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotOptions_MetaData)) }; // 3322497681
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_Notes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotOptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScreenshotFunctionalTestBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::ClassParams = {
		&AScreenshotFunctionalTestBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScreenshotFunctionalTestBase()
	{
		if (!Z_Registration_Info_UClass_AScreenshotFunctionalTestBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScreenshotFunctionalTestBase.OuterSingleton, Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AScreenshotFunctionalTestBase.OuterSingleton;
	}
	template<> FUNCTIONALTESTING_API UClass* StaticClass<AScreenshotFunctionalTestBase>()
	{
		return AScreenshotFunctionalTestBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScreenshotFunctionalTestBase);
	AScreenshotFunctionalTestBase::~AScreenshotFunctionalTestBase() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AScreenshotFunctionalTestBase)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AScreenshotFunctionalTestBase, AScreenshotFunctionalTestBase::StaticClass, TEXT("AScreenshotFunctionalTestBase"), &Z_Registration_Info_UClass_AScreenshotFunctionalTestBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScreenshotFunctionalTestBase), 2144908943U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_447170934(TEXT("/Script/FunctionalTesting"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
