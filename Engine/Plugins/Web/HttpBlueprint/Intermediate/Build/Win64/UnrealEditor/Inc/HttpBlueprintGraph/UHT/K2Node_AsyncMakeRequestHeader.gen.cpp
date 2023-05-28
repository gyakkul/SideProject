// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_AsyncMakeRequestHeader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_AsyncMakeRequestHeader() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_BaseAsyncTask();
	HTTPBLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AsyncMakeRequestHeader();
	HTTPBLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AsyncMakeRequestHeader_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HttpBlueprintGraph();
// End Cross Module References
	void UK2Node_AsyncMakeRequestHeader::StaticRegisterNativesUK2Node_AsyncMakeRequestHeader()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_AsyncMakeRequestHeader);
	UClass* Z_Construct_UClass_UK2Node_AsyncMakeRequestHeader_NoRegister()
	{
		return UK2Node_AsyncMakeRequestHeader::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_AsyncMakeRequestHeader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_AsyncMakeRequestHeader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_BaseAsyncTask,
		(UObject* (*)())Z_Construct_UPackage__Script_HttpBlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AsyncMakeRequestHeader_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_AsyncMakeRequestHeader.h" },
		{ "ModuleRelativePath", "Private/K2Node_AsyncMakeRequestHeader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_AsyncMakeRequestHeader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_AsyncMakeRequestHeader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_AsyncMakeRequestHeader_Statics::ClassParams = {
		&UK2Node_AsyncMakeRequestHeader::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_AsyncMakeRequestHeader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AsyncMakeRequestHeader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_AsyncMakeRequestHeader()
	{
		if (!Z_Registration_Info_UClass_UK2Node_AsyncMakeRequestHeader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_AsyncMakeRequestHeader.OuterSingleton, Z_Construct_UClass_UK2Node_AsyncMakeRequestHeader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_AsyncMakeRequestHeader.OuterSingleton;
	}
	template<> HTTPBLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_AsyncMakeRequestHeader>()
	{
		return UK2Node_AsyncMakeRequestHeader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_AsyncMakeRequestHeader);
	UK2Node_AsyncMakeRequestHeader::~UK2Node_AsyncMakeRequestHeader() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_K2Node_AsyncMakeRequestHeader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_K2Node_AsyncMakeRequestHeader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_AsyncMakeRequestHeader, UK2Node_AsyncMakeRequestHeader::StaticClass, TEXT("UK2Node_AsyncMakeRequestHeader"), &Z_Registration_Info_UClass_UK2Node_AsyncMakeRequestHeader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_AsyncMakeRequestHeader), 1908046132U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_K2Node_AsyncMakeRequestHeader_h_3177767245(TEXT("/Script/HttpBlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_K2Node_AsyncMakeRequestHeader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_K2Node_AsyncMakeRequestHeader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
