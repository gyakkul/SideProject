// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_SwitchString.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_SwitchString() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Switch();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_SwitchString();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_SwitchString_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_SwitchString::StaticRegisterNativesUK2Node_SwitchString()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_SwitchString);
	UClass* Z_Construct_UClass_UK2Node_SwitchString_NoRegister()
	{
		return UK2Node_SwitchString::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_SwitchString_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCaseSensitive_MetaData[];
#endif
		static void NewProp_bIsCaseSensitive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCaseSensitive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_SwitchString_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Switch,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_SwitchString_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_SwitchString.h" },
		{ "ModuleRelativePath", "Classes/K2Node_SwitchString.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_SwitchString_Statics::NewProp_PinNames_Inner = { "PinNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_SwitchString_Statics::NewProp_PinNames_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "ModuleRelativePath", "Classes/K2Node_SwitchString.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_SwitchString_Statics::NewProp_PinNames = { "PinNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_SwitchString, PinNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK2Node_SwitchString_Statics::NewProp_PinNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SwitchString_Statics::NewProp_PinNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_SwitchString_Statics::NewProp_bIsCaseSensitive_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "ModuleRelativePath", "Classes/K2Node_SwitchString.h" },
	};
#endif
	void Z_Construct_UClass_UK2Node_SwitchString_Statics::NewProp_bIsCaseSensitive_SetBit(void* Obj)
	{
		((UK2Node_SwitchString*)Obj)->bIsCaseSensitive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_SwitchString_Statics::NewProp_bIsCaseSensitive = { "bIsCaseSensitive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_SwitchString), &Z_Construct_UClass_UK2Node_SwitchString_Statics::NewProp_bIsCaseSensitive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_SwitchString_Statics::NewProp_bIsCaseSensitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SwitchString_Statics::NewProp_bIsCaseSensitive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_SwitchString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_SwitchString_Statics::NewProp_PinNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_SwitchString_Statics::NewProp_PinNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_SwitchString_Statics::NewProp_bIsCaseSensitive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_SwitchString_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_SwitchString>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_SwitchString_Statics::ClassParams = {
		&UK2Node_SwitchString::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_SwitchString_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SwitchString_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_SwitchString_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SwitchString_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_SwitchString()
	{
		if (!Z_Registration_Info_UClass_UK2Node_SwitchString.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_SwitchString.OuterSingleton, Z_Construct_UClass_UK2Node_SwitchString_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_SwitchString.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_SwitchString>()
	{
		return UK2Node_SwitchString::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_SwitchString);
	UK2Node_SwitchString::~UK2Node_SwitchString() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SwitchString_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SwitchString_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_SwitchString, UK2Node_SwitchString::StaticClass, TEXT("UK2Node_SwitchString"), &Z_Registration_Info_UClass_UK2Node_SwitchString, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_SwitchString), 315160774U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SwitchString_h_4055619694(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SwitchString_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SwitchString_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
