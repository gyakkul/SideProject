// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_SwitchInteger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_SwitchInteger() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Switch();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_SwitchInteger();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_SwitchInteger_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_SwitchInteger::StaticRegisterNativesUK2Node_SwitchInteger()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_SwitchInteger);
	UClass* Z_Construct_UClass_UK2Node_SwitchInteger_NoRegister()
	{
		return UK2Node_SwitchInteger::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_SwitchInteger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_SwitchInteger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Switch,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_SwitchInteger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_SwitchInteger.h" },
		{ "ModuleRelativePath", "Classes/K2Node_SwitchInteger.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_SwitchInteger_Statics::NewProp_StartIndex_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "Comment", "/** Set the starting index for the node */" },
		{ "ModuleRelativePath", "Classes/K2Node_SwitchInteger.h" },
		{ "NoSpinbox", "TRUE" },
		{ "ToolTip", "Set the starting index for the node" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK2Node_SwitchInteger_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_SwitchInteger, StartIndex), METADATA_PARAMS(Z_Construct_UClass_UK2Node_SwitchInteger_Statics::NewProp_StartIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SwitchInteger_Statics::NewProp_StartIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_SwitchInteger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_SwitchInteger_Statics::NewProp_StartIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_SwitchInteger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_SwitchInteger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_SwitchInteger_Statics::ClassParams = {
		&UK2Node_SwitchInteger::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_SwitchInteger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SwitchInteger_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_SwitchInteger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SwitchInteger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_SwitchInteger()
	{
		if (!Z_Registration_Info_UClass_UK2Node_SwitchInteger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_SwitchInteger.OuterSingleton, Z_Construct_UClass_UK2Node_SwitchInteger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_SwitchInteger.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_SwitchInteger>()
	{
		return UK2Node_SwitchInteger::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_SwitchInteger);
	UK2Node_SwitchInteger::~UK2Node_SwitchInteger() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SwitchInteger_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SwitchInteger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_SwitchInteger, UK2Node_SwitchInteger::StaticClass, TEXT("UK2Node_SwitchInteger"), &Z_Registration_Info_UClass_UK2Node_SwitchInteger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_SwitchInteger), 3134931153U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SwitchInteger_h_2901565329(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SwitchInteger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SwitchInteger_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
