// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_MathExpression.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_MathExpression() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Composite();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MathExpression();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MathExpression_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_MathExpression::StaticRegisterNativesUK2Node_MathExpression()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_MathExpression);
	UClass* Z_Construct_UClass_UK2Node_MathExpression_NoRegister()
	{
		return UK2Node_MathExpression::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_MathExpression_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Expression_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Expression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMadeAfterRotChange_MetaData[];
#endif
		static void NewProp_bMadeAfterRotChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMadeAfterRotChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_MathExpression_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Composite,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MathExpression_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* This node type acts like a collapsed node, a single node that represents\n* a larger sub-network of nodes (contained within a sub-graph). This node will\n* take the math expression it was named with, and attempt to convert it into a\n* series of math nodes. If it is unsuccessful, then it generates a series of\n* actionable errors.\n*/" },
		{ "IncludePath", "K2Node_MathExpression.h" },
		{ "ModuleRelativePath", "Classes/K2Node_MathExpression.h" },
		{ "ToolTip", "This node type acts like a collapsed node, a single node that represents\na larger sub-network of nodes (contained within a sub-graph). This node will\ntake the math expression it was named with, and attempt to convert it into a\nseries of math nodes. If it is unsuccessful, then it generates a series of\nactionable errors." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_Expression_MetaData[] = {
		{ "Category", "Expression" },
		{ "Comment", "// The math expression to evaluate\n" },
		{ "ModuleRelativePath", "Classes/K2Node_MathExpression.h" },
		{ "ToolTip", "The math expression to evaluate" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_MathExpression, Expression), METADATA_PARAMS(Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_Expression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_Expression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_bMadeAfterRotChange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_MathExpression.h" },
	};
#endif
	void Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_bMadeAfterRotChange_SetBit(void* Obj)
	{
		((UK2Node_MathExpression*)Obj)->bMadeAfterRotChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_bMadeAfterRotChange = { "bMadeAfterRotChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UK2Node_MathExpression), &Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_bMadeAfterRotChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_bMadeAfterRotChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_bMadeAfterRotChange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_MathExpression_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_Expression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_bMadeAfterRotChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_MathExpression_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_MathExpression>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_MathExpression_Statics::ClassParams = {
		&UK2Node_MathExpression::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_MathExpression_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MathExpression_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_MathExpression_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MathExpression_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_MathExpression()
	{
		if (!Z_Registration_Info_UClass_UK2Node_MathExpression.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_MathExpression.OuterSingleton, Z_Construct_UClass_UK2Node_MathExpression_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_MathExpression.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_MathExpression>()
	{
		return UK2Node_MathExpression::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_MathExpression);
	UK2Node_MathExpression::~UK2Node_MathExpression() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_MathExpression)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MathExpression_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MathExpression_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_MathExpression, UK2Node_MathExpression::StaticClass, TEXT("UK2Node_MathExpression"), &Z_Registration_Info_UClass_UK2Node_MathExpression, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_MathExpression), 2403129353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MathExpression_h_3360374988(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MathExpression_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MathExpression_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
