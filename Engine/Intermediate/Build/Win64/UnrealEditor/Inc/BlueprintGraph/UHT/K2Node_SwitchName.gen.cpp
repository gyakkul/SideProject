// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_SwitchName.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_SwitchName() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Switch();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_SwitchName();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_SwitchName_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_SwitchName::StaticRegisterNativesUK2Node_SwitchName()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_SwitchName);
	UClass* Z_Construct_UClass_UK2Node_SwitchName_NoRegister()
	{
		return UK2Node_SwitchName::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_SwitchName_Statics
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
	UObject* (*const Z_Construct_UClass_UK2Node_SwitchName_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Switch,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_SwitchName_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_SwitchName.h" },
		{ "ModuleRelativePath", "Classes/K2Node_SwitchName.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_SwitchName_Statics::NewProp_PinNames_Inner = { "PinNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_SwitchName_Statics::NewProp_PinNames_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "ModuleRelativePath", "Classes/K2Node_SwitchName.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_SwitchName_Statics::NewProp_PinNames = { "PinNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_SwitchName, PinNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK2Node_SwitchName_Statics::NewProp_PinNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SwitchName_Statics::NewProp_PinNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_SwitchName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_SwitchName_Statics::NewProp_PinNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_SwitchName_Statics::NewProp_PinNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_SwitchName_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_SwitchName>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_SwitchName_Statics::ClassParams = {
		&UK2Node_SwitchName::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_SwitchName_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SwitchName_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_SwitchName_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SwitchName_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_SwitchName()
	{
		if (!Z_Registration_Info_UClass_UK2Node_SwitchName.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_SwitchName.OuterSingleton, Z_Construct_UClass_UK2Node_SwitchName_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_SwitchName.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_SwitchName>()
	{
		return UK2Node_SwitchName::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_SwitchName);
	UK2Node_SwitchName::~UK2Node_SwitchName() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SwitchName_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SwitchName_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_SwitchName, UK2Node_SwitchName::StaticClass, TEXT("UK2Node_SwitchName"), &Z_Registration_Info_UClass_UK2Node_SwitchName, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_SwitchName), 2704282180U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SwitchName_h_2532206539(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SwitchName_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SwitchName_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
