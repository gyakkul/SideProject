// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_PromotableOperator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_PromotableOperator() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CallFunction();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_PromotableOperator();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_PromotableOperator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_PromotableOperator::StaticRegisterNativesUK2Node_PromotableOperator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_PromotableOperator);
	UClass* Z_Construct_UClass_UK2Node_PromotableOperator_NoRegister()
	{
		return UK2Node_PromotableOperator::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_PromotableOperator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumAdditionalInputs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumAdditionalInputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_PromotableOperator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_CallFunction,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_PromotableOperator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** The promotable operator node allows for pin types to be promoted to others, i.e. float to double */" },
		{ "IncludePath", "K2Node_PromotableOperator.h" },
		{ "ModuleRelativePath", "Classes/K2Node_PromotableOperator.h" },
		{ "ToolTip", "The promotable operator node allows for pin types to be promoted to others, i.e. float to double" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_PromotableOperator_Statics::NewProp_NumAdditionalInputs_MetaData[] = {
		{ "Comment", "/** The current number of additional pins on this node */" },
		{ "ModuleRelativePath", "Classes/K2Node_PromotableOperator.h" },
		{ "ToolTip", "The current number of additional pins on this node" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK2Node_PromotableOperator_Statics::NewProp_NumAdditionalInputs = { "NumAdditionalInputs", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_PromotableOperator, NumAdditionalInputs), METADATA_PARAMS(Z_Construct_UClass_UK2Node_PromotableOperator_Statics::NewProp_NumAdditionalInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_PromotableOperator_Statics::NewProp_NumAdditionalInputs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_PromotableOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_PromotableOperator_Statics::NewProp_NumAdditionalInputs,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_PromotableOperator_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_PromotableOperator, IK2Node_AddPinInterface), false },  // 1388788643
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_PromotableOperator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_PromotableOperator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_PromotableOperator_Statics::ClassParams = {
		&UK2Node_PromotableOperator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_PromotableOperator_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_PromotableOperator_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_PromotableOperator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_PromotableOperator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_PromotableOperator()
	{
		if (!Z_Registration_Info_UClass_UK2Node_PromotableOperator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_PromotableOperator.OuterSingleton, Z_Construct_UClass_UK2Node_PromotableOperator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_PromotableOperator.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_PromotableOperator>()
	{
		return UK2Node_PromotableOperator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_PromotableOperator);
	UK2Node_PromotableOperator::~UK2Node_PromotableOperator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_PromotableOperator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_PromotableOperator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_PromotableOperator, UK2Node_PromotableOperator::StaticClass, TEXT("UK2Node_PromotableOperator"), &Z_Registration_Info_UClass_UK2Node_PromotableOperator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_PromotableOperator), 3984935748U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_PromotableOperator_h_1561027285(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_PromotableOperator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_PromotableOperator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
