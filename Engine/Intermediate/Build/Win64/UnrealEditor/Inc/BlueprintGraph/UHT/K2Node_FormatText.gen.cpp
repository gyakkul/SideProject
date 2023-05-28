// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_FormatText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_FormatText() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_FormatText();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_FormatText_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_FormatText::StaticRegisterNativesUK2Node_FormatText()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_FormatText);
	UClass* Z_Construct_UClass_UK2Node_FormatText_NoRegister()
	{
		return UK2Node_FormatText::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_FormatText_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PinNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PinNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_FormatText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FormatText_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_FormatText.h" },
		{ "ModuleRelativePath", "Classes/K2Node_FormatText.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_FormatText_Statics::NewProp_PinNames_Inner = { "PinNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FormatText_Statics::NewProp_PinNames_MetaData[] = {
		{ "Comment", "/** When adding arguments to the node, their names are placed here and are generated as pins during construction */" },
		{ "ModuleRelativePath", "Classes/K2Node_FormatText.h" },
		{ "ToolTip", "When adding arguments to the node, their names are placed here and are generated as pins during construction" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_FormatText_Statics::NewProp_PinNames = { "PinNames", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_FormatText, PinNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK2Node_FormatText_Statics::NewProp_PinNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_FormatText_Statics::NewProp_PinNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_FormatText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_FormatText_Statics::NewProp_PinNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_FormatText_Statics::NewProp_PinNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_FormatText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_FormatText>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_FormatText_Statics::ClassParams = {
		&UK2Node_FormatText::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_FormatText_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_FormatText_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_FormatText_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_FormatText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_FormatText()
	{
		if (!Z_Registration_Info_UClass_UK2Node_FormatText.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_FormatText.OuterSingleton, Z_Construct_UClass_UK2Node_FormatText_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_FormatText.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_FormatText>()
	{
		return UK2Node_FormatText::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_FormatText);
	UK2Node_FormatText::~UK2Node_FormatText() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FormatText_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FormatText_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_FormatText, UK2Node_FormatText::StaticClass, TEXT("UK2Node_FormatText"), &Z_Registration_Info_UClass_UK2Node_FormatText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_FormatText), 2663900173U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FormatText_h_698590351(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FormatText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FormatText_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
