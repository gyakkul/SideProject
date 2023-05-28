// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/Nodes/RigVMFunctionReferenceNode.h"
#include "RigVMCore/RigVMGraphFunctionDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunctionReferenceNode() {}
// Cross Module References
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMFunctionReferenceNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMFunctionReferenceNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMLibraryNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMLibraryNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	void URigVMFunctionReferenceNode::StaticRegisterNativesURigVMFunctionReferenceNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMFunctionReferenceNode);
	UClass* Z_Construct_UClass_URigVMFunctionReferenceNode_NoRegister()
	{
		return URigVMFunctionReferenceNode::StaticClass();
	}
	struct Z_Construct_UClass_URigVMFunctionReferenceNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedFunctionHeader_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencedFunctionHeader;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedNodePtr_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReferencedNodePtr;
		static const UECodeGen_Private::FNamePropertyParams NewProp_VariableMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_VariableMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_VariableMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMLibraryNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Function Reference Node is a library node which references\n * a library node from a separate function library graph.\n */" },
		{ "IncludePath", "RigVMModel/Nodes/RigVMFunctionReferenceNode.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMFunctionReferenceNode.h" },
		{ "ToolTip", "The Function Reference Node is a library node which references\na library node from a separate function library graph." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::NewProp_ReferencedFunctionHeader_MetaData[] = {
		{ "Comment", "//void SetReferencedFunctionData(FRigVMGraphFunctionData* Data);\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMFunctionReferenceNode.h" },
		{ "ToolTip", "void SetReferencedFunctionData(FRigVMGraphFunctionData* Data);" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::NewProp_ReferencedFunctionHeader = { "ReferencedFunctionHeader", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMFunctionReferenceNode, ReferencedFunctionHeader), Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader, METADATA_PARAMS(Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::NewProp_ReferencedFunctionHeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::NewProp_ReferencedFunctionHeader_MetaData)) }; // 767263506
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::NewProp_ReferencedNodePtr_MetaData[] = {
		{ "DeprecatedProperty", "5.200000" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMFunctionReferenceNode.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::NewProp_ReferencedNodePtr = { "ReferencedNodePtr", nullptr, (EPropertyFlags)0x0044010020000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMFunctionReferenceNode, ReferencedNodePtr_DEPRECATED), Z_Construct_UClass_URigVMLibraryNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::NewProp_ReferencedNodePtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::NewProp_ReferencedNodePtr_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::NewProp_VariableMap_ValueProp = { "VariableMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::NewProp_VariableMap_Key_KeyProp = { "VariableMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::NewProp_VariableMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMFunctionReferenceNode.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::NewProp_VariableMap = { "VariableMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMFunctionReferenceNode, VariableMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::NewProp_VariableMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::NewProp_VariableMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::NewProp_ReferencedFunctionHeader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::NewProp_ReferencedNodePtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::NewProp_VariableMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::NewProp_VariableMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::NewProp_VariableMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMFunctionReferenceNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::ClassParams = {
		&URigVMFunctionReferenceNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMFunctionReferenceNode()
	{
		if (!Z_Registration_Info_UClass_URigVMFunctionReferenceNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMFunctionReferenceNode.OuterSingleton, Z_Construct_UClass_URigVMFunctionReferenceNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMFunctionReferenceNode.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMFunctionReferenceNode>()
	{
		return URigVMFunctionReferenceNode::StaticClass();
	}
	URigVMFunctionReferenceNode::URigVMFunctionReferenceNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMFunctionReferenceNode);
	URigVMFunctionReferenceNode::~URigVMFunctionReferenceNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReferenceNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReferenceNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMFunctionReferenceNode, URigVMFunctionReferenceNode::StaticClass, TEXT("URigVMFunctionReferenceNode"), &Z_Registration_Info_UClass_URigVMFunctionReferenceNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMFunctionReferenceNode), 2877254156U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReferenceNode_h_95990527(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReferenceNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReferenceNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
