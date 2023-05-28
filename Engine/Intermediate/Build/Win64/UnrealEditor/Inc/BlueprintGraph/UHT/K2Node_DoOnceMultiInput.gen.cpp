// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_DoOnceMultiInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_DoOnceMultiInput() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_DoOnceMultiInput();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_DoOnceMultiInput_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_TemporaryVariable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_DoOnceMultiInput::StaticRegisterNativesUK2Node_DoOnceMultiInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_DoOnceMultiInput);
	UClass* Z_Construct_UClass_UK2Node_DoOnceMultiInput_NoRegister()
	{
		return UK2Node_DoOnceMultiInput::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_DoOnceMultiInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumAdditionalInputs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumAdditionalInputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_DoOnceMultiInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_DoOnceMultiInput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_DoOnceMultiInput.h" },
		{ "ModuleRelativePath", "Classes/K2Node_DoOnceMultiInput.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_DoOnceMultiInput_Statics::NewProp_NumAdditionalInputs_MetaData[] = {
		{ "Comment", "/** The number of additional input pins to generate for this node (2 base pins are not included) */" },
		{ "ModuleRelativePath", "Classes/K2Node_DoOnceMultiInput.h" },
		{ "ToolTip", "The number of additional input pins to generate for this node (2 base pins are not included)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK2Node_DoOnceMultiInput_Statics::NewProp_NumAdditionalInputs = { "NumAdditionalInputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_DoOnceMultiInput, NumAdditionalInputs), METADATA_PARAMS(Z_Construct_UClass_UK2Node_DoOnceMultiInput_Statics::NewProp_NumAdditionalInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DoOnceMultiInput_Statics::NewProp_NumAdditionalInputs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_DoOnceMultiInput_Statics::NewProp_DataNode_MetaData[] = {
		{ "Comment", "/** Reference to the integer that contains */" },
		{ "ModuleRelativePath", "Classes/K2Node_DoOnceMultiInput.h" },
		{ "ToolTip", "Reference to the integer that contains" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_DoOnceMultiInput_Statics::NewProp_DataNode = { "DataNode", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_DoOnceMultiInput, DataNode), Z_Construct_UClass_UK2Node_TemporaryVariable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_DoOnceMultiInput_Statics::NewProp_DataNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DoOnceMultiInput_Statics::NewProp_DataNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_DoOnceMultiInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_DoOnceMultiInput_Statics::NewProp_NumAdditionalInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_DoOnceMultiInput_Statics::NewProp_DataNode,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_DoOnceMultiInput_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_DoOnceMultiInput, IK2Node_AddPinInterface), false },  // 1388788643
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_DoOnceMultiInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_DoOnceMultiInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_DoOnceMultiInput_Statics::ClassParams = {
		&UK2Node_DoOnceMultiInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_DoOnceMultiInput_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DoOnceMultiInput_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_DoOnceMultiInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DoOnceMultiInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_DoOnceMultiInput()
	{
		if (!Z_Registration_Info_UClass_UK2Node_DoOnceMultiInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_DoOnceMultiInput.OuterSingleton, Z_Construct_UClass_UK2Node_DoOnceMultiInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_DoOnceMultiInput.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_DoOnceMultiInput>()
	{
		return UK2Node_DoOnceMultiInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_DoOnceMultiInput);
	UK2Node_DoOnceMultiInput::~UK2Node_DoOnceMultiInput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_DoOnceMultiInput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_DoOnceMultiInput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_DoOnceMultiInput, UK2Node_DoOnceMultiInput::StaticClass, TEXT("UK2Node_DoOnceMultiInput"), &Z_Registration_Info_UClass_UK2Node_DoOnceMultiInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_DoOnceMultiInput), 3884755666U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_DoOnceMultiInput_h_1303356070(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_DoOnceMultiInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_DoOnceMultiInput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
