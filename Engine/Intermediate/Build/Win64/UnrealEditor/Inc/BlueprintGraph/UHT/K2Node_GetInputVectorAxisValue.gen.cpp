// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_GetInputVectorAxisValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_GetInputVectorAxisValue() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetInputAxisKeyValue();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetInputVectorAxisValue();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetInputVectorAxisValue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_GetInputVectorAxisValue::StaticRegisterNativesUK2Node_GetInputVectorAxisValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_GetInputVectorAxisValue);
	UClass* Z_Construct_UClass_UK2Node_GetInputVectorAxisValue_NoRegister()
	{
		return UK2Node_GetInputVectorAxisValue::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_GetInputVectorAxisValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_GetInputVectorAxisValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_GetInputAxisKeyValue,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetInputVectorAxisValue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_GetInputVectorAxisValue.h" },
		{ "Keywords", "Get" },
		{ "ModuleRelativePath", "Classes/K2Node_GetInputVectorAxisValue.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_GetInputVectorAxisValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetInputVectorAxisValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetInputVectorAxisValue_Statics::ClassParams = {
		&UK2Node_GetInputVectorAxisValue::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetInputVectorAxisValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetInputVectorAxisValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_GetInputVectorAxisValue()
	{
		if (!Z_Registration_Info_UClass_UK2Node_GetInputVectorAxisValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_GetInputVectorAxisValue.OuterSingleton, Z_Construct_UClass_UK2Node_GetInputVectorAxisValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_GetInputVectorAxisValue.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_GetInputVectorAxisValue>()
	{
		return UK2Node_GetInputVectorAxisValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetInputVectorAxisValue);
	UK2Node_GetInputVectorAxisValue::~UK2Node_GetInputVectorAxisValue() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetInputVectorAxisValue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetInputVectorAxisValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_GetInputVectorAxisValue, UK2Node_GetInputVectorAxisValue::StaticClass, TEXT("UK2Node_GetInputVectorAxisValue"), &Z_Registration_Info_UClass_UK2Node_GetInputVectorAxisValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_GetInputVectorAxisValue), 204566676U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetInputVectorAxisValue_h_2057735032(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetInputVectorAxisValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetInputVectorAxisValue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
