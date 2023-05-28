// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_SetFieldsInStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_SetFieldsInStruct() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MakeStruct();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_SetFieldsInStruct();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_SetFieldsInStruct_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_SetFieldsInStruct::StaticRegisterNativesUK2Node_SetFieldsInStruct()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_SetFieldsInStruct);
	UClass* Z_Construct_UClass_UK2Node_SetFieldsInStruct_NoRegister()
	{
		return UK2Node_SetFieldsInStruct::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_SetFieldsInStruct_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_SetFieldsInStruct_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_MakeStruct,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_SetFieldsInStruct_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Pure kismet node that creates a struct with specified values for each member\n" },
		{ "IncludePath", "K2Node_SetFieldsInStruct.h" },
		{ "ModuleRelativePath", "Classes/K2Node_SetFieldsInStruct.h" },
		{ "ToolTip", "Pure kismet node that creates a struct with specified values for each member" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_SetFieldsInStruct_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_SetFieldsInStruct>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_SetFieldsInStruct_Statics::ClassParams = {
		&UK2Node_SetFieldsInStruct::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_SetFieldsInStruct_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SetFieldsInStruct_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_SetFieldsInStruct()
	{
		if (!Z_Registration_Info_UClass_UK2Node_SetFieldsInStruct.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_SetFieldsInStruct.OuterSingleton, Z_Construct_UClass_UK2Node_SetFieldsInStruct_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_SetFieldsInStruct.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_SetFieldsInStruct>()
	{
		return UK2Node_SetFieldsInStruct::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_SetFieldsInStruct);
	UK2Node_SetFieldsInStruct::~UK2Node_SetFieldsInStruct() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SetFieldsInStruct_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SetFieldsInStruct_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_SetFieldsInStruct, UK2Node_SetFieldsInStruct::StaticClass, TEXT("UK2Node_SetFieldsInStruct"), &Z_Registration_Info_UClass_UK2Node_SetFieldsInStruct, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_SetFieldsInStruct), 3866225874U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SetFieldsInStruct_h_953831965(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SetFieldsInStruct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SetFieldsInStruct_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
