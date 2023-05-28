// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_SetJsonField.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_SetJsonField() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CallFunction();
	JSONBLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_SetJsonField();
	JSONBLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_SetJsonField_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JsonBlueprintGraph();
// End Cross Module References
	void UK2Node_SetJsonField::StaticRegisterNativesUK2Node_SetJsonField()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_SetJsonField);
	UClass* Z_Construct_UClass_UK2Node_SetJsonField_NoRegister()
	{
		return UK2Node_SetJsonField::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_SetJsonField_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_SetJsonField_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_CallFunction,
		(UObject* (*)())Z_Construct_UPackage__Script_JsonBlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_SetJsonField_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A custom node that sets a JsonObject field. */" },
		{ "IncludePath", "K2Node_SetJsonField.h" },
		{ "ModuleRelativePath", "Private/K2Node_SetJsonField.h" },
		{ "ToolTip", "A custom node that sets a JsonObject field." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_SetJsonField_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_SetJsonField>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_SetJsonField_Statics::ClassParams = {
		&UK2Node_SetJsonField::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_SetJsonField_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SetJsonField_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_SetJsonField()
	{
		if (!Z_Registration_Info_UClass_UK2Node_SetJsonField.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_SetJsonField.OuterSingleton, Z_Construct_UClass_UK2Node_SetJsonField_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_SetJsonField.OuterSingleton;
	}
	template<> JSONBLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_SetJsonField>()
	{
		return UK2Node_SetJsonField::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_SetJsonField);
	UK2Node_SetJsonField::~UK2Node_SetJsonField() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintGraph_Private_K2Node_SetJsonField_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintGraph_Private_K2Node_SetJsonField_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_SetJsonField, UK2Node_SetJsonField::StaticClass, TEXT("UK2Node_SetJsonField"), &Z_Registration_Info_UClass_UK2Node_SetJsonField, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_SetJsonField), 2222935861U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintGraph_Private_K2Node_SetJsonField_h_271367448(TEXT("/Script/JsonBlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintGraph_Private_K2Node_SetJsonField_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintGraph_Private_K2Node_SetJsonField_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
