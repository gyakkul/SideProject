// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_HttpRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_HttpRequest() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	HTTPBLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_HttpRequest();
	HTTPBLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_HttpRequest_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HttpBlueprintGraph();
// End Cross Module References
	void UK2Node_HttpRequest::StaticRegisterNativesUK2Node_HttpRequest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_HttpRequest);
	UClass* Z_Construct_UClass_UK2Node_HttpRequest_NoRegister()
	{
		return UK2Node_HttpRequest::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_HttpRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerbEnum_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VerbEnum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_HttpRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_HttpBlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_HttpRequest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_HttpRequest.h" },
		{ "ModuleRelativePath", "Private/K2Node_HttpRequest.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_HttpRequest_Statics::NewProp_VerbEnum_MetaData[] = {
		{ "ModuleRelativePath", "Private/K2Node_HttpRequest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_HttpRequest_Statics::NewProp_VerbEnum = { "VerbEnum", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_HttpRequest, VerbEnum), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UClass_UK2Node_HttpRequest_Statics::NewProp_VerbEnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_HttpRequest_Statics::NewProp_VerbEnum_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_HttpRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_HttpRequest_Statics::NewProp_VerbEnum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_HttpRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_HttpRequest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_HttpRequest_Statics::ClassParams = {
		&UK2Node_HttpRequest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_HttpRequest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_HttpRequest_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_HttpRequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_HttpRequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_HttpRequest()
	{
		if (!Z_Registration_Info_UClass_UK2Node_HttpRequest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_HttpRequest.OuterSingleton, Z_Construct_UClass_UK2Node_HttpRequest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_HttpRequest.OuterSingleton;
	}
	template<> HTTPBLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_HttpRequest>()
	{
		return UK2Node_HttpRequest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_HttpRequest);
	UK2Node_HttpRequest::~UK2Node_HttpRequest() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_K2Node_HttpRequest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_K2Node_HttpRequest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_HttpRequest, UK2Node_HttpRequest::StaticClass, TEXT("UK2Node_HttpRequest"), &Z_Registration_Info_UClass_UK2Node_HttpRequest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_HttpRequest), 2131531292U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_K2Node_HttpRequest_h_497400055(TEXT("/Script/HttpBlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_K2Node_HttpRequest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_K2Node_HttpRequest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
