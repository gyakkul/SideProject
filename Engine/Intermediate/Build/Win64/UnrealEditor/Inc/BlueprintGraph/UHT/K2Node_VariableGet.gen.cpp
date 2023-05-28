// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_VariableGet.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_VariableGet() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Variable();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_VariableGet();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_VariableGet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_VariableGet::StaticRegisterNativesUK2Node_VariableGet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_VariableGet);
	UClass* Z_Construct_UClass_UK2Node_VariableGet_NoRegister()
	{
		return UK2Node_VariableGet::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_VariableGet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPureGet_MetaData[];
#endif
		static void NewProp_bIsPureGet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPureGet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_VariableGet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Variable,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_VariableGet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_VariableGet.h" },
		{ "ModuleRelativePath", "Classes/K2Node_VariableGet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_VariableGet_Statics::NewProp_bIsPureGet_MetaData[] = {
		{ "Comment", "/** TRUE if the node should function as a pure node, without exec pins */" },
		{ "ModuleRelativePath", "Classes/K2Node_VariableGet.h" },
		{ "ToolTip", "TRUE if the node should function as a pure node, without exec pins" },
	};
#endif
	void Z_Construct_UClass_UK2Node_VariableGet_Statics::NewProp_bIsPureGet_SetBit(void* Obj)
	{
		((UK2Node_VariableGet*)Obj)->bIsPureGet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_VariableGet_Statics::NewProp_bIsPureGet = { "bIsPureGet", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UK2Node_VariableGet), &Z_Construct_UClass_UK2Node_VariableGet_Statics::NewProp_bIsPureGet_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_VariableGet_Statics::NewProp_bIsPureGet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_VariableGet_Statics::NewProp_bIsPureGet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_VariableGet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_VariableGet_Statics::NewProp_bIsPureGet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_VariableGet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_VariableGet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_VariableGet_Statics::ClassParams = {
		&UK2Node_VariableGet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_VariableGet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_VariableGet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_VariableGet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_VariableGet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_VariableGet()
	{
		if (!Z_Registration_Info_UClass_UK2Node_VariableGet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_VariableGet.OuterSingleton, Z_Construct_UClass_UK2Node_VariableGet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_VariableGet.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_VariableGet>()
	{
		return UK2Node_VariableGet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_VariableGet);
	UK2Node_VariableGet::~UK2Node_VariableGet() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_VariableGet)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_VariableGet, UK2Node_VariableGet::StaticClass, TEXT("UK2Node_VariableGet"), &Z_Registration_Info_UClass_UK2Node_VariableGet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_VariableGet), 2677124106U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_3248615900(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
