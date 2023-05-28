// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_Composite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_Composite() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Composite();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Composite_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Tunnel();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_Composite::StaticRegisterNativesUK2Node_Composite()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_Composite);
	UClass* Z_Construct_UClass_UK2Node_Composite_NoRegister()
	{
		return UK2Node_Composite::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_Composite_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoundGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_Composite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Tunnel,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Composite_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_Composite.h" },
		{ "ModuleRelativePath", "Classes/K2Node_Composite.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Composite_Statics::NewProp_BoundGraph_MetaData[] = {
		{ "Comment", "// The graph that this composite node is representing\n" },
		{ "ModuleRelativePath", "Classes/K2Node_Composite.h" },
		{ "ToolTip", "The graph that this composite node is representing" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_Composite_Statics::NewProp_BoundGraph = { "BoundGraph", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_Composite, BoundGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Composite_Statics::NewProp_BoundGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Composite_Statics::NewProp_BoundGraph_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_Composite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Composite_Statics::NewProp_BoundGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_Composite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_Composite>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_Composite_Statics::ClassParams = {
		&UK2Node_Composite::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_Composite_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Composite_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_Composite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Composite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_Composite()
	{
		if (!Z_Registration_Info_UClass_UK2Node_Composite.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_Composite.OuterSingleton, Z_Construct_UClass_UK2Node_Composite_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_Composite.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_Composite>()
	{
		return UK2Node_Composite::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_Composite);
	UK2Node_Composite::~UK2Node_Composite() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Composite_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Composite_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_Composite, UK2Node_Composite::StaticClass, TEXT("UK2Node_Composite"), &Z_Registration_Info_UClass_UK2Node_Composite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_Composite), 4189657202U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Composite_h_961653172(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Composite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Composite_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
