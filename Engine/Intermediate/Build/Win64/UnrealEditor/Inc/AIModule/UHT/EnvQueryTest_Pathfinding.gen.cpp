// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h"
#include "../../AIModule/Classes/DataProviders/AIDataProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Pathfinding() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Pathfinding();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Pathfinding_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestPathfinding();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvTestPathfinding;
	static UEnum* EEnvTestPathfinding_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnvTestPathfinding.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnvTestPathfinding.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestPathfinding, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestPathfinding"));
		}
		return Z_Registration_Info_UEnum_EEnvTestPathfinding.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEnvTestPathfinding::Type>()
	{
		return EEnvTestPathfinding_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EEnvTestPathfinding_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EEnvTestPathfinding_Statics::Enumerators[] = {
		{ "EEnvTestPathfinding::PathExist", (int64)EEnvTestPathfinding::PathExist },
		{ "EEnvTestPathfinding::PathCost", (int64)EEnvTestPathfinding::PathCost },
		{ "EEnvTestPathfinding::PathLength", (int64)EEnvTestPathfinding::PathLength },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EEnvTestPathfinding_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
		{ "PathCost.Name", "EEnvTestPathfinding::PathCost" },
		{ "PathExist.Name", "EEnvTestPathfinding::PathExist" },
		{ "PathLength.Name", "EEnvTestPathfinding::PathLength" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvTestPathfinding_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EEnvTestPathfinding",
		"EEnvTestPathfinding::Type",
		Z_Construct_UEnum_AIModule_EEnvTestPathfinding_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestPathfinding_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EEnvTestPathfinding_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestPathfinding_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EEnvTestPathfinding()
	{
		if (!Z_Registration_Info_UEnum_EEnvTestPathfinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvTestPathfinding.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvTestPathfinding_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnvTestPathfinding.InnerSingleton;
	}
	void UEnvQueryTest_Pathfinding::StaticRegisterNativesUEnvQueryTest_Pathfinding()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTest_Pathfinding);
	UClass* Z_Construct_UClass_UEnvQueryTest_Pathfinding_NoRegister()
	{
		return UEnvQueryTest_Pathfinding::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TestMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathFromContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathFromContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkipUnreachable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkipUnreachable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_TestMode_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** testing mode */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
		{ "ToolTip", "testing mode" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_TestMode = { "TestMode", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest_Pathfinding, TestMode), Z_Construct_UEnum_AIModule_EEnvTestPathfinding, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_TestMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_TestMode_MetaData)) }; // 1170575541
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_Context_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** context: other end of pathfinding test */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
		{ "ToolTip", "context: other end of pathfinding test" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest_Pathfinding, Context), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_Context_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_PathFromContext_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** pathfinding direction */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
		{ "ToolTip", "pathfinding direction" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_PathFromContext = { "PathFromContext", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest_Pathfinding, PathFromContext), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_PathFromContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_PathFromContext_MetaData)) }; // 309611824
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_SkipUnreachable_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** if set, items with failed path will be invalidated (PathCost, PathLength) */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
		{ "ToolTip", "if set, items with failed path will be invalidated (PathCost, PathLength)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_SkipUnreachable = { "SkipUnreachable", nullptr, (EPropertyFlags)0x0010048000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest_Pathfinding, SkipUnreachable), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_SkipUnreachable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_SkipUnreachable_MetaData)) }; // 309611824
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_FilterClass_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** navigation filter to use in pathfinding */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
		{ "ToolTip", "navigation filter to use in pathfinding" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest_Pathfinding, FilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_FilterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_FilterClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_TestMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_PathFromContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_SkipUnreachable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_FilterClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_Pathfinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::ClassParams = {
		&UEnvQueryTest_Pathfinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryTest_Pathfinding()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryTest_Pathfinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_Pathfinding.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryTest_Pathfinding.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryTest_Pathfinding>()
	{
		return UEnvQueryTest_Pathfinding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Pathfinding);
	UEnvQueryTest_Pathfinding::~UEnvQueryTest_Pathfinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_Statics::EnumInfo[] = {
		{ EEnvTestPathfinding_StaticEnum, TEXT("EEnvTestPathfinding"), &Z_Registration_Info_UEnum_EEnvTestPathfinding, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1170575541U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_Pathfinding, UEnvQueryTest_Pathfinding::StaticClass, TEXT("UEnvQueryTest_Pathfinding"), &Z_Registration_Info_UClass_UEnvQueryTest_Pathfinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_Pathfinding), 2511267643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_1319653109(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
