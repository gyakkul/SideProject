// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_StructOperation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_StructOperation() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_StructOperation();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_StructOperation_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Variable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_StructOperation::StaticRegisterNativesUK2Node_StructOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_StructOperation);
	UClass* Z_Construct_UClass_UK2Node_StructOperation_NoRegister()
	{
		return UK2Node_StructOperation::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_StructOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StructType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_StructOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Variable,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_StructOperation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_StructOperation.h" },
		{ "ModuleRelativePath", "Classes/K2Node_StructOperation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_StructOperation_Statics::NewProp_StructType_MetaData[] = {
		{ "Comment", "/** Class that this variable is defined in.  */" },
		{ "ModuleRelativePath", "Classes/K2Node_StructOperation.h" },
		{ "ToolTip", "Class that this variable is defined in." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_StructOperation_Statics::NewProp_StructType = { "StructType", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_StructOperation, StructType), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UClass_UK2Node_StructOperation_Statics::NewProp_StructType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_StructOperation_Statics::NewProp_StructType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_StructOperation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_StructOperation_Statics::NewProp_StructType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_StructOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_StructOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_StructOperation_Statics::ClassParams = {
		&UK2Node_StructOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_StructOperation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_StructOperation_Statics::PropPointers),
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_StructOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_StructOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_StructOperation()
	{
		if (!Z_Registration_Info_UClass_UK2Node_StructOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_StructOperation.OuterSingleton, Z_Construct_UClass_UK2Node_StructOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_StructOperation.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_StructOperation>()
	{
		return UK2Node_StructOperation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_StructOperation);
	UK2Node_StructOperation::~UK2Node_StructOperation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_StructOperation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_StructOperation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_StructOperation, UK2Node_StructOperation::StaticClass, TEXT("UK2Node_StructOperation"), &Z_Registration_Info_UClass_UK2Node_StructOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_StructOperation), 3110860712U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_StructOperation_h_161802214(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_StructOperation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_StructOperation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
