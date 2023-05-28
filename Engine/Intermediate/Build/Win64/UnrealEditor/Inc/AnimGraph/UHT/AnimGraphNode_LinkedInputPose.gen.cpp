// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_LinkedInputPose.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNode_LinkedInputPose.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MemberReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_LinkedInputPose() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_LinkedInputPose();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UClassVariableCreator_NoRegister();
	ANIMGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMemberReference();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimBlueprintFunctionPinInfo;
class UScriptStruct* FAnimBlueprintFunctionPinInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimBlueprintFunctionPinInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimBlueprintFunctionPinInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo, (UObject*)Z_Construct_UPackage__Script_AnimGraph(), TEXT("AnimBlueprintFunctionPinInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AnimBlueprintFunctionPinInfo.OuterSingleton;
}
template<> ANIMGRAPH_API UScriptStruct* StaticStruct<FAnimBlueprintFunctionPinInfo>()
{
	return FAnimBlueprintFunctionPinInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Required info for reconstructing a manually specified pin */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_LinkedInputPose.h" },
		{ "ToolTip", "Required info for reconstructing a manually specified pin" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimBlueprintFunctionPinInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Inputs" },
		{ "Comment", "/** The name of this parameter */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_LinkedInputPose.h" },
		{ "ToolTip", "The name of this parameter" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimBlueprintFunctionPinInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Inputs" },
		{ "Comment", "/** The type of this parameter */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_LinkedInputPose.h" },
		{ "ToolTip", "The type of this parameter" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimBlueprintFunctionPinInfo, Type), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo_Statics::NewProp_Type_MetaData)) }; // 3943443458
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
		nullptr,
		&NewStructOps,
		"AnimBlueprintFunctionPinInfo",
		sizeof(FAnimBlueprintFunctionPinInfo),
		alignof(FAnimBlueprintFunctionPinInfo),
		Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimBlueprintFunctionPinInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimBlueprintFunctionPinInfo.InnerSingleton, Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimBlueprintFunctionPinInfo.InnerSingleton;
	}
	void UAnimGraphNode_LinkedInputPose::StaticRegisterNativesUAnimGraphNode_LinkedInputPose()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_LinkedInputPose);
	UClass* Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_NoRegister()
	{
		return UAnimGraphNode_LinkedInputPose::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPoseIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputPoseIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_LinkedInputPose.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_LinkedInputPose.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_LinkedInputPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_LinkedInputPose, Node), Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::NewProp_Node_MetaData)) }; // 1191250412
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo, METADATA_PARAMS(nullptr, 0) }; // 3225052695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::NewProp_Inputs_MetaData[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_LinkedInputPose.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_LinkedInputPose, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::NewProp_Inputs_MetaData)) }; // 3225052695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::NewProp_FunctionReference_MetaData[] = {
		{ "Comment", "/** Reference to the stub function we use to build our parameters */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_LinkedInputPose.h" },
		{ "ToolTip", "Reference to the stub function we use to build our parameters" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::NewProp_FunctionReference = { "FunctionReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_LinkedInputPose, FunctionReference), Z_Construct_UScriptStruct_FMemberReference, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::NewProp_FunctionReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::NewProp_FunctionReference_MetaData)) }; // 2112165407
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::NewProp_InputPoseIndex_MetaData[] = {
		{ "Comment", "/** The index of the input pose, used alongside FunctionReference to build parameters */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_LinkedInputPose.h" },
		{ "ToolTip", "The index of the input pose, used alongside FunctionReference to build parameters" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::NewProp_InputPoseIndex = { "InputPoseIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_LinkedInputPose, InputPoseIndex), METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::NewProp_InputPoseIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::NewProp_InputPoseIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::NewProp_Inputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::NewProp_Inputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::NewProp_FunctionReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::NewProp_InputPoseIndex,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UClassVariableCreator_NoRegister, (int32)VTABLE_OFFSET(UAnimGraphNode_LinkedInputPose, IClassVariableCreator), false },  // 2394176608
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_LinkedInputPose>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::ClassParams = {
		&UAnimGraphNode_LinkedInputPose::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_LinkedInputPose()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_LinkedInputPose.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_LinkedInputPose.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_LinkedInputPose_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_LinkedInputPose.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_LinkedInputPose>()
	{
		return UAnimGraphNode_LinkedInputPose::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_LinkedInputPose);
	UAnimGraphNode_LinkedInputPose::~UAnimGraphNode_LinkedInputPose() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedInputPose_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedInputPose_h_Statics::ScriptStructInfo[] = {
		{ FAnimBlueprintFunctionPinInfo::StaticStruct, Z_Construct_UScriptStruct_FAnimBlueprintFunctionPinInfo_Statics::NewStructOps, TEXT("AnimBlueprintFunctionPinInfo"), &Z_Registration_Info_UScriptStruct_AnimBlueprintFunctionPinInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimBlueprintFunctionPinInfo), 3225052695U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedInputPose_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_LinkedInputPose, UAnimGraphNode_LinkedInputPose::StaticClass, TEXT("UAnimGraphNode_LinkedInputPose"), &Z_Registration_Info_UClass_UAnimGraphNode_LinkedInputPose, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_LinkedInputPose), 599420324U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedInputPose_h_2108192779(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedInputPose_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedInputPose_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedInputPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedInputPose_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
