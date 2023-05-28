// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_StructMemberSet.h"
#include "K2Node.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_StructMemberSet() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_StructMemberSet();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_StructMemberSet_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_StructOperation();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FOptionalPinFromProperty();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_StructMemberSet::StaticRegisterNativesUK2Node_StructMemberSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_StructMemberSet);
	UClass* Z_Construct_UClass_UK2Node_StructMemberSet_NoRegister()
	{
		return UK2Node_StructMemberSet::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_StructMemberSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShowPinForProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowPinForProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShowPinForProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_StructMemberSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_StructOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_StructMemberSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Imperative kismet node that sets one or more member variables of a struct\n" },
		{ "IncludePath", "K2Node_StructMemberSet.h" },
		{ "ModuleRelativePath", "Classes/K2Node_StructMemberSet.h" },
		{ "ToolTip", "Imperative kismet node that sets one or more member variables of a struct" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_StructMemberSet_Statics::NewProp_ShowPinForProperties_Inner = { "ShowPinForProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOptionalPinFromProperty, METADATA_PARAMS(nullptr, 0) }; // 3358763809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_StructMemberSet_Statics::NewProp_ShowPinForProperties_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "ModuleRelativePath", "Classes/K2Node_StructMemberSet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_StructMemberSet_Statics::NewProp_ShowPinForProperties = { "ShowPinForProperties", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_StructMemberSet, ShowPinForProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK2Node_StructMemberSet_Statics::NewProp_ShowPinForProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_StructMemberSet_Statics::NewProp_ShowPinForProperties_MetaData)) }; // 3358763809
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_StructMemberSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_StructMemberSet_Statics::NewProp_ShowPinForProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_StructMemberSet_Statics::NewProp_ShowPinForProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_StructMemberSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_StructMemberSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_StructMemberSet_Statics::ClassParams = {
		&UK2Node_StructMemberSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_StructMemberSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_StructMemberSet_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_StructMemberSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_StructMemberSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_StructMemberSet()
	{
		if (!Z_Registration_Info_UClass_UK2Node_StructMemberSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_StructMemberSet.OuterSingleton, Z_Construct_UClass_UK2Node_StructMemberSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_StructMemberSet.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_StructMemberSet>()
	{
		return UK2Node_StructMemberSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_StructMemberSet);
	UK2Node_StructMemberSet::~UK2Node_StructMemberSet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_StructMemberSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_StructMemberSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_StructMemberSet, UK2Node_StructMemberSet::StaticClass, TEXT("UK2Node_StructMemberSet"), &Z_Registration_Info_UClass_UK2Node_StructMemberSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_StructMemberSet), 1842443080U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_StructMemberSet_h_1135392249(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_StructMemberSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_StructMemberSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
