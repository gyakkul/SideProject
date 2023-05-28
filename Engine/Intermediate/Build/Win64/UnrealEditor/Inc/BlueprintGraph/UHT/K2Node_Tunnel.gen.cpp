// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_Tunnel.h"
#include "K2Node_EditablePinBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_Tunnel() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EditablePinBase();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Tunnel();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Tunnel_NoRegister();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_Tunnel::StaticRegisterNativesUK2Node_Tunnel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_Tunnel);
	UClass* Z_Construct_UClass_UK2Node_Tunnel_NoRegister()
	{
		return UK2Node_Tunnel::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_Tunnel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputSourceNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputSourceNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSinkNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputSinkNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanHaveInputs_MetaData[];
#endif
		static void NewProp_bCanHaveInputs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanHaveInputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanHaveOutputs_MetaData[];
#endif
		static void NewProp_bCanHaveOutputs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanHaveOutputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MetaData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_Tunnel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_EditablePinBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Tunnel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_Tunnel.h" },
		{ "ModuleRelativePath", "Classes/K2Node_Tunnel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_OutputSourceNode_MetaData[] = {
		{ "Comment", "// The output pins of this tunnel node came from the input pins of OutputSourceNode\n" },
		{ "ModuleRelativePath", "Classes/K2Node_Tunnel.h" },
		{ "ToolTip", "The output pins of this tunnel node came from the input pins of OutputSourceNode" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_OutputSourceNode = { "OutputSourceNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_Tunnel, OutputSourceNode), Z_Construct_UClass_UK2Node_Tunnel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_OutputSourceNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_OutputSourceNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_InputSinkNode_MetaData[] = {
		{ "Comment", "// The input pins of this tunnel go to the output pins of InputSinkNode\n" },
		{ "ModuleRelativePath", "Classes/K2Node_Tunnel.h" },
		{ "ToolTip", "The input pins of this tunnel go to the output pins of InputSinkNode" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_InputSinkNode = { "InputSinkNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_Tunnel, InputSinkNode), Z_Construct_UClass_UK2Node_Tunnel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_InputSinkNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_InputSinkNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveInputs_MetaData[] = {
		{ "Comment", "// Whether this node is allowed to have inputs\n" },
		{ "ModuleRelativePath", "Classes/K2Node_Tunnel.h" },
		{ "ToolTip", "Whether this node is allowed to have inputs" },
	};
#endif
	void Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveInputs_SetBit(void* Obj)
	{
		((UK2Node_Tunnel*)Obj)->bCanHaveInputs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveInputs = { "bCanHaveInputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_Tunnel), &Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveInputs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveInputs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveOutputs_MetaData[] = {
		{ "Comment", "// Whether this node is allowed to have outputs\n" },
		{ "ModuleRelativePath", "Classes/K2Node_Tunnel.h" },
		{ "ToolTip", "Whether this node is allowed to have outputs" },
	};
#endif
	void Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveOutputs_SetBit(void* Obj)
	{
		((UK2Node_Tunnel*)Obj)->bCanHaveOutputs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveOutputs = { "bCanHaveOutputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_Tunnel), &Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveOutputs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveOutputs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_MetaData_MetaData[] = {
		{ "Comment", "// The metadata for the function/subgraph associated with this tunnel node; it's only editable and used\n// on the tunnel entry node inside the subgraph or macro.  This structure is ignored on any other tunnel nodes.\n" },
		{ "ModuleRelativePath", "Classes/K2Node_Tunnel.h" },
		{ "ToolTip", "The metadata for the function/subgraph associated with this tunnel node; it's only editable and used\non the tunnel entry node inside the subgraph or macro.  This structure is ignored on any other tunnel nodes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_Tunnel, MetaData), Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_MetaData_MetaData)) }; // 3460500281
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_Tunnel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_OutputSourceNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_InputSinkNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_bCanHaveOutputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Tunnel_Statics::NewProp_MetaData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_Tunnel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_Tunnel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_Tunnel_Statics::ClassParams = {
		&UK2Node_Tunnel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_Tunnel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Tunnel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_Tunnel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Tunnel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_Tunnel()
	{
		if (!Z_Registration_Info_UClass_UK2Node_Tunnel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_Tunnel.OuterSingleton, Z_Construct_UClass_UK2Node_Tunnel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_Tunnel.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_Tunnel>()
	{
		return UK2Node_Tunnel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_Tunnel);
	UK2Node_Tunnel::~UK2Node_Tunnel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Tunnel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Tunnel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_Tunnel, UK2Node_Tunnel::StaticClass, TEXT("UK2Node_Tunnel"), &Z_Registration_Info_UClass_UK2Node_Tunnel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_Tunnel), 3084750319U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Tunnel_h_2477115406(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Tunnel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Tunnel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
