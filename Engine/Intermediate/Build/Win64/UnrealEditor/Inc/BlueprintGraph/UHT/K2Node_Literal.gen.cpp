// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_Literal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_Literal() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Literal();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Literal_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_Literal::StaticRegisterNativesUK2Node_Literal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_Literal);
	UClass* Z_Construct_UClass_UK2Node_Literal_NoRegister()
	{
		return UK2Node_Literal::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_Literal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_Literal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Literal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_Literal.h" },
		{ "ModuleRelativePath", "Classes/K2Node_Literal.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Literal_Statics::NewProp_ObjectRef_MetaData[] = {
		{ "Comment", "/** If this is an object reference literal, keep a reference here so that it can be updated as objects move around */" },
		{ "ModuleRelativePath", "Classes/K2Node_Literal.h" },
		{ "ToolTip", "If this is an object reference literal, keep a reference here so that it can be updated as objects move around" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_Literal_Statics::NewProp_ObjectRef = { "ObjectRef", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_Literal, ObjectRef), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Literal_Statics::NewProp_ObjectRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Literal_Statics::NewProp_ObjectRef_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_Literal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Literal_Statics::NewProp_ObjectRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_Literal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_Literal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_Literal_Statics::ClassParams = {
		&UK2Node_Literal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_Literal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Literal_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_Literal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Literal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_Literal()
	{
		if (!Z_Registration_Info_UClass_UK2Node_Literal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_Literal.OuterSingleton, Z_Construct_UClass_UK2Node_Literal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_Literal.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_Literal>()
	{
		return UK2Node_Literal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_Literal);
	UK2Node_Literal::~UK2Node_Literal() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Literal_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Literal_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_Literal, UK2Node_Literal::StaticClass, TEXT("UK2Node_Literal"), &Z_Registration_Info_UClass_UK2Node_Literal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_Literal), 3406985388U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Literal_h_3233534984(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Literal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Literal_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
