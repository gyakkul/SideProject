// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_LeaderboardQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_LeaderboardQuery() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_BaseAsyncTask();
	ONLINEBLUEPRINTSUPPORT_API UClass* Z_Construct_UClass_UK2Node_LeaderboardQuery();
	ONLINEBLUEPRINTSUPPORT_API UClass* Z_Construct_UClass_UK2Node_LeaderboardQuery_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineBlueprintSupport();
// End Cross Module References
	void UK2Node_LeaderboardQuery::StaticRegisterNativesUK2Node_LeaderboardQuery()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_LeaderboardQuery);
	UClass* Z_Construct_UClass_UK2Node_LeaderboardQuery_NoRegister()
	{
		return UK2Node_LeaderboardQuery::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_LeaderboardQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_LeaderboardQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_BaseAsyncTask,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineBlueprintSupport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_LeaderboardQuery_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_LeaderboardQuery.h" },
		{ "ModuleRelativePath", "Classes/K2Node_LeaderboardQuery.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_LeaderboardQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_LeaderboardQuery>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_LeaderboardQuery_Statics::ClassParams = {
		&UK2Node_LeaderboardQuery::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_LeaderboardQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LeaderboardQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_LeaderboardQuery()
	{
		if (!Z_Registration_Info_UClass_UK2Node_LeaderboardQuery.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_LeaderboardQuery.OuterSingleton, Z_Construct_UClass_UK2Node_LeaderboardQuery_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_LeaderboardQuery.OuterSingleton;
	}
	template<> ONLINEBLUEPRINTSUPPORT_API UClass* StaticClass<UK2Node_LeaderboardQuery>()
	{
		return UK2Node_LeaderboardQuery::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_LeaderboardQuery);
	UK2Node_LeaderboardQuery::~UK2Node_LeaderboardQuery() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineBlueprintSupport_Classes_K2Node_LeaderboardQuery_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineBlueprintSupport_Classes_K2Node_LeaderboardQuery_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_LeaderboardQuery, UK2Node_LeaderboardQuery::StaticClass, TEXT("UK2Node_LeaderboardQuery"), &Z_Registration_Info_UClass_UK2Node_LeaderboardQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_LeaderboardQuery), 4063485023U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineBlueprintSupport_Classes_K2Node_LeaderboardQuery_h_3928117137(TEXT("/Script/OnlineBlueprintSupport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineBlueprintSupport_Classes_K2Node_LeaderboardQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineBlueprintSupport_Classes_K2Node_LeaderboardQuery_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
